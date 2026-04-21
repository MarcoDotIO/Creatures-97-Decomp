#include "creatures_palette_bootstrap.h"
#include "creatures_selected_creature_ui.h"
#include "creatures_world_source.h"
#include "creatures_world_bootstrap.h"
#include "creatures_world_files.h"
#include "reconstruction_startup.h"

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <direct.h>
#include <io.h>
#else
#include <glob.h>
#include <sys/stat.h>
#include <unistd.h>
#endif

#ifdef _WIN32
typedef void *HDC;
typedef void *HPALETTE;
typedef void *HGDIOBJ;
typedef void *HWND;

typedef struct CreaturesWinPaletteEntry {
    uint8_t peRed;
    uint8_t peGreen;
    uint8_t peBlue;
    uint8_t peFlags;
} CreaturesWinPaletteEntry;

typedef struct CreaturesWinLogPalette {
    uint16_t palVersion;
    uint16_t palNumEntries;
    CreaturesWinPaletteEntry palPalEntry[1];
} CreaturesWinLogPalette;

__attribute__((dllimport)) HDC __stdcall GetDC(HWND hwnd);
__attribute__((dllimport)) int __stdcall ReleaseDC(HWND hwnd, HDC dc);
__attribute__((dllimport)) HPALETTE __stdcall CreatePalette(
    const CreaturesWinLogPalette *palette);
__attribute__((dllimport)) HPALETTE __stdcall SelectPalette(
    HDC dc, HPALETTE palette, int force_background);
__attribute__((dllimport)) unsigned int __stdcall RealizePalette(HDC dc);
__attribute__((dllimport)) unsigned int __stdcall GetSystemPaletteEntries(
    HDC dc, unsigned int start_index, unsigned int entry_count,
    CreaturesWinPaletteEntry *entries_out);
__attribute__((dllimport)) int __stdcall DeleteObject(HGDIOBJ object_handle);
#endif

static void *creatures_palette_open_file(const char *path, const char *mode, void *ctx) {
    char host_path[REMOVE_MAX_PATH];

    (void)ctx;
    reconstruction_host_path_from_windows(host_path, sizeof(host_path), path);
    return fopen(host_path, mode);
}

static int creatures_palette_seek_file(void *file_handle, long offset, int origin, void *ctx) {
    (void)ctx;
    return fseek((FILE *)file_handle, offset, origin);
}

static int creatures_palette_read_byte(void *file_handle, void *ctx) {
    (void)ctx;
    return fgetc((FILE *)file_handle);
}

static int creatures_palette_close_file(void *file_handle, void *ctx) {
    (void)ctx;
    return fclose((FILE *)file_handle);
}

typedef struct CreaturesAppBootstrapRuntime {
    CreaturesPaletteFileOps *palette_file_ops;
    CreaturesPaletteSystemOps *palette_system_ops;
    CreaturesWorldFilesystemOps world_filesystem_ops;
    CreaturesSelectedCreatureUiOps status_ui_ops;
    CreaturesSelectedCreatureHistory selected_history;
    void *palette_handle;
    uint8_t *primary_rgb;
    uint8_t *secondary_rgb;
    uint8_t *tertiary_rgb;
    uint8_t *quaternary_rgb;
    const char *main_directory;
    const char *palette_directory;
    char temp_backup_directory[REMOVE_MAX_PATH];
    char status_pane_text[8][64];
    uint32_t status_pane_state[8];
    char window_title[256];
    CreaturesWorldSourceHeader world_source_header;
    CreaturesWorldMetrics world_metrics;
    int loading_flag;
} CreaturesAppBootstrapRuntime;

static int creatures_join_windows_path(
    char *out, size_t out_size, const char *left, const char *right) {
    size_t left_length;
    size_t right_length;
    size_t position;

    if (out == NULL || out_size == 0 || left == NULL || right == NULL) {
        return 0;
    }

    left_length = strlen(left);
    right_length = strlen(right);
    if (left_length == 0) {
        if (right_length >= out_size) {
            return 0;
        }
        memcpy(out, right, right_length + 1);
        return 1;
    }
    if (left_length + right_length + 2 > out_size) {
        return 0;
    }

    memcpy(out, left, left_length);
    position = left_length;
    if (left[left_length - 1] != '\\' && left[left_length - 1] != '/') {
        out[position++] = '\\';
    }
    memcpy(out + position, right, right_length + 1);
    return 1;
}

#ifdef _WIN32
static int creatures_world_enumerate_glob(const char *search_glob,
    CreaturesWorldFileVisitorProc visitor, void *visitor_ctx, void *ctx) {
    struct _finddata_t find_data;
    intptr_t search_handle;

    (void)ctx;
    search_handle = _findfirst(search_glob, &find_data);
    if (search_handle == -1L) {
        return 0;
    }

    do {
        if (strcmp(find_data.name, ".") == 0 || strcmp(find_data.name, "..") == 0) {
            continue;
        }
        visitor(find_data.name, visitor_ctx);
    } while (_findnext(search_handle, &find_data) == 0);

    _findclose(search_handle);
    return 0;
}
#else
static int creatures_world_enumerate_glob(const char *search_glob,
    CreaturesWorldFileVisitorProc visitor, void *visitor_ctx, void *ctx) {
    glob_t matches;
    size_t match_index;
    char host_search_glob[REMOVE_MAX_PATH];

    (void)ctx;
    reconstruction_host_path_from_windows(
        host_search_glob, sizeof(host_search_glob), search_glob);
    memset(&matches, 0, sizeof(matches));
    if (glob(host_search_glob, 0, NULL, &matches) != 0) {
        globfree(&matches);
        return 0;
    }

    for (match_index = 0; match_index < matches.gl_pathc; match_index++) {
        const char *match_path;
        const char *entry_name;

        match_path = matches.gl_pathv[match_index];
        entry_name = strrchr(match_path, '/');
        if (entry_name == NULL) {
            entry_name = match_path;
        } else {
            entry_name++;
        }
        visitor(entry_name, visitor_ctx);
    }

    globfree(&matches);
    return 0;
}
#endif

static int creatures_world_delete_path(const char *path, void *ctx) {
    char host_path[REMOVE_MAX_PATH];

    (void)ctx;
    reconstruction_host_path_from_windows(host_path, sizeof(host_path), path);
    return remove(host_path);
}

static int creatures_world_copy_path(const char *source_path, const char *destination_path,
    void *ctx) {
    char host_source_path[REMOVE_MAX_PATH];
    char host_destination_path[REMOVE_MAX_PATH];
    FILE *source_file;
    FILE *destination_file;
    uint8_t buffer[4096];
    size_t bytes_read;

    (void)ctx;
    reconstruction_host_path_from_windows(host_source_path, sizeof(host_source_path), source_path);
    reconstruction_host_path_from_windows(
        host_destination_path, sizeof(host_destination_path), destination_path);

    source_file = fopen(host_source_path, "rb");
    if (source_file == NULL) {
        return 1;
    }

    destination_file = fopen(host_destination_path, "wb");
    if (destination_file == NULL) {
        fclose(source_file);
        return 1;
    }

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) != 0) {
        if (fwrite(buffer, 1, bytes_read, destination_file) != bytes_read) {
            fclose(destination_file);
            fclose(source_file);
            return 1;
        }
    }

    fclose(destination_file);
    fclose(source_file);
    return 0;
}

static int creatures_world_ensure_directory(const char *path, void *ctx) {
    char host_path[REMOVE_MAX_PATH];

    (void)ctx;
    reconstruction_host_path_from_windows(host_path, sizeof(host_path), path);
#ifdef _WIN32
    if (_mkdir(host_path) == 0 || errno == EEXIST) {
        return 0;
    }
#else
    if (mkdir(host_path, 0777) == 0 || errno == EEXIST) {
        return 0;
    }
#endif
    return 1;
}

static int creatures_app_load_world_source(void *world_source, void *ctx) {
    char host_world_path[REMOVE_MAX_PATH];
    FILE *world_file;
    long world_file_size;
    uint8_t *world_bytes;
    size_t bytes_read;
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    if (world_source == NULL || runtime == NULL) {
        return 0;
    }

    reconstruction_host_path_from_windows(
        host_world_path, sizeof(host_world_path), (const char *)world_source);
    world_file = fopen(host_world_path, "rb");
    if (world_file == NULL) {
        return 0;
    }
    if (fseek(world_file, 0, SEEK_END) != 0) {
        fclose(world_file);
        return 0;
    }
    world_file_size = ftell(world_file);
    if (world_file_size <= 0 || fseek(world_file, 0, SEEK_SET) != 0) {
        fclose(world_file);
        return 0;
    }

    world_bytes = (uint8_t *)malloc((size_t)world_file_size);
    if (world_bytes == NULL) {
        fclose(world_file);
        return 0;
    }

    bytes_read = fread(world_bytes, 1, (size_t)world_file_size, world_file);
    fclose(world_file);
    if (bytes_read != (size_t)world_file_size) {
        free(world_bytes);
        return 0;
    }

    if (!creatures_world_source_parse_header(
            world_bytes, (size_t)world_file_size, &runtime->world_source_header)) {
        free(world_bytes);
        return 0;
    }

    free(world_bytes);
    (void)world_source;
    return 1;
}

static void creatures_app_stage_temp_backup(void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    if (runtime == NULL) {
        return;
    }

    creatures_world_stage_temp_backup(runtime->main_directory, runtime->temp_backup_directory,
        NULL, 0, &runtime->world_filesystem_ops);
}

static int creatures_app_bootstrap_palette(void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    if (runtime == NULL || runtime->palette_directory == NULL) {
        return 0;
    }

    return creatures_palette_bootstrap(&runtime->palette_handle, runtime->primary_rgb,
        runtime->secondary_rgb, runtime->tertiary_rgb, runtime->quaternary_rgb,
        runtime->palette_directory, "PALETTE.DTA", runtime->palette_file_ops,
        runtime->palette_system_ops) ?
        1 :
        0;
}

static void creatures_app_load_string_resource(
    uint32_t resource_id, char *out_text, size_t out_size, void *ctx) {
    const char *text;

    (void)ctx;
    switch (resource_id) {
    case 0x0000ef1bU:
        text = "Inactive";
        break;
    case 0x0000ef1cU:
        text = "Creature";
        break;
    default:
        text = "Other";
        break;
    }
    snprintf(out_text, out_size, "%s", text);
}

static int creatures_app_read_status_pane_text(
    int pane_index, char *out_text, size_t out_size, void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    snprintf(out_text, out_size, "%s", runtime->status_pane_text[pane_index]);
    return 0;
}

static void creatures_app_set_status_pane_text(
    int pane_index, const char *text, int redraw, void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    (void)redraw;
    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    snprintf(runtime->status_pane_text[pane_index], sizeof(runtime->status_pane_text[pane_index]),
        "%s", text);
}

static void creatures_app_set_status_pane_state(int pane_index, uint32_t state, void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    runtime->status_pane_state[pane_index] = state;
}

static int creatures_app_score_part_value(int part_index, void *ctx) {
    (void)part_index;
    (void)ctx;
    return 0;
}

static void creatures_app_set_window_title(const char *title, void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    snprintf(runtime->window_title, sizeof(runtime->window_title), "%s", title);
}

static void creatures_app_refresh_status_bar(void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    creatures_status_bar_refresh_history_and_metrics(
        &runtime->selected_history, NULL, NULL, &runtime->status_ui_ops);
}

static void creatures_app_refresh_score_panel(void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    creatures_status_bar_refresh_selected_metrics(NULL, &runtime->status_ui_ops);
}

static void creatures_app_refresh_window_title(void *ctx) {
    CreaturesAppBootstrapRuntime *runtime;

    runtime = (CreaturesAppBootstrapRuntime *)ctx;
    creatures_main_window_refresh_title("Creatures", NULL, &runtime->status_ui_ops);
}

static void creatures_app_noop(void *ctx) {
    (void)ctx;
}

#ifdef _WIN32
static void *creatures_palette_get_screen_dc(void *ctx) {
    (void)ctx;
    return GetDC(NULL);
}

static void *creatures_palette_create_palette(
    const CreaturesLogPalette *palette, void *ctx) {
    (void)ctx;
    return CreatePalette((const CreaturesWinLogPalette *)palette);
}

static void *creatures_palette_select_palette(
    void *dc, void *palette_handle, int force_background, void *ctx) {
    (void)ctx;
    return SelectPalette((HDC)dc, (HPALETTE)palette_handle, force_background);
}

static unsigned int creatures_palette_realize_palette(void *dc, void *ctx) {
    (void)ctx;
    return RealizePalette((HDC)dc);
}

static unsigned int creatures_palette_get_system_entries(void *dc, unsigned int start_index,
    unsigned int entry_count, CreaturesPaletteEntry *entries_out, void *ctx) {
    (void)ctx;
    return GetSystemPaletteEntries((HDC)dc, start_index, entry_count,
        (CreaturesWinPaletteEntry *)entries_out);
}

static int creatures_palette_delete_object(void *object_handle, void *ctx) {
    (void)ctx;
    return DeleteObject((HGDIOBJ)object_handle) ? 0 : 1;
}

static int creatures_palette_release_dc(void *dc, void *ctx) {
    (void)ctx;
    return ReleaseDC(NULL, (HDC)dc) == 1 ? 0 : 1;
}
#else
static void *creatures_palette_get_screen_dc(void *ctx) {
    (void)ctx;
    return NULL;
}

static void *creatures_palette_create_palette(
    const CreaturesLogPalette *palette, void *ctx) {
    (void)palette;
    (void)ctx;
    return (void *)(uintptr_t)1;
}

static void *creatures_palette_select_palette(
    void *dc, void *palette_handle, int force_background, void *ctx) {
    (void)dc;
    (void)palette_handle;
    (void)force_background;
    (void)ctx;
    return NULL;
}

static unsigned int creatures_palette_realize_palette(void *dc, void *ctx) {
    (void)dc;
    (void)ctx;
    return 0;
}

static unsigned int creatures_palette_get_system_entries(void *dc, unsigned int start_index,
    unsigned int entry_count, CreaturesPaletteEntry *entries_out, void *ctx) {
    (void)dc;
    (void)start_index;
    (void)ctx;
    memset(entries_out, 0, entry_count * sizeof(*entries_out));
    return entry_count;
}

static int creatures_palette_delete_object(void *object_handle, void *ctx) {
    (void)object_handle;
    (void)ctx;
    return 0;
}

static int creatures_palette_release_dc(void *dc, void *ctx) {
    (void)dc;
    (void)ctx;
    return 0;
}
#endif

static void creatures_print_usage(const char *program_name) {
    fprintf(stderr,
        "usage: %s [--install-root PATH] [--cd-drive PATH] [--world FILE] [--genetics FILE]\n"
        "          [--image FILE] [--body-data FILE]\n",
        program_name);
}

int main(int argc, char **argv) {
    ReconstructionStartupProbeOptions options;
    ReconstructionCreaturesStartupResult result;
    CreaturesPaletteFileOps palette_file_ops;
    CreaturesPaletteSystemOps palette_system_ops;
    uint8_t primary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t secondary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t tertiary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t quaternary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    void *palette_handle;
    const char *palette_directory;
    const char *main_directory;
    const char *world_file_path;
    size_t asset_index;
    CreaturesAppBootstrapRuntime bootstrap_runtime;
    CreaturesWorldBootstrapOps world_bootstrap_ops;

    memset(&options, 0, sizeof(options));
    options.seed_defaults_from_executable = 1;

    for (int index = 1; index < argc; index++) {
        if (strcmp(argv[index], "--install-root") == 0 && index + 1 < argc) {
            options.install_root = argv[++index];
        } else if (strcmp(argv[index], "--cd-drive") == 0 && index + 1 < argc) {
            options.cd_drive = argv[++index];
        } else if (strcmp(argv[index], "--world") == 0 && index + 1 < argc) {
            options.world_file_name = argv[++index];
        } else if (strcmp(argv[index], "--genetics") == 0 && index + 1 < argc) {
            options.genetics_probe_name = argv[++index];
        } else if (strcmp(argv[index], "--image") == 0 && index + 1 < argc) {
            options.image_probe_name = argv[++index];
        } else if (strcmp(argv[index], "--body-data") == 0 && index + 1 < argc) {
            options.body_data_probe_name = argv[++index];
        } else if (strcmp(argv[index], "--help") == 0 || strcmp(argv[index], "-h") == 0) {
            creatures_print_usage(argv[0]);
            return 0;
        } else {
            creatures_print_usage(argv[0]);
            return 2;
        }
    }

    if (!reconstruction_probe_creatures_startup(&result, &options, NULL)) {
        fprintf(stderr, "creatures_reconstruction: startup probe failed to initialize\n");
        return 2;
    }

    printf("Creatures reconstruction startup probe\n");
    printf("executable: %s\n", result.executable_path);
    printf("main_directory: %s\n", result.directory_config.directories[0]);
    printf("image_directory: %s\n", result.directory_config.directories[4]);
    printf("genetics_directory: %s\n", result.directory_config.directories[5]);
    printf("body_data_directory: %s\n", result.directory_config.directories[6]);
    printf("palette_directory: %s\n", result.directory_config.directories[3]);
    printf("sound_directory: %s\n", result.directory_config.directories[1]);
    printf("prompt_count: %d\n", result.prompt_count);

    for (asset_index = 0; asset_index < result.asset_count; asset_index++) {
        printf("%s: %s\n", result.assets[asset_index].label,
            result.assets[asset_index].present != 0 ? "present" : "missing");
        printf("  requested: %s\n", result.assets[asset_index].requested_path);
        if (result.assets[asset_index].present != 0) {
            printf("  resolved: %s\n", result.assets[asset_index].resolved_path);
        }
        if (result.assets[asset_index].used_cd_fallback != 0) {
            printf("  fallback: cd-drive\n");
        }
    }

    if (result.all_required_assets_present == 0) {
        fprintf(stderr, "creatures_reconstruction: required startup assets are missing\n");
        return 1;
    }

    palette_file_ops.open_file = creatures_palette_open_file;
    palette_file_ops.seek_file = creatures_palette_seek_file;
    palette_file_ops.read_byte = creatures_palette_read_byte;
    palette_file_ops.close_file = creatures_palette_close_file;
    palette_file_ops.ctx = NULL;

    palette_system_ops.get_screen_dc = creatures_palette_get_screen_dc;
    palette_system_ops.create_palette = creatures_palette_create_palette;
    palette_system_ops.select_palette = creatures_palette_select_palette;
    palette_system_ops.realize_palette = creatures_palette_realize_palette;
    palette_system_ops.get_system_entries = creatures_palette_get_system_entries;
    palette_system_ops.delete_object = creatures_palette_delete_object;
    palette_system_ops.release_dc = creatures_palette_release_dc;
    palette_system_ops.ctx = NULL;

    palette_directory = NULL;
    world_file_path = NULL;
    main_directory = result.directory_config.directories[0];
    for (asset_index = 0; asset_index < result.asset_count; asset_index++) {
        if (strcmp(result.assets[asset_index].label, "world") == 0 &&
            result.assets[asset_index].present != 0) {
            world_file_path = result.assets[asset_index].resolved_path;
        }
        if (strcmp(result.assets[asset_index].label, "palette_directory") == 0 &&
            result.assets[asset_index].present != 0) {
            palette_directory = result.assets[asset_index].resolved_path;
        }
    }

    memset(&bootstrap_runtime, 0, sizeof(bootstrap_runtime));
    bootstrap_runtime.palette_file_ops = &palette_file_ops;
    bootstrap_runtime.palette_system_ops = &palette_system_ops;
    bootstrap_runtime.primary_rgb = primary_rgb;
    bootstrap_runtime.secondary_rgb = secondary_rgb;
    bootstrap_runtime.tertiary_rgb = tertiary_rgb;
    bootstrap_runtime.quaternary_rgb = quaternary_rgb;
    bootstrap_runtime.palette_directory = palette_directory;
    bootstrap_runtime.main_directory = main_directory;
    snprintf(bootstrap_runtime.status_pane_text[6], sizeof(bootstrap_runtime.status_pane_text[6]),
        "Health 000");
    snprintf(bootstrap_runtime.status_pane_text[7], sizeof(bootstrap_runtime.status_pane_text[7]),
        "Score 000000");
    bootstrap_runtime.status_ui_ops.load_string_resource = creatures_app_load_string_resource;
    bootstrap_runtime.status_ui_ops.read_status_pane_text = creatures_app_read_status_pane_text;
    bootstrap_runtime.status_ui_ops.set_status_pane_text = creatures_app_set_status_pane_text;
    bootstrap_runtime.status_ui_ops.set_status_pane_state = creatures_app_set_status_pane_state;
    bootstrap_runtime.status_ui_ops.score_part_value = creatures_app_score_part_value;
    bootstrap_runtime.status_ui_ops.set_main_window_title = creatures_app_set_window_title;
    bootstrap_runtime.status_ui_ops.ctx = &bootstrap_runtime;
    bootstrap_runtime.world_filesystem_ops.enumerate_glob = creatures_world_enumerate_glob;
    bootstrap_runtime.world_filesystem_ops.delete_path = creatures_world_delete_path;
    bootstrap_runtime.world_filesystem_ops.copy_path = creatures_world_copy_path;
    bootstrap_runtime.world_filesystem_ops.ensure_directory = creatures_world_ensure_directory;
    bootstrap_runtime.world_filesystem_ops.ctx = NULL;
    if (!creatures_join_windows_path(bootstrap_runtime.temp_backup_directory,
            sizeof(bootstrap_runtime.temp_backup_directory), main_directory, "TempBu")) {
        fprintf(stderr, "creatures_reconstruction: failed to construct temp backup path\n");
        return 1;
    }
    if (palette_directory == NULL) {
        fprintf(stderr, "creatures_reconstruction: palette directory is missing\n");
        return 1;
    }
    if (world_file_path == NULL) {
        fprintf(stderr, "creatures_reconstruction: world file is missing\n");
        return 1;
    }

    world_bootstrap_ops.load_world_source = creatures_app_load_world_source;
    world_bootstrap_ops.bootstrap_palette = creatures_app_bootstrap_palette;
    world_bootstrap_ops.stage_temp_backup = creatures_app_stage_temp_backup;
    world_bootstrap_ops.reset_metrics_callback = creatures_app_noop;
    world_bootstrap_ops.refresh_creature_status = creatures_app_refresh_status_bar;
    world_bootstrap_ops.refresh_score_panel = creatures_app_refresh_score_panel;
    world_bootstrap_ops.refresh_window_title = creatures_app_refresh_window_title;
    world_bootstrap_ops.timer_ops = NULL;
    world_bootstrap_ops.ctx = &bootstrap_runtime;

    if (!creatures_world_load_bootstrap((void *)world_file_path, &bootstrap_runtime.loading_flag,
            NULL, &bootstrap_runtime.world_metrics, &world_bootstrap_ops)) {
        fprintf(stderr, "creatures_reconstruction: world load bootstrap failed\n");
        return 1;
    }
    palette_handle = bootstrap_runtime.palette_handle;

    puts("creatures_reconstruction: startup asset probe passed");
    puts("creatures_reconstruction: palette bootstrap passed");
    printf("temp_backup_directory: %s\n", bootstrap_runtime.temp_backup_directory);
    printf("temp_backup_palette_handle: %p\n", palette_handle);
    printf("world_class: %s\n", bootstrap_runtime.world_source_header.map_class_header.class_name);
    printf("gallery_class: %s\n",
        bootstrap_runtime.world_source_header.gallery_class_header.class_name);
    printf("gallery_name: %s\n", bootstrap_runtime.world_source_header.gallery_name);
    printf("gallery_entries: %u\n", bootstrap_runtime.world_source_header.gallery_entry_count);
    printf("gallery_descriptor_prefix: %02x %02x %02x %02x\n",
        bootstrap_runtime.world_source_header.gallery_descriptor_prefix[0],
        bootstrap_runtime.world_source_header.gallery_descriptor_prefix[1],
        bootstrap_runtime.world_source_header.gallery_descriptor_prefix[2],
        bootstrap_runtime.world_source_header.gallery_descriptor_prefix[3]);
    printf("next_class_offset: 0x%zx\n",
        bootstrap_runtime.world_source_header.next_class_header_offset);
    if (bootstrap_runtime.world_source_header.next_class_header.class_name[0] != '\0') {
        printf("next_class: %s\n",
            bootstrap_runtime.world_source_header.next_class_header.class_name);
    }
    printf("window_title: %s\n", bootstrap_runtime.window_title);
    printf("score_pane: %s\n", bootstrap_runtime.status_pane_text[7]);
    puts("creatures_reconstruction: world load bootstrap passed");
    return 0;
}
