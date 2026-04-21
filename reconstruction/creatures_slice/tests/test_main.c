#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "creatures_slice.h"
#include "creatures_boot_registry.h"
#include "creatures_archive_stream.h"
#include "creatures_camera_follow.h"
#include "creatures_media_audio.h"
#include "creatures_media_display.h"
#include "creatures_map_data_archive.h"
#include "creatures_mfc_archive.h"
#include "creatures_sprite_blit.h"
#include "creatures_palette_bootstrap.h"
#include "creatures_selected_creature_ui.h"
#include "creatures_viewport_follow.h"
#include "creatures_viewport_controller.h"
#include "creatures_viewport_capture.h"
#include "creatures_media_wing.h"
#include "creatures_world_source.h"
#include "creatures_world_files.h"
#include "creatures_world_bootstrap.h"
#include "creatures_window_state.h"
#include "reconstruction_startup.h"

static void expect_u32(uint32_t actual, uint32_t expected, const char *label) {
    if (actual != expected) {
        fprintf(stderr, "%s failed: expected 0x%08x, got 0x%08x\n", label, expected, actual);
        exit(1);
    }
}

static void expect_i32(int actual, int expected, const char *label) {
    if (actual != expected) {
        fprintf(stderr, "%s failed: expected %d, got %d\n", label, expected, actual);
        exit(1);
    }
}

static void expect_u8(byte actual, byte expected, const char *label) {
    if (actual != expected) {
        fprintf(stderr, "%s failed: expected %u, got %u\n", label, expected, actual);
        exit(1);
    }
}

static void expect_true(int actual, const char *label) {
    if (!actual) {
        fprintf(stderr, "%s failed: expected true, got false\n", label);
        exit(1);
    }
}

static void expect_false(int actual, const char *label) {
    if (actual) {
        fprintf(stderr, "%s failed: expected false, got true\n", label);
        exit(1);
    }
}

static void expect_str(const char *actual, const char *expected, const char *label) {
    if (strcmp(actual, expected) != 0) {
        fprintf(stderr, "%s failed: expected \"%s\", got \"%s\"\n", label, expected, actual);
        exit(1);
    }
}

static void expect_size(size_t actual, size_t expected, const char *label) {
    if (actual != expected) {
        fprintf(stderr, "%s failed: expected %zu, got %zu\n", label, expected, actual);
        exit(1);
    }
}

typedef struct FakeMapDataArchiveContext {
    uint32_t read_u32_values[512];
    size_t read_u32_count;
    size_t read_u32_index;
    uint8_t read_room_bytes[CREATURES_MAP_DATA_ROOM_CAPACITY][16];
    size_t read_room_byte_count;
    size_t read_room_byte_index;
    int load_gallery_count;
    int save_gallery_count;
    int load_object_count;
    int save_object_count;
    void *loaded_gallery_handle;
    uint32_t written_u32_values[512];
    size_t written_u32_count;
    uint8_t written_room_bytes[CREATURES_MAP_DATA_ROOM_CAPACITY][16];
    size_t written_room_byte_count;
} FakeMapDataArchiveContext;

static int fake_map_data_read_u32(void *archive_ctx, uint32_t *out_value, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    if (map_context->read_u32_index >= map_context->read_u32_count) {
        return 1;
    }
    *out_value = map_context->read_u32_values[map_context->read_u32_index++];
    return 0;
}

static int fake_map_data_write_u32(void *archive_ctx, uint32_t value, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    if (map_context->written_u32_count >=
        sizeof(map_context->written_u32_values) / sizeof(map_context->written_u32_values[0])) {
        return 1;
    }
    map_context->written_u32_values[map_context->written_u32_count++] = value;
    return 0;
}

static int fake_map_data_read_bytes(void *archive_ctx, void *out_bytes, size_t byte_count, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    if (byte_count != 16 || map_context->read_room_byte_index >= map_context->read_room_byte_count) {
        return 1;
    }
    memcpy(out_bytes, map_context->read_room_bytes[map_context->read_room_byte_index++], byte_count);
    return 0;
}

static int fake_map_data_write_bytes(
    void *archive_ctx, const void *bytes, size_t byte_count, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    if (byte_count != 16 || map_context->written_room_byte_count >=
        sizeof(map_context->written_room_bytes) / sizeof(map_context->written_room_bytes[0])) {
        return 1;
    }
    memcpy(
        map_context->written_room_bytes[map_context->written_room_byte_count++], bytes, byte_count);
    return 0;
}

static int fake_map_data_load_gallery(void *archive_ctx, void **gallery_slot, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    map_context->load_gallery_count++;
    *gallery_slot = map_context->loaded_gallery_handle;
    return 0;
}

static int fake_map_data_save_gallery(void *archive_ctx, void *gallery_slot, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    map_context->save_gallery_count++;
    return gallery_slot == map_context->loaded_gallery_handle ? 0 : 1;
}

static int fake_map_data_load_embedded_object(
    void *archive_ctx, CreaturesMapDataEmbeddedObjectSlot *slot, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    map_context = (FakeMapDataArchiveContext *)ctx;
    memset(slot->opaque_bytes, (int)(0xa0 + map_context->load_object_count),
        sizeof(slot->opaque_bytes));
    map_context->load_object_count++;
    return 0;
}

static int fake_map_data_save_embedded_object(
    void *archive_ctx, const CreaturesMapDataEmbeddedObjectSlot *slot, void *ctx) {
    FakeMapDataArchiveContext *map_context;

    (void)archive_ctx;
    (void)slot;
    map_context = (FakeMapDataArchiveContext *)ctx;
    map_context->save_object_count++;
    return 0;
}

static int fake_registry_query(uintptr_t hive_handle, const char *value_name, uint32_t *type_out,
    uint8_t *data_out, uint32_t *size_inout) {
    const char *payload = hive_handle == 1 ? "user-value" : "machine-value";
    size_t required;

    (void)value_name;
    *type_out = 1;
    required = strlen(payload) + 1;
    if (*size_inout < required) {
        return 1;
    }
    memcpy(data_out, payload, required);
    *size_inout = (uint32_t)required;
    return 0;
}

typedef struct FakeRegistryEntry {
    const char *key_path;
    const char *value_name;
    const char *value;
} FakeRegistryEntry;

typedef struct FakeRegistryContext {
    const FakeRegistryEntry *entries;
    size_t entry_count;
    const char *deleted_keys[64];
    size_t deleted_key_count;
} FakeRegistryContext;

typedef struct FakeFilesystemMatchSet {
    const char *search_glob;
    const char *entries[8];
    size_t entry_count;
} FakeFilesystemMatchSet;

typedef struct FakeFilesystemContext {
    const FakeFilesystemMatchSet *match_sets;
    size_t match_set_count;
    char deleted_paths[64][REMOVE_MAX_PATH];
    size_t deleted_path_count;
    char copied_sources[64][REMOVE_MAX_PATH];
    char copied_destinations[64][REMOVE_MAX_PATH];
    size_t copy_count;
    char ensured_directories[16][REMOVE_MAX_PATH];
    size_t ensure_directory_count;
} FakeFilesystemContext;

typedef struct FakeShellContext {
    const char *last_command;
    int call_count;
} FakeShellContext;

typedef struct LauncherRegistryEntry {
    const char *root_name;
    const char *subkey;
    const char *value_name;
    const char *value;
} LauncherRegistryEntry;

typedef struct LauncherWriteRecord {
    char root_name[32];
    char subkey[128];
    char value_name[64];
    char value[REMOVE_MAX_PATH];
} LauncherWriteRecord;

typedef struct LauncherRegistryContext {
    const LauncherRegistryEntry *entries;
    size_t entry_count;
    char created_keys[8][160];
    size_t created_key_count;
    LauncherWriteRecord writes[8];
    size_t write_count;
} LauncherRegistryContext;

typedef struct BootRegistryEntry {
    const char *root_name;
    const char *subkey;
    const char *value_name;
    uint8_t data[32];
    size_t data_size;
} BootRegistryEntry;

typedef struct BootRegistryWriteRecord {
    char root_name[32];
    char subkey[128];
    char value_name[64];
    uint8_t data[32];
    size_t data_size;
} BootRegistryWriteRecord;

typedef struct BootRegistryContext {
    const BootRegistryEntry *entries;
    size_t entry_count;
    char created_keys[8][160];
    size_t created_key_count;
    BootRegistryWriteRecord writes[8];
    size_t write_count;
} BootRegistryContext;

typedef struct BootWindowContext {
    int system_metrics[2];
    CreaturesWindowPlacement finalized_placement;
    int finalize_call_count;
} BootWindowContext;

typedef struct SavedWindowContext {
    int is_iconic;
    CreaturesDisplayRect next_rect;
    void *last_window_handle;
    void *last_owner;
    int read_rect_call_count;
    int shutdown_call_count;
    int destroy_call_count;
} SavedWindowContext;

typedef struct FakePaletteFileContext {
    char expected_path[REMOVE_MAX_PATH];
    uint8_t bytes[CREATURES_PALETTE_FILE_HEADER_SKIP +
        CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    size_t size;
    size_t cursor;
    int open_call_count;
    int close_call_count;
} FakePaletteFileContext;

typedef struct FakePaletteSystemContext {
    CreaturesPaletteEntry low_entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT];
    CreaturesPaletteEntry high_entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT];
    CreaturesLogPalette created_palettes[8];
    void *created_handles[8];
    int create_palette_call_count;
    int select_palette_call_count;
    int realize_palette_call_count;
    int get_system_entries_call_count;
    int delete_object_call_count;
    int release_dc_call_count;
    void *screen_dc;
    void *previous_palette_handle;
    void *last_deleted_object;
    void *last_released_dc;
} FakePaletteSystemContext;

typedef struct FakeWorldBootstrapContext {
    char call_order[16];
    size_t call_count;
    void *last_world_source;
    void *last_tool_owner;
    void *last_window_handle;
    int set_timer_call_count;
    int kill_timer_call_count;
    int load_world_result;
    int bootstrap_palette_result;
    int reset_metrics_callback_count;
} FakeWorldBootstrapContext;

typedef struct FakeSelectedCreature {
    uint32_t class_flags;
    int inactive;
    unsigned int health_raw;
    const char *name;
} FakeSelectedCreature;

typedef struct FakeSelectedCreatureUiContext {
    char pane_texts[8][64];
    uint32_t pane_states[8];
    uint32_t loaded_resource_ids[16];
    size_t loaded_resource_count;
    int score_parts[8];
    char window_title[256];
    void *last_invalidated_window;
    int last_invalidate_erase;
    int invalidate_count;
    int selection_mode_values[8];
    size_t selection_mode_count;
    int close_eye_count;
    int refresh_eye_count;
    int refresh_main_surface_count;
    void *removed_inactive_creatures[4];
    size_t removed_inactive_count;
} FakeSelectedCreatureUiContext;

typedef struct LauncherShellContext {
    const char *existing_paths[8];
    size_t existing_path_count;
    char launched_targets[8][REMOVE_MAX_PATH];
    size_t launch_count;
    int low_color_warning_count;
} LauncherShellContext;

typedef struct CreaturesSettingsEntry {
    char key_name[64];
    char value[CREATURES_DIRECTORY_VALUE_SIZE];
} CreaturesSettingsEntry;

typedef struct CreaturesSettingsContext {
    CreaturesSettingsEntry entries[16];
    size_t entry_count;
} CreaturesSettingsContext;

typedef struct CreaturesPathContext {
    CreaturesSettingsContext *settings_context;
    const char *existing_paths[8];
    size_t existing_path_count;
    int prompt_count;
    int cd_inserted;
} CreaturesPathContext;

typedef struct FakeTextAssetEntry {
    const char *path;
    const char *text;
} FakeTextAssetEntry;

typedef struct FakeTextAssetContext {
    const FakeTextAssetEntry *entries;
    size_t entry_count;
} FakeTextAssetContext;

typedef struct FakeBodyTableLookupContext {
    const char *pair_table_text;
    const char *quad_table_text;
} FakeBodyTableLookupContext;

typedef struct FakeFrameFactoryContext {
    CreaturesFrameSet created_sets[4];
    CreaturesFrameEntry created_entries[4][4];
    int create_count;
    int destroy_count;
    int last_destroy_mode;
    uint32_t last_create_primary_key;
    int last_create_secondary_key;
    int last_create_entry_count;
    int last_create_force_new;
} FakeFrameFactoryContext;

typedef struct FakeDecodeContext {
    uint8_t pixels[16];
    int call_count;
} FakeDecodeContext;

typedef struct FakeRandomContext {
    int values[8];
    size_t value_count;
    size_t next_index;
} FakeRandomContext;

typedef struct FakeLayoutEventContext {
    uint32_t last_tag;
    int last_value;
    int call_count;
} FakeLayoutEventContext;

typedef struct FakeBoundaryPointContext {
    int x;
    int y;
    int call_count;
} FakeBoundaryPointContext;

typedef struct FakeInvalidateContext {
    CreaturesWrappedRect rects[4];
    size_t call_count;
} FakeInvalidateContext;

typedef struct FakeSpriteFileCacheContext {
    uint32_t loaded_tokens[16];
    char loaded_suffixes[16][4];
    size_t load_count;
    void *released_resources[16];
    int released_modes[16];
    size_t release_count;
    int resources[16];
} FakeSpriteFileCacheContext;

typedef struct FakeBodyBuilderReleaseContext {
    const void *released_quad_sprites[16];
    int released_quad_modes[16];
    size_t released_quad_count;
    const void *released_pair_sprites[4];
    int released_pair_modes[4];
    size_t released_pair_count;
} FakeBodyBuilderReleaseContext;

typedef struct FakeBodyBankFrameConfig {
    uint32_t token;
    int entry_count;
    uint8_t base_pixel;
} FakeBodyBankFrameConfig;

typedef struct FakeBodyBankFrameFactoryContext {
    const FakeBodyBankFrameConfig *configs;
    size_t config_count;
    CreaturesFrameSet created_sets[4];
    CreaturesFrameEntry created_entries[4][26];
    uint8_t created_pixels[4][26];
    int create_count;
    int destroy_count;
} FakeBodyBankFrameFactoryContext;

typedef struct FakeBodyRefreshContext {
    int init_call_count;
    int seed_call_count;
    int body_call_count;
    int appearance_call_count;
    int runtime_call_count;
    int voice_call_count;
    int last_species_token;
    uint8_t last_sex_selector;
    uint8_t last_body_variant_selector;
    void *last_seed_target;
    void *last_appearance_target;
    void *last_runtime_target;
    void *last_voice_target;
    char last_voice_asset[32];
    char call_order[16];
    size_t call_order_length;
    CreaturesGenomeState last_state;
} FakeBodyRefreshContext;

typedef struct FakeUniformFrameFactoryContext {
    CreaturesFrameSet created_sets[20];
    CreaturesFrameEntry created_entries[20][160];
    uint8_t created_pixels[20][160];
    int create_count;
    int destroy_count;
    uint32_t last_primary_key;
    int last_entry_count;
    int frame_width;
    int frame_height;
} FakeUniformFrameFactoryContext;

typedef struct FakeBodyBankPublishContext {
    uint32_t last_image_token;
    size_t last_image_size;
    int call_count;
    uint8_t first_bytes[8];
} FakeBodyBankPublishContext;

typedef struct FakeWaitBehaviorContext {
    int refresh_call_count;
    int message_call_count;
    uint8_t last_stage_seen;
    char last_message[64];
} FakeWaitBehaviorContext;

typedef struct FakeGrowthContext {
    int orientation_delta;
    uint8_t behavior_code;
    int target_distance;
    int has_target_distance;
    int refresh_call_count;
    int finalize_call_count;
} FakeGrowthContext;

typedef struct FakeGenomeExport {
    int identity_token;
} FakeGenomeExport;

typedef struct FakeImportedCreatureContext {
    int duplicate_count;
    int fail_load;
    int regenerated_identity_token;
    FakeGenomeExport loaded_export;
    int regenerate_call_count;
    int prepare_call_count;
    int build_call_count;
    int release_call_count;
    int release_mode;
    int refresh_bounds_call_count;
    uint8_t refresh_bounds_activity_states[4];
    size_t refresh_bounds_activity_count;
    int place_call_count;
    int last_place_x;
    int last_place_y;
    uint8_t activity_state_during_place;
    int notify_call_count;
    int last_notify_value;
    int global_event_call_count;
    int last_event_channel;
    int last_event_code;
    int last_event_value;
    int flush_call_count;
    uint8_t last_build_stage;
} FakeImportedCreatureContext;

static int fake_remove_registry_read(const char *key_path, const char *value_name, char *out_value,
    size_t out_value_size, void *ctx) {
    FakeRegistryContext *registry_context;
    size_t index;

    registry_context = (FakeRegistryContext *)ctx;
    for (index = 0; index < registry_context->entry_count; index++) {
        if (strcmp(registry_context->entries[index].key_path, key_path) != 0) {
            continue;
        }
        if (strcmp(registry_context->entries[index].value_name, value_name) != 0) {
            continue;
        }
        if (strlen(registry_context->entries[index].value) >= out_value_size) {
            return 1;
        }
        strcpy(out_value, registry_context->entries[index].value);
        return 0;
    }
    return 1;
}

static int fake_remove_registry_delete_key(const char *key_path, void *ctx) {
    FakeRegistryContext *registry_context;

    registry_context = (FakeRegistryContext *)ctx;
    registry_context->deleted_keys[registry_context->deleted_key_count++] = key_path;
    return 0;
}

static int fake_remove_filesystem_enumerate(const char *search_glob,
    int (*visitor)(const char *entry_name, void *visitor_ctx), void *visitor_ctx, void *ctx) {
    FakeFilesystemContext *filesystem_context;
    size_t match_index;
    size_t entry_index;

    filesystem_context = (FakeFilesystemContext *)ctx;
    for (match_index = 0; match_index < filesystem_context->match_set_count; match_index++) {
        if (strcmp(filesystem_context->match_sets[match_index].search_glob, search_glob) != 0) {
            continue;
        }

        for (entry_index = 0; entry_index < filesystem_context->match_sets[match_index].entry_count;
             entry_index++) {
            visitor(filesystem_context->match_sets[match_index].entries[entry_index], visitor_ctx);
        }
        return 0;
    }
    return 0;
}

static int fake_remove_filesystem_delete_path(const char *path, void *ctx) {
    FakeFilesystemContext *filesystem_context;

    filesystem_context = (FakeFilesystemContext *)ctx;
    strncpy(filesystem_context->deleted_paths[filesystem_context->deleted_path_count], path,
        REMOVE_MAX_PATH - 1);
    filesystem_context
        ->deleted_paths[filesystem_context->deleted_path_count][REMOVE_MAX_PATH - 1] = '\0';
    filesystem_context->deleted_path_count++;
    return 0;
}

static int fake_world_filesystem_copy_path(
    const char *source_path, const char *destination_path, void *ctx) {
    FakeFilesystemContext *filesystem_context;

    filesystem_context = (FakeFilesystemContext *)ctx;
    strncpy(filesystem_context->copied_sources[filesystem_context->copy_count], source_path,
        REMOVE_MAX_PATH - 1);
    filesystem_context
        ->copied_sources[filesystem_context->copy_count][REMOVE_MAX_PATH - 1] = '\0';
    strncpy(filesystem_context->copied_destinations[filesystem_context->copy_count],
        destination_path, REMOVE_MAX_PATH - 1);
    filesystem_context
        ->copied_destinations[filesystem_context->copy_count][REMOVE_MAX_PATH - 1] = '\0';
    filesystem_context->copy_count++;
    return 0;
}

static int fake_world_filesystem_ensure_directory(const char *path, void *ctx) {
    FakeFilesystemContext *filesystem_context;

    filesystem_context = (FakeFilesystemContext *)ctx;
    strncpy(filesystem_context->ensured_directories[filesystem_context->ensure_directory_count],
        path, REMOVE_MAX_PATH - 1);
    filesystem_context
        ->ensured_directories[filesystem_context->ensure_directory_count][REMOVE_MAX_PATH - 1] =
        '\0';
    filesystem_context->ensure_directory_count++;
    return 0;
}

static int fake_remove_shell_execute(const char *command_line, void *ctx) {
    FakeShellContext *shell_context;

    shell_context = (FakeShellContext *)ctx;
    shell_context->last_command = command_line;
    shell_context->call_count++;
    return 0;
}

static int fake_launcher_registry_create_key(
    const char *root_name, const char *subkey, void *ctx) {
    LauncherRegistryContext *registry_context;

    registry_context = (LauncherRegistryContext *)ctx;
    snprintf(registry_context->created_keys[registry_context->created_key_count],
        sizeof(registry_context->created_keys[registry_context->created_key_count]), "%s|%s",
        root_name, subkey);
    registry_context->created_key_count++;
    return 0;
}

static int fake_launcher_registry_read_value(const char *root_name, const char *subkey,
    const char *value_name, uint8_t *data_out, size_t *size_inout, void *ctx) {
    LauncherRegistryContext *registry_context;
    size_t index;
    size_t required;

    registry_context = (LauncherRegistryContext *)ctx;
    for (index = 0; index < registry_context->entry_count; index++) {
        if (strcmp(registry_context->entries[index].root_name, root_name) != 0) {
            continue;
        }
        if (strcmp(registry_context->entries[index].subkey, subkey) != 0) {
            continue;
        }
        if (strcmp(registry_context->entries[index].value_name, value_name) != 0) {
            continue;
        }

        required = strlen(registry_context->entries[index].value) + 1;
        if (*size_inout < required) {
            return 1;
        }

        memcpy(data_out, registry_context->entries[index].value, required);
        *size_inout = required;
        return 0;
    }
    return 1;
}

static int fake_launcher_registry_write_value(const char *root_name, const char *subkey,
    const char *value_name, const uint8_t *data, size_t data_size, void *ctx) {
    LauncherRegistryContext *registry_context;
    LauncherWriteRecord *record;

    registry_context = (LauncherRegistryContext *)ctx;
    record = &registry_context->writes[registry_context->write_count++];
    strncpy(record->root_name, root_name, sizeof(record->root_name) - 1);
    record->root_name[sizeof(record->root_name) - 1] = '\0';
    strncpy(record->subkey, subkey, sizeof(record->subkey) - 1);
    record->subkey[sizeof(record->subkey) - 1] = '\0';
    strncpy(record->value_name, value_name, sizeof(record->value_name) - 1);
    record->value_name[sizeof(record->value_name) - 1] = '\0';
    if (data_size > sizeof(record->value)) {
        data_size = sizeof(record->value);
    }
    memcpy(record->value, data, data_size);
    record->value[sizeof(record->value) - 1] = '\0';
    return 0;
}

static int fake_boot_registry_create_key(const char *root_name, const char *subkey, void *ctx) {
    BootRegistryContext *registry_context;

    registry_context = (BootRegistryContext *)ctx;
    snprintf(registry_context->created_keys[registry_context->created_key_count],
        sizeof(registry_context->created_keys[registry_context->created_key_count]), "%s|%s",
        root_name, subkey);
    registry_context->created_key_count++;
    return 0;
}

static int fake_boot_registry_read_value(const char *root_name, const char *subkey,
    const char *value_name, uint8_t *data_out, size_t *size_inout, void *ctx) {
    BootRegistryContext *registry_context;
    size_t index;

    registry_context = (BootRegistryContext *)ctx;
    for (index = 0; index < registry_context->entry_count; index++) {
        if (strcmp(registry_context->entries[index].root_name, root_name) != 0) {
            continue;
        }
        if (strcmp(registry_context->entries[index].subkey, subkey) != 0) {
            continue;
        }
        if (strcmp(registry_context->entries[index].value_name, value_name) != 0) {
            continue;
        }
        if (*size_inout < registry_context->entries[index].data_size) {
            return 1;
        }
        memcpy(data_out, registry_context->entries[index].data,
            registry_context->entries[index].data_size);
        *size_inout = registry_context->entries[index].data_size;
        return 0;
    }
    return 1;
}

static int fake_boot_registry_write_value(const char *root_name, const char *subkey,
    const char *value_name, const uint8_t *data, size_t data_size, void *ctx) {
    BootRegistryContext *registry_context;
    BootRegistryWriteRecord *record;

    registry_context = (BootRegistryContext *)ctx;
    record = &registry_context->writes[registry_context->write_count++];
    strncpy(record->root_name, root_name, sizeof(record->root_name) - 1);
    record->root_name[sizeof(record->root_name) - 1] = '\0';
    strncpy(record->subkey, subkey, sizeof(record->subkey) - 1);
    record->subkey[sizeof(record->subkey) - 1] = '\0';
    strncpy(record->value_name, value_name, sizeof(record->value_name) - 1);
    record->value_name[sizeof(record->value_name) - 1] = '\0';
    if (data_size > sizeof(record->data)) {
        data_size = sizeof(record->data);
    }
    memcpy(record->data, data, data_size);
    record->data_size = data_size;
    return 0;
}

static int fake_boot_get_system_metric(int metric_index, void *ctx) {
    BootWindowContext *window_context;

    window_context = (BootWindowContext *)ctx;
    if (metric_index == 0x10) {
        return window_context->system_metrics[0];
    }
    if (metric_index == 0x11) {
        return window_context->system_metrics[1];
    }
    return 0;
}

static void fake_boot_finalize_window_placement(
    CreaturesWindowPlacement *placement, void *ctx) {
    BootWindowContext *window_context;

    window_context = (BootWindowContext *)ctx;
    window_context->finalized_placement = *placement;
    window_context->finalize_call_count++;
}

static int fake_window_is_iconic(void *window_handle, void *ctx) {
    SavedWindowContext *window_context;

    window_context = (SavedWindowContext *)ctx;
    window_context->last_window_handle = window_handle;
    return window_context->is_iconic;
}

static void fake_window_read_rect(void *window_handle, CreaturesDisplayRect *rect_out, void *ctx) {
    SavedWindowContext *window_context;

    window_context = (SavedWindowContext *)ctx;
    window_context->last_window_handle = window_handle;
    window_context->read_rect_call_count++;
    *rect_out = window_context->next_rect;
}

static void fake_main_window_shutdown(void *ctx) {
    SavedWindowContext *window_context;

    window_context = (SavedWindowContext *)ctx;
    window_context->shutdown_call_count++;
}

static void fake_eye_window_destroy(void *owner, void *ctx) {
    SavedWindowContext *window_context;

    window_context = (SavedWindowContext *)ctx;
    window_context->last_owner = owner;
    window_context->destroy_call_count++;
}

static void *fake_palette_open_file(const char *path, const char *mode, void *ctx) {
    FakePaletteFileContext *file_context;

    (void)mode;
    file_context = (FakePaletteFileContext *)ctx;
    if (strcmp(path, file_context->expected_path) != 0) {
        return NULL;
    }
    file_context->cursor = 0;
    file_context->open_call_count++;
    return file_context;
}

static int fake_palette_seek_file(void *file_handle, long offset, int origin, void *ctx) {
    FakePaletteFileContext *file_context;
    size_t base_offset;

    (void)ctx;
    file_context = (FakePaletteFileContext *)file_handle;
    if (origin == 0) {
        base_offset = 0;
    } else {
        base_offset = file_context->cursor;
    }
    if (offset < 0 || base_offset + (size_t)offset > file_context->size) {
        return 1;
    }
    file_context->cursor = base_offset + (size_t)offset;
    return 0;
}

static int fake_palette_read_byte(void *file_handle, void *ctx) {
    FakePaletteFileContext *file_context;

    (void)ctx;
    file_context = (FakePaletteFileContext *)file_handle;
    if (file_context->cursor >= file_context->size) {
        return -1;
    }
    return file_context->bytes[file_context->cursor++];
}

static int fake_palette_close_file(void *file_handle, void *ctx) {
    FakePaletteFileContext *file_context;

    (void)file_handle;
    file_context = (FakePaletteFileContext *)ctx;
    file_context->close_call_count++;
    return 0;
}

static void *fake_palette_get_screen_dc(void *ctx) {
    FakePaletteSystemContext *palette_context;

    palette_context = (FakePaletteSystemContext *)ctx;
    return palette_context->screen_dc;
}

static void *fake_palette_create_palette(const CreaturesLogPalette *palette, void *ctx) {
    FakePaletteSystemContext *palette_context;
    void *handle;

    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->created_palettes[palette_context->create_palette_call_count] = *palette;
    handle = (void *)(uintptr_t)(0x1000 + palette_context->create_palette_call_count);
    palette_context->created_handles[palette_context->create_palette_call_count] = handle;
    palette_context->create_palette_call_count++;
    return handle;
}

static void *fake_palette_select_palette(
    void *dc, void *palette_handle, int force_background, void *ctx) {
    FakePaletteSystemContext *palette_context;
    void *latest_created_handle;

    (void)dc;
    (void)force_background;
    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->select_palette_call_count++;
    latest_created_handle =
        palette_context->create_palette_call_count == 0 ?
            NULL :
            palette_context
                ->created_handles[palette_context->create_palette_call_count - 1];
    if (palette_handle == latest_created_handle) {
        return palette_context->previous_palette_handle;
    }
    return latest_created_handle;
}

static unsigned int fake_palette_realize_palette(void *dc, void *ctx) {
    FakePaletteSystemContext *palette_context;

    (void)dc;
    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->realize_palette_call_count++;
    return 1;
}

static unsigned int fake_palette_get_system_entries(void *dc, unsigned int start_index,
    unsigned int entry_count, CreaturesPaletteEntry *entries_out, void *ctx) {
    FakePaletteSystemContext *palette_context;

    (void)dc;
    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->get_system_entries_call_count++;
    if (start_index == 0) {
        memcpy(entries_out, palette_context->low_entries,
            entry_count * sizeof(CreaturesPaletteEntry));
    } else {
        memcpy(entries_out, palette_context->high_entries,
            entry_count * sizeof(CreaturesPaletteEntry));
    }
    return entry_count;
}

static int fake_palette_delete_object(void *object_handle, void *ctx) {
    FakePaletteSystemContext *palette_context;

    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->last_deleted_object = object_handle;
    palette_context->delete_object_call_count++;
    return 0;
}

static int fake_palette_release_dc(void *dc, void *ctx) {
    FakePaletteSystemContext *palette_context;

    palette_context = (FakePaletteSystemContext *)ctx;
    palette_context->last_released_dc = dc;
    palette_context->release_dc_call_count++;
    return 0;
}

static int fake_world_set_timer(
    void *window_handle, unsigned int timer_id, unsigned int interval_ms, void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    (void)timer_id;
    (void)interval_ms;
    world_context->last_window_handle = window_handle;
    world_context->call_order[world_context->call_count++] = 'T';
    world_context->set_timer_call_count++;
    return 0;
}

static int fake_world_kill_timer(void *window_handle, unsigned int timer_id, void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    (void)timer_id;
    world_context->last_window_handle = window_handle;
    world_context->call_order[world_context->call_count++] = 'K';
    world_context->kill_timer_call_count++;
    return 0;
}

static int fake_world_load_source(void *world_source, void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->last_world_source = world_source;
    world_context->call_order[world_context->call_count++] = 'L';
    return world_context->load_world_result;
}

static int fake_world_bootstrap_palette(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'P';
    return world_context->bootstrap_palette_result;
}

static void fake_world_stage_temp_backup(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'B';
}

static void fake_world_reset_metrics_callback(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'M';
    world_context->reset_metrics_callback_count++;
}

static void fake_world_refresh_creature_status(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'C';
}

static void fake_world_refresh_score_panel(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'S';
}

static void fake_world_refresh_window_title(void *ctx) {
    FakeWorldBootstrapContext *world_context;

    world_context = (FakeWorldBootstrapContext *)ctx;
    world_context->call_order[world_context->call_count++] = 'W';
}

static uint32_t fake_selected_creature_class_flags(void *creature, void *ctx) {
    (void)ctx;
    return ((FakeSelectedCreature *)creature)->class_flags;
}

static int fake_selected_creature_is_inactive(void *creature, void *ctx) {
    (void)ctx;
    return ((FakeSelectedCreature *)creature)->inactive;
}

static unsigned int fake_selected_creature_health_raw(void *creature, void *ctx) {
    (void)ctx;
    return ((FakeSelectedCreature *)creature)->health_raw;
}

static const char *fake_selected_creature_name(void *creature, void *ctx) {
    (void)ctx;
    return ((FakeSelectedCreature *)creature)->name;
}

static void fake_selected_load_string_resource(
    uint32_t resource_id, char *out_text, size_t out_size, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;
    const char *text;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->loaded_resource_ids[ui_context->loaded_resource_count++] = resource_id;
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

static int fake_selected_read_status_pane_text(
    int pane_index, char *out_text, size_t out_size, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    snprintf(out_text, out_size, "%s", ui_context->pane_texts[pane_index]);
    return 0;
}

static void fake_selected_set_status_pane_text(
    int pane_index, const char *text, int redraw, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    (void)redraw;
    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    snprintf(ui_context->pane_texts[pane_index], sizeof(ui_context->pane_texts[pane_index]), "%s",
        text);
}

static void fake_selected_set_status_pane_state(int pane_index, uint32_t state, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->pane_states[pane_index] = state;
}

static int fake_selected_score_part_value(int part_index, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    return ui_context->score_parts[part_index];
}

static void fake_selected_invalidate_window(void *window_handle, int erase_background, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->last_invalidated_window = window_handle;
    ui_context->last_invalidate_erase = erase_background;
    ui_context->invalidate_count++;
}

static void fake_selected_set_main_window_title(const char *title, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    snprintf(ui_context->window_title, sizeof(ui_context->window_title), "%s", title);
}

static void fake_selected_notify_selection_mode(
    int channel, int value, int first_arg, int second_arg, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    (void)channel;
    (void)first_arg;
    (void)second_arg;
    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->selection_mode_values[ui_context->selection_mode_count++] = value;
}

static void fake_selected_close_eye_window(void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->close_eye_count++;
}

static void fake_selected_refresh_eye_window(void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->refresh_eye_count++;
}

static void fake_selected_refresh_main_surface(void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->refresh_main_surface_count++;
}

static void fake_selected_on_remove_inactive_creature(void *creature, void *ctx) {
    FakeSelectedCreatureUiContext *ui_context;

    ui_context = (FakeSelectedCreatureUiContext *)ctx;
    ui_context->removed_inactive_creatures[ui_context->removed_inactive_count++] = creature;
}

static int fake_launcher_shell_execute(const char *target, void *ctx) {
    LauncherShellContext *shell_context;

    shell_context = (LauncherShellContext *)ctx;
    strncpy(shell_context->launched_targets[shell_context->launch_count], target,
        REMOVE_MAX_PATH - 1);
    shell_context->launched_targets[shell_context->launch_count][REMOVE_MAX_PATH - 1] = '\0';
    shell_context->launch_count++;
    return 0;
}

static int fake_launcher_path_exists(const char *target, void *ctx) {
    LauncherShellContext *shell_context;
    size_t index;

    shell_context = (LauncherShellContext *)ctx;
    for (index = 0; index < shell_context->existing_path_count; index++) {
        if (strcmp(shell_context->existing_paths[index], target) == 0) {
            return 1;
        }
    }
    return 0;
}

static int fake_launcher_low_color_warning(void *ctx) {
    LauncherShellContext *shell_context;

    shell_context = (LauncherShellContext *)ctx;
    shell_context->low_color_warning_count++;
    return 0;
}

static int fake_creatures_write_setting(const char *key_name, const char *value, void *ctx) {
    CreaturesSettingsContext *settings_context;
    size_t index;

    settings_context = (CreaturesSettingsContext *)ctx;
    for (index = 0; index < settings_context->entry_count; index++) {
        if (strcmp(settings_context->entries[index].key_name, key_name) == 0) {
            strncpy(settings_context->entries[index].value, value,
                sizeof(settings_context->entries[index].value) - 1);
            settings_context
                ->entries[index]
                .value[sizeof(settings_context->entries[index].value) - 1] = '\0';
            return 0;
        }
    }

    strncpy(settings_context->entries[settings_context->entry_count].key_name, key_name,
        sizeof(settings_context->entries[settings_context->entry_count].key_name) - 1);
    settings_context
        ->entries[settings_context->entry_count]
        .key_name[sizeof(settings_context->entries[settings_context->entry_count].key_name) - 1] =
        '\0';
    strncpy(settings_context->entries[settings_context->entry_count].value, value,
        sizeof(settings_context->entries[settings_context->entry_count].value) - 1);
    settings_context
        ->entries[settings_context->entry_count]
        .value[sizeof(settings_context->entries[settings_context->entry_count].value) - 1] = '\0';
    settings_context->entry_count++;
    return 0;
}

static int fake_creatures_read_setting(const char *key_name, char *out_value, size_t out_value_size,
    const char *default_value, void *ctx) {
    CreaturesSettingsContext *settings_context;
    size_t index;

    settings_context = (CreaturesSettingsContext *)ctx;
    for (index = 0; index < settings_context->entry_count; index++) {
        if (strcmp(settings_context->entries[index].key_name, key_name) != 0) {
            continue;
        }

        strncpy(out_value, settings_context->entries[index].value, out_value_size - 1);
        out_value[out_value_size - 1] = '\0';
        return 0;
    }

    if (default_value != NULL) {
        strncpy(out_value, default_value, out_value_size - 1);
        out_value[out_value_size - 1] = '\0';
    } else if (out_value_size > 0) {
        out_value[0] = '\0';
    }
    return 0;
}

static int fake_creatures_path_exists(const char *path, void *ctx) {
    CreaturesPathContext *path_context;
    size_t index;

    path_context = (CreaturesPathContext *)ctx;
    for (index = 0; index < path_context->existing_path_count; index++) {
        if (strcmp(path_context->existing_paths[index], path) == 0) {
            return 1;
        }
    }

    if (path_context->cd_inserted != 0 &&
        (strcmp(path, "D:\\Genetics") == 0 || strcmp(path, "D:\\Genetics\\norn.gen") == 0)) {
        return 1;
    }
    return 0;
}

static int fake_creatures_resolver_read_setting(const char *key_name, char *out_value,
    size_t out_value_size, const char *default_value, void *ctx) {
    CreaturesPathContext *path_context;

    path_context = (CreaturesPathContext *)ctx;
    return fake_creatures_read_setting(
        key_name, out_value, out_value_size, default_value, path_context->settings_context);
}

static int fake_creatures_prompt_insert_cd(void *ctx) {
    CreaturesPathContext *path_context;

    path_context = (CreaturesPathContext *)ctx;
    path_context->prompt_count++;
    path_context->cd_inserted = 1;
    return 0;
}

static void append_test_number_text(char *buffer, size_t buffer_size, size_t *offset, unsigned value) {
    int written;

    written = snprintf(buffer + *offset, buffer_size - *offset, (*offset == 0) ? "%u" : " %u", value);
    if (written < 0 || (size_t)written >= buffer_size - *offset) {
        fprintf(stderr, "append_test_number_text failed\n");
        exit(1);
    }

    *offset += (size_t)written;
}

static void build_fake_pair_table_text(char *buffer, size_t buffer_size) {
    size_t offset = 0;
    size_t row;
    size_t column;

    if (buffer_size == 0) {
        fprintf(stderr, "build_fake_pair_table_text failed\n");
        exit(1);
    }

    buffer[0] = '\0';
    for (row = 0; row < CREATURES_BODY_PAIR_ROWS; row++) {
        for (column = 0; column < CREATURES_BODY_PAIR_COLUMNS; column++) {
            append_test_number_text(buffer, buffer_size, &offset, (unsigned)(row * 10 + column));
            append_test_number_text(
                buffer, buffer_size, &offset, (unsigned)(100 + row * 10 + column));
        }
    }
}

static void build_fake_quad_table_text(char *buffer, size_t buffer_size) {
    size_t offset = 0;
    size_t row;

    if (buffer_size == 0) {
        fprintf(stderr, "build_fake_quad_table_text failed\n");
        exit(1);
    }

    buffer[0] = '\0';
    for (row = 0; row < CREATURES_BODY_QUAD_ROWS; row++) {
        append_test_number_text(buffer, buffer_size, &offset, (unsigned)(10 + row));
        append_test_number_text(buffer, buffer_size, &offset, (unsigned)(20 + row));
        append_test_number_text(buffer, buffer_size, &offset, (unsigned)(30 + row));
        append_test_number_text(buffer, buffer_size, &offset, (unsigned)(40 + row));
    }
}

static int fake_text_asset_lookup(const char *resolved_path, const char **text_out, void *ctx) {
    FakeTextAssetContext *text_context;
    size_t index;

    if (resolved_path == NULL || text_out == NULL) {
        return 1;
    }

    text_context = (FakeTextAssetContext *)ctx;
    for (index = 0; index < text_context->entry_count; index++) {
        if (strcmp(text_context->entries[index].path, resolved_path) != 0) {
            continue;
        }

        *text_out = text_context->entries[index].text;
        return 0;
    }

    return 1;
}

static int fake_body_table_path_exists(const char *path, void *ctx) {
    static const char k_prefix[] = "Body data\\";
    size_t length;

    (void)ctx;
    if (path == NULL || strncmp(path, k_prefix, sizeof(k_prefix) - 1) != 0) {
        return 0;
    }

    length = strlen(path);
    if (length < sizeof(k_prefix) - 1 + 7) {
        return 0;
    }

    if (strcmp(path + length - 3, "att") == 0 || strcmp(path + length - 3, "ATT") == 0 ||
        strcmp(path + length - 3, "qad") == 0 || strcmp(path + length - 3, "QAD") == 0) {
        return 1;
    }
    return 0;
}

static int fake_body_sprite_path_exists(const char *path, void *ctx) {
    static const char k_prefix[] = "Body data\\";
    size_t length;

    (void)ctx;
    if (path == NULL || strncmp(path, k_prefix, sizeof(k_prefix) - 1) != 0) {
        return 0;
    }

    length = strlen(path);
    if (length < sizeof(k_prefix) - 1 + 7) {
        return 0;
    }

    return strcmp(path + length - 3, "spr") == 0 || strcmp(path + length - 3, "SPR") == 0 ||
        strcmp(path + length - 3, "att") == 0 || strcmp(path + length - 3, "ATT") == 0 ||
        strcmp(path + length - 3, "qad") == 0 || strcmp(path + length - 3, "QAD") == 0;
}

static int fake_body_table_text_lookup(const char *resolved_path, const char **text_out, void *ctx) {
    FakeBodyTableLookupContext *lookup_context;
    size_t length;

    if (resolved_path == NULL || text_out == NULL || ctx == NULL) {
        return 1;
    }

    lookup_context = (FakeBodyTableLookupContext *)ctx;
    length = strlen(resolved_path);
    if (length >= 3 &&
        (strcmp(resolved_path + length - 3, "att") == 0 ||
            strcmp(resolved_path + length - 3, "ATT") == 0)) {
        *text_out = lookup_context->pair_table_text;
        return 0;
    }
    if (length >= 3 &&
        (strcmp(resolved_path + length - 3, "qad") == 0 ||
            strcmp(resolved_path + length - 3, "QAD") == 0)) {
        *text_out = lookup_context->quad_table_text;
        return 0;
    }

    return 1;
}

static void fake_frame_destroy(CreaturesFrameSet *frame_set, int destroy_mode, void *ctx) {
    FakeFrameFactoryContext *factory_context;

    (void)frame_set;
    factory_context = (FakeFrameFactoryContext *)ctx;
    factory_context->destroy_count++;
    factory_context->last_destroy_mode = destroy_mode;
}

static CreaturesFrameSet *fake_frame_create(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new, void *ctx) {
    FakeFrameFactoryContext *factory_context;
    CreaturesFrameSet *frame_set;

    factory_context = (FakeFrameFactoryContext *)ctx;
    frame_set = &factory_context->created_sets[factory_context->create_count];
    memset(frame_set, 0, sizeof(*frame_set));
    frame_set->primary_key = primary_key;
    frame_set->secondary_key = secondary_key;
    frame_set->ref_count = 1;
    frame_set->entries = factory_context->created_entries[factory_context->create_count];
    frame_set->entry_count = entry_count;
    frame_set->destroy = fake_frame_destroy;
    frame_set->destroy_ctx = factory_context;

    factory_context->last_create_primary_key = primary_key;
    factory_context->last_create_secondary_key = secondary_key;
    factory_context->last_create_entry_count = entry_count;
    factory_context->last_create_force_new = force_new;
    factory_context->create_count++;
    return frame_set;
}

static uint8_t *fake_frame_decode(CreaturesFrameEntry *entry, void *ctx) {
    FakeDecodeContext *decode_context;

    (void)entry;
    decode_context = (FakeDecodeContext *)ctx;
    decode_context->call_count++;
    return decode_context->pixels;
}

static void fake_body_bank_frame_destroy(CreaturesFrameSet *frame_set, int destroy_mode, void *ctx) {
    FakeBodyBankFrameFactoryContext *factory_context;

    (void)frame_set;
    (void)destroy_mode;
    factory_context = (FakeBodyBankFrameFactoryContext *)ctx;
    factory_context->destroy_count++;
}

static CreaturesFrameSet *fake_body_bank_frame_create(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new, void *ctx) {
    FakeBodyBankFrameFactoryContext *factory_context;
    const FakeBodyBankFrameConfig *config;
    CreaturesFrameSet *frame_set;
    size_t config_index;
    int entry_index;

    (void)secondary_key;
    (void)force_new;
    factory_context = (FakeBodyBankFrameFactoryContext *)ctx;
    config = NULL;
    for (config_index = 0; config_index < factory_context->config_count; config_index++) {
        if (factory_context->configs[config_index].token == primary_key) {
            config = &factory_context->configs[config_index];
            break;
        }
    }
    if (config == NULL || config->entry_count != entry_count) {
        return NULL;
    }

    frame_set = &factory_context->created_sets[factory_context->create_count];
    memset(frame_set, 0, sizeof(*frame_set));
    frame_set->primary_key = primary_key;
    frame_set->secondary_key = 0;
    frame_set->ref_count = 1;
    frame_set->entries = factory_context->created_entries[factory_context->create_count];
    frame_set->entry_count = entry_count;
    frame_set->destroy = fake_body_bank_frame_destroy;
    frame_set->destroy_ctx = factory_context;
    for (entry_index = 0; entry_index < entry_count; entry_index++) {
        CreaturesFrameEntry *entry;

        entry = &frame_set->entries[entry_index];
        memset(entry, 0, sizeof(*entry));
        entry->flags = 1;
        entry->pixels = &factory_context->created_pixels[factory_context->create_count][entry_index];
        *entry->pixels = (uint8_t)(config->base_pixel + entry_index);
        entry->width = 1;
        entry->height = 1;
    }
    factory_context->create_count++;
    return frame_set;
}

static void fake_uniform_frame_destroy(CreaturesFrameSet *frame_set, int destroy_mode, void *ctx) {
    FakeUniformFrameFactoryContext *factory_context;

    (void)frame_set;
    (void)destroy_mode;
    factory_context = (FakeUniformFrameFactoryContext *)ctx;
    factory_context->destroy_count++;
}

static CreaturesFrameSet *fake_uniform_frame_create(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new, void *ctx) {
    FakeUniformFrameFactoryContext *factory_context;
    CreaturesFrameSet *frame_set;
    int entry_index;

    (void)secondary_key;
    (void)force_new;
    if (entry_count < 0 || entry_count > 160) {
        return NULL;
    }

    factory_context = (FakeUniformFrameFactoryContext *)ctx;
    frame_set = &factory_context->created_sets[factory_context->create_count];
    memset(frame_set, 0, sizeof(*frame_set));
    frame_set->primary_key = primary_key;
    frame_set->secondary_key = 0;
    frame_set->ref_count = 1;
    frame_set->entries = factory_context->created_entries[factory_context->create_count];
    frame_set->entry_count = entry_count;
    frame_set->destroy = fake_uniform_frame_destroy;
    frame_set->destroy_ctx = factory_context;
    for (entry_index = 0; entry_index < entry_count; entry_index++) {
        CreaturesFrameEntry *entry;

        entry = &frame_set->entries[entry_index];
        memset(entry, 0, sizeof(*entry));
        entry->flags = 1;
        entry->pixels = &factory_context->created_pixels[factory_context->create_count][entry_index];
        *entry->pixels = (uint8_t)(entry_index & 0xff);
        entry->width = factory_context->frame_width;
        entry->height = factory_context->frame_height;
    }
    factory_context->last_primary_key = primary_key;
    factory_context->last_entry_count = entry_count;
    factory_context->create_count++;
    return frame_set;
}

static int fake_render_depth_read(const void *participant, void *ctx) {
    (void)ctx;
    return *(const int *)participant;
}

static int fake_random_next(void *ctx) {
    FakeRandomContext *random_context;
    int value;

    random_context = (FakeRandomContext *)ctx;
    value = random_context->values[random_context->next_index % random_context->value_count];
    random_context->next_index++;
    return value;
}

static void fake_layout_notify_event(uint32_t tag, int value, void *ctx) {
    FakeLayoutEventContext *event_context;

    event_context = (FakeLayoutEventContext *)ctx;
    event_context->last_tag = tag;
    event_context->last_value = value;
    event_context->call_count++;
}

static bool fake_boundary_source_point(void *source_ref, int *x_out, int *y_out, void *ctx) {
    FakeBoundaryPointContext *point_context;

    (void)source_ref;
    point_context = (FakeBoundaryPointContext *)ctx;
    *x_out = point_context->x;
    *y_out = point_context->y;
    point_context->call_count++;
    return true;
}

static void fake_invalidate_rect(const CreaturesWrappedRect *bounds, void *ctx) {
    FakeInvalidateContext *invalidate_context;

    invalidate_context = (FakeInvalidateContext *)ctx;
    invalidate_context->rects[invalidate_context->call_count] = *bounds;
    invalidate_context->call_count++;
}

static void *fake_sprite_file_cache_load(uint32_t token, const char file_suffix[4], void *ctx) {
    FakeSpriteFileCacheContext *cache_context;
    int *resource;

    cache_context = (FakeSpriteFileCacheContext *)ctx;
    resource = &cache_context->resources[cache_context->load_count];
    *resource = (int)token;
    cache_context->loaded_tokens[cache_context->load_count] = token;
    memcpy(cache_context->loaded_suffixes[cache_context->load_count], file_suffix, 4);
    cache_context->load_count++;
    return resource;
}

static void fake_sprite_file_cache_release(void *resource, int destroy_mode, void *ctx) {
    FakeSpriteFileCacheContext *cache_context;

    cache_context = (FakeSpriteFileCacheContext *)ctx;
    cache_context->released_resources[cache_context->release_count] = resource;
    cache_context->released_modes[cache_context->release_count] = destroy_mode;
    cache_context->release_count++;
}

static void fake_release_pair_sprite(CreaturesBodyPairSprite *sprite, int destroy_mode, void *ctx) {
    FakeBodyBuilderReleaseContext *release_context;

    release_context = (FakeBodyBuilderReleaseContext *)ctx;
    release_context->released_pair_sprites[release_context->released_pair_count] = sprite;
    release_context->released_pair_modes[release_context->released_pair_count] = destroy_mode;
    release_context->released_pair_count++;
}

static void fake_release_quad_sprite(CreaturesBodyQuadSprite *sprite, int destroy_mode, void *ctx) {
    FakeBodyBuilderReleaseContext *release_context;

    release_context = (FakeBodyBuilderReleaseContext *)ctx;
    release_context->released_quad_sprites[release_context->released_quad_count] = sprite;
    release_context->released_quad_modes[release_context->released_quad_count] = destroy_mode;
    release_context->released_quad_count++;
}

static void fake_body_refresh_record_call(FakeBodyRefreshContext *refresh_context, char tag) {
    refresh_context->call_order[refresh_context->call_order_length++] = tag;
    refresh_context->call_order[refresh_context->call_order_length] = '\0';
}

static bool fake_body_refresh_init(CreaturesGenomeState *state, int species_token,
    uint8_t sex_selector, uint8_t body_variant_selector, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->init_call_count++;
    refresh_context->last_species_token = species_token;
    refresh_context->last_sex_selector = sex_selector;
    refresh_context->last_body_variant_selector = body_variant_selector;
    memset(state, 0, sizeof(*state));
    state->bytes[0] = (uint8_t)species_token;
    state->bytes[1] = sex_selector;
    state->bytes[2] = body_variant_selector;
    refresh_context->last_state = *state;
    fake_body_refresh_record_call(refresh_context, 'I');
    return true;
}

static void fake_body_refresh_seed(void *target, CreaturesGenomeState *state, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->seed_call_count++;
    refresh_context->last_seed_target = target;
    state->bytes[3] = 0x5a;
    refresh_context->last_state = *state;
    fake_body_refresh_record_call(refresh_context, 'S');
}

static void fake_body_refresh_build(
    CreaturesGenomeState *state, uint8_t body_variant_selector, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->body_call_count++;
    state->bytes[4] = (uint8_t)(0xa0 + body_variant_selector);
    refresh_context->last_state = *state;
    fake_body_refresh_record_call(refresh_context, 'B');
}

static void fake_body_refresh_appearance(void *target, CreaturesGenomeState *state, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->appearance_call_count++;
    refresh_context->last_appearance_target = target;
    refresh_context->last_state = *state;
    fake_body_refresh_record_call(refresh_context, 'A');
}

static void fake_body_refresh_runtime(void *target, CreaturesGenomeState *state, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->runtime_call_count++;
    refresh_context->last_runtime_target = target;
    refresh_context->last_state = *state;
    fake_body_refresh_record_call(refresh_context, 'R');
}

static void fake_body_refresh_voice(void *target, const char *voice_asset, void *ctx) {
    FakeBodyRefreshContext *refresh_context;

    refresh_context = (FakeBodyRefreshContext *)ctx;
    refresh_context->voice_call_count++;
    refresh_context->last_voice_target = target;
    strncpy(refresh_context->last_voice_asset, voice_asset,
        sizeof(refresh_context->last_voice_asset) - 1);
    refresh_context->last_voice_asset[sizeof(refresh_context->last_voice_asset) - 1] = '\0';
    fake_body_refresh_record_call(refresh_context, 'V');
}

static bool fake_body_bank_publish(
    uint32_t image_token, const uint8_t *image_buffer, size_t image_size, void *ctx) {
    FakeBodyBankPublishContext *publish_context;
    size_t copy_size;

    publish_context = (FakeBodyBankPublishContext *)ctx;
    publish_context->last_image_token = image_token;
    publish_context->last_image_size = image_size;
    publish_context->call_count++;
    copy_size = image_size < sizeof(publish_context->first_bytes) ?
        image_size : sizeof(publish_context->first_bytes);
    if (copy_size > 0) {
        memcpy(publish_context->first_bytes, image_buffer, copy_size);
    }
    return true;
}

static void fake_wait_behavior_refresh(CreaturesWaitBehaviorRuntime *runtime, void *ctx) {
    FakeWaitBehaviorContext *wait_context;

    wait_context = (FakeWaitBehaviorContext *)ctx;
    wait_context->refresh_call_count++;
    wait_context->last_stage_seen = runtime->body_variant_selector;
}

static void fake_wait_behavior_message(
    CreaturesWaitBehaviorRuntime *runtime, const char *message, void *ctx) {
    FakeWaitBehaviorContext *wait_context;

    (void)runtime;
    wait_context = (FakeWaitBehaviorContext *)ctx;
    wait_context->message_call_count++;
    strncpy(wait_context->last_message, message, sizeof(wait_context->last_message) - 1);
    wait_context->last_message[sizeof(wait_context->last_message) - 1] = '\0';
}

static int fake_growth_orientation_delta(void *ctx) {
    return ((FakeGrowthContext *)ctx)->orientation_delta;
}

static uint8_t fake_growth_behavior_code(void *ctx) {
    return ((FakeGrowthContext *)ctx)->behavior_code;
}

static bool fake_growth_target_distance(int *distance_out, void *ctx) {
    FakeGrowthContext *growth_context;

    growth_context = (FakeGrowthContext *)ctx;
    if (!growth_context->has_target_distance) {
        return false;
    }
    *distance_out = growth_context->target_distance;
    return true;
}

static void fake_growth_refresh(void *ctx) {
    ((FakeGrowthContext *)ctx)->refresh_call_count++;
}

static void fake_growth_finalize(void *ctx) {
    ((FakeGrowthContext *)ctx)->finalize_call_count++;
}

static int fake_imported_creature_count_matching_identity(int identity_token, void *ctx) {
    FakeImportedCreatureContext *import_context;

    import_context = (FakeImportedCreatureContext *)ctx;
    (void)identity_token;
    return import_context->duplicate_count;
}

static void *fake_imported_creature_load_genome_export(const void *source_export, void *ctx) {
    FakeImportedCreatureContext *import_context;

    import_context = (FakeImportedCreatureContext *)ctx;
    (void)source_export;
    if (import_context->fail_load) {
        return NULL;
    }
    return &import_context->loaded_export;
}

static void fake_imported_creature_regenerate_identity(void *genome_export, void *ctx) {
    FakeImportedCreatureContext *import_context;
    FakeGenomeExport *genome;

    import_context = (FakeImportedCreatureContext *)ctx;
    genome = (FakeGenomeExport *)genome_export;
    import_context->regenerate_call_count++;
    genome->identity_token = import_context->regenerated_identity_token;
}

static int fake_imported_creature_read_identity(const void *genome_export, void *ctx) {
    (void)ctx;
    return ((const FakeGenomeExport *)genome_export)->identity_token;
}

static void fake_imported_creature_prepare_export(void *genome_export, void *ctx) {
    FakeImportedCreatureContext *import_context;

    (void)genome_export;
    import_context = (FakeImportedCreatureContext *)ctx;
    import_context->prepare_call_count++;
}

static void fake_imported_creature_build_body(
    void *genome_export, uint8_t body_variant_selector, void *ctx) {
    FakeImportedCreatureContext *import_context;

    (void)genome_export;
    import_context = (FakeImportedCreatureContext *)ctx;
    import_context->build_call_count++;
    import_context->last_build_stage = body_variant_selector;
}

static void fake_imported_creature_release_export(void *genome_export, int destroy_mode, void *ctx) {
    FakeImportedCreatureContext *import_context;

    (void)genome_export;
    import_context = (FakeImportedCreatureContext *)ctx;
    import_context->release_call_count++;
    import_context->release_mode = destroy_mode;
}

static void fake_imported_creature_refresh_bounds(void *runtime, void *ctx) {
    FakeImportedCreatureContext *import_context;
    const CreaturesImportedCreatureRuntime *creature_runtime;

    import_context = (FakeImportedCreatureContext *)ctx;
    creature_runtime = (const CreaturesImportedCreatureRuntime *)runtime;
    import_context->refresh_bounds_activity_states[import_context->refresh_bounds_activity_count++] =
        creature_runtime->activity_state;
    import_context->refresh_bounds_call_count++;
}

static void fake_imported_creature_place_in_world(void *runtime, int x, int y, void *ctx) {
    FakeImportedCreatureContext *import_context;
    const CreaturesImportedCreatureRuntime *creature_runtime;

    import_context = (FakeImportedCreatureContext *)ctx;
    creature_runtime = (const CreaturesImportedCreatureRuntime *)runtime;
    import_context->place_call_count++;
    import_context->last_place_x = x;
    import_context->last_place_y = y;
    import_context->activity_state_during_place = creature_runtime->activity_state;
}

static void fake_imported_creature_notify_runtime_change(void *runtime, int value, void *ctx) {
    FakeImportedCreatureContext *import_context;

    (void)runtime;
    import_context = (FakeImportedCreatureContext *)ctx;
    import_context->notify_call_count++;
    import_context->last_notify_value = value;
}

static void fake_imported_creature_post_global_event(
    int channel, int code, int value, void *ctx) {
    FakeImportedCreatureContext *import_context;

    import_context = (FakeImportedCreatureContext *)ctx;
    import_context->global_event_call_count++;
    import_context->last_event_channel = channel;
    import_context->last_event_code = code;
    import_context->last_event_value = value;
}

static void fake_imported_creature_flush_global_events(void *ctx) {
    ((FakeImportedCreatureContext *)ctx)->flush_call_count++;
}

typedef struct FakeStartupProbeContext {
    const char *existing_paths[32];
    size_t existing_path_count;
    int prompt_return_value;
} FakeStartupProbeContext;

static int fake_startup_probe_path_exists(const char *path, void *ctx) {
    FakeStartupProbeContext *startup_context;
    size_t index;

    startup_context = (FakeStartupProbeContext *)ctx;
    for (index = 0; index < startup_context->existing_path_count; index++) {
        if (strcmp(startup_context->existing_paths[index], path) == 0) {
            return 1;
        }
    }

    return 0;
}

static int fake_startup_probe_prompt(void *ctx) {
    return ((FakeStartupProbeContext *)ctx)->prompt_return_value;
}

typedef struct FakeWingContext {
    CreaturesWingPaletteEntry palette_entries[256];
    void *created_bitmap_handle;
    void *old_selected_bitmap;
    uint8_t pixels[128];
    int get_palette_call_count;
    int create_bitmap_call_count;
    int select_object_call_count;
    int set_color_table_call_count;
    int delete_object_call_count;
    int delete_dc_call_count;
    void *last_selected_object;
    void *last_deleted_object;
    void *last_deleted_dc;
    unsigned int last_color_table_count;
    CreaturesWingRgbQuad last_first_color;
} FakeWingContext;

static int fake_wing_get_palette_entries(void *palette_handle, unsigned int start_index,
    unsigned int entry_count, CreaturesWingPaletteEntry *entries_out, void *ctx) {
    FakeWingContext *wing_context;

    (void)palette_handle;
    (void)start_index;
    wing_context = (FakeWingContext *)ctx;
    wing_context->get_palette_call_count++;
    memcpy(entries_out, wing_context->palette_entries, entry_count * sizeof(entries_out[0]));
    return (int)entry_count;
}

static void *fake_wing_create_bitmap(void *dc, CreaturesWingBitmapInfo *bitmap_info,
    uint8_t **pixels_out, void *ctx) {
    FakeWingContext *wing_context;

    (void)dc;
    (void)bitmap_info;
    wing_context = (FakeWingContext *)ctx;
    wing_context->create_bitmap_call_count++;
    *pixels_out = wing_context->pixels;
    return wing_context->created_bitmap_handle;
}

static void *fake_wing_select_object(void *dc, void *object_handle, void *ctx) {
    FakeWingContext *wing_context;

    (void)dc;
    wing_context = (FakeWingContext *)ctx;
    wing_context->select_object_call_count++;
    wing_context->last_selected_object = object_handle;
    return wing_context->old_selected_bitmap;
}

static int fake_wing_set_color_table(void *dc, unsigned int start_index, unsigned int color_count,
    const CreaturesWingRgbQuad *colors, void *ctx) {
    FakeWingContext *wing_context;

    (void)dc;
    (void)start_index;
    wing_context = (FakeWingContext *)ctx;
    wing_context->set_color_table_call_count++;
    wing_context->last_color_table_count = color_count;
    wing_context->last_first_color = colors[0];
    return (int)color_count;
}

static int fake_wing_delete_object(void *object_handle, void *ctx) {
    FakeWingContext *wing_context;

    wing_context = (FakeWingContext *)ctx;
    wing_context->delete_object_call_count++;
    wing_context->last_deleted_object = object_handle;
    return 1;
}

static int fake_wing_delete_dc(void *dc, void *ctx) {
    FakeWingContext *wing_context;

    wing_context = (FakeWingContext *)ctx;
    wing_context->delete_dc_call_count++;
    wing_context->last_deleted_dc = dc;
    return 1;
}

typedef struct FakeDisplayContext {
    void *retired_bitmap_handle;
    void *returned_dc_handle;
    void *returned_previous_palette;
    unsigned int first_realize_result;
    int release_auxiliary_call_count;
    int release_backbuffer_call_count;
    int create_backbuffer_call_count;
    int delete_bitmap_call_count;
    int get_dc_call_count;
    int select_palette_call_count;
    int realize_palette_call_count;
    int release_dc_call_count;
    int invalidate_rect_call_count;
    void *last_released_auxiliary_resource;
    void *last_released_backbuffer;
    void *last_surface_ctx;
    void *last_deleted_bitmap;
    void *last_get_dc_window;
    void *last_selected_dc;
    void *last_selected_palette;
    int last_select_background;
    void *last_realize_dc;
    void *last_release_dc_window;
    void *last_release_dc_handle;
    void *last_invalidated_window;
    const CreaturesDisplayRect *last_invalidated_rect;
    int last_invalidate_erase_background;
    uint32_t last_create_width;
    int last_create_height;
} FakeDisplayContext;

typedef struct FakeDisplayRedrawContext {
    int begin_redraw_scope_call_count;
    int end_redraw_scope_call_count;
    int execute_redraw_call_count;
    void *last_begin_owner;
    void *last_begin_scratch;
    void *last_end_scratch;
    void *last_execute_scratch;
    CreaturesDisplayRect last_visible_bounds;
    CreaturesDisplayRect last_viewport_bounds;
    CreaturesDisplayRect last_current_bounds;
} FakeDisplayRedrawContext;

typedef struct FakeDisplayPresentContext {
    void *returned_target_dc;
    int render_scene_call_count;
    int resolve_target_dc_call_count;
    int bit_blt_call_count;
    int draw_focus_rect_call_count;
    int flush_gdi_call_count;
    void *last_resolve_scratch;
    CreaturesDisplayRect last_render_world_bounds;
    void *last_bit_blt_target_dc;
    int last_bit_blt_dest_x;
    int last_bit_blt_dest_y;
    int last_bit_blt_width;
    int last_bit_blt_height;
    void *last_bit_blt_source_dc;
    int last_bit_blt_source_x;
    int last_bit_blt_source_y;
    CreaturesDisplayRect last_focus_rect;
} FakeDisplayPresentContext;

typedef struct FakeDisplayPresentOpsContext {
    FakeDisplayContext *display_context;
    FakeDisplayPresentContext *present_context;
} FakeDisplayPresentOpsContext;

typedef struct FakeDisplaySceneActor {
    int actor_id;
    int visible;
    int draw_depth;
} FakeDisplaySceneActor;

typedef struct FakeDisplaySceneContext {
    size_t actor_count;
    FakeDisplaySceneActor actors[8];
    void *acquired_auxiliary_resource;
    int background_draw_call_count;
    int get_actor_count_call_count;
    int get_actor_call_count;
    int collect_visible_actor_call_count;
    int draw_actor_call_count;
    int acquire_auxiliary_call_count;
    int draw_auxiliary_call_count;
    int background_wrapped_columns[8];
    int background_rows[8];
    int background_world_x[8];
    int background_world_y[8];
    int drawn_actor_ids[8];
    uint32_t last_acquired_auxiliary_token;
    void *last_drawn_auxiliary_resource;
    CreaturesDisplayRect last_background_clip_bounds;
    CreaturesDisplayRect last_background_viewport_bounds;
    CreaturesDisplayRect last_actor_clip_bounds;
    CreaturesDisplayRect last_actor_viewport_bounds;
    CreaturesDisplayRect last_auxiliary_clip_bounds;
    CreaturesDisplayRect last_auxiliary_viewport_bounds;
} FakeDisplaySceneContext;

typedef struct FakeDisplayScrollListener {
    int listener_id;
    int listener_type;
    int notify_call_count;
    int last_delta_x;
    int last_delta_y;
} FakeDisplayScrollListener;

typedef struct FakeDisplayScrollContext {
    size_t listener_count;
    FakeDisplayScrollListener listeners[8];
    int refresh_owner_call_count;
    int notified_listener_count;
    int notified_listener_ids[8];
    void *last_refresh_owner;
} FakeDisplayScrollContext;

typedef struct FakeViewportScrollbarContext {
    int current_position[2];
    int set_range_call_count;
    int set_position_call_count;
    int last_range_axis[4];
    int last_range_minimum[4];
    int last_range_maximum[4];
    int last_range_redraw[4];
    int last_position_axis[4];
    int last_position_value[4];
    int last_position_redraw[4];
} FakeViewportScrollbarContext;

typedef struct FakeViewportCaptureContext {
    CreaturesDisplayRect resolved_bounds;
    uint8_t allocation_buffer[128];
    uint8_t submitted_payload[128];
    int resolve_bounds_call_count;
    int allocate_call_count;
    int free_call_count;
    int begin_capture_call_count;
    int submit_capture_call_count;
    int end_capture_call_count;
    int report_failure_call_count;
    int submit_result;
    size_t last_allocation_size;
    size_t last_submit_size;
    void *last_submit_target;
    unsigned int last_submit_format;
    const char *last_failure_message;
} FakeViewportCaptureContext;

static void fake_display_release_auxiliary_resource(void *resource, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->release_auxiliary_call_count++;
    display_context->last_released_auxiliary_resource = resource;
}

static void fake_display_release_backbuffer(void *surface_ctx, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->release_backbuffer_call_count++;
    display_context->last_released_backbuffer = surface_ctx;
}

static void *fake_display_create_backbuffer(
    void *surface_ctx, uint32_t width, int height, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->create_backbuffer_call_count++;
    display_context->last_surface_ctx = surface_ctx;
    display_context->last_create_width = width;
    display_context->last_create_height = height;
    return display_context->retired_bitmap_handle;
}

static int fake_display_delete_bitmap(void *bitmap_handle, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->delete_bitmap_call_count++;
    display_context->last_deleted_bitmap = bitmap_handle;
    return 1;
}

static void *fake_display_get_dc(void *window_handle, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->get_dc_call_count++;
    display_context->last_get_dc_window = window_handle;
    return display_context->returned_dc_handle;
}

static void *fake_display_select_palette(
    void *dc, void *palette_handle, int force_background, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->select_palette_call_count++;
    display_context->last_selected_dc = dc;
    display_context->last_selected_palette = palette_handle;
    display_context->last_select_background = force_background;
    return display_context->returned_previous_palette;
}

static unsigned int fake_display_realize_palette(void *dc, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->realize_palette_call_count++;
    display_context->last_realize_dc = dc;
    return display_context->realize_palette_call_count == 1 ?
        display_context->first_realize_result :
        0;
}

static int fake_display_release_dc(void *window_handle, void *dc, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->release_dc_call_count++;
    display_context->last_release_dc_window = window_handle;
    display_context->last_release_dc_handle = dc;
    return 1;
}

static int fake_display_invalidate_rect(
    void *window_handle, const CreaturesDisplayRect *rect, int erase_background, void *ctx) {
    FakeDisplayContext *display_context;

    display_context = (FakeDisplayContext *)ctx;
    display_context->invalidate_rect_call_count++;
    display_context->last_invalidated_window = window_handle;
    display_context->last_invalidated_rect = rect;
    display_context->last_invalidate_erase_background = erase_background;
    return 1;
}

static void fake_display_begin_redraw_scope(void *owner_handle, void *scratch_context, void *ctx) {
    FakeDisplayRedrawContext *redraw_context;

    redraw_context = (FakeDisplayRedrawContext *)ctx;
    redraw_context->begin_redraw_scope_call_count++;
    redraw_context->last_begin_owner = owner_handle;
    redraw_context->last_begin_scratch = scratch_context;
}

static void fake_display_end_redraw_scope(void *scratch_context, void *ctx) {
    FakeDisplayRedrawContext *redraw_context;

    redraw_context = (FakeDisplayRedrawContext *)ctx;
    redraw_context->end_redraw_scope_call_count++;
    redraw_context->last_end_scratch = scratch_context;
}

static void fake_display_execute_redraw(CreaturesDisplaySurface *surface, void *scratch_context,
    const CreaturesDisplayRedrawState *state, void *ctx) {
    FakeDisplayRedrawContext *redraw_context;

    (void)surface;
    redraw_context = (FakeDisplayRedrawContext *)ctx;
    redraw_context->execute_redraw_call_count++;
    redraw_context->last_execute_scratch = scratch_context;
    redraw_context->last_visible_bounds = state->visible_bounds;
    redraw_context->last_viewport_bounds = state->viewport_bounds;
    redraw_context->last_current_bounds = state->current_bounds;
}

static void *fake_display_resolve_target_dc(void *scratch_context, void *ctx) {
    FakeDisplayPresentContext *present_context;

    present_context = ((FakeDisplayPresentOpsContext *)ctx)->present_context;
    present_context->resolve_target_dc_call_count++;
    present_context->last_resolve_scratch = scratch_context;
    return present_context->returned_target_dc;
}

static void fake_display_render_scene(
    CreaturesDisplaySurface *surface, const CreaturesDisplayRect *world_bounds, void *ctx) {
    FakeDisplayPresentContext *present_context;

    (void)surface;
    present_context = ((FakeDisplayPresentOpsContext *)ctx)->present_context;
    present_context->render_scene_call_count++;
    present_context->last_render_world_bounds = *world_bounds;
}

static int fake_display_bit_blt(void *target_dc, int dest_x, int dest_y, int width, int height,
    void *source_dc, int source_x, int source_y, void *ctx) {
    FakeDisplayPresentContext *present_context;

    present_context = ((FakeDisplayPresentOpsContext *)ctx)->present_context;
    present_context->bit_blt_call_count++;
    present_context->last_bit_blt_target_dc = target_dc;
    present_context->last_bit_blt_dest_x = dest_x;
    present_context->last_bit_blt_dest_y = dest_y;
    present_context->last_bit_blt_width = width;
    present_context->last_bit_blt_height = height;
    present_context->last_bit_blt_source_dc = source_dc;
    present_context->last_bit_blt_source_x = source_x;
    present_context->last_bit_blt_source_y = source_y;
    return 1;
}

static void fake_display_draw_focus_rect(
    void *target_dc, const CreaturesDisplayRect *focus_rect, void *ctx) {
    FakeDisplayPresentContext *present_context;

    (void)target_dc;
    present_context = ((FakeDisplayPresentOpsContext *)ctx)->present_context;
    present_context->draw_focus_rect_call_count++;
    present_context->last_focus_rect = *focus_rect;
}

static void fake_display_flush_gdi(void *ctx) {
    FakeDisplayPresentContext *present_context;

    present_context = ((FakeDisplayPresentOpsContext *)ctx)->present_context;
    present_context->flush_gdi_call_count++;
}

static void *fake_present_select_palette(
    void *dc, void *palette_handle, int force_background, void *ctx) {
    return fake_display_select_palette(dc, palette_handle, force_background,
        ((FakeDisplayPresentOpsContext *)ctx)->display_context);
}

static unsigned int fake_present_realize_palette(void *dc, void *ctx) {
    return fake_display_realize_palette(dc,
        ((FakeDisplayPresentOpsContext *)ctx)->display_context);
}

static void fake_display_draw_background_tile(CreaturesDisplaySurface *surface, int wrapped_column,
    int tile_row, int world_x, int world_y, const CreaturesDisplayRect *clip_bounds,
    const CreaturesDisplayRect *viewport_bounds, void *ctx) {
    FakeDisplaySceneContext *scene_context;
    int call_index;

    (void)surface;
    scene_context = (FakeDisplaySceneContext *)ctx;
    call_index = scene_context->background_draw_call_count;
    scene_context->background_draw_call_count++;
    if (call_index < (int)(sizeof(scene_context->background_wrapped_columns) /
            sizeof(scene_context->background_wrapped_columns[0]))) {
        scene_context->background_wrapped_columns[call_index] = wrapped_column;
        scene_context->background_rows[call_index] = tile_row;
        scene_context->background_world_x[call_index] = world_x;
        scene_context->background_world_y[call_index] = world_y;
    }
    scene_context->last_background_clip_bounds = *clip_bounds;
    scene_context->last_background_viewport_bounds = *viewport_bounds;
}

static size_t fake_display_get_actor_count(void *ctx) {
    FakeDisplaySceneContext *scene_context;

    scene_context = (FakeDisplaySceneContext *)ctx;
    scene_context->get_actor_count_call_count++;
    return scene_context->actor_count;
}

static void *fake_display_get_actor(size_t actor_index, void *ctx) {
    FakeDisplaySceneContext *scene_context;

    scene_context = (FakeDisplaySceneContext *)ctx;
    scene_context->get_actor_call_count++;
    return actor_index < scene_context->actor_count ? &scene_context->actors[actor_index] : NULL;
}

static int fake_display_collect_visible_actor(
    void *actor, const CreaturesDisplayRect *clip_bounds, int *draw_depth_out, void *ctx) {
    FakeDisplaySceneActor *scene_actor;
    FakeDisplaySceneContext *scene_context;

    scene_actor = (FakeDisplaySceneActor *)actor;
    scene_context = (FakeDisplaySceneContext *)ctx;
    scene_context->collect_visible_actor_call_count++;
    scene_context->last_actor_clip_bounds = *clip_bounds;
    if (!scene_actor->visible) {
        return 0;
    }

    *draw_depth_out = scene_actor->draw_depth;
    return 1;
}

static void fake_display_draw_actor(CreaturesDisplaySurface *surface, void *actor,
    const CreaturesDisplayRect *clip_bounds, const CreaturesDisplayRect *viewport_bounds,
    void *ctx) {
    FakeDisplaySceneActor *scene_actor;
    FakeDisplaySceneContext *scene_context;
    int call_index;

    (void)surface;
    scene_actor = (FakeDisplaySceneActor *)actor;
    scene_context = (FakeDisplaySceneContext *)ctx;
    call_index = scene_context->draw_actor_call_count;
    scene_context->draw_actor_call_count++;
    if (call_index < (int)(sizeof(scene_context->drawn_actor_ids) /
            sizeof(scene_context->drawn_actor_ids[0]))) {
        scene_context->drawn_actor_ids[call_index] = scene_actor->actor_id;
    }
    scene_context->last_actor_clip_bounds = *clip_bounds;
    scene_context->last_actor_viewport_bounds = *viewport_bounds;
}

static void *fake_display_acquire_auxiliary_sprite(uint32_t token, void *ctx) {
    FakeDisplaySceneContext *scene_context;

    scene_context = (FakeDisplaySceneContext *)ctx;
    scene_context->acquire_auxiliary_call_count++;
    scene_context->last_acquired_auxiliary_token = token;
    return scene_context->acquired_auxiliary_resource;
}

static void fake_display_draw_auxiliary_sprite(CreaturesDisplaySurface *surface,
    void *auxiliary_sprite, const CreaturesDisplayRect *clip_bounds,
    const CreaturesDisplayRect *viewport_bounds, void *ctx) {
    FakeDisplaySceneContext *scene_context;

    (void)surface;
    scene_context = (FakeDisplaySceneContext *)ctx;
    scene_context->draw_auxiliary_call_count++;
    scene_context->last_drawn_auxiliary_resource = auxiliary_sprite;
    scene_context->last_auxiliary_clip_bounds = *clip_bounds;
    scene_context->last_auxiliary_viewport_bounds = *viewport_bounds;
}

static size_t fake_display_get_listener_count(void *ctx) {
    return ((FakeDisplayScrollContext *)ctx)->listener_count;
}

static void *fake_display_get_listener(size_t listener_index, void *ctx) {
    FakeDisplayScrollContext *scroll_context;

    scroll_context = (FakeDisplayScrollContext *)ctx;
    return listener_index < scroll_context->listener_count ?
        &scroll_context->listeners[listener_index] :
        NULL;
}

static int fake_display_is_scroll_listener(void *listener, void *ctx) {
    FakeDisplayScrollListener *scroll_listener;

    (void)ctx;
    scroll_listener = (FakeDisplayScrollListener *)listener;
    return scroll_listener->listener_type == 1 || scroll_listener->listener_type == 2;
}

static void fake_display_notify_scroll_listener(
    void *listener, int delta_x, int delta_y, void *ctx) {
    FakeDisplayScrollListener *scroll_listener;
    FakeDisplayScrollContext *scroll_context;
    int notify_index;

    scroll_listener = (FakeDisplayScrollListener *)listener;
    scroll_context = (FakeDisplayScrollContext *)ctx;
    scroll_listener->notify_call_count++;
    scroll_listener->last_delta_x = delta_x;
    scroll_listener->last_delta_y = delta_y;
    notify_index = scroll_context->notified_listener_count;
    if (notify_index < (int)(sizeof(scroll_context->notified_listener_ids) /
            sizeof(scroll_context->notified_listener_ids[0]))) {
        scroll_context->notified_listener_ids[notify_index] = scroll_listener->listener_id;
    }
    scroll_context->notified_listener_count++;
}

static void fake_display_refresh_owner(void *owner_handle, void *ctx) {
    FakeDisplayScrollContext *scroll_context;

    scroll_context = (FakeDisplayScrollContext *)ctx;
    scroll_context->refresh_owner_call_count++;
    scroll_context->last_refresh_owner = owner_handle;
}

static int fake_viewport_set_scrollbar_range(
    int axis, int minimum, int maximum, int redraw, void *ctx) {
    FakeViewportScrollbarContext *scrollbar_context;
    int call_index;

    scrollbar_context = (FakeViewportScrollbarContext *)ctx;
    call_index = scrollbar_context->set_range_call_count;
    if (call_index < (int)(sizeof(scrollbar_context->last_range_axis) /
            sizeof(scrollbar_context->last_range_axis[0]))) {
        scrollbar_context->last_range_axis[call_index] = axis;
        scrollbar_context->last_range_minimum[call_index] = minimum;
        scrollbar_context->last_range_maximum[call_index] = maximum;
        scrollbar_context->last_range_redraw[call_index] = redraw;
    }
    scrollbar_context->set_range_call_count++;
    return 1;
}

static int fake_viewport_get_scrollbar_position(int axis, void *ctx) {
    FakeViewportScrollbarContext *scrollbar_context;

    scrollbar_context = (FakeViewportScrollbarContext *)ctx;
    return axis >= 0 && axis < 2 ? scrollbar_context->current_position[axis] : 0;
}

static int fake_viewport_set_scrollbar_position(
    int axis, int position, int redraw, void *ctx) {
    FakeViewportScrollbarContext *scrollbar_context;
    int call_index;

    scrollbar_context = (FakeViewportScrollbarContext *)ctx;
    call_index = scrollbar_context->set_position_call_count;
    if (call_index < (int)(sizeof(scrollbar_context->last_position_axis) /
            sizeof(scrollbar_context->last_position_axis[0]))) {
        scrollbar_context->last_position_axis[call_index] = axis;
        scrollbar_context->last_position_value[call_index] = position;
        scrollbar_context->last_position_redraw[call_index] = redraw;
    }
    if (axis >= 0 && axis < 2) {
        scrollbar_context->current_position[axis] = position;
    }
    scrollbar_context->set_position_call_count++;
    return 1;
}

static void fake_viewport_capture_resolve_bounds(
    void *bounds_source, CreaturesDisplayRect *out_bounds, void *ctx) {
    FakeViewportCaptureContext *capture_context;

    (void)bounds_source;
    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->resolve_bounds_call_count++;
    *out_bounds = capture_context->resolved_bounds;
}

static void *fake_viewport_capture_allocate(size_t allocation_size, void *ctx) {
    FakeViewportCaptureContext *capture_context;

    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->allocate_call_count++;
    capture_context->last_allocation_size = allocation_size;
    return allocation_size <= sizeof(capture_context->allocation_buffer) ?
        capture_context->allocation_buffer :
        NULL;
}

static void fake_viewport_capture_free(void *allocation, void *ctx) {
    FakeViewportCaptureContext *capture_context;

    (void)allocation;
    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->free_call_count++;
}

static void fake_viewport_capture_begin(void *ctx) {
    FakeViewportCaptureContext *capture_context;

    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->begin_capture_call_count++;
}

static int fake_viewport_capture_submit(
    void *capture_target, unsigned int format_id, const void *payload, size_t payload_size,
    void *ctx) {
    FakeViewportCaptureContext *capture_context;

    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->submit_capture_call_count++;
    capture_context->last_submit_target = capture_target;
    capture_context->last_submit_format = format_id;
    capture_context->last_submit_size = payload_size;
    memcpy(capture_context->submitted_payload, payload,
        payload_size < sizeof(capture_context->submitted_payload) ?
            payload_size :
            sizeof(capture_context->submitted_payload));
    return capture_context->submit_result;
}

static void fake_viewport_capture_end(void *ctx) {
    FakeViewportCaptureContext *capture_context;

    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->end_capture_call_count++;
}

static void fake_viewport_capture_report_failure(const char *message, void *ctx) {
    FakeViewportCaptureContext *capture_context;

    capture_context = (FakeViewportCaptureContext *)ctx;
    capture_context->report_failure_call_count++;
    capture_context->last_failure_message = message;
}

typedef struct FakeAudioContext {
    int create_device_result;
    int set_cooperative_level_result;
    int create_buffer_result;
    int get_format_result;
    int set_format_result;
    int stop_buffer_result;
    int release_buffer_result;
    int release_stream_result;
    int release_owner_result;
    void *created_device_handle;
    void *created_buffer_handle;
    int create_device_call_count;
    int set_cooperative_level_call_count;
    int create_buffer_call_count;
    int get_format_call_count;
    int set_format_call_count;
    int stop_buffer_call_count;
    int release_buffer_call_count;
    int release_stream_call_count;
    int release_owner_call_count;
    int notify_mixer_idle_call_count;
    uintptr_t last_window_handle;
    unsigned int last_cooperative_level;
    CreaturesSoundBufferDesc last_buffer_desc;
    CreaturesWaveFormat initial_format;
    CreaturesWaveFormat last_set_format;
    void *last_stopped_buffer;
    void *last_released_buffer;
    void *last_released_stream;
    CreaturesAudioBufferOwner *last_released_owner;
    int last_release_stream_mode;
    int last_release_owner_mode;
    int last_notify_channel;
    int last_notify_value;
} FakeAudioContext;

static int fake_audio_create_device(void *guid, void **device_out, void *outer, void *ctx) {
    FakeAudioContext *audio_context;

    (void)guid;
    (void)outer;
    audio_context = (FakeAudioContext *)ctx;
    audio_context->create_device_call_count++;
    *device_out = audio_context->created_device_handle;
    return audio_context->create_device_result;
}

static int fake_audio_set_cooperative_level(
    void *device, uintptr_t window_handle, unsigned int level, void *ctx) {
    FakeAudioContext *audio_context;

    (void)device;
    audio_context = (FakeAudioContext *)ctx;
    audio_context->set_cooperative_level_call_count++;
    audio_context->last_window_handle = window_handle;
    audio_context->last_cooperative_level = level;
    return audio_context->set_cooperative_level_result;
}

static int fake_audio_create_buffer(void *device, const CreaturesSoundBufferDesc *buffer_desc,
    void **buffer_out, void *ctx) {
    FakeAudioContext *audio_context;

    (void)device;
    audio_context = (FakeAudioContext *)ctx;
    audio_context->create_buffer_call_count++;
    audio_context->last_buffer_desc = *buffer_desc;
    *buffer_out = audio_context->created_buffer_handle;
    return audio_context->create_buffer_result;
}

static int fake_audio_get_format(
    void *buffer, CreaturesWaveFormat *format_out, size_t format_size, void *ctx) {
    FakeAudioContext *audio_context;

    (void)buffer;
    (void)format_size;
    audio_context = (FakeAudioContext *)ctx;
    audio_context->get_format_call_count++;
    *format_out = audio_context->initial_format;
    return audio_context->get_format_result;
}

static int fake_audio_set_format(void *buffer, const CreaturesWaveFormat *format, void *ctx) {
    FakeAudioContext *audio_context;

    (void)buffer;
    audio_context = (FakeAudioContext *)ctx;
    audio_context->set_format_call_count++;
    audio_context->last_set_format = *format;
    return audio_context->set_format_result;
}

static int fake_audio_stop_buffer(void *buffer, void *ctx) {
    FakeAudioContext *audio_context;

    audio_context = (FakeAudioContext *)ctx;
    audio_context->stop_buffer_call_count++;
    audio_context->last_stopped_buffer = buffer;
    return audio_context->stop_buffer_result;
}

static int fake_audio_release_buffer(void *buffer, void *ctx) {
    FakeAudioContext *audio_context;

    audio_context = (FakeAudioContext *)ctx;
    audio_context->release_buffer_call_count++;
    audio_context->last_released_buffer = buffer;
    return audio_context->release_buffer_result;
}

static int fake_audio_release_stream(void *stream, int destroy_mode, void *ctx) {
    FakeAudioContext *audio_context;

    audio_context = (FakeAudioContext *)ctx;
    audio_context->release_stream_call_count++;
    audio_context->last_released_stream = stream;
    audio_context->last_release_stream_mode = destroy_mode;
    return audio_context->release_stream_result;
}

static int fake_audio_release_owner(
    CreaturesAudioBufferOwner *owner, int destroy_mode, void *ctx) {
    FakeAudioContext *audio_context;

    audio_context = (FakeAudioContext *)ctx;
    audio_context->release_owner_call_count++;
    audio_context->last_released_owner = owner;
    audio_context->last_release_owner_mode = destroy_mode;
    return audio_context->release_owner_result;
}

static void fake_audio_notify_mixer_idle(int channel, int value, void *ctx) {
    FakeAudioContext *audio_context;

    audio_context = (FakeAudioContext *)ctx;
    audio_context->notify_mixer_idle_call_count++;
    audio_context->last_notify_channel = channel;
    audio_context->last_notify_value = value;
}

int main(void) {
    ScrollWidget widget = {{0}, NULL};
    HatcherySelectionState selection = {{1, 2, 3, 4, 5}};
    HatcheryRegistryHandler registry = {{0}, 1, {0}, 2, 1, fake_registry_query};
    char registry_buffer[32];
    byte component;
    const FakeRegistryEntry remove_registry_entries[] = {
        {"SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "Main Directory",
            "C:\\Creatures"},
        {"SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "Image Directory",
            "C:\\Creatures\\Images"},
        {"SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "Genetics Directory",
            "C:\\Creatures\\Genetics"},
        {"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey",
            "UninstallString", "C:\\Creatures\\Uninst.exe /S"},
    };
    FakeRegistryContext remove_registry_context = {remove_registry_entries,
        sizeof(remove_registry_entries) / sizeof(remove_registry_entries[0]), {0}, 0};
    const FakeFilesystemMatchSet remove_match_sets[] = {
        {"C:\\Creatures\\TempBU\\*.sfc", {"save1.sfc", "save2.sfc"}, 2},
        {"C:\\Creatures\\Backup\\*.photo album", {"album.photo album"}, 1},
        {"C:\\Creatures\\Images\\*.spr", {"body.spr", "head.spr"}, 2},
        {"C:\\Creatures\\Genetics\\*.gno", {"catalog.gno"}, 1},
        {"C:\\Creatures\\Genetics\\*.gen", {"norn.gen"}, 1},
    };
    const FakeFilesystemMatchSet world_match_sets[] = {
        {"C:\\Creatures\\World\\World.sfc", {"World.sfc"}, 1},
        {"C:\\Creatures\\World\\*.spr", {"alpha.spr", "beta.spr"}, 2},
        {"C:\\Creatures\\World\\*.photo album", {"album.photo album"}, 1},
        {"C:\\Creatures\\TempBu\\World.sfc", {"stale.sfc"}, 1},
        {"C:\\Creatures\\TempBu\\*.spr", {"stale1.spr", "stale2.spr"}, 2},
        {"C:\\Creatures\\Backup\\World.sfc", {"backup.sfc"}, 1},
        {"C:\\Creatures\\Backup\\*.spr", {"restore1.spr", "restore2.spr"}, 2},
    };
    FakeFilesystemContext remove_filesystem_context = {
        .match_sets = remove_match_sets,
        .match_set_count = sizeof(remove_match_sets) / sizeof(remove_match_sets[0]),
    };
    FakeFilesystemContext world_filesystem_context = {
        .match_sets = world_match_sets,
        .match_set_count = sizeof(world_match_sets) / sizeof(world_match_sets[0]),
    };
    FakeShellContext remove_shell_context = {NULL, 0};
    const LauncherRegistryEntry launcher_registry_entries[] = {
        {"HKEY_CURRENT_USER", "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
            "IntroPath", "D:\\Creatures\\ntro2.smk"},
        {"HKEY_LOCAL_MACHINE", "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
            "TitlePath", "D:\\Creatures\\Title.bmp"},
    };
    const CreaturesDisplayRect boot_saved_window_rect = {32, 24, 0x280 + 32, 0x1e0 + 24};
    const CreaturesDisplayRect boot_offscreen_window_rect = {640, 480, 0x280 + 640, 0x1e0 + 480};
    const CreaturesRegistryPair32 boot_saved_eye_pos = {19, 27};
    BootRegistryEntry boot_registry_entries[] = {
        {"HKEY_CURRENT_USER", "SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "WindowPosn",
            {0}, sizeof(CreaturesDisplayRect)},
        {"HKEY_CURRENT_USER", "SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "EyePosn",
            {0}, sizeof(CreaturesRegistryPair32)},
        {"HKEY_LOCAL_MACHINE", "SOFTWARE\\Millennium Interactive\\Creatures\\1.0", "Language",
            {'e', 'n', '-', 'G', 'B', '\0'}, 6},
    };
    LauncherRegistryContext launcher_registry_context;
    LauncherRegistryOps launcher_registry_ops = {
        fake_launcher_registry_create_key,
        fake_launcher_registry_read_value,
        fake_launcher_registry_write_value,
        &launcher_registry_context,
    };
    LauncherRegistryHandler launcher_registry_handler;
    BootRegistryContext boot_registry_context;
    CreaturesRegistryOps boot_registry_ops = {
        fake_boot_registry_create_key,
        fake_boot_registry_read_value,
        fake_boot_registry_write_value,
        &boot_registry_context,
    };
    CreaturesRegistryHandler boot_registry_handler;
    BootWindowContext boot_window_context = {{200, 150}, {0}, 0};
    CreaturesWindowBootOps boot_window_ops = {
        fake_boot_get_system_metric,
        fake_boot_finalize_window_placement,
        &boot_window_context,
    };
    SavedWindowContext saved_window_context;
    CreaturesMainWindowStateOps main_window_state_ops = {
        fake_window_is_iconic,
        fake_window_read_rect,
        fake_main_window_shutdown,
        &saved_window_context,
    };
    CreaturesEyeWindowStateOps eye_window_state_ops = {
        fake_window_read_rect,
        fake_eye_window_destroy,
        &saved_window_context,
    };
    FakePaletteFileContext palette_file_context;
    CreaturesPaletteFileOps palette_file_ops = {
        fake_palette_open_file,
        fake_palette_seek_file,
        fake_palette_read_byte,
        fake_palette_close_file,
        &palette_file_context,
    };
    FakePaletteSystemContext palette_system_context;
    CreaturesPaletteSystemOps palette_system_ops = {
        fake_palette_get_screen_dc,
        fake_palette_create_palette,
        fake_palette_select_palette,
        fake_palette_realize_palette,
        fake_palette_get_system_entries,
        fake_palette_delete_object,
        fake_palette_release_dc,
        &palette_system_context,
    };
    FakeWorldBootstrapContext world_bootstrap_context;
    CreaturesWindowTimerOps world_timer_ops = {
        fake_world_set_timer,
        fake_world_kill_timer,
        &world_bootstrap_context,
    };
    CreaturesWorldBootstrapOps world_bootstrap_ops = {
        fake_world_load_source,
        fake_world_bootstrap_palette,
        fake_world_stage_temp_backup,
        fake_world_reset_metrics_callback,
        fake_world_refresh_creature_status,
        fake_world_refresh_score_panel,
        fake_world_refresh_window_title,
        &world_timer_ops,
        &world_bootstrap_context,
    };
    FakeSelectedCreature active_creature = {0x04000000U, 0, 0x80U, "Alice"};
    FakeSelectedCreature inactive_creature = {0x04000000U, 1, 0xffU, "Bob"};
    FakeSelectedCreature non_creature = {0x05000000U, 0, 0x10U, "Toy"};
    FakeSelectedCreatureUiContext selected_ui_context;
    CreaturesSelectedCreatureUiOps selected_ui_ops = {
        fake_selected_creature_class_flags,
        fake_selected_creature_is_inactive,
        fake_selected_creature_health_raw,
        fake_selected_creature_name,
        fake_selected_load_string_resource,
        fake_selected_read_status_pane_text,
        fake_selected_set_status_pane_text,
        fake_selected_set_status_pane_state,
        fake_selected_score_part_value,
        fake_selected_invalidate_window,
        fake_selected_set_main_window_title,
        fake_selected_notify_selection_mode,
        fake_selected_close_eye_window,
        fake_selected_refresh_eye_window,
        fake_selected_refresh_main_surface,
        fake_selected_on_remove_inactive_creature,
        &selected_ui_context,
    };
    CreaturesSelectedCreatureHistory selected_history = {0, {NULL, NULL, NULL, NULL}};
    void *selected_creature_ptr;
    LauncherShellContext launcher_shell_context = {
        {"C:\\Applet1.exe", "C:\\Applet2.exe"},
        2,
        {{0}},
        0,
        0,
    };
    LauncherShellOps launcher_shell_ops = {
        fake_launcher_shell_execute,
        fake_launcher_path_exists,
        &launcher_shell_context,
    };
    LauncherDisplayOps launcher_display_ops = {
        fake_launcher_low_color_warning,
        &launcher_shell_context,
    };
    CreaturesSettingsContext creatures_settings_context;
    CreaturesSettingsOps creatures_settings_ops = {
        fake_creatures_write_setting,
        fake_creatures_read_setting,
        &creatures_settings_context,
    };
    CreaturesPathContext creatures_path_context = {
        &creatures_settings_context,
        {"C:\\Existing\\world.sfc"},
        1,
        0,
        0,
    };
    CreaturesPathResolverOps creatures_path_ops = {
        fake_creatures_resolver_read_setting,
        fake_creatures_path_exists,
        fake_creatures_prompt_insert_cd,
        &creatures_path_context,
    };
    CreaturesDirectoryConfig creatures_directory_config;
    RemoveRegistryOps remove_registry_ops = {
        fake_remove_registry_read,
        fake_remove_registry_delete_key,
        &remove_registry_context,
    };
    RemoveFilesystemOps remove_filesystem_ops = {
        fake_remove_filesystem_enumerate,
        fake_remove_filesystem_delete_path,
        &remove_filesystem_context,
    };
    CreaturesWorldFilesystemOps world_filesystem_ops = {
        fake_remove_filesystem_enumerate,
        fake_remove_filesystem_delete_path,
        fake_world_filesystem_copy_path,
        fake_world_filesystem_ensure_directory,
        &world_filesystem_context,
    };
    RemoveShellOps remove_shell_ops = {
        fake_remove_shell_execute,
        &remove_shell_context,
    };
    RemoveInstallLayout remove_layout;
    RemoveCleanupPlan remove_plan;
    size_t registry_key_count;
    const char *const *registry_keys;
    size_t value_size;
    CreaturesDisplayRect boot_rect;
    CreaturesRegistryPair32 boot_pair;
    CreaturesWindowPlacement boot_window_placement;
    uint8_t palette_primary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t palette_secondary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t palette_tertiary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    uint8_t palette_quaternary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3];
    void *bootstrap_palette_handle;
    CreaturesWorldMetrics world_metrics;
    int world_loading_flag;
    char body_pair_table_text[1024];
    char body_quad_table_text[512];
    FakeTextAssetEntry body_text_entries[2];
    FakeTextAssetContext body_text_context;
    CreaturesPathContext body_path_context = {
        &creatures_settings_context,
        {"Body data\\A110att", "Body data\\B511qad"},
        2,
        0,
        0,
    };
    CreaturesPathResolverOps body_path_ops = {
        fake_creatures_resolver_read_setting,
        fake_creatures_path_exists,
        fake_creatures_prompt_insert_cd,
        &body_path_context,
    };
    CreaturesBodyPairTable body_pair_table;
    CreaturesBodyQuadTable body_quad_table;
    char body_path_buffer[REMOVE_MAX_PATH];
    uint32_t body_token;
    CreaturesBodySpriteBase body_sprite_base;
    CreaturesBodyQuadSprite body_quad_sprite;
    CreaturesBodyQuadSprite next_body_quad_sprite;
    CreaturesBodyPairSprite body_pair_sprite;
    CreaturesBodyPairTable layout_pair_table;
    CreaturesBodyQuadTable layout_chain0_table;
    CreaturesBodyQuadTable layout_chain1_table;
    CreaturesBodyPairSprite layout_root_sprite;
    CreaturesBodyQuadSprite layout_chain0_sprite;
    CreaturesBodyQuadSprite layout_chain1_sprite;
    CreaturesBodyPairSprite pose_root_sprite;
    CreaturesBodyQuadSprite pose_chain0_sprites[1];
    CreaturesBodyQuadSprite pose_chain1_sprites[3];
    CreaturesBodyQuadSprite pose_chain2_sprites[3];
    CreaturesBodyQuadSprite pose_chain3_sprites[2];
    CreaturesBodyQuadSprite pose_chain4_sprites[2];
    CreaturesBodyQuadSprite pose_chain5_sprites[2];
    CreaturesFrameEntry layout_root_entries[20];
    CreaturesFrameEntry layout_chain0_entries[20];
    CreaturesFrameEntry layout_chain1_entries[20];
    CreaturesFrameSet layout_root_frame_set;
    CreaturesFrameSet layout_chain0_frame_set;
    CreaturesFrameSet layout_chain1_frame_set;
    CreaturesBodyLayoutRuntime body_layout;
    CreaturesBodyLayoutRuntime pose_layout;
    FakeLayoutEventContext layout_event_context;
    const CreaturesBoundarySpan boundary_spans[] = {
        {0, 0, 40, 100, 0},
        {50, 10, 90, 140, 0},
        {0, 20, 40, 200, 0},
    };
    CreaturesBoundaryMap boundary_map = {
        boundary_spans,
        sizeof(boundary_spans) / sizeof(boundary_spans[0]),
    };
    CreaturesAttachedBoundsSource attached_bounds_source;
    CreaturesWrappedRect copied_allowed_bounds;
    CreaturesBodyCompositorRuntime body_compositor;
    FakeBoundaryPointContext boundary_point_context;
    FakeInvalidateContext invalidate_context;
    CreaturesSpriteFileCache sprite_file_cache;
    FakeSpriteFileCacheContext sprite_file_cache_context;
    CreaturesBodyQuadSprite builder_chain0_head;
    CreaturesBodyQuadSprite builder_chain0_tail;
    CreaturesBodyQuadSprite builder_chain1_head;
    CreaturesBodyPairSprite builder_root_sprite;
    CreaturesBodyLayoutRuntime builder_layout;
    FakeBodyBuilderReleaseContext builder_release_context;
    CreaturesBodyBuilderReleaseOps builder_release_ops;
    CreaturesFrameSet builder_owned_frame_set;
    CreaturesFrameSet *builder_owned_frame_set_ptr;
    uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT];
    uint8_t gene_stream[] = {
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 6, 0xaa, 0xbb, 3, 0, 0, 0, 0,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 6, 0xaa, 0xbb, 7, 0x08, 0x77,
        'g', 'e', 'n', 'd',
    };
    CreaturesGeneCursor gene_cursor;
    uint8_t recipe_gene_stream[] = {
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 1, 0, 0, 0, 0,
        2,
        0x44, 0x33, 0x22, 0x11,
        0x88, 0x77, 0x66, 0x55,
        0, 0, 0,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 2, 0, 0, 0, 0,
        2, 5, 0, 0,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 2, 0, 0, 0, 0,
        4, 9, 0, 0,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 6, 0, 0, 0, 0,
        0, 10,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 6, 0, 0, 0, 0,
        0, 20,
        'g', 'e', 'n', 'e',
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        2, 6, 0, 0, 0, 0,
        1, 30,
        'g', 'e', 'n', 'd',
    };
    CreaturesGeneCursor recipe_gene_cursor;
    CreaturesBodyAssemblyRecipe body_recipe;
    CreaturesWrappedRect merged_bounds;
    char pose_string_digits[16] = "012345678901234";
    FakeFrameFactoryContext frame_factory_context;
    CreaturesFrameEntry cached_frame_entries[2];
    CreaturesFrameSet cached_frame_set;
    CreaturesFrameSet *frame_cache_entries[1];
    CreaturesFrameCacheOps frame_cache_ops;
    CreaturesFrameSet *acquired_frame_set;
    CreaturesFrameSet *created_frame_set;
    CreaturesFrameSet *forced_frame_set;
    FakeDecodeContext decoded_entry_context;
    FakeDecodeContext decoded_palette_context;
    CreaturesFrameEntry uncached_frame_entry;
    uint8_t palette_map[256];
    uint8_t palette_pixels[4];
    CreaturesFrameEntry palette_entry;
    CreaturesFrameEntry palette_frame_entries[2];
    CreaturesFrameSet palette_frame_set;
    uint8_t body_palette_rgb[0xec * 3];
    uint8_t body_remap[256];
    CreaturesSpriteFileWriter sprite_file_writer;
    uint8_t sprite_file_image[64];
    const uint8_t sprite_file_pixels_a[3] = {1, 2, 3};
    const uint8_t sprite_file_pixels_b[2] = {4, 5};
    const FakeBodyBankFrameConfig body_bank_frame_configs[] = {
        {0x30303241u, 26, 10},
        {0x30303242u, 10, 40},
    };
    FakeBodyBankFrameFactoryContext body_bank_frame_factory_context;
    CreaturesFrameCacheOps body_bank_frame_cache_ops;
    CreaturesPathContext body_bank_path_context = {
        &creatures_settings_context,
        {NULL},
        0,
        0,
        0,
    };
    CreaturesPathResolverOps body_bank_path_ops = {
        fake_creatures_resolver_read_setting,
        fake_creatures_path_exists,
        fake_creatures_prompt_insert_cd,
        &body_bank_path_context,
    };
    FakeBodyTableLookupContext body_table_lookup_context;
    CreaturesPathContext body_graph_path_context = {
        &creatures_settings_context,
        {NULL},
        0,
        0,
        0,
    };
    CreaturesPathResolverOps body_graph_path_ops = {
        fake_creatures_resolver_read_setting,
        fake_body_table_path_exists,
        fake_creatures_prompt_insert_cd,
        &body_graph_path_context,
    };
    char body_bank_slot0_path[REMOVE_MAX_PATH];
    char body_bank_slot1_path[REMOVE_MAX_PATH];
    uint8_t body_bank_image[512];
    CreaturesBodySpriteBankBuildResult body_bank_result;
    CreaturesBodySpriteBankBuildResult body_constructor_bank_result;
    CreaturesBodyAssemblyRecipe body_graph_recipe;
    CreaturesFrameEntry body_constructor_entries[160];
    CreaturesFrameSet body_constructor_frame_set;
    CreaturesBodySpriteStorage body_sprite_storage;
    CreaturesBodySpriteStorage body_graph_storage;
    CreaturesBodyTableStorage body_table_storage;
    const CreaturesBodyQuadTable *body_constructor_quad_tables[CREATURES_BODY_SLOT_COUNT];
    CreaturesBodyLayoutRuntime body_constructor_layout;
    CreaturesBodyLayoutRuntime body_graph_layout;
    CreaturesBodyBuilderRuntime body_builder_runtime;
    CreaturesSpriteFileCache body_builder_sprite_cache;
    FakeUniformFrameFactoryContext body_builder_slot_frame_context;
    FakeUniformFrameFactoryContext body_builder_body_frame_context;
    CreaturesFrameCacheOps body_builder_slot_frame_ops;
    CreaturesFrameCacheOps body_builder_body_frame_ops;
    CreaturesPathContext body_builder_path_context = {
        &creatures_settings_context,
        {NULL},
        0,
        0,
        0,
    };
    CreaturesPathResolverOps body_builder_path_ops = {
        fake_creatures_resolver_read_setting,
        fake_body_sprite_path_exists,
        fake_creatures_prompt_insert_cd,
        &body_builder_path_context,
    };
    uint8_t body_builder_image[2048];
    FakeBodyBankPublishContext body_builder_publish_context;
    CreaturesBodyBuilderOps body_builder_ops;
    uint32_t access_serial_counter;
    size_t palette_index;
    size_t layout_entry_index;
    int self_render_depth;
    int occupied_render_depth_a;
    int occupied_render_depth_b;
    const void *render_depth_participants[3];
    FakeRandomContext random_context;
    FakeRandomContext body_builder_random_context;
    FakeBodyRefreshContext body_refresh_context;
    CreaturesCreatureBodyRefreshRuntime body_refresh_runtime;
    CreaturesCreatureBodyRefreshOps body_refresh_ops;
    int body_refresh_seed_target = 0x11;
    int body_refresh_appearance_target = 0x22;
    int body_refresh_runtime_target = 0x33;
    int body_refresh_voice_target = 0x44;
    const char *const wait_primary_scripts[CREATURES_WAIT_BEHAVIOR_PRIMARY_SCRIPT_COUNT] = {
        "wait00", "wait01", "wait02", "wait03", "wait04", "wait05", "wait06", "wait07",
        "wait08", "wait09", "wait10", "wait11", "wait12", "wait13", "wait14", "wait15",
    };
    const char *const wait_auxiliary_scripts[CREATURES_WAIT_BEHAVIOR_AUXILIARY_SCRIPT_COUNT] = {
        "aux00",
        "aux01",
        "aux02",
    };
    CreaturesWaitBehaviorRuntime wait_behavior_runtime;
    CreaturesWaitBehaviorOps wait_behavior_ops;
    FakeWaitBehaviorContext wait_behavior_context;
    CreaturesGrowthStageRuntime growth_runtime;
    CreaturesGrowthUpdateOps growth_ops;
    FakeGrowthContext growth_context;
    CreaturesImportedCreatureRuntime imported_creature_runtime;
    CreaturesImportedCreatureOps imported_creature_ops;
    FakeImportedCreatureContext imported_creature_context;
    int imported_creature_source = 0x55;
    const CreaturesPopulationMember population_members[] = {
        {1, 0},
        {1, 0},
        {1, 0},
        {2, 0},
        {1, 1},
    };
    FakeRandomContext sex_random_context;

    creatures_slice_reset_runtime();
    memset(&launcher_registry_context, 0, sizeof(launcher_registry_context));
    memset(&boot_registry_context, 0, sizeof(boot_registry_context));
    memset(&boot_window_context.finalized_placement, 0, sizeof(boot_window_context.finalized_placement));
    memset(&saved_window_context, 0, sizeof(saved_window_context));
    memset(&palette_file_context, 0, sizeof(palette_file_context));
    memset(&palette_system_context, 0, sizeof(palette_system_context));
    memset(&world_bootstrap_context, 0, sizeof(world_bootstrap_context));
    memset(&creatures_settings_context, 0, sizeof(creatures_settings_context));
    memset(&frame_factory_context, 0, sizeof(frame_factory_context));
    memset(cached_frame_entries, 0, sizeof(cached_frame_entries));
    memset(&cached_frame_set, 0, sizeof(cached_frame_set));
    memset(&decoded_entry_context, 0, sizeof(decoded_entry_context));
    memset(&decoded_palette_context, 0, sizeof(decoded_palette_context));
    memset(&uncached_frame_entry, 0, sizeof(uncached_frame_entry));
    memset(&palette_entry, 0, sizeof(palette_entry));
    memset(palette_frame_entries, 0, sizeof(palette_frame_entries));
    memset(&palette_frame_set, 0, sizeof(palette_frame_set));
    memset(&body_bank_frame_factory_context, 0, sizeof(body_bank_frame_factory_context));
    memset(&body_constructor_bank_result, 0, sizeof(body_constructor_bank_result));
    memset(&body_graph_recipe, 0, sizeof(body_graph_recipe));
    memset(body_constructor_entries, 0, sizeof(body_constructor_entries));
    memset(&body_constructor_frame_set, 0, sizeof(body_constructor_frame_set));
    memset(&body_sprite_storage, 0, sizeof(body_sprite_storage));
    memset(&body_graph_storage, 0, sizeof(body_graph_storage));
    memset(&body_table_storage, 0, sizeof(body_table_storage));
    memset(body_constructor_quad_tables, 0, sizeof(body_constructor_quad_tables));
    memset(&body_constructor_layout, 0, sizeof(body_constructor_layout));
    memset(&body_graph_layout, 0, sizeof(body_graph_layout));
    memset(&body_builder_runtime, 0, sizeof(body_builder_runtime));
    memset(&body_builder_sprite_cache, 0, sizeof(body_builder_sprite_cache));
    memset(&body_builder_slot_frame_context, 0, sizeof(body_builder_slot_frame_context));
    memset(&body_builder_body_frame_context, 0, sizeof(body_builder_body_frame_context));
    memset(&body_builder_slot_frame_ops, 0, sizeof(body_builder_slot_frame_ops));
    memset(&body_builder_body_frame_ops, 0, sizeof(body_builder_body_frame_ops));
    memset(body_builder_image, 0, sizeof(body_builder_image));
    memset(&body_builder_publish_context, 0, sizeof(body_builder_publish_context));
    memset(&body_builder_ops, 0, sizeof(body_builder_ops));
    memset(&body_table_lookup_context, 0, sizeof(body_table_lookup_context));
    memset(&random_context, 0, sizeof(random_context));
    memset(&body_builder_random_context, 0, sizeof(body_builder_random_context));
    memset(&body_refresh_context, 0, sizeof(body_refresh_context));
    memset(&body_refresh_runtime, 0, sizeof(body_refresh_runtime));
    memset(&body_refresh_ops, 0, sizeof(body_refresh_ops));
    memset(&wait_behavior_runtime, 0, sizeof(wait_behavior_runtime));
    memset(&wait_behavior_ops, 0, sizeof(wait_behavior_ops));
    memset(&wait_behavior_context, 0, sizeof(wait_behavior_context));
    memset(&growth_runtime, 0, sizeof(growth_runtime));
    memset(&growth_ops, 0, sizeof(growth_ops));
    memset(&growth_context, 0, sizeof(growth_context));
    memset(&imported_creature_runtime, 0, sizeof(imported_creature_runtime));
    memset(&imported_creature_ops, 0, sizeof(imported_creature_ops));
    memset(&imported_creature_context, 0, sizeof(imported_creature_context));
    memset(&sex_random_context, 0, sizeof(sex_random_context));
    launcher_registry_context.entries = launcher_registry_entries;
    launcher_registry_context.entry_count =
        sizeof(launcher_registry_entries) / sizeof(launcher_registry_entries[0]);
    memcpy(boot_registry_entries[0].data, &boot_saved_window_rect, sizeof(boot_saved_window_rect));
    memcpy(boot_registry_entries[1].data, &boot_saved_eye_pos, sizeof(boot_saved_eye_pos));
    boot_registry_context.entries = boot_registry_entries;
    boot_registry_context.entry_count =
        sizeof(boot_registry_entries) / sizeof(boot_registry_entries[0]);
    strcpy(palette_file_context.expected_path, "C:\\Creatures\\Palettes\\PALETTE.DTA");
    palette_file_context.size = sizeof(palette_file_context.bytes);
    palette_system_context.screen_dc = (void *)0x4444;
    palette_system_context.previous_palette_handle = (void *)0x2222;
    for (palette_index = 0; palette_index < CREATURES_PALETTE_SYSTEM_RESERVED_COUNT;
         palette_index++) {
        palette_system_context.low_entries[palette_index].red = (uint8_t)(palette_index + 1);
        palette_system_context.low_entries[palette_index].green = (uint8_t)(palette_index + 2);
        palette_system_context.low_entries[palette_index].blue = (uint8_t)(palette_index + 3);
        palette_system_context.low_entries[palette_index].flags = 0;
        palette_system_context.high_entries[palette_index].red = (uint8_t)(palette_index + 101);
        palette_system_context.high_entries[palette_index].green = (uint8_t)(palette_index + 102);
        palette_system_context.high_entries[palette_index].blue = (uint8_t)(palette_index + 103);
        palette_system_context.high_entries[palette_index].flags = 0;
    }
    for (palette_index = 0; palette_index < CREATURES_PALETTE_GAME_COLOR_COUNT * 3;
         palette_index++) {
        palette_file_context.bytes[CREATURES_PALETTE_FILE_HEADER_SKIP + palette_index] =
            (uint8_t)(palette_index & 0x3f);
    }
    world_bootstrap_context.load_world_result = 1;
    world_bootstrap_context.bootstrap_palette_result = 1;
    build_fake_pair_table_text(body_pair_table_text, sizeof(body_pair_table_text));
    build_fake_quad_table_text(body_quad_table_text, sizeof(body_quad_table_text));
    body_table_lookup_context.pair_table_text = body_pair_table_text;
    body_table_lookup_context.quad_table_text = body_quad_table_text;
    body_refresh_ops.init_genome_state = fake_body_refresh_init;
    body_refresh_ops.prepare_default_seed = fake_body_refresh_seed;
    body_refresh_ops.build_body_from_genome = fake_body_refresh_build;
    body_refresh_ops.apply_appearance_from_genome = fake_body_refresh_appearance;
    body_refresh_ops.apply_runtime_from_genome = fake_body_refresh_runtime;
    body_refresh_ops.assign_voice_asset = fake_body_refresh_voice;
    body_refresh_ops.ctx = &body_refresh_context;
    wait_behavior_ops.refresh_body_assets = fake_wait_behavior_refresh;
    wait_behavior_ops.queue_message = fake_wait_behavior_message;
    wait_behavior_ops.ctx = &wait_behavior_context;
    growth_ops.compute_orientation_delta = fake_growth_orientation_delta;
    growth_ops.select_primary_behavior_code = fake_growth_behavior_code;
    growth_ops.read_target_distance = fake_growth_target_distance;
    growth_ops.refresh_body_assets = fake_growth_refresh;
    growth_ops.finalize_growth = fake_growth_finalize;
    growth_ops.ctx = &growth_context;
    imported_creature_ops.count_matching_identity =
        fake_imported_creature_count_matching_identity;
    imported_creature_ops.load_genome_export = fake_imported_creature_load_genome_export;
    imported_creature_ops.regenerate_identity = fake_imported_creature_regenerate_identity;
    imported_creature_ops.read_identity = fake_imported_creature_read_identity;
    imported_creature_ops.prepare_genome_export = fake_imported_creature_prepare_export;
    imported_creature_ops.rebuild_body_assets = fake_imported_creature_build_body;
    imported_creature_ops.release_genome_export = fake_imported_creature_release_export;
    imported_creature_ops.refresh_bounds = fake_imported_creature_refresh_bounds;
    imported_creature_ops.place_in_world = fake_imported_creature_place_in_world;
    imported_creature_ops.notify_runtime_change =
        fake_imported_creature_notify_runtime_change;
    imported_creature_ops.post_global_event = fake_imported_creature_post_global_event;
    imported_creature_ops.flush_global_events = fake_imported_creature_flush_global_events;
    imported_creature_ops.ctx = &imported_creature_context;
    body_builder_slot_frame_ops.entries = NULL;
    body_builder_slot_frame_ops.entry_count = 0;
    body_builder_slot_frame_ops.create_frame_set = fake_uniform_frame_create;
    body_builder_slot_frame_ops.ctx = &body_builder_slot_frame_context;
    body_builder_body_frame_ops.entries = NULL;
    body_builder_body_frame_ops.entry_count = 0;
    body_builder_body_frame_ops.create_frame_set = fake_uniform_frame_create;
    body_builder_body_frame_ops.ctx = &body_builder_body_frame_context;
    body_builder_slot_frame_context.frame_width = 1;
    body_builder_slot_frame_context.frame_height = 1;
    body_builder_body_frame_context.frame_width = 10;
    body_builder_body_frame_context.frame_height = 20;
    creatures_sprite_file_cache_init(&body_builder_sprite_cache, "spr");
    body_builder_ops.sprite_file_cache = &body_builder_sprite_cache;
    body_builder_ops.release_sprite_file = fake_sprite_file_cache_release;
    body_builder_ops.sprite_file_ctx = &sprite_file_cache_context;
    body_builder_ops.release_ops = &builder_release_ops;
    body_builder_ops.resolver_ops = &body_builder_path_ops;
    body_builder_ops.slot_frame_cache_ops = &body_builder_slot_frame_ops;
    body_builder_ops.body_frame_cache_ops = &body_builder_body_frame_ops;
    body_builder_ops.palette_rgb = body_palette_rgb;
    body_builder_ops.image_buffer = body_builder_image;
    body_builder_ops.image_buffer_size = sizeof(body_builder_image);
    body_builder_ops.lookup_text = fake_body_table_text_lookup;
    body_builder_ops.lookup_ctx = &body_table_lookup_context;
    body_builder_ops.publish_body_bank_image = fake_body_bank_publish;
    body_builder_ops.publish_ctx = &body_builder_publish_context;
    body_builder_ops.render_depth_participants = render_depth_participants;
    body_builder_ops.render_depth_participant_count = 3;
    body_builder_ops.read_render_depth = fake_render_depth_read;
    body_builder_ops.next_random = fake_random_next;
    body_builder_ops.render_depth_ctx = &body_builder_random_context;
    body_text_entries[0].path = "Body data\\A110att";
    body_text_entries[0].text = body_pair_table_text;
    body_text_entries[1].path = "Body data\\B511qad";
    body_text_entries[1].text = body_quad_table_text;
    body_text_context.entries = body_text_entries;
    body_text_context.entry_count = sizeof(body_text_entries) / sizeof(body_text_entries[0]);
    body_bank_frame_factory_context.configs = body_bank_frame_configs;
    body_bank_frame_factory_context.config_count =
        sizeof(body_bank_frame_configs) / sizeof(body_bank_frame_configs[0]);
    body_bank_frame_cache_ops.entries = NULL;
    body_bank_frame_cache_ops.entry_count = 0;
    body_bank_frame_cache_ops.create_frame_set = fake_body_bank_frame_create;
    body_bank_frame_cache_ops.ctx = &body_bank_frame_factory_context;
    creatures_body_data_build_path(body_bank_slot0_path, sizeof(body_bank_slot0_path),
        creatures_body_data_make_token(0, 2, 0, 0), "SPR", "Body data\\");
    creatures_body_data_build_path(body_bank_slot1_path, sizeof(body_bank_slot1_path),
        creatures_body_data_make_token(1, 2, 0, 0), "SPR", "Body data\\");
    body_bank_path_context.existing_paths[0] = body_bank_slot0_path;
    body_bank_path_context.existing_paths[1] = body_bank_slot1_path;
    body_bank_path_context.existing_path_count = 2;
    memset(&body_sprite_base, 0xcc, sizeof(body_sprite_base));
    memset(&body_quad_sprite, 0xcc, sizeof(body_quad_sprite));
    memset(&next_body_quad_sprite, 0, sizeof(next_body_quad_sprite));
    memset(&body_pair_sprite, 0xcc, sizeof(body_pair_sprite));
    memset(&layout_pair_table, 0, sizeof(layout_pair_table));
    memset(&layout_chain0_table, 0, sizeof(layout_chain0_table));
    memset(&layout_chain1_table, 0, sizeof(layout_chain1_table));
    memset(&layout_root_sprite, 0, sizeof(layout_root_sprite));
    memset(&layout_chain0_sprite, 0, sizeof(layout_chain0_sprite));
    memset(&layout_chain1_sprite, 0, sizeof(layout_chain1_sprite));
    memset(&pose_root_sprite, 0, sizeof(pose_root_sprite));
    memset(pose_chain0_sprites, 0, sizeof(pose_chain0_sprites));
    memset(pose_chain1_sprites, 0, sizeof(pose_chain1_sprites));
    memset(pose_chain2_sprites, 0, sizeof(pose_chain2_sprites));
    memset(pose_chain3_sprites, 0, sizeof(pose_chain3_sprites));
    memset(pose_chain4_sprites, 0, sizeof(pose_chain4_sprites));
    memset(pose_chain5_sprites, 0, sizeof(pose_chain5_sprites));
    memset(layout_root_entries, 0, sizeof(layout_root_entries));
    memset(layout_chain0_entries, 0, sizeof(layout_chain0_entries));
    memset(layout_chain1_entries, 0, sizeof(layout_chain1_entries));
    memset(&layout_root_frame_set, 0, sizeof(layout_root_frame_set));
    memset(&layout_chain0_frame_set, 0, sizeof(layout_chain0_frame_set));
    memset(&layout_chain1_frame_set, 0, sizeof(layout_chain1_frame_set));
    memset(&body_layout, 0, sizeof(body_layout));
    memset(&pose_layout, 0, sizeof(pose_layout));
    memset(&layout_event_context, 0, sizeof(layout_event_context));
    memset(&attached_bounds_source, 0, sizeof(attached_bounds_source));
    memset(&copied_allowed_bounds, 0, sizeof(copied_allowed_bounds));
    memset(&body_compositor, 0, sizeof(body_compositor));
    memset(&boundary_point_context, 0, sizeof(boundary_point_context));
    memset(&invalidate_context, 0, sizeof(invalidate_context));
    memset(&sprite_file_cache, 0, sizeof(sprite_file_cache));
    memset(&sprite_file_cache_context, 0, sizeof(sprite_file_cache_context));
    memset(&builder_chain0_head, 0, sizeof(builder_chain0_head));
    memset(&builder_chain0_tail, 0, sizeof(builder_chain0_tail));
    memset(&builder_chain1_head, 0, sizeof(builder_chain1_head));
    memset(&builder_root_sprite, 0, sizeof(builder_root_sprite));
    memset(&builder_layout, 0, sizeof(builder_layout));
    memset(&builder_release_context, 0, sizeof(builder_release_context));
    memset(&builder_owned_frame_set, 0, sizeof(builder_owned_frame_set));
    cached_frame_set.primary_key = 0x11223344u;
    cached_frame_set.secondary_key = 7;
    cached_frame_set.ref_count = 1;
    cached_frame_set.entries = cached_frame_entries;
    cached_frame_set.entry_count = 2;
    cached_frame_set.destroy = fake_frame_destroy;
    cached_frame_set.destroy_ctx = &frame_factory_context;
    frame_cache_entries[0] = &cached_frame_set;
    frame_cache_ops.entries = frame_cache_entries;
    frame_cache_ops.entry_count = sizeof(frame_cache_entries) / sizeof(frame_cache_entries[0]);
    frame_cache_ops.create_frame_set = fake_frame_create;
    frame_cache_ops.ctx = &frame_factory_context;
    decoded_entry_context.pixels[0] = 5;
    decoded_entry_context.pixels[1] = 6;
    decoded_entry_context.pixels[2] = 7;
    decoded_entry_context.pixels[3] = 8;
    decoded_palette_context.pixels[0] = 3;
    decoded_palette_context.pixels[1] = 4;
    uncached_frame_entry.width = 2;
    uncached_frame_entry.height = 2;
    uncached_frame_entry.decode_pixels = fake_frame_decode;
    uncached_frame_entry.decode_ctx = &decoded_entry_context;
    palette_pixels[0] = 1;
    palette_pixels[1] = 2;
    palette_pixels[2] = 3;
    palette_pixels[3] = 4;
    palette_entry.flags = 1;
    palette_entry.pixels = palette_pixels;
    palette_entry.width = 2;
    palette_entry.height = 2;
    palette_frame_entries[0].flags = 1;
    palette_frame_entries[0].pixels = palette_pixels;
    palette_frame_entries[0].width = 2;
    palette_frame_entries[0].height = 1;
    palette_frame_entries[1].width = 2;
    palette_frame_entries[1].height = 1;
    palette_frame_entries[1].decode_pixels = fake_frame_decode;
    palette_frame_entries[1].decode_ctx = &decoded_palette_context;
    palette_frame_set.entries = palette_frame_entries;
    palette_frame_set.entry_count = 2;
    for (palette_index = 0; palette_index < sizeof(palette_map); palette_index++) {
        palette_map[palette_index] = (uint8_t)((palette_index + 10) & 0xff);
    }
    for (palette_index = 0; palette_index < 0xec; palette_index++) {
        body_palette_rgb[palette_index * 3] = (uint8_t)(palette_index + 10);
        body_palette_rgb[palette_index * 3 + 1] = (uint8_t)(palette_index + 10);
        body_palette_rgb[palette_index * 3 + 2] = (uint8_t)(palette_index + 10);
    }
    for (layout_entry_index = 0; layout_entry_index < 20; layout_entry_index++) {
        layout_root_entries[layout_entry_index].width = 20;
        layout_root_entries[layout_entry_index].height = 30;
        layout_chain0_entries[layout_entry_index].width = 5;
        layout_chain0_entries[layout_entry_index].height = 10;
        layout_chain1_entries[layout_entry_index].width = 15;
        layout_chain1_entries[layout_entry_index].height = 20;
    }
    for (layout_entry_index = 0; layout_entry_index < 160; layout_entry_index++) {
        body_constructor_entries[layout_entry_index].width = 1;
        body_constructor_entries[layout_entry_index].height = 1;
    }
    body_constructor_frame_set.entries = body_constructor_entries;
    body_constructor_frame_set.entry_count = 160;
    layout_root_frame_set.entries = layout_root_entries;
    layout_root_frame_set.entry_count = 20;
    layout_chain0_frame_set.entries = layout_chain0_entries;
    layout_chain0_frame_set.entry_count = 20;
    layout_chain1_frame_set.entries = layout_chain1_entries;
    layout_chain1_frame_set.entry_count = 20;
    layout_pair_table.left[1][0] = 6;
    layout_pair_table.right[1][0] = 7;
    layout_pair_table.left[1][1] = 10;
    layout_pair_table.right[1][1] = 20;
    layout_pair_table.left[1][2] = 30;
    layout_pair_table.right[1][2] = 40;
    layout_chain0_table.first[1] = 3;
    layout_chain0_table.second[1] = 4;
    layout_chain0_table.third[1] = 13;
    layout_chain0_table.fourth[1] = 14;
    layout_chain1_table.first[1] = 1;
    layout_chain1_table.second[1] = 2;
    layout_chain1_table.third[1] = 5;
    layout_chain1_table.fourth[1] = 8;
    body_constructor_quad_tables[0] = &layout_chain0_table;
    body_constructor_quad_tables[2] = &layout_chain1_table;
    body_constructor_quad_tables[3] = &layout_chain0_table;
    body_constructor_quad_tables[4] = &layout_chain1_table;
    body_constructor_quad_tables[5] = &layout_chain0_table;
    body_constructor_quad_tables[6] = &layout_chain1_table;
    body_constructor_quad_tables[7] = &layout_chain0_table;
    body_constructor_quad_tables[8] = &layout_chain1_table;
    body_constructor_quad_tables[9] = &layout_chain0_table;
    body_constructor_quad_tables[10] = &layout_chain1_table;
    body_constructor_quad_tables[11] = &layout_chain0_table;
    body_constructor_quad_tables[12] = &layout_chain1_table;
    body_constructor_quad_tables[13] = &layout_chain0_table;
    self_render_depth = 1700;
    occupied_render_depth_a = 1505;
    occupied_render_depth_b = 2500;
    render_depth_participants[0] = &self_render_depth;
    render_depth_participants[1] = &occupied_render_depth_a;
    render_depth_participants[2] = &occupied_render_depth_b;
    random_context.values[0] = 500;
    random_context.values[1] = 800;
    random_context.value_count = 2;
    body_builder_random_context.values[0] = 500;
    body_builder_random_context.values[1] = 800;
    body_builder_random_context.value_count = 2;

    expect_u32(pack_color_le(0x11, 0x22, 0x33, 0x44), 0x44332211u, "pack_color_le");
    creatures_palette_build_channel_curve(body_remap, 0, 0x40, 0x80, 0xc0, 0xff);
    expect_u8(body_remap[0], 0, "creatures_palette_build_channel_curve start");
    expect_u8(body_remap[0x40], 0x40, "creatures_palette_build_channel_curve quarter");
    expect_u8(body_remap[0x80], 0x80, "creatures_palette_build_channel_curve midpoint");
    expect_u8(body_remap[0xc0], 0xc0, "creatures_palette_build_channel_curve three quarter");
    expect_u8(creatures_palette_find_nearest_color(body_palette_rgb, 55, 55, 55), 45,
        "creatures_palette_find_nearest_color");
    creatures_palette_build_body_remap(body_palette_rgb, body_remap, 0x80, 0x80, 0x80);
    expect_i32(DAT_00435234, 1, "creatures_palette_build_body_remap generation count");
    expect_u8(body_remap[0], 0, "creatures_palette_build_body_remap preserved slot0");
    expect_u8(body_remap[9], 9, "creatures_palette_build_body_remap preserved slot9");
    expect_u8(body_remap[10], 10, "creatures_palette_build_body_remap mapped slot10");
    expect_u8(body_remap[55], 55, "creatures_palette_build_body_remap mapped slot55");
    expect_u8(body_remap[246], 246, "creatures_palette_build_body_remap preserved slot246");
    expect_u8(body_remap[255], 255, "creatures_palette_build_body_remap preserved slot255");
    expect_size(creatures_sprite_file_image_size(2, 5), 25,
        "creatures_sprite_file_image_size");
    memset(sprite_file_image, 0xcc, sizeof(sprite_file_image));
    expect_true(creatures_sprite_file_writer_init(&sprite_file_writer, 2, sprite_file_image,
                    sizeof(sprite_file_image)),
        "creatures_sprite_file_writer_init");
    expect_true(creatures_sprite_file_writer_append_frame(&sprite_file_writer, 0, 1, 3,
                    sprite_file_pixels_a, sizeof(sprite_file_pixels_a)),
        "creatures_sprite_file_writer_append_frame first");
    expect_true(creatures_sprite_file_writer_append_frame(&sprite_file_writer, 1, 1, 2,
                    sprite_file_pixels_b, sizeof(sprite_file_pixels_b)),
        "creatures_sprite_file_writer_append_frame second");
    creatures_sprite_file_writer_finalize(&sprite_file_writer);
    expect_u8(sprite_file_image[0], 2, "creatures_sprite_file_writer_finalize count lo");
    expect_u8(sprite_file_image[1], 0, "creatures_sprite_file_writer_finalize count hi");
    expect_u8(sprite_file_image[2], 0, "creatures_sprite_file_writer reserved lo");
    expect_u8(sprite_file_image[3], 0, "creatures_sprite_file_writer reserved hi");
    expect_u32((uint32_t)sprite_file_image[4] |
                   ((uint32_t)sprite_file_image[5] << 8) |
                   ((uint32_t)sprite_file_image[6] << 16) |
                   ((uint32_t)sprite_file_image[7] << 24),
        18u, "creatures_sprite_file_writer first offset");
    expect_u8(sprite_file_image[8], 1, "creatures_sprite_file_writer first width lo");
    expect_u8(sprite_file_image[9], 0, "creatures_sprite_file_writer first width hi");
    expect_u8(sprite_file_image[10], 3, "creatures_sprite_file_writer first height lo");
    expect_u8(sprite_file_image[11], 0, "creatures_sprite_file_writer first height hi");
    expect_u32((uint32_t)sprite_file_image[12] |
                   ((uint32_t)sprite_file_image[13] << 8) |
                   ((uint32_t)sprite_file_image[14] << 16) |
                   ((uint32_t)sprite_file_image[15] << 24),
        21u, "creatures_sprite_file_writer second offset");
    expect_u8(sprite_file_image[16], 1, "creatures_sprite_file_writer second width lo");
    expect_u8(sprite_file_image[17], 0, "creatures_sprite_file_writer second width hi");
    expect_u8(sprite_file_image[18], 2, "creatures_sprite_file_writer second height lo");
    expect_u8(sprite_file_image[19], 0, "creatures_sprite_file_writer second height hi");
    expect_u8(sprite_file_image[20], 1, "creatures_sprite_file_writer pixel0");
    expect_u8(sprite_file_image[21], 2, "creatures_sprite_file_writer pixel1");
    expect_u8(sprite_file_image[22], 3, "creatures_sprite_file_writer pixel2");
    expect_u8(sprite_file_image[23], 4, "creatures_sprite_file_writer pixel3");
    expect_u8(sprite_file_image[24], 5, "creatures_sprite_file_writer pixel4");
    memset(&body_recipe, 0, sizeof(body_recipe));
    body_recipe.body_variant_group_base = 2;
    body_recipe.palette_average[0] = 0x80;
    body_recipe.palette_average[1] = 0x80;
    body_recipe.palette_average[2] = 0x80;
    body_recipe.active_slot_count = 2;
    body_recipe.total_frame_entries = 36;
    memset(body_bank_image, 0xcc, sizeof(body_bank_image));
    expect_true(creatures_body_sprite_bank_build(&body_recipe, 1, 0, &body_bank_path_ops,
                    &body_bank_frame_cache_ops, body_palette_rgb, body_bank_image,
                    sizeof(body_bank_image), &body_bank_result),
        "creatures_body_sprite_bank_build");
    expect_u32(body_bank_result.slot_tokens[0], creatures_body_data_make_token(0, 2, 0, 0),
        "creatures_body_sprite_bank_build slot0 token");
    expect_u32(body_bank_result.slot_tokens[1], creatures_body_data_make_token(1, 2, 0, 0),
        "creatures_body_sprite_bank_build slot1 token");
    expect_u8((uint8_t)body_bank_result.slot_frame_starts[0], 0,
        "creatures_body_sprite_bank_build slot0 start");
    expect_u32(body_bank_result.slot_frame_starts[1], 26,
        "creatures_body_sprite_bank_build slot1 start");
    expect_u32(body_bank_result.frame_count, 36,
        "creatures_body_sprite_bank_build frame count");
    expect_u32(body_bank_result.access_serial_counter, 72,
        "creatures_body_sprite_bank_build access serial");
    expect_size(body_bank_result.image_size, 328,
        "creatures_body_sprite_bank_build image size");
    expect_i32(body_bank_frame_factory_context.create_count, 2,
        "creatures_body_sprite_bank_build create count");
    expect_i32(body_bank_frame_factory_context.destroy_count, 2,
        "creatures_body_sprite_bank_build destroy count");
    expect_u8(body_bank_image[0], 36, "creatures_body_sprite_bank_build count lo");
    expect_u8(body_bank_image[1], 0, "creatures_body_sprite_bank_build count hi");
    expect_u32((uint32_t)body_bank_image[4] |
                   ((uint32_t)body_bank_image[5] << 8) |
                   ((uint32_t)body_bank_image[6] << 16) |
                   ((uint32_t)body_bank_image[7] << 24),
        290u, "creatures_body_sprite_bank_build first offset");
    expect_u32((uint32_t)body_bank_image[212] |
                   ((uint32_t)body_bank_image[213] << 8) |
                   ((uint32_t)body_bank_image[214] << 16) |
                   ((uint32_t)body_bank_image[215] << 24),
        316u, "creatures_body_sprite_bank_build slot1 first offset");
    expect_u8(body_bank_image[292], 10, "creatures_body_sprite_bank_build first pixel");
    expect_u8(body_bank_image[318], 40, "creatures_body_sprite_bank_build slot1 first pixel");
    memset(&body_constructor_bank_result, 0xff, sizeof(body_constructor_bank_result));
    body_constructor_bank_result.slot_frame_starts[0] = 0;
    body_constructor_bank_result.slot_frame_starts[1] = 26;
    body_constructor_bank_result.slot_frame_starts[2] = 36;
    body_constructor_bank_result.slot_frame_starts[3] = 46;
    body_constructor_bank_result.slot_frame_starts[4] = 56;
    body_constructor_bank_result.slot_frame_starts[5] = 66;
    body_constructor_bank_result.slot_frame_starts[6] = 76;
    body_constructor_bank_result.slot_frame_starts[7] = 86;
    body_constructor_bank_result.slot_frame_starts[8] = 96;
    body_constructor_bank_result.slot_frame_starts[9] = 106;
    body_constructor_bank_result.slot_frame_starts[10] = 116;
    body_constructor_bank_result.slot_frame_starts[11] = 126;
    body_constructor_bank_result.slot_frame_starts[12] = 136;
    body_constructor_bank_result.slot_frame_starts[13] = 146;
    expect_true(creatures_body_layout_construct_sprites(&body_constructor_layout,
                    &body_sprite_storage, &body_constructor_frame_set, 1800, &body_constructor_bank_result,
                    &layout_pair_table, body_constructor_quad_tables),
        "creatures_body_layout_construct_sprites");
    expect_true(body_constructor_layout.root_sprite == &body_sprite_storage.root_sprite,
        "creatures_body_layout_construct_sprites root ptr");
    expect_i32(body_constructor_layout.root_sprite->base.render_depth_base, 1800,
        "creatures_body_layout_construct_sprites render depth");
    expect_i32(body_constructor_layout.root_sprite->base.body_slot_group, 1,
        "creatures_body_layout_construct_sprites root slot group");
    expect_u8(body_constructor_layout.root_sprite->base.pose_selector, 26,
        "creatures_body_layout_construct_sprites root pose");
    expect_true(body_constructor_layout.chain_heads[0] == &body_sprite_storage.chain0[0],
        "creatures_body_layout_construct_sprites chain0 head");
    expect_true(body_constructor_layout.chain_heads[1] == &body_sprite_storage.chain1[0],
        "creatures_body_layout_construct_sprites chain1 head");
    expect_true(body_constructor_layout.chain_heads[2] == &body_sprite_storage.chain2[0],
        "creatures_body_layout_construct_sprites chain2 head");
    expect_true(body_constructor_layout.chain_heads[3] == &body_sprite_storage.chain3[0],
        "creatures_body_layout_construct_sprites chain3 head");
    expect_true(body_constructor_layout.chain_heads[4] == &body_sprite_storage.chain4[0],
        "creatures_body_layout_construct_sprites chain4 head");
    expect_true(body_constructor_layout.chain_heads[5] == &body_sprite_storage.chain5[0],
        "creatures_body_layout_construct_sprites chain5 head");
    expect_true(body_sprite_storage.chain1[0].next == &body_sprite_storage.chain1[1],
        "creatures_body_layout_construct_sprites chain1 next0");
    expect_true(body_sprite_storage.chain1[1].next == &body_sprite_storage.chain1[2],
        "creatures_body_layout_construct_sprites chain1 next1");
    expect_true(body_sprite_storage.chain1[2].next == NULL,
        "creatures_body_layout_construct_sprites chain1 tail");
    expect_true(body_sprite_storage.chain5[0].next == &body_sprite_storage.chain5[1],
        "creatures_body_layout_construct_sprites chain5 next");
    expect_true(body_sprite_storage.chain5[1].next == NULL,
        "creatures_body_layout_construct_sprites chain5 tail");
    expect_u8(body_sprite_storage.chain0[0].base.pose_selector, 0,
        "creatures_body_layout_construct_sprites chain0 pose");
    expect_u8(body_sprite_storage.chain1[0].base.pose_selector, 36,
        "creatures_body_layout_construct_sprites chain1 slot2 pose");
    expect_u8(body_sprite_storage.chain1[1].base.pose_selector, 46,
        "creatures_body_layout_construct_sprites chain1 slot3 pose");
    expect_u8(body_sprite_storage.chain1[2].base.pose_selector, 56,
        "creatures_body_layout_construct_sprites chain1 slot4 pose");
    expect_u8(body_sprite_storage.chain2[0].base.pose_selector, 66,
        "creatures_body_layout_construct_sprites chain2 slot5 pose");
    expect_u8(body_sprite_storage.chain2[1].base.pose_selector, 76,
        "creatures_body_layout_construct_sprites chain2 slot6 pose");
    expect_u8(body_sprite_storage.chain2[2].base.pose_selector, 86,
        "creatures_body_layout_construct_sprites chain2 slot7 pose");
    expect_u8(body_sprite_storage.chain3[0].base.pose_selector, 96,
        "creatures_body_layout_construct_sprites chain3 slot8 pose");
    expect_u8(body_sprite_storage.chain3[1].base.pose_selector, 106,
        "creatures_body_layout_construct_sprites chain3 slot9 pose");
    expect_u8(body_sprite_storage.chain4[0].base.pose_selector, 116,
        "creatures_body_layout_construct_sprites chain4 slot10 pose");
    expect_u8(body_sprite_storage.chain4[1].base.pose_selector, 126,
        "creatures_body_layout_construct_sprites chain4 slot11 pose");
    memset(&body_graph_recipe, 0, sizeof(body_graph_recipe));
    body_graph_recipe.body_variant_group_base = 2;
    body_graph_recipe.include_extended_slots = 1;
    body_graph_recipe.active_slot_count = 14;
    body_graph_recipe.total_frame_entries = 156;
    expect_true(creatures_body_layout_load_and_construct_sprites(&body_graph_layout,
                    &body_graph_storage, &body_table_storage, &body_constructor_frame_set, 1900,
                    &body_graph_recipe, &body_constructor_bank_result, 1, 0, &body_graph_path_ops,
                    fake_body_table_text_lookup, &body_table_lookup_context),
        "creatures_body_layout_load_and_construct_sprites");
    expect_true(body_table_storage.quad_anchor_loaded[0],
        "creatures_body_layout_load_and_construct_sprites slot0 loaded");
    expect_true(body_table_storage.quad_anchor_loaded[11],
        "creatures_body_layout_load_and_construct_sprites slot11 loaded");
    expect_true(body_table_storage.quad_anchor_loaded[12],
        "creatures_body_layout_load_and_construct_sprites slot12 loaded");
    expect_true(body_table_storage.quad_anchor_loaded[13],
        "creatures_body_layout_load_and_construct_sprites slot13 loaded");
    expect_u8(body_table_storage.root_anchors.left[0][0], 0,
        "creatures_body_layout_load_and_construct_sprites root left");
    expect_u8(body_table_storage.root_anchors.right[0][0], 100,
        "creatures_body_layout_load_and_construct_sprites root right");
    expect_u8(body_table_storage.quad_anchors[0].first[0], 10,
        "creatures_body_layout_load_and_construct_sprites quad first");
    expect_u8(body_table_storage.quad_anchors[13].fourth[9], 49,
        "creatures_body_layout_load_and_construct_sprites quad last");
    expect_true(body_graph_layout.root_sprite == &body_graph_storage.root_sprite,
        "creatures_body_layout_load_and_construct_sprites root ptr");
    expect_i32(body_graph_layout.root_sprite->base.render_depth_base, 1900,
        "creatures_body_layout_load_and_construct_sprites render depth");
    expect_u8(body_graph_layout.root_sprite->base.pose_selector, 26,
        "creatures_body_layout_load_and_construct_sprites root pose");
    expect_true(body_graph_layout.chain_heads[5] == &body_graph_storage.chain5[0],
        "creatures_body_layout_load_and_construct_sprites chain5 head");
    expect_true(body_graph_storage.chain1[0].next == &body_graph_storage.chain1[1],
        "creatures_body_layout_load_and_construct_sprites chain1 next0");
    expect_true(body_graph_storage.chain1[1].next == &body_graph_storage.chain1[2],
        "creatures_body_layout_load_and_construct_sprites chain1 next1");
    expect_u8(body_graph_storage.root_sprite.anchors.left[9][5], 95,
        "creatures_body_layout_load_and_construct_sprites copied root anchors");
    expect_u8(body_graph_storage.chain0[0].anchors.first[9], 19,
        "creatures_body_layout_load_and_construct_sprites copied quad anchors");
    expect_i32(body_graph_path_context.prompt_count, 0,
        "creatures_body_layout_load_and_construct_sprites no prompt");
    expect_true(creatures_body_layout_load_construct_and_apply_pose_string(&body_graph_layout,
                    &body_graph_storage, &body_table_storage, &body_constructor_frame_set, 1950,
                    &body_graph_recipe, &body_constructor_bank_result, 1, 0, &body_graph_path_ops,
                    fake_body_table_text_lookup, &body_table_lookup_context, pose_string_digits),
        "creatures_body_layout_load_construct_and_apply_pose_string");
    expect_i32(body_graph_layout.root_sprite->base.render_depth_base, 1950,
        "creatures_body_layout_load_construct_and_apply_pose_string render depth");
    expect_u8(body_graph_layout.root_sprite->base.pose_selector, 2,
        "creatures_body_layout_load_construct_and_apply_pose_string root pose");
    expect_i32(body_graph_storage.chain0[0].base.body_slot_group, 4,
        "creatures_body_layout_load_construct_and_apply_pose_string chain0 group");
    expect_i32(body_graph_storage.chain1[0].base.body_slot_group, 2,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 group0");
    expect_i32(body_graph_storage.chain1[1].base.body_slot_group, 3,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 group1");
    expect_i32(body_graph_storage.chain1[2].base.body_slot_group, 4,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 group2");
    expect_u8(body_graph_storage.chain1[0].base.pose_selector, 3,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 pose0");
    expect_u8(body_graph_storage.chain1[1].base.pose_selector, 4,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 pose1");
    expect_u8(body_graph_storage.chain1[2].base.pose_selector, 5,
        "creatures_body_layout_load_construct_and_apply_pose_string chain1 pose2");
    expect_true(memcmp(body_graph_layout.pose_string, pose_string_digits,
                    sizeof(body_graph_layout.pose_string)) == 0,
        "creatures_body_layout_load_construct_and_apply_pose_string stored pose");
    expect_str(creatures_creature_select_voice_asset(0x04010000u, 1), "male.vce",
        "creatures_creature_select_voice_asset male");
    expect_str(creatures_creature_select_voice_asset(0x04010000u, 2), "female.vce",
        "creatures_creature_select_voice_asset female");
    expect_str(creatures_creature_select_voice_asset(0u, 1), "grendel.vce",
        "creatures_creature_select_voice_asset grendel");
    body_refresh_runtime.creature_flags = 0x04010000u;
    body_refresh_runtime.species_token = 0x12345678;
    body_refresh_runtime.sex_selector = 1;
    body_refresh_runtime.body_variant_selector = 0;
    body_refresh_runtime.optional_seed_target = &body_refresh_seed_target;
    body_refresh_runtime.appearance_target = &body_refresh_appearance_target;
    body_refresh_runtime.runtime_target = &body_refresh_runtime_target;
    body_refresh_runtime.voice_target = &body_refresh_voice_target;
    expect_true(creatures_creature_refresh_body_assets(&body_refresh_runtime, &body_refresh_ops),
        "creatures_creature_refresh_body_assets default");
    expect_i32(body_refresh_context.init_call_count, 1,
        "creatures_creature_refresh_body_assets init count");
    expect_i32(body_refresh_context.seed_call_count, 1,
        "creatures_creature_refresh_body_assets seed count");
    expect_i32(body_refresh_context.body_call_count, 1,
        "creatures_creature_refresh_body_assets body count");
    expect_i32(body_refresh_context.appearance_call_count, 1,
        "creatures_creature_refresh_body_assets appearance count");
    expect_i32(body_refresh_context.runtime_call_count, 1,
        "creatures_creature_refresh_body_assets runtime count");
    expect_i32(body_refresh_context.voice_call_count, 1,
        "creatures_creature_refresh_body_assets voice count");
    expect_i32(body_refresh_context.last_species_token, 0x12345678,
        "creatures_creature_refresh_body_assets species");
    expect_u8(body_refresh_context.last_sex_selector, 1,
        "creatures_creature_refresh_body_assets sex");
    expect_u8(body_refresh_context.last_body_variant_selector, 0,
        "creatures_creature_refresh_body_assets variant");
    expect_true(body_refresh_context.last_seed_target == &body_refresh_seed_target,
        "creatures_creature_refresh_body_assets seed target");
    expect_true(body_refresh_context.last_appearance_target == &body_refresh_appearance_target,
        "creatures_creature_refresh_body_assets appearance target");
    expect_true(body_refresh_context.last_runtime_target == &body_refresh_runtime_target,
        "creatures_creature_refresh_body_assets runtime target");
    expect_true(body_refresh_context.last_voice_target == &body_refresh_voice_target,
        "creatures_creature_refresh_body_assets voice target");
    expect_str(body_refresh_context.last_voice_asset, "male.vce",
        "creatures_creature_refresh_body_assets voice asset");
    expect_str(body_refresh_context.call_order, "ISBARV",
        "creatures_creature_refresh_body_assets call order");
    expect_u8(body_refresh_context.last_state.bytes[3], 0x5a,
        "creatures_creature_refresh_body_assets seeded byte");
    expect_u8(body_refresh_context.last_state.bytes[4], 0xa0,
        "creatures_creature_refresh_body_assets built byte");
    memset(&body_refresh_context, 0, sizeof(body_refresh_context));
    body_refresh_runtime.creature_flags = 0;
    body_refresh_runtime.sex_selector = 2;
    body_refresh_runtime.body_variant_selector = 1;
    expect_true(creatures_creature_refresh_body_assets(&body_refresh_runtime, &body_refresh_ops),
        "creatures_creature_refresh_body_assets variant");
    expect_i32(body_refresh_context.seed_call_count, 0,
        "creatures_creature_refresh_body_assets variant seed skipped");
    expect_str(body_refresh_context.last_voice_asset, "grendel.vce",
        "creatures_creature_refresh_body_assets variant voice");
    expect_str(body_refresh_context.call_order, "IBARV",
        "creatures_creature_refresh_body_assets variant order");
    expect_u8(body_refresh_context.last_state.bytes[4], 0xa1,
        "creatures_creature_refresh_body_assets variant built byte");
    wait_behavior_runtime.body_variant_selector = 0;
    creatures_creature_start_waiting_behavior(&wait_behavior_runtime, wait_primary_scripts,
        wait_auxiliary_scripts, "WAIT FOR 40 SECS!", &wait_behavior_ops);
    expect_str(wait_behavior_runtime.primary_scripts[0].text, "wait00",
        "creatures_creature_start_waiting_behavior primary0");
    expect_i32(wait_behavior_runtime.primary_scripts[15].state_code, 0xff,
        "creatures_creature_start_waiting_behavior primary state");
    expect_str(wait_behavior_runtime.auxiliary_scripts[2].text, "aux02",
        "creatures_creature_start_waiting_behavior auxiliary2");
    expect_i32(wait_behavior_runtime.auxiliary_scripts[1].state_code, 0xff,
        "creatures_creature_start_waiting_behavior auxiliary state");
    expect_u8(wait_behavior_runtime.body_variant_selector, 1,
        "creatures_creature_start_waiting_behavior stage");
    expect_i32(wait_behavior_runtime.wait_state_code, 8,
        "creatures_creature_start_waiting_behavior wait state");
    expect_i32(wait_behavior_context.refresh_call_count, 1,
        "creatures_creature_start_waiting_behavior refresh count");
    expect_u8(wait_behavior_context.last_stage_seen, 1,
        "creatures_creature_start_waiting_behavior refresh stage");
    expect_str(wait_behavior_context.last_message, "WAIT FOR 40 SECS!",
        "creatures_creature_start_waiting_behavior message");
    memset(&wait_behavior_context, 0, sizeof(wait_behavior_context));
    wait_behavior_runtime.body_variant_selector = 3;
    creatures_creature_start_waiting_behavior(&wait_behavior_runtime, wait_primary_scripts,
        wait_auxiliary_scripts, "WAIT FOR 40 SECS!", &wait_behavior_ops);
    expect_i32(wait_behavior_context.refresh_call_count, 0,
        "creatures_creature_start_waiting_behavior existing stage refresh");
    expect_u8(wait_behavior_runtime.body_variant_selector, 3,
        "creatures_creature_start_waiting_behavior existing stage");
    memset(&growth_runtime, 0, sizeof(growth_runtime));
    memset(&growth_context, 0, sizeof(growth_context));
    growth_runtime.active_focus_target = 55;
    growth_runtime.default_focus_target = 99;
    growth_runtime.secondary_focus_target = 44;
    growth_runtime.body_variant_selector = 1;
    growth_runtime.enabled_growth_stages[1] = 1;
    growth_context.orientation_delta = -2;
    growth_context.behavior_code = 0x40;
    growth_context.target_distance = 100;
    growth_context.has_target_distance = 1;
    creatures_creature_update_attention_and_growth(&growth_runtime, &growth_ops);
    expect_i32(growth_runtime.negative_orientation_delta, 170,
        "creatures_creature_update_attention_and_growth negative delta");
    expect_i32(growth_runtime.positive_orientation_delta, 0,
        "creatures_creature_update_attention_and_growth positive delta");
    expect_u8(growth_runtime.primary_behavior_code, 0x40,
        "creatures_creature_update_attention_and_growth behavior code");
    expect_i32(growth_runtime.target_distance_bias, -106,
        "creatures_creature_update_attention_and_growth target bias");
    expect_i32((int)growth_runtime.active_focus_target, 0,
        "creatures_creature_update_attention_and_growth cleared focus");
    expect_i32(growth_runtime.active_focus_flag, 0,
        "creatures_creature_update_attention_and_growth active flag");
    expect_i32(growth_runtime.secondary_focus_flag, -1,
        "creatures_creature_update_attention_and_growth secondary flag");
    expect_u8(growth_runtime.body_variant_selector, 2,
        "creatures_creature_update_attention_and_growth stage advance");
    expect_i32(growth_context.refresh_call_count, 1,
        "creatures_creature_update_attention_and_growth refresh count");
    expect_i32(growth_context.finalize_call_count, 0,
        "creatures_creature_update_attention_and_growth finalize count");
    memset(&growth_runtime, 0, sizeof(growth_runtime));
    memset(&growth_context, 0, sizeof(growth_context));
    growth_runtime.default_focus_target = 77;
    growth_runtime.body_variant_selector = 6;
    growth_runtime.enabled_growth_stages[6] = 1;
    growth_runtime.force_finalize_growth = 1;
    growth_context.orientation_delta = 2;
    growth_context.behavior_code = 0xa1;
    creatures_creature_update_attention_and_growth(&growth_runtime, &growth_ops);
    expect_i32(growth_runtime.negative_orientation_delta, 0,
        "creatures_creature_update_attention_and_growth positive path left");
    expect_i32(growth_runtime.positive_orientation_delta, 170,
        "creatures_creature_update_attention_and_growth positive path right");
    expect_i32((int)growth_runtime.active_focus_target, 77,
        "creatures_creature_update_attention_and_growth default focus");
    expect_i32(growth_runtime.active_focus_flag, -1,
        "creatures_creature_update_attention_and_growth default focus flag");
    expect_i32(growth_runtime.target_distance_bias, 0,
        "creatures_creature_update_attention_and_growth missing target");
    expect_u8(growth_runtime.body_variant_selector, 7,
        "creatures_creature_update_attention_and_growth final stage");
    expect_i32(growth_context.refresh_call_count, 0,
        "creatures_creature_update_attention_and_growth final refresh count");
    expect_i32(growth_context.finalize_call_count, 2,
        "creatures_creature_update_attention_and_growth final finalize count");
    imported_creature_runtime.identity_token = 1234;
    imported_creature_runtime.activity_state = 9;
    imported_creature_runtime.body_variant_selector = 4;
    imported_creature_context.duplicate_count = 1;
    imported_creature_context.regenerated_identity_token = 5678;
    imported_creature_context.loaded_export.identity_token = 1234;
    expect_true(creatures_creature_rebuild_from_export_genome(&imported_creature_runtime,
                    &imported_creature_source, &imported_creature_ops),
        "creatures_creature_rebuild_from_export_genome");
    expect_i32(imported_creature_runtime.identity_token, 5678,
        "creatures_creature_rebuild_from_export_genome identity");
    expect_u8(imported_creature_runtime.activity_state, 0,
        "creatures_creature_rebuild_from_export_genome final activity");
    expect_i32(imported_creature_context.regenerate_call_count, 1,
        "creatures_creature_rebuild_from_export_genome regenerate count");
    expect_i32(imported_creature_context.prepare_call_count, 1,
        "creatures_creature_rebuild_from_export_genome prepare count");
    expect_i32(imported_creature_context.build_call_count, 1,
        "creatures_creature_rebuild_from_export_genome build count");
    expect_u8(imported_creature_context.last_build_stage, 4,
        "creatures_creature_rebuild_from_export_genome build stage");
    expect_i32(imported_creature_context.release_call_count, 1,
        "creatures_creature_rebuild_from_export_genome release count");
    expect_i32(imported_creature_context.release_mode, 1,
        "creatures_creature_rebuild_from_export_genome release mode");
    expect_i32(imported_creature_context.refresh_bounds_call_count, 2,
        "creatures_creature_rebuild_from_export_genome refresh bounds count");
    expect_u8(imported_creature_context.refresh_bounds_activity_states[0], 2,
        "creatures_creature_rebuild_from_export_genome refresh bounds stage0");
    expect_u8(imported_creature_context.refresh_bounds_activity_states[1], 0,
        "creatures_creature_rebuild_from_export_genome refresh bounds stage1");
    expect_i32(imported_creature_context.place_call_count, 1,
        "creatures_creature_rebuild_from_export_genome place count");
    expect_i32(imported_creature_context.last_place_x, CREATURES_IMPORTED_CREATURE_WORLD_X,
        "creatures_creature_rebuild_from_export_genome place x");
    expect_i32(imported_creature_context.last_place_y, CREATURES_IMPORTED_CREATURE_WORLD_Y,
        "creatures_creature_rebuild_from_export_genome place y");
    expect_u8(imported_creature_context.activity_state_during_place, 2,
        "creatures_creature_rebuild_from_export_genome place activity");
    expect_i32(imported_creature_context.notify_call_count, 1,
        "creatures_creature_rebuild_from_export_genome notify count");
    expect_i32(imported_creature_context.last_notify_value, 1,
        "creatures_creature_rebuild_from_export_genome notify value");
    expect_i32(imported_creature_context.global_event_call_count, 1,
        "creatures_creature_rebuild_from_export_genome event count");
    expect_i32(imported_creature_context.last_event_channel, 3,
        "creatures_creature_rebuild_from_export_genome event channel");
    expect_i32(imported_creature_context.last_event_code, 1,
        "creatures_creature_rebuild_from_export_genome event code");
    expect_i32(imported_creature_context.last_event_value, 1,
        "creatures_creature_rebuild_from_export_genome event value");
    expect_i32(imported_creature_context.flush_call_count, 1,
        "creatures_creature_rebuild_from_export_genome flush count");
    memset(&imported_creature_runtime, 0, sizeof(imported_creature_runtime));
    memset(&imported_creature_context, 0, sizeof(imported_creature_context));
    imported_creature_runtime.identity_token = 42;
    imported_creature_runtime.body_variant_selector = 1;
    imported_creature_context.fail_load = 1;
    expect_false(creatures_creature_rebuild_from_export_genome(&imported_creature_runtime,
                     &imported_creature_source, &imported_creature_ops),
        "creatures_creature_rebuild_from_export_genome load failure");
    expect_i32(imported_creature_context.prepare_call_count, 0,
        "creatures_creature_rebuild_from_export_genome load failure prepare");
    sex_random_context.values[0] = 0;
    sex_random_context.values[1] = 1;
    sex_random_context.values[2] = 0;
    sex_random_context.values[3] = 3;
    sex_random_context.value_count = 4;
    expect_u8(creatures_choose_population_balanced_sex(NULL, 0, fake_random_next,
                  &sex_random_context),
        1, "creatures_choose_population_balanced_sex empty even");
    expect_u8(creatures_choose_population_balanced_sex(NULL, 0, fake_random_next,
                  &sex_random_context),
        2, "creatures_choose_population_balanced_sex empty odd");
    expect_u8(creatures_choose_population_balanced_sex(population_members,
                  sizeof(population_members) / sizeof(population_members[0]), fake_random_next,
                  &sex_random_context),
        2, "creatures_choose_population_balanced_sex favors female");
    expect_u8(creatures_choose_population_balanced_sex(population_members,
                  sizeof(population_members) / sizeof(population_members[0]), fake_random_next,
                  &sex_random_context),
        1, "creatures_choose_population_balanced_sex favors male");

    DAT_00436e08[0] = 0x0f;
    DAT_00436d88[0] = 0x8000;
    component = 200;
    expect_u8(scale_component_if_mask_matches(&component, 0, 0x0f), 100,
        "scale_component_if_mask_matches matched");
    component = 200;
    expect_u8(scale_component_if_mask_matches(&component, 0, 0x01), 200,
        "scale_component_if_mask_matches unmatched");

    g_scroll_runtime.current_position = 10;
    DAT_00435214 = 50;
    update_scroll_target(&widget, 1, 0);
    expect_i32(g_scroll_runtime.current_position, 26, "update_scroll_target step right");
    expect_i32(g_scroll_runtime.last_delta, 16, "update_scroll_target delta right");

    g_scroll_runtime.current_position = 10;
    update_scroll_target(&widget, 2, 0);
    expect_i32(g_scroll_runtime.current_position, 0, "update_scroll_target clamp left");
    expect_i32(g_scroll_runtime.last_delta, -10, "update_scroll_target delta left");

    g_scroll_runtime.current_position = 10;
    update_scroll_target(&widget, 7, 0);
    expect_i32(g_scroll_runtime.current_position, 100, "update_scroll_target max extent");
    expect_i32(g_scroll_runtime.last_delta, 90, "update_scroll_target delta max extent");

    reset_hatchery_selection_state(&selection);
    expect_i32((int)selection.fields[0], 0, "reset_hatchery_selection_state field0");
    expect_i32((int)selection.fields[4], 0, "reset_hatchery_selection_state field4");

    expect_str(build_hatchery_sound_path("ABCD"), "Sounds\\ABCD.wav",
        "build_hatchery_sound_path");

    memset(registry_buffer, 0, sizeof(registry_buffer));
    expect_true(hatchery_registry_read(&registry, 0, "Location", (uint8_t *)registry_buffer,
                    (uint32_t)sizeof(registry_buffer)),
        "hatchery_registry_read user hive");
    expect_str(registry_buffer, "user-value", "hatchery_registry_read user payload");

    memset(registry_buffer, 0, sizeof(registry_buffer));
    expect_true(hatchery_registry_read(&registry, 1, "Location", (uint8_t *)registry_buffer,
                    (uint32_t)sizeof(registry_buffer)),
        "hatchery_registry_read machine hive");
    expect_str(registry_buffer, "machine-value", "hatchery_registry_read machine payload");

    registry.is_open = 0;
    expect_false(hatchery_registry_read(&registry, 0, "Location", (uint8_t *)registry_buffer,
                     (uint32_t)sizeof(registry_buffer)),
        "hatchery_registry_read closed handler");

    set_hatchery_communicate_value(0x12345678u);
    expect_u32(g_hatchery_communicate_value, 0x12345678u, "set_hatchery_communicate_value");

    expect_true(remove_read_install_value(&remove_registry_ops, "Main Directory", registry_buffer,
                    sizeof(registry_buffer)),
        "remove_read_install_value main directory");
    expect_str(registry_buffer, "C:\\Creatures", "remove_read_install_value payload");

    expect_true(remove_collect_install_layout(&remove_registry_ops, &remove_layout),
        "remove_collect_install_layout");
    expect_str(remove_layout.main_directory, "C:\\Creatures",
        "remove_collect_install_layout main directory");
    expect_str(remove_layout.image_directory, "C:\\Creatures\\Images",
        "remove_collect_install_layout image directory");
    expect_str(remove_layout.genetics_directory, "C:\\Creatures\\Genetics",
        "remove_collect_install_layout genetics directory");
    expect_str(remove_layout.uninstall_command, "C:\\Creatures\\Uninst.exe /S",
        "remove_collect_install_layout uninstall string");

    remove_build_cleanup_plan(&remove_layout, &remove_plan);
    expect_size(remove_plan.action_count, 8, "remove_build_cleanup_plan action count");
    expect_i32((int)remove_plan.actions[0].kind, REMOVE_ACTION_DELETE_GLOB,
        "remove_build_cleanup_plan first action kind");
    expect_str(remove_plan.actions[0].target, "C:\\Creatures\\TempBU\\*.sfc",
        "remove_build_cleanup_plan first action target");
    expect_i32((int)remove_plan.actions[2].kind, REMOVE_ACTION_DELETE_FILE,
        "remove_build_cleanup_plan file action kind");
    expect_str(remove_plan.actions[2].target, "C:\\Creatures\\chemicals.str",
        "remove_build_cleanup_plan file action target");

    expect_size(remove_delete_files_matching_pattern(
                    &remove_filesystem_ops, "C:\\Creatures\\TempBU", "*.sfc"),
        2, "remove_delete_files_matching_pattern");
    expect_str(remove_filesystem_context.deleted_paths[0], "C:\\Creatures\\TempBU\\save1.sfc",
        "remove_delete_files_matching_pattern first deleted path");
    expect_str(remove_filesystem_context.deleted_paths[1], "C:\\Creatures\\TempBU\\save2.sfc",
        "remove_delete_files_matching_pattern second deleted path");

    remove_filesystem_context.deleted_path_count = 0;
    expect_size(remove_execute_cleanup_plan(&remove_plan, &remove_filesystem_ops), 10,
        "remove_execute_cleanup_plan delete count");
    expect_str(remove_filesystem_context.deleted_paths[0], "C:\\Creatures\\TempBU\\save1.sfc",
        "remove_execute_cleanup_plan first deleted path");
    expect_str(remove_filesystem_context.deleted_paths[2],
        "C:\\Creatures\\Backup\\album.photo album",
        "remove_execute_cleanup_plan backup deleted path");
    expect_str(remove_filesystem_context.deleted_paths[9],
        "C:\\Creatures\\Genetics\\norn.gen",
        "remove_execute_cleanup_plan final deleted path");

    registry_keys = remove_registry_cleanup_keys(&registry_key_count);
    expect_size(registry_key_count, 24, "remove_registry_cleanup_keys count");
    expect_str(registry_keys[0],
        "Software\\Classes\\CLSID\\{77C733E1-6797-11CF-BBF2-0020AF71E433}",
        "remove_registry_cleanup_keys first");
    expect_str(registry_keys[registry_key_count - 1],
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey",
        "remove_registry_cleanup_keys last");

    expect_size(remove_execute_registry_cleanup(&remove_registry_ops), 24,
        "remove_execute_registry_cleanup delete count");
    expect_str(remove_registry_context.deleted_keys[0],
        "Software\\Classes\\CLSID\\{77C733E1-6797-11CF-BBF2-0020AF71E433}",
        "remove_execute_registry_cleanup first key");
    expect_str(remove_registry_context.deleted_keys[remove_registry_context.deleted_key_count - 1],
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey",
        "remove_execute_registry_cleanup last key");

    expect_true(remove_launch_uninstaller(&remove_shell_ops, remove_layout.uninstall_command),
        "remove_launch_uninstaller");
    expect_i32(remove_shell_context.call_count, 1, "remove_launch_uninstaller call count");
    expect_str(remove_shell_context.last_command, "C:\\Creatures\\Uninst.exe /S",
        "remove_launch_uninstaller command");

    expect_true(launcher_registry_handler_init(&launcher_registry_handler, &launcher_registry_ops,
                    "Millennium Interactive", "Creatures", "AppletConfig"),
        "launcher_registry_handler_init");
    expect_true(launcher_registry_handler.is_open, "launcher_registry_handler_init is open");
    expect_str(launcher_registry_handler.registry_path,
        "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
        "launcher_registry_handler_init registry path");
    expect_size(launcher_registry_context.created_key_count, 2,
        "launcher_registry_handler_init created key count");
    expect_str(launcher_registry_context.created_keys[0],
        "HKEY_CURRENT_USER|SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
        "launcher_registry_handler_init first key");
    expect_str(launcher_registry_context.created_keys[1],
        "HKEY_LOCAL_MACHINE|SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
        "launcher_registry_handler_init second key");

    value_size = sizeof(registry_buffer);
    expect_true(launcher_registry_read_value(&launcher_registry_handler, &launcher_registry_ops, 0,
                    "IntroPath", (uint8_t *)registry_buffer, &value_size),
        "launcher_registry_read_value current user");
    expect_str(registry_buffer, "D:\\Creatures\\ntro2.smk",
        "launcher_registry_read_value current user payload");

    value_size = sizeof(registry_buffer);
    expect_true(launcher_registry_read_value(&launcher_registry_handler, &launcher_registry_ops, 1,
                    "TitlePath", (uint8_t *)registry_buffer, &value_size),
        "launcher_registry_read_value local machine");
    expect_str(registry_buffer, "D:\\Creatures\\Title.bmp",
        "launcher_registry_read_value local machine payload");

    launcher_registry_read_or_default(&launcher_registry_handler, &launcher_registry_ops, 0,
        "MissingValue", (uint8_t *)registry_buffer, sizeof(registry_buffer),
        (const uint8_t *)"Creatures.exe");
    expect_str(registry_buffer, "Creatures.exe", "launcher_registry_read_or_default");

    expect_true(launcher_registry_write_string(&launcher_registry_handler, &launcher_registry_ops,
                    1, "BuildFile", "D:\\Creatures\\Build.txt"),
        "launcher_registry_write_string");
    expect_size(launcher_registry_context.write_count, 1, "launcher_registry_write_string count");
    expect_str(launcher_registry_context.writes[0].root_name, "HKEY_LOCAL_MACHINE",
        "launcher_registry_write_string root");
    expect_str(launcher_registry_context.writes[0].subkey,
        "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
        "launcher_registry_write_string subkey");
    expect_str(launcher_registry_context.writes[0].value_name, "BuildFile",
        "launcher_registry_write_string value name");
    expect_str(launcher_registry_context.writes[0].value, "D:\\Creatures\\Build.txt",
        "launcher_registry_write_string value");

    expect_true(
        creatures_registry_bootstrap_main_handler(&boot_registry_handler, &boot_registry_ops),
        "creatures_registry_bootstrap_main_handler");
    expect_true(boot_registry_handler.is_open,
        "creatures_registry_bootstrap_main_handler is open");
    expect_str(boot_registry_handler.registry_path,
        "SOFTWARE\\Millennium Interactive\\Creatures\\1.0",
        "creatures_registry_bootstrap_main_handler path");
    expect_size(boot_registry_context.created_key_count, 2,
        "creatures_registry_bootstrap_main_handler key count");
    expect_str(boot_registry_context.created_keys[0],
        "HKEY_CURRENT_USER|SOFTWARE\\Millennium Interactive\\Creatures\\1.0",
        "creatures_registry_bootstrap_main_handler current user key");
    expect_str(boot_registry_context.created_keys[1],
        "HKEY_LOCAL_MACHINE|SOFTWARE\\Millennium Interactive\\Creatures\\1.0",
        "creatures_registry_bootstrap_main_handler local machine key");

    memset(&boot_rect, 0, sizeof(boot_rect));
    expect_true(creatures_registry_read_rect(&boot_registry_handler, &boot_registry_ops, 0,
                    "WindowPosn", &boot_rect),
        "creatures_registry_read_rect current user");
    expect_i32(boot_rect.left, 32, "creatures_registry_read_rect left");
    expect_i32(boot_rect.top, 24, "creatures_registry_read_rect top");
    expect_i32(boot_rect.right, 0x280 + 32, "creatures_registry_read_rect right");
    expect_i32(boot_rect.bottom, 0x1e0 + 24, "creatures_registry_read_rect bottom");

    value_size = sizeof(registry_buffer);
    expect_true(creatures_registry_read_value(&boot_registry_handler, &boot_registry_ops, 1,
                    "Language", (uint8_t *)registry_buffer, &value_size),
        "creatures_registry_read_value local machine");
    expect_str(registry_buffer, "en-GB", "creatures_registry_read_value payload");

    expect_true(creatures_registry_write_string(&boot_registry_handler, &boot_registry_ops, 1,
                    "Primary Genome", "NORN.GEN"),
        "creatures_registry_write_string");
    expect_size(boot_registry_context.write_count, 1,
        "creatures_registry_write_string count");
    expect_str(boot_registry_context.writes[0].root_name, "HKEY_LOCAL_MACHINE",
        "creatures_registry_write_string root");
    expect_str(boot_registry_context.writes[0].subkey,
        "SOFTWARE\\Millennium Interactive\\Creatures\\1.0",
        "creatures_registry_write_string subkey");
    expect_str(boot_registry_context.writes[0].value_name, "Primary Genome",
        "creatures_registry_write_string name");
    expect_str((const char *)boot_registry_context.writes[0].data, "NORN.GEN",
        "creatures_registry_write_string payload");

    expect_true(creatures_registry_write_rect(&boot_registry_handler, &boot_registry_ops, 0,
                    "WindowPosn", &boot_offscreen_window_rect),
        "creatures_registry_write_rect");
    expect_size(boot_registry_context.write_count, 2,
        "creatures_registry_write_rect count");
    expect_size(boot_registry_context.writes[1].data_size, sizeof(CreaturesDisplayRect),
        "creatures_registry_write_rect size");
    memcpy(&boot_rect, boot_registry_context.writes[1].data, sizeof(boot_rect));
    expect_i32(boot_rect.left, 640, "creatures_registry_write_rect left");
    expect_i32(boot_rect.top, 480, "creatures_registry_write_rect top");

    memset(&boot_pair, 0, sizeof(boot_pair));
    expect_true(creatures_registry_read_pair32(&boot_registry_handler, &boot_registry_ops, 0,
                    "EyePosn", &boot_pair),
        "creatures_registry_read_pair32 current user");
    expect_i32(boot_pair.first, 19, "creatures_registry_read_pair32 first");
    expect_i32(boot_pair.second, 27, "creatures_registry_read_pair32 second");

    boot_pair.first = 88;
    boot_pair.second = 144;
    expect_true(creatures_registry_write_pair32(&boot_registry_handler, &boot_registry_ops, 0,
                    "EyePosn", &boot_pair),
        "creatures_registry_write_pair32");
    expect_size(boot_registry_context.write_count, 3,
        "creatures_registry_write_pair32 count");
    memcpy(&boot_pair, boot_registry_context.writes[2].data, sizeof(boot_pair));
    expect_i32(boot_pair.first, 88, "creatures_registry_write_pair32 first");
    expect_i32(boot_pair.second, 144, "creatures_registry_write_pair32 second");

    memset(&boot_rect, 0, sizeof(boot_rect));
    creatures_registry_read_or_default_rect(&boot_registry_handler, &boot_registry_ops, 0,
        "MissingWindowPosn", &boot_rect, &boot_saved_window_rect);
    expect_i32(boot_rect.left, 32, "creatures_registry_read_or_default_rect left");
    expect_i32(boot_rect.top, 24, "creatures_registry_read_or_default_rect top");
    expect_size(boot_registry_context.write_count, 4,
        "creatures_registry_read_or_default_rect write count");
    expect_str(boot_registry_context.writes[3].value_name, "MissingWindowPosn",
        "creatures_registry_read_or_default_rect name");
    memcpy(&boot_rect, boot_registry_context.writes[3].data, sizeof(boot_rect));
    expect_i32(boot_rect.right, 0x280 + 32,
        "creatures_registry_read_or_default_rect right");
    expect_i32(boot_rect.bottom, 0x1e0 + 24,
        "creatures_registry_read_or_default_rect bottom");

    memset(&boot_pair, 0, sizeof(boot_pair));
    creatures_registry_read_or_default_pair32(&boot_registry_handler, &boot_registry_ops, 0,
        "MissingEyePosn", &boot_pair, &boot_saved_eye_pos);
    expect_i32(boot_pair.first, 19, "creatures_registry_read_or_default_pair32 first");
    expect_i32(boot_pair.second, 27, "creatures_registry_read_or_default_pair32 second");
    expect_size(boot_registry_context.write_count, 5,
        "creatures_registry_read_or_default_pair32 count");
    expect_str(boot_registry_context.writes[4].value_name, "MissingEyePosn",
        "creatures_registry_read_or_default_pair32 name");

    memset(&boot_window_placement, 0, sizeof(boot_window_placement));
    boot_window_context.finalize_call_count = 0;
    creatures_window_bootstrap_placement(&boot_window_placement, &boot_registry_handler,
        &boot_registry_ops, &boot_window_ops);
    expect_i32(boot_window_placement.x, 32, "creatures_window_bootstrap_placement x");
    expect_i32(boot_window_placement.y, 24, "creatures_window_bootstrap_placement y");
    expect_i32(boot_window_placement.width, 0x280,
        "creatures_window_bootstrap_placement width");
    expect_i32(boot_window_placement.height, 0x1e0,
        "creatures_window_bootstrap_placement height");
    expect_u32(boot_window_placement.style, 0x00cf0000u,
        "creatures_window_bootstrap_placement style");
    expect_i32(boot_window_context.finalize_call_count, 1,
        "creatures_window_bootstrap_placement finalize count");
    expect_i32(boot_window_context.finalized_placement.x, 32,
        "creatures_window_bootstrap_placement finalized x");

    memcpy(boot_registry_entries[0].data, &boot_offscreen_window_rect,
        sizeof(boot_offscreen_window_rect));
    memset(&boot_window_placement, 0, sizeof(boot_window_placement));
    creatures_window_bootstrap_placement(&boot_window_placement, &boot_registry_handler,
        &boot_registry_ops, &boot_window_ops);
    expect_i32(boot_window_placement.x, 0,
        "creatures_window_bootstrap_placement offscreen reset x");
    expect_i32(boot_window_placement.y, 0,
        "creatures_window_bootstrap_placement offscreen reset y");
    expect_i32(boot_window_placement.width, 0x280,
        "creatures_window_bootstrap_placement offscreen reset width");
    expect_i32(boot_window_placement.height, 0x1e0,
        "creatures_window_bootstrap_placement offscreen reset height");

    memset(&saved_window_context, 0, sizeof(saved_window_context));
    saved_window_context.next_rect = boot_saved_window_rect;
    creatures_main_window_save_placement_and_shutdown((void *)0x1234, &boot_registry_handler,
        &boot_registry_ops, &main_window_state_ops);
    expect_i32(saved_window_context.read_rect_call_count, 1,
        "creatures_main_window_save_placement_and_shutdown read count");
    expect_i32(saved_window_context.shutdown_call_count, 1,
        "creatures_main_window_save_placement_and_shutdown shutdown count");
    expect_size(boot_registry_context.write_count, 6,
        "creatures_main_window_save_placement_and_shutdown write count");
    expect_str(boot_registry_context.writes[5].value_name, "WindowPosn",
        "creatures_main_window_save_placement_and_shutdown name");

    memset(&saved_window_context, 0, sizeof(saved_window_context));
    saved_window_context.is_iconic = 1;
    creatures_main_window_save_placement_and_shutdown((void *)0x5678, &boot_registry_handler,
        &boot_registry_ops, &main_window_state_ops);
    expect_i32(saved_window_context.read_rect_call_count, 0,
        "creatures_main_window_save_placement_and_shutdown iconic skip read");
    expect_i32(saved_window_context.shutdown_call_count, 1,
        "creatures_main_window_save_placement_and_shutdown iconic shutdown");
    expect_size(boot_registry_context.write_count, 6,
        "creatures_main_window_save_placement_and_shutdown iconic write count");

    memset(&saved_window_context, 0, sizeof(saved_window_context));
    saved_window_context.next_rect = boot_saved_window_rect;
    creatures_eye_window_save_position_and_destroy((void *)0x9999, (void *)0x8888,
        &boot_registry_handler, &boot_registry_ops, &eye_window_state_ops);
    expect_i32(saved_window_context.read_rect_call_count, 1,
        "creatures_eye_window_save_position_and_destroy read count");
    expect_i32(saved_window_context.destroy_call_count, 1,
        "creatures_eye_window_save_position_and_destroy destroy count");
    expect_true(saved_window_context.last_owner == (void *)0x9999,
        "creatures_eye_window_save_position_and_destroy owner");
    expect_size(boot_registry_context.write_count, 7,
        "creatures_eye_window_save_position_and_destroy write count");
    expect_str(boot_registry_context.writes[6].value_name, "EyePosn",
        "creatures_eye_window_save_position_and_destroy name");
    memcpy(&boot_pair, boot_registry_context.writes[6].data, sizeof(boot_pair));
    expect_i32(boot_pair.first, 32,
        "creatures_eye_window_save_position_and_destroy left");
    expect_i32(boot_pair.second, 24,
        "creatures_eye_window_save_position_and_destroy top");

    memset(palette_primary_rgb, 0, sizeof(palette_primary_rgb));
    expect_true(creatures_palette_table_load(palette_primary_rgb, "C:\\Creatures\\Palettes\\",
                    "PALETTE.DTA", &palette_file_ops),
        "creatures_palette_table_load");
    expect_i32(palette_file_context.open_call_count, 1,
        "creatures_palette_table_load open count");
    expect_i32(palette_file_context.close_call_count, 1,
        "creatures_palette_table_load close count");
    expect_u8(palette_primary_rgb[0], (uint8_t)(palette_file_context.bytes[0x1e] << 2),
        "creatures_palette_table_load first red");
    expect_u8(palette_primary_rgb[1], (uint8_t)(palette_file_context.bytes[0x1f] << 2),
        "creatures_palette_table_load first green");
    expect_u8(palette_primary_rgb[2], (uint8_t)(palette_file_context.bytes[0x20] << 2),
        "creatures_palette_table_load first blue");

    memset(&palette_system_context.created_palettes[0], 0,
        sizeof(palette_system_context.created_palettes[0]));
    creatures_log_palette_seed_system_colors(
        &palette_system_context.created_palettes[0], &palette_system_ops);
    expect_i32(palette_system_context.create_palette_call_count, 1,
        "creatures_log_palette_seed_system_colors create count");
    expect_i32(palette_system_context.select_palette_call_count, 2,
        "creatures_log_palette_seed_system_colors select count");
    expect_i32(palette_system_context.realize_palette_call_count, 1,
        "creatures_log_palette_seed_system_colors realize count");
    expect_i32(palette_system_context.delete_object_call_count, 1,
        "creatures_log_palette_seed_system_colors delete count");
    expect_true(palette_system_context.last_deleted_object ==
            palette_system_context.created_handles[0],
        "creatures_log_palette_seed_system_colors deleted bootstrap palette");
    expect_i32(palette_system_context.release_dc_call_count, 1,
        "creatures_log_palette_seed_system_colors release count");
    expect_u8(palette_system_context.created_palettes[0].entries[0].red, 1,
        "creatures_log_palette_seed_system_colors low entry");
    expect_u8(palette_system_context.created_palettes[0]
                  .entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT]
                  .flags,
        4, "creatures_log_palette_seed_system_colors middle flags");
    expect_u8(palette_system_context.created_palettes[0]
                  .entries[CREATURES_PALETTE_ENTRY_COUNT -
                      CREATURES_PALETTE_SYSTEM_RESERVED_COUNT]
                  .red,
        101, "creatures_log_palette_seed_system_colors high entry");

    bootstrap_palette_handle = NULL;
    expect_true(creatures_palette_handle_create(
                    &bootstrap_palette_handle, palette_primary_rgb, &palette_system_ops),
        "creatures_palette_handle_create");
    expect_true(bootstrap_palette_handle == palette_system_context.created_handles[2],
        "creatures_palette_handle_create handle");
    expect_u8(palette_system_context.created_palettes[2]
                  .entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT]
                  .red,
        palette_primary_rgb[0], "creatures_palette_handle_create first game red");

    memset(palette_primary_rgb, 0, sizeof(palette_primary_rgb));
    memset(palette_secondary_rgb, 0, sizeof(palette_secondary_rgb));
    memset(palette_tertiary_rgb, 0, sizeof(palette_tertiary_rgb));
    memset(palette_quaternary_rgb, 0, sizeof(palette_quaternary_rgb));
    expect_true(creatures_palette_bootstrap(&bootstrap_palette_handle, palette_primary_rgb,
                    palette_secondary_rgb, palette_tertiary_rgb, palette_quaternary_rgb,
                    "C:\\Creatures\\Palettes\\", "PALETTE.DTA", &palette_file_ops,
                    &palette_system_ops),
        "creatures_palette_bootstrap");
    expect_i32(palette_file_context.open_call_count, 5,
        "creatures_palette_bootstrap total file opens");
    expect_i32(palette_system_context.create_palette_call_count, 5,
        "creatures_palette_bootstrap total palette creates");
    expect_true(bootstrap_palette_handle == palette_system_context.created_handles[4],
        "creatures_palette_bootstrap final handle");
    expect_u8(palette_secondary_rgb[0], palette_primary_rgb[0],
        "creatures_palette_bootstrap secondary copied");
    expect_u8(palette_tertiary_rgb[0], palette_primary_rgb[0],
        "creatures_palette_bootstrap tertiary copied");
    expect_u8(palette_quaternary_rgb[0], palette_primary_rgb[0],
        "creatures_palette_bootstrap quaternary copied");

    memset(&world_bootstrap_context, 0, sizeof(world_bootstrap_context));
    world_bootstrap_context.load_world_result = 1;
    world_bootstrap_context.bootstrap_palette_result = 1;
    world_metrics.first = 9;
    world_metrics.second = 8;
    world_metrics.third = 7;
    world_metrics.fourth = 6;
    world_loading_flag = 5;
    creatures_window_timer_stop((void *)0xaaaa, &world_timer_ops);
    creatures_window_timer_start((void *)0xaaaa, &world_timer_ops);
    expect_i32(world_bootstrap_context.kill_timer_call_count, 1,
        "creatures_window_timer_stop count");
    expect_i32(world_bootstrap_context.set_timer_call_count, 1,
        "creatures_window_timer_start count");
    expect_true(world_bootstrap_context.last_window_handle == (void *)0xaaaa,
        "creatures_window_timer_start handle");

    creatures_world_reset_metrics(&world_metrics, fake_world_reset_metrics_callback,
        &world_bootstrap_context);
    expect_i32(world_metrics.first, 0, "creatures_world_reset_metrics first");
    expect_i32(world_metrics.fourth, 0, "creatures_world_reset_metrics fourth");
    expect_i32(world_bootstrap_context.reset_metrics_callback_count, 1,
        "creatures_world_reset_metrics callback count");

    memset(&world_bootstrap_context, 0, sizeof(world_bootstrap_context));
    world_bootstrap_context.load_world_result = 1;
    world_bootstrap_context.bootstrap_palette_result = 1;
    world_metrics.first = 4;
    world_metrics.second = 3;
    world_metrics.third = 2;
    world_metrics.fourth = 1;
    world_loading_flag = 9;
    expect_true(creatures_world_load_bootstrap((void *)0x1111, &world_loading_flag,
                    (void *)0x2222, &world_metrics, &world_bootstrap_ops),
        "creatures_world_load_bootstrap success");
    expect_i32(world_loading_flag, 1, "creatures_world_load_bootstrap loading flag");
    expect_i32(world_metrics.first, 0, "creatures_world_load_bootstrap reset first");
    expect_i32(world_bootstrap_context.kill_timer_call_count, 1,
        "creatures_world_load_bootstrap stop timer count");
    expect_i32(world_bootstrap_context.set_timer_call_count, 1,
        "creatures_world_load_bootstrap start timer count");
    expect_true(world_bootstrap_context.last_world_source == (void *)0x1111,
        "creatures_world_load_bootstrap world source");
    expect_str(world_bootstrap_context.call_order, "KLPBMCSTW",
        "creatures_world_load_bootstrap call order");

    memset(&world_bootstrap_context, 0, sizeof(world_bootstrap_context));
    world_bootstrap_context.load_world_result = 0;
    world_bootstrap_context.bootstrap_palette_result = 1;
    world_loading_flag = 7;
    expect_false(creatures_world_load_bootstrap((void *)0x1111, &world_loading_flag,
                    (void *)0x2222, &world_metrics, &world_bootstrap_ops),
        "creatures_world_load_bootstrap load failure");
    expect_i32(world_loading_flag, 0,
        "creatures_world_load_bootstrap load failure loading flag");
    expect_str(world_bootstrap_context.call_order, "KL",
        "creatures_world_load_bootstrap load failure order");

    memset(&world_bootstrap_context, 0, sizeof(world_bootstrap_context));
    world_bootstrap_context.load_world_result = 1;
    world_bootstrap_context.bootstrap_palette_result = 0;
    world_loading_flag = 7;
    expect_false(creatures_world_load_bootstrap((void *)0x1111, &world_loading_flag,
                    (void *)0x2222, &world_metrics, &world_bootstrap_ops),
        "creatures_world_load_bootstrap palette failure");
    expect_i32(world_loading_flag, 0,
        "creatures_world_load_bootstrap palette failure loading flag");
    expect_str(world_bootstrap_context.call_order, "KLP",
        "creatures_world_load_bootstrap palette failure order");

    memset(&world_filesystem_context, 0, sizeof(world_filesystem_context));
    world_filesystem_context.match_sets = world_match_sets;
    world_filesystem_context.match_set_count =
        sizeof(world_match_sets) / sizeof(world_match_sets[0]);
    expect_size(creatures_world_directory_delete_mask(
                    "C:\\Creatures\\TempBu", "*.spr", &world_filesystem_ops),
        2, "creatures_world_directory_delete_mask");
    expect_str(world_filesystem_context.deleted_paths[0], "C:\\Creatures\\TempBu\\stale1.spr",
        "creatures_world_directory_delete_mask first");
    expect_str(world_filesystem_context.deleted_paths[1], "C:\\Creatures\\TempBu\\stale2.spr",
        "creatures_world_directory_delete_mask second");

    memset(&world_filesystem_context, 0, sizeof(world_filesystem_context));
    world_filesystem_context.match_sets = world_match_sets;
    world_filesystem_context.match_set_count =
        sizeof(world_match_sets) / sizeof(world_match_sets[0]);
    expect_size(creatures_world_directory_copy_mask("C:\\Creatures\\World",
                    "C:\\Creatures\\TempBu", "*.spr", &world_filesystem_ops),
        2, "creatures_world_directory_copy_mask");
    expect_str(world_filesystem_context.copied_sources[0], "C:\\Creatures\\World\\alpha.spr",
        "creatures_world_directory_copy_mask first source");
    expect_str(world_filesystem_context.copied_destinations[1],
        "C:\\Creatures\\TempBu\\beta.spr",
        "creatures_world_directory_copy_mask second destination");

    memset(&world_filesystem_context, 0, sizeof(world_filesystem_context));
    world_filesystem_context.match_sets = world_match_sets;
    world_filesystem_context.match_set_count =
        sizeof(world_match_sets) / sizeof(world_match_sets[0]);
    {
        const char *const extra_world_patterns[] = {"*.photo album"};

        expect_true(creatures_world_stage_temp_backup("C:\\Creatures\\World",
                        "C:\\Creatures\\TempBu", extra_world_patterns, 1,
                        &world_filesystem_ops),
            "creatures_world_stage_temp_backup");
    }
    expect_size(world_filesystem_context.ensure_directory_count, 1,
        "creatures_world_stage_temp_backup ensure count");
    expect_str(world_filesystem_context.ensured_directories[0], "C:\\Creatures\\TempBu",
        "creatures_world_stage_temp_backup ensured directory");
    expect_size(world_filesystem_context.deleted_path_count, 3,
        "creatures_world_stage_temp_backup delete count");
    expect_str(world_filesystem_context.deleted_paths[0], "C:\\Creatures\\TempBu\\stale.sfc",
        "creatures_world_stage_temp_backup deleted world");
    expect_str(world_filesystem_context.deleted_paths[2], "C:\\Creatures\\TempBu\\stale2.spr",
        "creatures_world_stage_temp_backup deleted final sprite");
    expect_size(world_filesystem_context.copy_count, 4,
        "creatures_world_stage_temp_backup copy count");
    expect_str(world_filesystem_context.copied_sources[0], "C:\\Creatures\\World\\World.sfc",
        "creatures_world_stage_temp_backup copied world");
    expect_str(world_filesystem_context.copied_destinations[3],
        "C:\\Creatures\\TempBu\\album.photo album",
        "creatures_world_stage_temp_backup copied extra");

    memset(&world_filesystem_context, 0, sizeof(world_filesystem_context));
    world_filesystem_context.match_sets = world_match_sets;
    world_filesystem_context.match_set_count =
        sizeof(world_match_sets) / sizeof(world_match_sets[0]);
    expect_true(creatures_world_restore_backup_to_temp(
                    "C:\\Creatures\\TempBu", "C:\\Creatures\\Backup", &world_filesystem_ops),
        "creatures_world_restore_backup_to_temp");
    expect_size(world_filesystem_context.ensure_directory_count, 2,
        "creatures_world_restore_backup_to_temp ensure count");
    expect_str(world_filesystem_context.ensured_directories[1], "C:\\Creatures\\Backup",
        "creatures_world_restore_backup_to_temp ensured backup");
    expect_size(world_filesystem_context.deleted_path_count, 3,
        "creatures_world_restore_backup_to_temp delete count");
    expect_size(world_filesystem_context.copy_count, 3,
        "creatures_world_restore_backup_to_temp copy count");
    expect_str(world_filesystem_context.copied_sources[0], "C:\\Creatures\\Backup\\backup.sfc",
        "creatures_world_restore_backup_to_temp copied world");
    expect_str(world_filesystem_context.copied_destinations[2],
        "C:\\Creatures\\TempBu\\restore2.spr",
        "creatures_world_restore_backup_to_temp copied final sprite");

    memset(&selected_ui_context, 0, sizeof(selected_ui_context));
    snprintf(selected_ui_context.pane_texts[6], sizeof(selected_ui_context.pane_texts[6]),
        "Health 000");
    snprintf(selected_ui_context.pane_texts[7], sizeof(selected_ui_context.pane_texts[7]),
        "Score 000000");
    selected_ui_context.score_parts[1] = 0x12;
    selected_ui_context.score_parts[4] = 0x34;
    selected_history.count = 0;
    memset(selected_history.slots, 0, sizeof(selected_history.slots));
    selected_creature_ptr = NULL;

    creatures_selected_creature_history_push(
        &selected_history, &active_creature, selected_creature_ptr, (void *)0x4444, &selected_ui_ops);
    creatures_selected_creature_history_push(
        &selected_history, &inactive_creature, selected_creature_ptr, (void *)0x4444, &selected_ui_ops);
    creatures_selected_creature_history_push(
        &selected_history, &non_creature, selected_creature_ptr, (void *)0x4444, &selected_ui_ops);
    expect_i32(selected_history.count, 3, "creatures_selected_creature_history_push count");
    expect_true(selected_history.slots[0] == &active_creature,
        "creatures_selected_creature_history_push first slot");
    expect_true(selected_history.slots[1] == &inactive_creature,
        "creatures_selected_creature_history_push second slot");
    expect_true(selected_history.slots[2] == &non_creature,
        "creatures_selected_creature_history_push third slot");

    creatures_status_bar_refresh_history_and_metrics(
        &selected_history, &active_creature, (void *)0x4444, &selected_ui_ops);
    expect_str(selected_ui_context.pane_texts[4], "Creature",
        "creatures_status_bar_refresh_history_and_metrics slot 4 text");
    expect_str(selected_ui_context.pane_texts[3], "Inactive",
        "creatures_status_bar_refresh_history_and_metrics slot 3 text");
    expect_str(selected_ui_context.pane_texts[2], "Other",
        "creatures_status_bar_refresh_history_and_metrics slot 2 text");
    expect_u32(selected_ui_context.pane_states[1], 0x04000100U,
        "creatures_status_bar_refresh_history_and_metrics slot 1 disabled");
    expect_u32(selected_ui_context.pane_states[6], 0,
        "creatures_status_bar_refresh_history_and_metrics active pane enabled");
    expect_str(selected_ui_context.pane_texts[6], "Health  50",
        "creatures_status_bar_refresh_history_and_metrics health text");
    expect_str(selected_ui_context.pane_texts[7], "Score   4660",
        "creatures_status_bar_refresh_history_and_metrics score text");
    expect_i32(selected_ui_context.invalidate_count, 4,
        "creatures_status_bar_refresh_history_and_metrics invalidate count");

    creatures_main_window_refresh_title("Creatures", &active_creature, &selected_ui_ops);
    expect_str(selected_ui_context.window_title, "Creatures - Alice",
        "creatures_main_window_refresh_title");

    creatures_selected_creature_history_remove(
        &selected_history, &inactive_creature, 1, &active_creature, (void *)0x4444, &selected_ui_ops);
    expect_i32(selected_history.count, 2, "creatures_selected_creature_history_remove count");
    expect_true(selected_ui_context.removed_inactive_creatures[0] == &inactive_creature,
        "creatures_selected_creature_history_remove inactive callback");

    memset(&selected_ui_context, 0, sizeof(selected_ui_context));
    snprintf(selected_ui_context.pane_texts[6], sizeof(selected_ui_context.pane_texts[6]),
        "Health 000");
    snprintf(selected_ui_context.pane_texts[7], sizeof(selected_ui_context.pane_texts[7]),
        "Score 000000");
    selected_ui_context.score_parts[1] = 1;
    selected_ui_context.score_parts[4] = 2;
    selected_history.count = 2;
    selected_history.slots[0] = &active_creature;
    selected_history.slots[1] = &non_creature;
    selected_history.slots[2] = NULL;
    selected_history.slots[3] = NULL;
    selected_creature_ptr = NULL;
    creatures_selected_creature_set(&selected_creature_ptr, &inactive_creature, 1,
        &selected_history, (void *)0x4444, (void *)0x5555, "Creatures", &selected_ui_ops);
    expect_true(selected_creature_ptr == &inactive_creature,
        "creatures_selected_creature_set pointer");
    expect_i32((int)selected_ui_context.selection_mode_count, 2,
        "creatures_selected_creature_set selection mode count");
    expect_i32(selected_ui_context.selection_mode_values[0], 6,
        "creatures_selected_creature_set initial selection mode");
    expect_i32(selected_ui_context.selection_mode_values[1], 8,
        "creatures_selected_creature_set inactive selection mode");
    expect_i32(selected_ui_context.close_eye_count, 1,
        "creatures_selected_creature_set close eye");
    expect_i32(selected_ui_context.refresh_main_surface_count, 1,
        "creatures_selected_creature_set refresh main surface");
    expect_i32(selected_ui_context.invalidate_count, 2,
        "creatures_selected_creature_set invalidate count");
    expect_true(selected_ui_context.last_invalidated_window == (void *)0x5555,
        "creatures_selected_creature_set invalidated window");
    expect_str(selected_ui_context.window_title, "Creatures - Bob",
        "creatures_selected_creature_set title");

    expect_size(launcher_launch_applets(
                    "C:\\Applet1.exe|C:\\Missing.exe|C:\\Applet2.exe", &launcher_shell_ops),
        2, "launcher_launch_applets");
    expect_size(launcher_shell_context.launch_count, 2, "launcher_launch_applets count");
    expect_str(
        launcher_shell_context.launched_targets[0], "C:\\Applet1.exe", "launcher_launch_applets first");
    expect_str(
        launcher_shell_context.launched_targets[1], "C:\\Applet2.exe", "launcher_launch_applets second");

    expect_true(launcher_warn_if_low_color_depth(&launcher_display_ops, 4),
        "launcher_warn_if_low_color_depth low");
    expect_i32(launcher_shell_context.low_color_warning_count, 1,
        "launcher_warn_if_low_color_depth low count");
    expect_false(launcher_warn_if_low_color_depth(&launcher_display_ops, 8),
        "launcher_warn_if_low_color_depth high");
    expect_i32(launcher_shell_context.low_color_warning_count, 1,
        "launcher_warn_if_low_color_depth high count");

    creatures_directory_config_init(
        &creatures_directory_config, "C:\\Games\\Creatures\\Creatures.exe");
    creatures_refresh_directory_table(&creatures_directory_config, &creatures_settings_ops, 1);
    expect_size(creatures_settings_context.entry_count, 8,
        "creatures_refresh_directory_table seeded entry count");
    expect_str(creatures_directory_slot_name(0), "Main Directory",
        "creatures_directory_slot_name main");
    expect_str(creatures_directory_slot_name(7), "Programs",
        "creatures_directory_slot_name programs");
    expect_str(creatures_directory_config.directories[0], "C:\\Games\\Creatures\\",
        "creatures_refresh_directory_table main directory");
    expect_str(creatures_directory_config.directories[1], "Sounds\\",
        "creatures_refresh_directory_table sound directory");
    expect_str(creatures_directory_config.directories[5], "Genetics\\",
        "creatures_refresh_directory_table genetics directory");
    expect_str(creatures_directory_config.directories[7], "",
        "creatures_refresh_directory_table programs directory");

    fake_creatures_write_setting("Sound Directory", "CustomSounds\\", &creatures_settings_context);
    creatures_refresh_directory_table(&creatures_directory_config, &creatures_settings_ops, 0);
    expect_str(creatures_directory_config.directories[1], "CustomSounds\\",
        "creatures_refresh_directory_table preserves existing value");
    expect_str(creatures_directory_config.directories[0], "C:\\Games\\Creatures\\",
        "creatures_refresh_directory_table reload main directory");

    expect_str(creatures_resolve_data_path(registry_buffer, sizeof(registry_buffer),
                   "C:\\Existing\\world.sfc", 0, &creatures_path_ops),
        "C:\\Existing\\world.sfc", "creatures_resolve_data_path existing");
    expect_i32(creatures_path_context.prompt_count, 0,
        "creatures_resolve_data_path existing prompt count");

    fake_creatures_write_setting("CD Drive", "D:", &creatures_settings_context);
    expect_str(creatures_resolve_data_path(registry_buffer, sizeof(registry_buffer),
                   "C:\\Genetics\\norn.gen", 0, &creatures_path_ops),
        "D:\\Genetics\\norn.gen", "creatures_resolve_data_path fallback");
    expect_i32(creatures_path_context.prompt_count, 1,
        "creatures_resolve_data_path fallback prompt count");

    expect_false(creatures_resolve_data_path(registry_buffer, sizeof(registry_buffer),
                     "C:\\Missing\\file.bin", 1, &creatures_path_ops) != NULL,
        "creatures_resolve_data_path fail_if_missing");

    body_token = creatures_body_data_make_token(0, 1, 1, 0);
    expect_u32(body_token,
        (uint32_t)('A' | ('1' << 8) | ('1' << 16) | ('0' << 24)),
        "creatures_body_data_make_token");
    expect_true(creatures_body_data_build_path(
                    body_path_buffer, sizeof(body_path_buffer), body_token, "att", "Body data\\") != NULL,
        "creatures_body_data_build_path");
    expect_str(body_path_buffer, "Body data\\A110att", "creatures_body_data_build_path path");

    expect_u32(creatures_body_data_find_existing_variant_token(0, 1, 2, 1, 1, "att",
                   "Body data\\", &body_path_ops, body_path_buffer, sizeof(body_path_buffer)),
        body_token, "creatures_body_data_find_existing_variant_token");
    expect_str(body_path_buffer, "Body data\\A110att",
        "creatures_body_data_find_existing_variant_token path");

    expect_true(creatures_body_data_load_pair_table(0, 1, 2, 1, 1, "att", "Body data\\",
                    &body_path_ops, fake_text_asset_lookup, &body_text_context, &body_pair_table,
                    body_path_buffer, sizeof(body_path_buffer)),
        "creatures_body_data_load_pair_table");
    expect_str(body_path_buffer, "Body data\\A110att",
        "creatures_body_data_load_pair_table path");
    expect_u8(body_pair_table.left[0][0], 0, "creatures_body_data_load_pair_table first left");
    expect_u8(body_pair_table.right[0][0], 100, "creatures_body_data_load_pair_table first right");
    expect_u8(body_pair_table.left[4][3], 43, "creatures_body_data_load_pair_table middle left");
    expect_u8(body_pair_table.right[4][3], 143,
        "creatures_body_data_load_pair_table middle right");
    expect_u8(body_pair_table.left[9][5], 95, "creatures_body_data_load_pair_table last left");
    expect_u8(body_pair_table.right[9][5], 195,
        "creatures_body_data_load_pair_table last right");

    expect_true(creatures_body_data_load_quad_table(1, 1, 2, 1, 1, "qad", "Body data\\",
                    &body_path_ops, fake_text_asset_lookup, &body_text_context, &body_quad_table,
                    body_path_buffer, sizeof(body_path_buffer)),
        "creatures_body_data_load_quad_table");
    expect_str(body_path_buffer, "Body data\\B511qad",
        "creatures_body_data_load_quad_table path");
    expect_u8(body_quad_table.first[0], 10, "creatures_body_data_load_quad_table first first");
    expect_u8(body_quad_table.second[0], 20, "creatures_body_data_load_quad_table first second");
    expect_u8(body_quad_table.third[0], 30, "creatures_body_data_load_quad_table first third");
    expect_u8(body_quad_table.fourth[0], 40, "creatures_body_data_load_quad_table first fourth");
    expect_u8(body_quad_table.first[9], 19, "creatures_body_data_load_quad_table last first");
    expect_u8(body_quad_table.second[9], 29, "creatures_body_data_load_quad_table last second");
    expect_u8(body_quad_table.third[9], 39, "creatures_body_data_load_quad_table last third");
    expect_u8(body_quad_table.fourth[9], 49, "creatures_body_data_load_quad_table last fourth");

    creatures_body_sprite_init_base(&body_sprite_base);
    expect_i32(body_sprite_base.kind, CREATURES_BODY_SPRITE_KIND_BASE,
        "creatures_body_sprite_init_base kind");
    expect_true(body_sprite_base.frame_set == NULL, "creatures_body_sprite_init_base frame set");
    expect_u8(body_sprite_base.current_frame_index, 0,
        "creatures_body_sprite_init_base current frame");
    expect_u8(body_sprite_base.pose_selector, 0, "creatures_body_sprite_init_base pose selector");
    expect_i32(body_sprite_base.render_depth_base, 0,
        "creatures_body_sprite_init_base render depth");
    expect_i32(body_sprite_base.body_slot_group, 0,
        "creatures_body_sprite_init_base slot group");
    expect_i32(body_sprite_base.frame_table_offset, 0,
        "creatures_body_sprite_init_base frame band");
    expect_i32(body_sprite_base.x, 0, "creatures_body_sprite_init_base x");
    expect_i32(body_sprite_base.y, 0, "creatures_body_sprite_init_base y");

    expect_i32(creatures_wrap_world_x(CREATURES_WORLD_WRAP_WIDTH), 0,
        "creatures_wrap_world_x wrap high");
    expect_i32(creatures_wrap_world_x(-1), CREATURES_WORLD_WRAP_WIDTH - 1,
        "creatures_wrap_world_x wrap low");
    expect_i32(creatures_wrap_world_x(42), 42, "creatures_wrap_world_x unchanged");

    creatures_body_sprite_set_position(&body_sprite_base, CREATURES_WORLD_WRAP_WIDTH + 12, 77);
    expect_i32(body_sprite_base.x, 12, "creatures_body_sprite_set_position x");
    expect_i32(body_sprite_base.y, 77, "creatures_body_sprite_set_position y");

    body_sprite_base.pose_selector = 3;
    body_sprite_base.body_slot_group = 1;
    creatures_body_sprite_select_frame_band(&body_sprite_base, 2);
    expect_i32(body_sprite_base.frame_table_offset, 1,
        "creatures_body_sprite_select_frame_band group1 mode2");
    expect_u8(body_sprite_base.current_frame_index, 4,
        "creatures_body_sprite_select_frame_band group1 mode2 current");
    creatures_body_sprite_select_frame_band(&body_sprite_base, 3);
    expect_i32(body_sprite_base.frame_table_offset, 5,
        "creatures_body_sprite_select_frame_band group1 mode3");
    expect_u8(body_sprite_base.current_frame_index, 8,
        "creatures_body_sprite_select_frame_band group1 mode3 current");
    creatures_body_sprite_select_frame_band(&body_sprite_base, 1);
    expect_i32(body_sprite_base.frame_table_offset, 8,
        "creatures_body_sprite_select_frame_band mode1");
    expect_u8(body_sprite_base.current_frame_index, 11,
        "creatures_body_sprite_select_frame_band mode1 current");
    body_sprite_base.body_slot_group = 4;
    creatures_body_sprite_select_frame_band(&body_sprite_base, 2);
    expect_i32(body_sprite_base.frame_table_offset, 8,
        "creatures_body_sprite_select_frame_band group4 override");
    body_sprite_base.body_slot_group = 5;
    creatures_body_sprite_select_frame_band(&body_sprite_base, 2);
    expect_i32(body_sprite_base.frame_table_offset, 9,
        "creatures_body_sprite_select_frame_band group5 override");
    expect_u8(body_sprite_base.current_frame_index, 12,
        "creatures_body_sprite_select_frame_band group5 current");
    creatures_body_sprite_apply_frame_override(&body_sprite_base, 1, 2, 0);
    expect_u8(body_sprite_base.current_frame_index, 28,
        "creatures_body_sprite_apply_frame_override extended");
    body_sprite_base.body_slot_group = 4;
    body_sprite_base.pose_selector = 4;
    body_sprite_base.frame_table_offset = 8;
    creatures_body_sprite_apply_frame_override(&body_sprite_base, 0, 1, 1);
    expect_u8(body_sprite_base.current_frame_index, 14,
        "creatures_body_sprite_apply_frame_override group4");

    expect_true(creatures_body_quad_sprite_init(&body_quad_sprite, &next_body_quad_sprite,
                    &body_quad_table, &cached_frame_set, 6) == &body_quad_sprite,
        "creatures_body_quad_sprite_init");
    expect_i32(body_quad_sprite.base.kind, CREATURES_BODY_SPRITE_KIND_QUAD_CHAIN,
        "creatures_body_quad_sprite_init kind");
    expect_true(body_quad_sprite.next == &next_body_quad_sprite,
        "creatures_body_quad_sprite_init next");
    expect_true(body_quad_sprite.base.frame_set == &cached_frame_set,
        "creatures_body_quad_sprite_init frame set");
    expect_u8(body_quad_sprite.base.pose_selector, 6,
        "creatures_body_quad_sprite_init pose selector");
    expect_i32(body_quad_sprite.base.body_slot_group, 1,
        "creatures_body_quad_sprite_init slot group");
    expect_i32(body_quad_sprite.base.frame_table_offset, 1,
        "creatures_body_quad_sprite_init frame band");
    expect_u8(body_quad_sprite.base.current_frame_index, 7,
        "creatures_body_quad_sprite_init current frame");
    expect_u8(body_quad_sprite.anchors.first[0], 10,
        "creatures_body_quad_sprite_init anchor first");
    expect_u8(body_quad_sprite.anchors.fourth[9], 49,
        "creatures_body_quad_sprite_init anchor last");

    expect_true(creatures_body_pair_sprite_init(&body_pair_sprite, &body_pair_table,
                    &cached_frame_set, 9, 1820) == &body_pair_sprite,
        "creatures_body_pair_sprite_init");
    expect_i32(body_pair_sprite.base.kind, CREATURES_BODY_SPRITE_KIND_PAIR_ROOT,
        "creatures_body_pair_sprite_init kind");
    expect_true(body_pair_sprite.base.frame_set == &cached_frame_set,
        "creatures_body_pair_sprite_init frame set");
    expect_u8(body_pair_sprite.base.pose_selector, 9,
        "creatures_body_pair_sprite_init pose selector");
    expect_i32(body_pair_sprite.base.render_depth_base, 1820,
        "creatures_body_pair_sprite_init render depth");
    expect_i32(body_pair_sprite.base.frame_table_offset, 0,
        "creatures_body_pair_sprite_init frame band");
    expect_u8(body_pair_sprite.anchors.left[0][0], 0,
        "creatures_body_pair_sprite_init first left");
    expect_u8(body_pair_sprite.anchors.right[9][5], 195,
        "creatures_body_pair_sprite_init last right");

    creatures_merge_wrapped_bounds(&merged_bounds,
        &(CreaturesWrappedRect){100, 20, 140, 60},
        &(CreaturesWrappedRect){90, 10, 160, 80});
    expect_i32(merged_bounds.left, 90, "creatures_merge_wrapped_bounds normal left");
    expect_i32(merged_bounds.top, 10, "creatures_merge_wrapped_bounds normal top");
    expect_i32(merged_bounds.right, 160, "creatures_merge_wrapped_bounds normal right");
    expect_i32(merged_bounds.bottom, 80, "creatures_merge_wrapped_bounds normal bottom");

    creatures_merge_wrapped_bounds(&merged_bounds,
        &(CreaturesWrappedRect){8300, 20, 8400, 40},
        &(CreaturesWrappedRect){10, 15, 30, 45});
    expect_i32(merged_bounds.left, 8300, "creatures_merge_wrapped_bounds wrapped left");
    expect_i32(merged_bounds.top, 15, "creatures_merge_wrapped_bounds wrapped top");
    expect_i32(merged_bounds.right, 8400,
        "creatures_merge_wrapped_bounds wrapped right");
    expect_i32(merged_bounds.bottom, 45, "creatures_merge_wrapped_bounds wrapped bottom");

    expect_true(creatures_body_pair_sprite_init(&layout_root_sprite, &layout_pair_table,
                    &layout_root_frame_set, 2, 1800) == &layout_root_sprite,
        "creatures_body_layout root init");
    layout_root_sprite.base.body_slot_group = 1;
    expect_true(creatures_body_quad_sprite_init(&layout_chain0_sprite, NULL,
                    &layout_chain0_table, &layout_chain0_frame_set, 1) == &layout_chain0_sprite,
        "creatures_body_layout chain0 init");
    expect_true(creatures_body_quad_sprite_init(&layout_chain1_sprite, NULL,
                    &layout_chain1_table, &layout_chain1_frame_set, 1) == &layout_chain1_sprite,
        "creatures_body_layout chain1 init");
    body_layout.root_sprite = &layout_root_sprite;
    body_layout.chain_heads[0] = &layout_chain0_sprite;
    body_layout.chain_heads[1] = &layout_chain1_sprite;
    body_layout.selection_mode = 2;
    body_layout.facing_variant = 0;
    body_layout.target_x = 100;
    body_layout.target_y = 200;
    body_layout.frame_override_increment = 0;
    body_layout.keep_extended_bank = 0;
    creatures_body_layout_rebuild(&body_layout);
    expect_i32(layout_root_sprite.base.frame_table_offset, 1,
        "creatures_body_layout_rebuild root band");
    expect_u8(layout_root_sprite.base.current_frame_index, 3,
        "creatures_body_layout_rebuild root current frame");
    expect_i32(layout_root_sprite.base.x, 86, "creatures_body_layout_rebuild root x");
    expect_i32(layout_root_sprite.base.y, 174, "creatures_body_layout_rebuild root y");
    expect_i32(layout_chain0_sprite.base.x, 89, "creatures_body_layout_rebuild chain0 x");
    expect_i32(layout_chain0_sprite.base.y, 177, "creatures_body_layout_rebuild chain0 y");
    expect_i32(layout_chain1_sprite.base.x, 95, "creatures_body_layout_rebuild chain1 x");
    expect_i32(layout_chain1_sprite.base.y, 192, "creatures_body_layout_rebuild chain1 y");
    expect_i32(body_layout.current_bounds.left, 86,
        "creatures_body_layout_rebuild bounds left");
    expect_i32(body_layout.current_bounds.top, 174,
        "creatures_body_layout_rebuild bounds top");
    expect_i32(body_layout.current_bounds.right, 110,
        "creatures_body_layout_rebuild bounds right");
    expect_i32(body_layout.current_bounds.bottom, 212,
        "creatures_body_layout_rebuild bounds bottom");
    expect_i32(body_layout.chain_end_x[0], 102,
        "creatures_body_layout_rebuild chain0 end x");
    expect_i32(body_layout.chain_end_y[0], 191,
        "creatures_body_layout_rebuild chain0 end y");
    expect_i32(body_layout.chain_end_x[1], 100,
        "creatures_body_layout_rebuild chain1 end x");
    expect_i32(body_layout.chain_end_y[1], 200,
        "creatures_body_layout_rebuild chain1 end y");
    expect_i32(body_layout.chain_end_x[2], 116,
        "creatures_body_layout_rebuild chain2 end x");
    expect_i32(body_layout.chain_end_y[2], 214,
        "creatures_body_layout_rebuild chain2 end y");
    expect_i32(layout_chain0_sprite.base.frame_table_offset, 1,
        "creatures_body_layout_rebuild chain0 band");
    expect_u8(layout_chain0_sprite.base.current_frame_index, 15,
        "creatures_body_layout_rebuild chain0 override");
    expect_u8(layout_chain1_sprite.base.current_frame_index, 2,
        "creatures_body_layout_rebuild chain1 current frame");
    body_layout.horizontal_min_x = 100;
    body_layout.horizontal_max_x = 128;
    body_layout.vertical_limit_y = 190;
    body_layout.facing_target_x[0] = 90;
    body_layout.facing_target_x[1] = 140;
    body_layout.facing_required_bottom[0] = 180;
    body_layout.facing_required_bottom[1] = 195;
    body_layout.notify_event = fake_layout_notify_event;
    body_layout.notify_ctx = &layout_event_context;
    creatures_body_layout_refresh_posture(&body_layout);
    expect_i32(layout_event_context.call_count, 1,
        "creatures_body_layout_refresh_posture event count");
    expect_u32(layout_event_context.last_tag, CREATURES_LAYOUT_EVENT_STEP,
        "creatures_body_layout_refresh_posture event tag");
    expect_i32(layout_event_context.last_value, 0,
        "creatures_body_layout_refresh_posture event value");
    expect_u8(body_layout.facing_variant, 1,
        "creatures_body_layout_refresh_posture facing variant");
    expect_i32(body_layout.target_x, 134,
        "creatures_body_layout_refresh_posture target x");
    expect_i32(body_layout.target_y, 190,
        "creatures_body_layout_refresh_posture target y");
    expect_true(body_layout.horizontal_shift_fits,
        "creatures_body_layout_refresh_posture horizontal fit");
    expect_i32(layout_root_sprite.base.x, 104,
        "creatures_body_layout_refresh_posture root x");
    expect_i32(layout_root_sprite.base.y, 150,
        "creatures_body_layout_refresh_posture root y");
    expect_i32(body_layout.current_bounds.left, 104,
        "creatures_body_layout_refresh_posture bounds left");
    expect_i32(body_layout.current_bounds.top, 150,
        "creatures_body_layout_refresh_posture bounds top");
    expect_i32(body_layout.current_bounds.right, 128,
        "creatures_body_layout_refresh_posture bounds right");
    expect_i32(body_layout.current_bounds.bottom, 188,
        "creatures_body_layout_refresh_posture bounds bottom");

    expect_true(creatures_boundary_map_find_closest_span(&boundary_map, 20, 190, &merged_bounds),
        "creatures_boundary_map_find_closest_span");
    expect_i32(merged_bounds.left, 0, "creatures_boundary_map_find_closest_span left");
    expect_i32(merged_bounds.top, 20, "creatures_boundary_map_find_closest_span top");
    expect_i32(merged_bounds.right, 40, "creatures_boundary_map_find_closest_span right");
    expect_i32(merged_bounds.bottom, 200, "creatures_boundary_map_find_closest_span bottom");

    body_sprite_base.x = 50;
    body_sprite_base.y = 70;
    attached_bounds_source.local_bounds = (CreaturesWrappedRect){1, 2, 9, 14};
    attached_bounds_source.anchor_sprite = &body_sprite_base;
    creatures_attached_bounds_resolve_world_rect(&attached_bounds_source, &merged_bounds);
    expect_i32(merged_bounds.left, 51, "creatures_attached_bounds_resolve_world_rect left");
    expect_i32(merged_bounds.top, 72, "creatures_attached_bounds_resolve_world_rect top");
    expect_i32(merged_bounds.right, 59, "creatures_attached_bounds_resolve_world_rect right");
    expect_i32(merged_bounds.bottom, 84, "creatures_attached_bounds_resolve_world_rect bottom");

    body_compositor.layout.root_sprite = &layout_root_sprite;
    body_compositor.layout.chain_heads[0] = &layout_chain0_sprite;
    body_compositor.layout.chain_heads[1] = &layout_chain1_sprite;
    body_compositor.layout.selection_mode = 2;
    body_compositor.layout.facing_variant = 0;
    body_compositor.layout.frame_override_increment = 0;
    body_compositor.layout.keep_extended_bank = 0;
    body_compositor.layout.facing_target_x[0] = 90;
    body_compositor.layout.facing_target_x[1] = 140;
    body_compositor.layout.facing_required_bottom[0] = 180;
    body_compositor.layout.facing_required_bottom[1] = 195;
    body_compositor.layout.notify_event = fake_layout_notify_event;
    body_compositor.layout.notify_ctx = &layout_event_context;
    body_compositor.bounds_source.mode = CREATURES_BODY_BOUNDS_MODE_DEFAULT;
    body_compositor.bounds_source.use_boundary_map = 1;
    body_compositor.bounds_source.boundary_map = &boundary_map;
    body_compositor.bounds_source.read_source_point = fake_boundary_source_point;
    body_compositor.bounds_source.read_source_point_ctx = &boundary_point_context;
    boundary_point_context.x = 20;
    boundary_point_context.y = 190;
    expect_true(creatures_body_bounds_refresh_source(&body_compositor),
        "creatures_body_bounds_refresh_source boundary map");
    expect_i32(boundary_point_context.call_count, 1,
        "creatures_body_bounds_refresh_source boundary point count");
    expect_i32(body_compositor.allowed_bounds.left, 0,
        "creatures_body_bounds_refresh_source boundary left");
    expect_i32(body_compositor.allowed_bounds.top, 20,
        "creatures_body_bounds_refresh_source boundary top");
    expect_i32(body_compositor.allowed_bounds.right, 40,
        "creatures_body_bounds_refresh_source boundary right");
    expect_i32(body_compositor.allowed_bounds.bottom, 200,
        "creatures_body_bounds_refresh_source boundary bottom");

    body_compositor.bounds_source.mode = CREATURES_BODY_BOUNDS_MODE_ATTACHED_SOURCE;
    body_compositor.bounds_source.use_boundary_map = 0;
    body_compositor.bounds_source.source_ref = &attached_bounds_source;
    expect_true(creatures_body_bounds_refresh_source(&body_compositor),
        "creatures_body_bounds_refresh_source attached");
    expect_i32(body_compositor.allowed_bounds.left, 51,
        "creatures_body_bounds_refresh_source attached left");
    expect_i32(body_compositor.allowed_bounds.bottom, 84,
        "creatures_body_bounds_refresh_source attached bottom");

    copied_allowed_bounds = (CreaturesWrappedRect){100, 0, 128, 190};
    body_compositor.bounds_source.mode = CREATURES_BODY_BOUNDS_MODE_COPY_ALLOWED_BOUNDS;
    body_compositor.bounds_source.source_ref = &copied_allowed_bounds;
    expect_true(creatures_body_bounds_refresh_source(&body_compositor),
        "creatures_body_bounds_refresh_source copy");
    expect_i32(body_compositor.allowed_bounds.left, 100,
        "creatures_body_bounds_refresh_source copy left");
    expect_i32(body_compositor.allowed_bounds.right, 128,
        "creatures_body_bounds_refresh_source copy right");
    body_compositor.force_world_bounds = 1;
    expect_true(creatures_body_bounds_refresh_source(&body_compositor),
        "creatures_body_bounds_refresh_source world override");
    expect_i32(body_compositor.allowed_bounds.left, 0,
        "creatures_body_bounds_refresh_source world left");
    expect_i32(body_compositor.allowed_bounds.right, CREATURES_WORLD_WRAP_WIDTH,
        "creatures_body_bounds_refresh_source world right");
    expect_i32(body_compositor.allowed_bounds.bottom, 0x4b0,
        "creatures_body_bounds_refresh_source world bottom");
    body_compositor.force_world_bounds = 0;
    expect_true(creatures_body_bounds_refresh_source(&body_compositor),
        "creatures_body_bounds_refresh_source copy restore");

    memset(&layout_event_context, 0, sizeof(layout_event_context));
    creatures_body_layout_set_target_and_refresh(&body_compositor, 140, 190);
    expect_i32(layout_event_context.call_count, 1,
        "creatures_body_layout_set_target_and_refresh event count");
    expect_u32(layout_event_context.last_tag, CREATURES_LAYOUT_EVENT_STEP,
        "creatures_body_layout_set_target_and_refresh event tag");
    expect_u8(body_compositor.layout.facing_variant, 1,
        "creatures_body_layout_set_target_and_refresh facing");
    expect_i32(body_compositor.layout.target_x, 134,
        "creatures_body_layout_set_target_and_refresh target x");
    expect_i32(body_compositor.layout.target_y, 190,
        "creatures_body_layout_set_target_and_refresh target y");
    expect_i32(layout_root_sprite.base.x, 104,
        "creatures_body_layout_set_target_and_refresh root x");
    expect_i32(body_compositor.layout.current_bounds.left, 104,
        "creatures_body_layout_set_target_and_refresh bounds left");
    expect_i32(body_compositor.layout.current_bounds.right, 128,
        "creatures_body_layout_set_target_and_refresh bounds right");

    creatures_body_layout_translate(&body_compositor, 8, -5);
    expect_i32(layout_root_sprite.base.x, 112, "creatures_body_layout_translate root x");
    expect_i32(layout_root_sprite.base.y, 145, "creatures_body_layout_translate root y");
    expect_i32(body_compositor.layout.target_x, 142,
        "creatures_body_layout_translate target x");
    expect_i32(body_compositor.layout.target_y, 185,
        "creatures_body_layout_translate target y");
    expect_i32(body_compositor.layout.chain_end_x[0], 128,
        "creatures_body_layout_translate chain0 end x");
    expect_i32(body_compositor.layout.chain_end_y[0], 162,
        "creatures_body_layout_translate chain0 end y");
    expect_i32(body_compositor.layout.previous_bounds.left, 104,
        "creatures_body_layout_translate previous left");
    expect_i32(body_compositor.layout.previous_bounds.right, 128,
        "creatures_body_layout_translate previous right");
    expect_i32(body_compositor.layout.current_bounds.left, 112,
        "creatures_body_layout_translate current left");
    expect_i32(body_compositor.layout.current_bounds.right, 136,
        "creatures_body_layout_translate current right");
    expect_i32(body_compositor.layout.current_bounds.top, 145,
        "creatures_body_layout_translate current top");
    expect_i32(body_compositor.layout.current_bounds.bottom, 183,
        "creatures_body_layout_translate current bottom");

    body_compositor.invalidate_rect = fake_invalidate_rect;
    body_compositor.invalidate_ctx = &invalidate_context;
    creatures_body_layout_set_target_and_invalidate(&body_compositor, 150, 190);
    expect_size(invalidate_context.call_count, 2,
        "creatures_body_layout_set_target_and_invalidate count");
    expect_i32(invalidate_context.rects[0].left, 112,
        "creatures_body_layout_set_target_and_invalidate old left");
    expect_i32(invalidate_context.rects[0].top, 145,
        "creatures_body_layout_set_target_and_invalidate old top");
    expect_i32(invalidate_context.rects[0].right, 136,
        "creatures_body_layout_set_target_and_invalidate old right");
    expect_i32(invalidate_context.rects[0].bottom, 183,
        "creatures_body_layout_set_target_and_invalidate old bottom");
    expect_i32(invalidate_context.rects[1].left, 104,
        "creatures_body_layout_set_target_and_invalidate new left");
    expect_i32(invalidate_context.rects[1].top, 150,
        "creatures_body_layout_set_target_and_invalidate new top");
    expect_i32(invalidate_context.rects[1].right, 128,
        "creatures_body_layout_set_target_and_invalidate new right");
    expect_i32(invalidate_context.rects[1].bottom, 188,
        "creatures_body_layout_set_target_and_invalidate new bottom");

    expect_i32((int)creatures_body_slot_frame_count(0), 0x1a,
        "creatures_body_slot_frame_count root");
    expect_i32((int)creatures_body_slot_frame_count(13), 0x0a,
        "creatures_body_slot_frame_count extended");
    expect_size(creatures_body_total_frame_entry_count(0), 136,
        "creatures_body_total_frame_entry_count base");
    expect_size(creatures_body_total_frame_entry_count(1), 156,
        "creatures_body_total_frame_entry_count extended");
    creatures_body_slot_variant_map_reset(slot_variants);
    creatures_body_slot_variant_map_apply_group(2, 4, slot_variants);
    expect_i32(slot_variants[4], 4, "creatures_body_slot_variant_map_apply_group slot4");
    expect_i32(slot_variants[3], 4, "creatures_body_slot_variant_map_apply_group slot3");
    expect_i32(slot_variants[2], 4, "creatures_body_slot_variant_map_apply_group slot2");
    expect_i32(slot_variants[7], 4, "creatures_body_slot_variant_map_apply_group slot7");
    expect_i32(slot_variants[6], 4, "creatures_body_slot_variant_map_apply_group slot6");
    expect_i32(slot_variants[5], 4, "creatures_body_slot_variant_map_apply_group slot5");
    expect_i32(slot_variants[1], 0, "creatures_body_slot_variant_map_apply_group untouched");
    creatures_body_slot_variant_map_apply_group(4, 9, slot_variants);
    expect_i32(slot_variants[13], 9, "creatures_body_slot_variant_map_apply_group slot13");
    expect_i32(slot_variants[12], 9, "creatures_body_slot_variant_map_apply_group slot12");

    creatures_gene_cursor_init(&gene_cursor, gene_stream, sizeof(gene_stream), 0x1234u, 1, 7);
    expect_true(creatures_gene_cursor_next_entry(&gene_cursor),
        "creatures_gene_cursor_next_entry first");
    expect_u8(creatures_gene_cursor_read_bounded_byte(&gene_cursor, 0, 2), 2,
        "creatures_gene_cursor_read_bounded_byte type");
    expect_u8(creatures_gene_cursor_read_bounded_byte(&gene_cursor, 0, 6), 6,
        "creatures_gene_cursor_read_bounded_byte subtype");
    expect_u8(creatures_gene_cursor_read_bounded_byte(&gene_cursor, 0, 5), 0xaa % 6,
        "creatures_gene_cursor_read_bounded_byte clamped");
    creatures_gene_cursor_reset(&gene_cursor);
    expect_true(creatures_gene_cursor_match_switch_case(&gene_cursor, 7, 0),
        "creatures_gene_cursor_match_switch_case exact");
    expect_false(creatures_gene_cursor_match_switch_case(&gene_cursor, 3, 0),
        "creatures_gene_cursor_match_switch_case mismatch");
    expect_true(creatures_gene_cursor_match_switch_case(&gene_cursor, 3, 1),
        "creatures_gene_cursor_match_switch_case any");
    expect_true(creatures_gene_cursor_match_switch_case(&gene_cursor, 0, 2),
        "creatures_gene_cursor_match_switch_case zero");
    expect_false(creatures_gene_cursor_match_switch_case(&gene_cursor, 1, 2),
        "creatures_gene_cursor_match_switch_case nonzero");
    expect_true(creatures_gene_cursor_seek_record(&gene_cursor, 2, 6, 7, 0),
        "creatures_gene_cursor_seek_record");
    expect_u8(creatures_gene_cursor_read_bounded_byte(&gene_cursor, 0, 0xff), 0x77,
        "creatures_gene_cursor_seek_record payload");
    expect_false(creatures_gene_cursor_next_entry(&gene_cursor),
        "creatures_gene_cursor_next_entry end");

    creatures_gene_cursor_init(&recipe_gene_cursor, recipe_gene_stream, sizeof(recipe_gene_stream),
        0x7777u, 1, 0);
    expect_true(creatures_body_assembly_parse_recipe(&recipe_gene_cursor, &body_recipe),
        "creatures_body_assembly_parse_recipe");
    expect_u8(body_recipe.body_variant_group_base, 2,
        "creatures_body_assembly_parse_recipe group base");
    expect_u32(body_recipe.body_gene_primary_value, 0x11223344u,
        "creatures_body_assembly_parse_recipe primary");
    expect_u32(body_recipe.body_gene_secondary_value, 0x55667788u,
        "creatures_body_assembly_parse_recipe secondary");
    expect_u8(body_recipe.slot_variants[4], 5,
        "creatures_body_assembly_parse_recipe slot4 variant");
    expect_u8(body_recipe.slot_variants[3], 5,
        "creatures_body_assembly_parse_recipe slot3 variant");
    expect_u8(body_recipe.slot_variants[2], 5,
        "creatures_body_assembly_parse_recipe slot2 variant");
    expect_u8(body_recipe.slot_variants[7], 5,
        "creatures_body_assembly_parse_recipe slot7 variant");
    expect_u8(body_recipe.slot_variants[6], 5,
        "creatures_body_assembly_parse_recipe slot6 variant");
    expect_u8(body_recipe.slot_variants[5], 5,
        "creatures_body_assembly_parse_recipe slot5 variant");
    expect_u8(body_recipe.slot_variants[13], 9,
        "creatures_body_assembly_parse_recipe slot13 variant");
    expect_u8(body_recipe.slot_variants[12], 9,
        "creatures_body_assembly_parse_recipe slot12 variant");
    expect_true(body_recipe.include_extended_slots,
        "creatures_body_assembly_parse_recipe extended slots");
    expect_u8(body_recipe.extended_slot_group_count, 1,
        "creatures_body_assembly_parse_recipe extended group count");
    expect_size(body_recipe.active_slot_count, 14,
        "creatures_body_assembly_parse_recipe active slots");
    expect_size(body_recipe.total_frame_entries, 156,
        "creatures_body_assembly_parse_recipe total frame entries");
    expect_u8(body_recipe.palette_average[0], 15,
        "creatures_body_assembly_parse_recipe palette red");
    expect_u8(body_recipe.palette_average[1], 30,
        "creatures_body_assembly_parse_recipe palette green");
    expect_u8(body_recipe.palette_average[2], 0x80,
        "creatures_body_assembly_parse_recipe palette blue");

    creatures_body_pair_sprite_init(&pose_root_sprite, &layout_pair_table, &layout_root_frame_set, 0,
        1800);
    pose_root_sprite.base.body_slot_group = 1;
    creatures_body_quad_sprite_init(&pose_chain0_sprites[0], NULL, &layout_chain0_table,
        &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain1_sprites[2], NULL, &layout_chain0_table,
        &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain1_sprites[1], &pose_chain1_sprites[2],
        &layout_chain0_table, &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain1_sprites[0], &pose_chain1_sprites[1],
        &layout_chain0_table, &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain2_sprites[2], NULL, &layout_chain1_table,
        &layout_chain1_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain2_sprites[1], &pose_chain2_sprites[2],
        &layout_chain1_table, &layout_chain1_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain2_sprites[0], &pose_chain2_sprites[1],
        &layout_chain1_table, &layout_chain1_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain3_sprites[1], NULL, &layout_chain0_table,
        &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain3_sprites[0], &pose_chain3_sprites[1],
        &layout_chain0_table, &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain4_sprites[1], NULL, &layout_chain1_table,
        &layout_chain1_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain4_sprites[0], &pose_chain4_sprites[1],
        &layout_chain1_table, &layout_chain1_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain5_sprites[1], NULL, &layout_chain0_table,
        &layout_chain0_frame_set, 0);
    creatures_body_quad_sprite_init(&pose_chain5_sprites[0], &pose_chain5_sprites[1],
        &layout_chain0_table, &layout_chain0_frame_set, 0);
    pose_layout.root_sprite = &pose_root_sprite;
    pose_layout.chain_heads[0] = &pose_chain0_sprites[0];
    pose_layout.chain_heads[1] = &pose_chain1_sprites[0];
    pose_layout.chain_heads[2] = &pose_chain2_sprites[0];
    pose_layout.chain_heads[3] = &pose_chain3_sprites[0];
    pose_layout.chain_heads[4] = &pose_chain4_sprites[0];
    pose_layout.chain_heads[5] = &pose_chain5_sprites[0];
    pose_layout.target_x = 200;
    pose_layout.target_y = 120;
    pose_layout.horizontal_min_x = -1000;
    pose_layout.horizontal_max_x = 1000;
    pose_layout.vertical_limit_y = 1000;
    pose_layout.facing_target_x[0] = 200;
    pose_layout.facing_target_x[1] = 200;
    pose_layout.facing_required_bottom[0] = 0;
    pose_layout.facing_required_bottom[1] = 0;
    memset(pose_layout.pose_string, 'X', sizeof(pose_layout.pose_string));
    creatures_body_layout_apply_pose_string(&pose_layout, pose_string_digits);
    expect_u8(pose_layout.selection_mode, 0,
        "creatures_body_layout_apply_pose_string selection mode");
    expect_u8(pose_root_sprite.base.pose_selector, 2,
        "creatures_body_layout_apply_pose_string root pose");
    expect_i32(pose_chain0_sprites[0].base.body_slot_group, 4,
        "creatures_body_layout_apply_pose_string chain0 group");
    expect_i32(pose_chain1_sprites[0].base.body_slot_group, 2,
        "creatures_body_layout_apply_pose_string chain1 first group");
    expect_i32(pose_chain1_sprites[1].base.body_slot_group, 3,
        "creatures_body_layout_apply_pose_string chain1 second group");
    expect_i32(pose_chain1_sprites[2].base.body_slot_group, 4,
        "creatures_body_layout_apply_pose_string chain1 third group");
    expect_i32(pose_chain5_sprites[1].base.body_slot_group, 3,
        "creatures_body_layout_apply_pose_string chain5 second group");
    expect_u8(pose_chain0_sprites[0].base.pose_selector, 1,
        "creatures_body_layout_apply_pose_string chain0 pose");
    expect_u8(pose_chain1_sprites[0].base.pose_selector, 3,
        "creatures_body_layout_apply_pose_string chain1 pose0");
    expect_u8(pose_chain1_sprites[1].base.pose_selector, 4,
        "creatures_body_layout_apply_pose_string chain1 pose1");
    expect_u8(pose_chain1_sprites[2].base.pose_selector, 5,
        "creatures_body_layout_apply_pose_string chain1 pose2");
    expect_u8(pose_chain2_sprites[0].base.pose_selector, 6,
        "creatures_body_layout_apply_pose_string chain2 pose0");
    expect_u8(pose_chain2_sprites[1].base.pose_selector, 7,
        "creatures_body_layout_apply_pose_string chain2 pose1");
    expect_u8(pose_chain2_sprites[2].base.pose_selector, 8,
        "creatures_body_layout_apply_pose_string chain2 pose2");
    expect_u8(pose_chain3_sprites[0].base.pose_selector, 9,
        "creatures_body_layout_apply_pose_string chain3 pose0");
    expect_u8(pose_chain3_sprites[1].base.pose_selector, 0,
        "creatures_body_layout_apply_pose_string chain3 pose1");
    expect_u8(pose_chain4_sprites[0].base.pose_selector, 1,
        "creatures_body_layout_apply_pose_string chain4 pose0");
    expect_u8(pose_chain4_sprites[1].base.pose_selector, 2,
        "creatures_body_layout_apply_pose_string chain4 pose1");
    expect_u8(pose_chain5_sprites[0].base.pose_selector, 3,
        "creatures_body_layout_apply_pose_string chain5 pose0");
    expect_u8(pose_chain5_sprites[1].base.pose_selector, 4,
        "creatures_body_layout_apply_pose_string chain5 pose1");
    expect_true(memcmp(pose_layout.pose_string, pose_string_digits,
                    sizeof(pose_layout.pose_string)) == 0,
        "creatures_body_layout_apply_pose_string stored digits");

    creatures_sprite_file_cache_init(&sprite_file_cache, "spr");
    expect_true(creatures_sprite_file_cache_acquire(&sprite_file_cache, 0x11111111u,
                    fake_sprite_file_cache_load, &sprite_file_cache_context,
                    fake_sprite_file_cache_release, &sprite_file_cache_context) ==
            &sprite_file_cache_context.resources[0],
        "creatures_sprite_file_cache_acquire miss");
    expect_size(sprite_file_cache_context.load_count, 1,
        "creatures_sprite_file_cache_acquire load count");
    expect_u32(sprite_file_cache_context.loaded_tokens[0], 0x11111111u,
        "creatures_sprite_file_cache_acquire token");
    expect_true(memcmp(sprite_file_cache_context.loaded_suffixes[0], "spr", 4) == 0,
        "creatures_sprite_file_cache_acquire suffix");
    expect_true(creatures_sprite_file_cache_acquire(&sprite_file_cache, 0x11111111u,
                    fake_sprite_file_cache_load, &sprite_file_cache_context,
                    fake_sprite_file_cache_release, &sprite_file_cache_context) ==
            &sprite_file_cache_context.resources[0],
        "creatures_sprite_file_cache_acquire hit");
    expect_size(sprite_file_cache_context.load_count, 1,
        "creatures_sprite_file_cache_acquire hit no load");

    sprite_file_cache.slots[0].token = 0xaaaaaaaa;
    sprite_file_cache.slots[0].resource = &sprite_file_cache_context.resources[10];
    sprite_file_cache.slots[0].use_stamp = 3;
    sprite_file_cache.slots[1].token = 0xbbbbbbbb;
    sprite_file_cache.slots[1].resource = &sprite_file_cache_context.resources[11];
    sprite_file_cache.slots[1].use_stamp = 1;
    for (palette_index = 2; palette_index < CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT; palette_index++) {
        sprite_file_cache.slots[palette_index].token = 0xcccc0000u + (uint32_t)palette_index;
        sprite_file_cache.slots[palette_index].resource =
            &sprite_file_cache_context.resources[10 + palette_index];
        sprite_file_cache.slots[palette_index].use_stamp = 100u + (uint32_t)palette_index;
    }
    expect_true(creatures_sprite_file_cache_acquire_before_or_at_stamp(&sprite_file_cache,
                    0x22222222u, 2, fake_sprite_file_cache_load, &sprite_file_cache_context,
                    fake_sprite_file_cache_release, &sprite_file_cache_context) ==
            &sprite_file_cache_context.resources[1],
        "creatures_sprite_file_cache_acquire_before_or_at_stamp");
    expect_size(sprite_file_cache_context.release_count, 1,
        "creatures_sprite_file_cache_acquire_before_or_at_stamp release count");
    expect_true(sprite_file_cache_context.released_resources[0] ==
            &sprite_file_cache_context.resources[11],
        "creatures_sprite_file_cache_acquire_before_or_at_stamp released oldest");
    expect_i32(sprite_file_cache_context.released_modes[0], 1,
        "creatures_sprite_file_cache_acquire_before_or_at_stamp release mode");
    expect_u32(sprite_file_cache.slots[1].token, 0x22222222u,
        "creatures_sprite_file_cache_acquire_before_or_at_stamp replaced token");
    expect_size(creatures_sprite_file_cache_flush(&sprite_file_cache,
                    fake_sprite_file_cache_release, &sprite_file_cache_context),
        CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT, "creatures_sprite_file_cache_flush");

    builder_chain0_head.next = &builder_chain0_tail;
    builder_chain0_tail.next = NULL;
    builder_chain1_head.next = NULL;
    builder_layout.root_sprite = &builder_root_sprite;
    builder_layout.chain_heads[0] = &builder_chain0_head;
    builder_layout.chain_heads[1] = &builder_chain1_head;
    builder_release_ops.release_pair_sprite = fake_release_pair_sprite;
    builder_release_ops.release_quad_sprite = fake_release_quad_sprite;
    builder_release_ops.ctx = &builder_release_context;
    builder_owned_frame_set.ref_count = 1;
    builder_owned_frame_set.destroy = fake_frame_destroy;
    builder_owned_frame_set.destroy_ctx = &frame_factory_context;
    builder_owned_frame_set_ptr = &builder_owned_frame_set;
    expect_size(creatures_body_builder_release_assets(&builder_layout, &builder_owned_frame_set_ptr,
                    &builder_release_ops),
        5, "creatures_body_builder_release_assets");
    expect_size(builder_release_context.released_quad_count, 3,
        "creatures_body_builder_release_assets quad count");
    expect_true(builder_release_context.released_quad_sprites[0] == &builder_chain0_tail,
        "creatures_body_builder_release_assets quad tail first");
    expect_true(builder_release_context.released_quad_sprites[1] == &builder_chain0_head,
        "creatures_body_builder_release_assets quad head second");
    expect_true(builder_release_context.released_quad_sprites[2] == &builder_chain1_head,
        "creatures_body_builder_release_assets chain1");
    expect_size(builder_release_context.released_pair_count, 1,
        "creatures_body_builder_release_assets pair count");
    expect_true(builder_release_context.released_pair_sprites[0] == &builder_root_sprite,
        "creatures_body_builder_release_assets root");
    expect_true(builder_layout.root_sprite == NULL,
        "creatures_body_builder_release_assets root cleared");
    expect_true(builder_layout.chain_heads[0] == NULL,
        "creatures_body_builder_release_assets chain0 cleared");
    expect_true(builder_layout.chain_heads[1] == NULL,
        "creatures_body_builder_release_assets chain1 cleared");
    expect_true(builder_owned_frame_set_ptr == NULL,
        "creatures_body_builder_release_assets frame set cleared");
    frame_factory_context.destroy_count = 0;
    frame_factory_context.last_destroy_mode = 0;

    memset(&builder_release_context, 0, sizeof(builder_release_context));
    memset(&body_builder_runtime, 0, sizeof(body_builder_runtime));
    memset(&body_builder_slot_frame_context, 0, sizeof(body_builder_slot_frame_context));
    memset(&body_builder_body_frame_context, 0, sizeof(body_builder_body_frame_context));
    memset(&body_builder_publish_context, 0, sizeof(body_builder_publish_context));
    memset(&sprite_file_cache_context, 0, sizeof(sprite_file_cache_context));
    body_builder_slot_frame_context.frame_width = 1;
    body_builder_slot_frame_context.frame_height = 1;
    body_builder_body_frame_context.frame_width = 10;
    body_builder_body_frame_context.frame_height = 20;
    creatures_sprite_file_cache_init(&body_builder_sprite_cache, "spr");
    body_builder_sprite_cache.slots[0].token = 0xaaaaaaaa;
    body_builder_sprite_cache.slots[0].resource = &sprite_file_cache_context.resources[12];
    body_builder_sprite_cache.slots[0].use_stamp = 1;
    body_builder_sprite_cache.slots[1].token = 0xbbbbbbbb;
    body_builder_sprite_cache.slots[1].resource = &sprite_file_cache_context.resources[13];
    body_builder_sprite_cache.slots[1].use_stamp = 2;
    builder_chain0_head.next = &builder_chain0_tail;
    builder_chain0_tail.next = NULL;
    builder_chain1_head.next = NULL;
    builder_release_ops.release_pair_sprite = fake_release_pair_sprite;
    builder_release_ops.release_quad_sprite = fake_release_quad_sprite;
    builder_release_ops.ctx = &builder_release_context;
    body_builder_runtime.layout.root_sprite = &builder_root_sprite;
    body_builder_runtime.layout.chain_heads[0] = &builder_chain0_head;
    body_builder_runtime.layout.chain_heads[1] = &builder_chain1_head;
    body_builder_runtime.layout.target_x = 300;
    body_builder_runtime.layout.target_y = 400;
    body_builder_runtime.layout.horizontal_min_x = -1000;
    body_builder_runtime.layout.horizontal_max_x = 1000;
    body_builder_runtime.layout.vertical_limit_y = 1000;
    body_builder_runtime.layout.facing_target_x[0] = 300;
    body_builder_runtime.layout.facing_target_x[1] = 300;
    body_builder_runtime.layout.facing_required_bottom[0] = 0;
    body_builder_runtime.layout.facing_required_bottom[1] = 0;
    memcpy(body_builder_runtime.layout.pose_string, pose_string_digits,
        sizeof(body_builder_runtime.layout.pose_string));
    builder_owned_frame_set.ref_count = 1;
    builder_owned_frame_set.destroy = fake_frame_destroy;
    builder_owned_frame_set.destroy_ctx = &frame_factory_context;
    body_builder_runtime.owned_frame_set = &builder_owned_frame_set;
    body_builder_ops.render_depth_self = &self_render_depth;
    creatures_gene_cursor_init(&recipe_gene_cursor, recipe_gene_stream, sizeof(recipe_gene_stream),
        0x7777u, 1, 0);
    expect_true(creatures_body_builder_rebuild_from_genome(&body_builder_runtime,
                    &recipe_gene_cursor, 1, 0, &body_builder_ops),
        "creatures_body_builder_rebuild_from_genome");
    expect_size(sprite_file_cache_context.release_count, 2,
        "creatures_body_builder_rebuild_from_genome sprite cache flush");
    expect_size(builder_release_context.released_quad_count, 3,
        "creatures_body_builder_rebuild_from_genome old quad release");
    expect_size(builder_release_context.released_pair_count, 1,
        "creatures_body_builder_rebuild_from_genome old pair release");
    expect_i32(body_builder_slot_frame_context.create_count, 14,
        "creatures_body_builder_rebuild_from_genome slot frame creates");
    expect_i32(body_builder_slot_frame_context.destroy_count, 14,
        "creatures_body_builder_rebuild_from_genome slot frame destroys");
    expect_i32(body_builder_body_frame_context.create_count, 1,
        "creatures_body_builder_rebuild_from_genome body frame create");
    expect_u32(body_builder_body_frame_context.last_primary_key, 0x7777u,
        "creatures_body_builder_rebuild_from_genome body frame key");
    expect_i32(body_builder_body_frame_context.last_entry_count, 156,
        "creatures_body_builder_rebuild_from_genome body frame count");
    expect_size(body_builder_publish_context.call_count, 1,
        "creatures_body_builder_rebuild_from_genome publish count");
    expect_u32(body_builder_publish_context.last_image_token, 0x7777u,
        "creatures_body_builder_rebuild_from_genome publish token");
    expect_size(body_builder_publish_context.last_image_size, 1408,
        "creatures_body_builder_rebuild_from_genome publish size");
    expect_u8(body_builder_publish_context.first_bytes[0], 156,
        "creatures_body_builder_rebuild_from_genome publish count lo");
    expect_u32(body_builder_runtime.assembled_body_id, 0x04030100u,
        "creatures_body_builder_rebuild_from_genome body id");
    expect_u32(body_builder_runtime.body_gene_primary_value, 0x11223344u,
        "creatures_body_builder_rebuild_from_genome primary gene");
    expect_u32(body_builder_runtime.body_gene_secondary_value, 0x55667788u,
        "creatures_body_builder_rebuild_from_genome secondary gene");
    expect_i32(body_builder_runtime.render_depth_base, 1800,
        "creatures_body_builder_rebuild_from_genome render depth");
    expect_true(body_builder_runtime.owned_frame_set ==
            &body_builder_body_frame_context.created_sets[0],
        "creatures_body_builder_rebuild_from_genome owned frame set");
    expect_true(body_builder_runtime.layout.root_sprite == &body_builder_runtime.sprite_storage.root_sprite,
        "creatures_body_builder_rebuild_from_genome root sprite");
    expect_i32(body_builder_runtime.layout.target_x, 300,
        "creatures_body_builder_rebuild_from_genome preserved target x");
    expect_i32(body_builder_runtime.layout.target_y, 400,
        "creatures_body_builder_rebuild_from_genome preserved target y");
    expect_u8(body_builder_runtime.layout.root_sprite->base.pose_selector, 2,
        "creatures_body_builder_rebuild_from_genome root pose");
    expect_i32(body_builder_runtime.layout.root_sprite->base.render_depth_base, 1800,
        "creatures_body_builder_rebuild_from_genome root render depth");
    expect_true(memcmp(body_builder_runtime.layout.pose_string, pose_string_digits,
                    sizeof(body_builder_runtime.layout.pose_string)) == 0,
        "creatures_body_builder_rebuild_from_genome stored pose");
    frame_factory_context.destroy_count = 0;
    frame_factory_context.last_destroy_mode = 0;

    acquired_frame_set = creatures_frame_cache_acquire(0x11223344u, 7, 3, 0, &frame_cache_ops);
    expect_true(acquired_frame_set == &cached_frame_set, "creatures_frame_cache_acquire hit");
    expect_i32(cached_frame_set.ref_count, 2, "creatures_frame_cache_acquire hit refcount");
    expect_i32(frame_factory_context.create_count, 0, "creatures_frame_cache_acquire no create");

    created_frame_set = creatures_frame_cache_acquire(0x55667788u, 2, 4, 0, &frame_cache_ops);
    expect_true(created_frame_set != NULL, "creatures_frame_cache_acquire miss");
    expect_i32(frame_factory_context.create_count, 1, "creatures_frame_cache_acquire create count");
    expect_u32(frame_factory_context.last_create_primary_key, 0x55667788u,
        "creatures_frame_cache_acquire create key");
    expect_i32(frame_factory_context.last_create_secondary_key, 2,
        "creatures_frame_cache_acquire create secondary key");
    expect_i32(frame_factory_context.last_create_entry_count, 4,
        "creatures_frame_cache_acquire create entry count");
    expect_i32(created_frame_set->ref_count, 1, "creatures_frame_cache_acquire created refcount");

    forced_frame_set = creatures_frame_cache_acquire(0x11223344u, 7, 5, 1, &frame_cache_ops);
    expect_true(forced_frame_set != &cached_frame_set, "creatures_frame_cache_acquire force new");
    expect_i32(frame_factory_context.create_count, 2,
        "creatures_frame_cache_acquire force create count");
    expect_i32(frame_factory_context.last_create_force_new, 1,
        "creatures_frame_cache_acquire force flag");

    access_serial_counter = 0;
    expect_true(creatures_frame_entry_pixels(&uncached_frame_entry, &access_serial_counter) ==
                    decoded_entry_context.pixels,
        "creatures_frame_entry_pixels decoded buffer");
    expect_i32(decoded_entry_context.call_count, 1, "creatures_frame_entry_pixels decode count");
    expect_true((uncached_frame_entry.flags & 1) != 0, "creatures_frame_entry_pixels cached flag");
    expect_u32(uncached_frame_entry.last_access_serial, 1,
        "creatures_frame_entry_pixels first access serial");
    expect_true(creatures_frame_entry_pixels(&uncached_frame_entry, &access_serial_counter) ==
                    decoded_entry_context.pixels,
        "creatures_frame_entry_pixels cached buffer");
    expect_i32(decoded_entry_context.call_count, 1,
        "creatures_frame_entry_pixels cached decode count");
    expect_u32(uncached_frame_entry.last_access_serial, 2,
        "creatures_frame_entry_pixels second access serial");

    access_serial_counter = 10;
    creatures_frame_entry_apply_palette_map(&palette_entry, palette_map, &access_serial_counter);
    expect_u8(palette_pixels[0], 11, "creatures_frame_entry_apply_palette_map first pixel");
    expect_u8(palette_pixels[3], 14, "creatures_frame_entry_apply_palette_map last pixel");
    expect_u32(palette_entry.last_access_serial, 11,
        "creatures_frame_entry_apply_palette_map access serial");

    palette_pixels[0] = 1;
    palette_pixels[1] = 2;
    decoded_palette_context.pixels[0] = 3;
    decoded_palette_context.pixels[1] = 4;
    access_serial_counter = 20;
    creatures_frame_set_apply_palette_map(&palette_frame_set, palette_map, &access_serial_counter);
    expect_u8(palette_frame_entries[0].pixels[0], 11,
        "creatures_frame_set_apply_palette_map first entry pixel");
    expect_u8(palette_frame_entries[0].pixels[1], 12,
        "creatures_frame_set_apply_palette_map first entry second pixel");
    expect_i32(decoded_palette_context.call_count, 1,
        "creatures_frame_set_apply_palette_map decode count");
    expect_u8(decoded_palette_context.pixels[0], 13,
        "creatures_frame_set_apply_palette_map decoded first pixel");
    expect_u8(decoded_palette_context.pixels[1], 14,
        "creatures_frame_set_apply_palette_map decoded second pixel");
    expect_u32(palette_frame_entries[0].last_access_serial, 21,
        "creatures_frame_set_apply_palette_map first entry serial");
    expect_u32(palette_frame_entries[1].last_access_serial, 22,
        "creatures_frame_set_apply_palette_map second entry serial");

    creatures_frame_set_release(&cached_frame_set);
    expect_i32(cached_frame_set.ref_count, 1, "creatures_frame_set_release decremented");
    expect_i32(frame_factory_context.destroy_count, 0, "creatures_frame_set_release no destroy");
    creatures_frame_set_release(created_frame_set);
    expect_i32(frame_factory_context.destroy_count, 1, "creatures_frame_set_release destroy count");
    expect_i32(frame_factory_context.last_destroy_mode, 1,
        "creatures_frame_set_release destroy mode");

    expect_i32(creatures_choose_unique_render_depth_base(&self_render_depth,
                   render_depth_participants,
                   sizeof(render_depth_participants) / sizeof(render_depth_participants[0]),
                   fake_render_depth_read, fake_random_next, &random_context),
        1800, "creatures_choose_unique_render_depth_base");

    {
        ReconstructionCreaturesStartupResult startup_result;
        ReconstructionStartupProbeOptions startup_options;
        ReconstructionStartupHostOps startup_host_ops;
        FakeStartupProbeContext startup_context = {{
                                                   "C:\\Creatures\\World.sfc",
                                                   "C:\\Creatures\\Images\\A000.spr",
                                                   "C:\\Creatures\\Body data\\a000.att",
                                                   "C:\\Creatures\\Palettes\\",
                                                   "C:\\Creatures\\Sounds\\",
                                                   "D:\\Genetics",
                                                   "D:\\Creatures\\Genetics\\norn.gen",
                                               },
            7, 1};

        memset(&startup_options, 0, sizeof(startup_options));
        startup_options.install_root = "C:\\Creatures";
        startup_options.cd_drive = "D:";
        startup_options.seed_defaults_from_executable = 1;

        startup_host_ops.path_exists = fake_startup_probe_path_exists;
        startup_host_ops.prompt_insert_cd = fake_startup_probe_prompt;
        startup_host_ops.ctx = &startup_context;

        expect_true(reconstruction_probe_creatures_startup(
                        &startup_result, &startup_options, &startup_host_ops),
            "reconstruction_probe_creatures_startup");
        expect_true(startup_result.all_required_assets_present,
            "reconstruction_probe_creatures_startup all assets");
        expect_i32(startup_result.prompt_count, 0,
            "reconstruction_probe_creatures_startup prompt count");
        expect_size(startup_result.asset_count, 6,
            "reconstruction_probe_creatures_startup asset count");
        expect_str(startup_result.directory_config.directories[0], "C:\\Creatures\\",
            "reconstruction_probe_creatures_startup main directory");
        expect_str(startup_result.assets[0].resolved_path, "C:\\Creatures\\World.sfc",
            "reconstruction_probe_creatures_startup world path");
        expect_str(startup_result.assets[1].resolved_path, "D:\\Creatures\\Genetics\\norn.gen",
            "reconstruction_probe_creatures_startup genetics path");
        expect_true(startup_result.assets[1].used_cd_fallback,
            "reconstruction_probe_creatures_startup genetics fallback");
        expect_str(reconstruction_settings_store_get(&startup_result.settings_store, "CD Drive"),
            "D:", "reconstruction_probe_creatures_startup cd drive setting");
    }

    {
        CreaturesWingSurface wing_surface;
        CreaturesWingSurfaceOps wing_ops;
        FakeWingContext wing_context;

        memset(&wing_context, 0, sizeof(wing_context));
        wing_context.created_bitmap_handle = (void *)0x1234;
        wing_context.old_selected_bitmap = (void *)0x5678;
        for (int index = 0; index < 256; index++) {
            wing_context.palette_entries[index].red = (uint8_t)index;
            wing_context.palette_entries[index].green = (uint8_t)(index + 1);
            wing_context.palette_entries[index].blue = (uint8_t)(index + 2);
        }

        wing_ops.get_palette_entries = fake_wing_get_palette_entries;
        wing_ops.create_bitmap = fake_wing_create_bitmap;
        wing_ops.select_object = fake_wing_select_object;
        wing_ops.set_color_table = fake_wing_set_color_table;
        wing_ops.delete_object = fake_wing_delete_object;
        wing_ops.delete_dc = fake_wing_delete_dc;
        wing_ops.ctx = &wing_context;

        creatures_wing_surface_init(&wing_surface, (void *)0x9999, (void *)0xaaaa);
        expect_true(creatures_wing_surface_create_8bit_bitmap(&wing_surface, 13, 7, &wing_ops),
            "creatures_wing_surface_create_8bit_bitmap");
        expect_i32(wing_context.get_palette_call_count, 2,
            "creatures_wing_surface_create_8bit_bitmap palette calls");
        expect_i32(wing_context.create_bitmap_call_count, 1,
            "creatures_wing_surface_create_8bit_bitmap create calls");
        expect_i32(wing_context.select_object_call_count, 1,
            "creatures_wing_surface_create_8bit_bitmap select calls");
        expect_i32((int)wing_surface.bitmap_info.width, 13,
            "creatures_wing_surface_create_8bit_bitmap width");
        expect_i32((int)wing_surface.bitmap_info.height, -7,
            "creatures_wing_surface_create_8bit_bitmap height");
        expect_i32((int)wing_surface.bitmap_info.bit_count, 8,
            "creatures_wing_surface_create_8bit_bitmap bit count");
        expect_true(wing_surface.bitmap_handle == wing_context.created_bitmap_handle,
            "creatures_wing_surface_create_8bit_bitmap handle");
        expect_true(wing_surface.selected_bitmap_before_surface == wing_context.old_selected_bitmap,
            "creatures_wing_surface_create_8bit_bitmap old handle");
        expect_true(wing_surface.pixels == wing_context.pixels,
            "creatures_wing_surface_create_8bit_bitmap pixels");
        expect_u8(wing_surface.bitmap_info.colors[0].red, 0,
            "creatures_wing_surface_create_8bit_bitmap first red");
        expect_u8(wing_surface.bitmap_info.colors[0].green, 1,
            "creatures_wing_surface_create_8bit_bitmap first green");
        expect_u8(wing_surface.bitmap_info.colors[0].blue, 2,
            "creatures_wing_surface_create_8bit_bitmap first blue");
        expect_size(wing_context.last_color_table_count, 256,
            "creatures_wing_surface_create_8bit_bitmap color table size");

        creatures_wing_surface_release(&wing_surface, &wing_ops);
        expect_i32(wing_context.select_object_call_count, 2,
            "creatures_wing_surface_release select calls");
        expect_true(wing_context.last_deleted_object == wing_context.created_bitmap_handle,
            "creatures_wing_surface_release deleted bitmap");
        expect_true(wing_context.last_deleted_dc == (void *)0x9999,
            "creatures_wing_surface_release deleted dc");
        expect_true(wing_surface.bitmap_handle == NULL,
            "creatures_wing_surface_release cleared handle");
        expect_true(wing_surface.pixels == NULL,
            "creatures_wing_surface_release cleared pixels");
    }

    {
        CreaturesDisplaySurface display_surface;
        CreaturesDisplaySurfaceOps display_ops;
        CreaturesDisplayPaletteOps palette_ops;
        CreaturesDisplayRedrawOps redraw_ops;
        CreaturesDisplayScrollOps scroll_ops;
        CreaturesDisplayPresentOps present_ops;
        CreaturesDisplaySceneOps scene_ops;
        FakeDisplayContext display_context;
        FakeDisplayRedrawContext redraw_context;
        FakeDisplayScrollContext scroll_context;
        FakeDisplayPresentContext present_context;
        FakeDisplayPresentOpsContext present_ops_context;
        FakeDisplaySceneContext scene_context;
        CreaturesDisplayRect requested_bounds;
        CreaturesDisplayRect helper_left;
        CreaturesDisplayRect helper_right;
        CreaturesDisplayRect focus_bounds;
        CreaturesDisplayRect client_rect;
        CreaturesDisplayRedrawState present_state;

        memset(&display_context, 0, sizeof(display_context));
        memset(&redraw_context, 0, sizeof(redraw_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        memset(&present_context, 0, sizeof(present_context));
        memset(&present_ops_context, 0, sizeof(present_ops_context));
        memset(&scene_context, 0, sizeof(scene_context));
        display_context.retired_bitmap_handle = (void *)0x4444;
        display_context.returned_dc_handle = (void *)0x5151;
        display_context.returned_previous_palette = (void *)0x6161;
        display_context.first_realize_result = 7;
        present_context.returned_target_dc = (void *)0x9292;
        present_ops_context.display_context = &display_context;
        present_ops_context.present_context = &present_context;

        display_ops.release_auxiliary_resource = fake_display_release_auxiliary_resource;
        display_ops.release_backbuffer = fake_display_release_backbuffer;
        display_ops.create_backbuffer = fake_display_create_backbuffer;
        display_ops.delete_bitmap = fake_display_delete_bitmap;
        display_ops.ctx = &display_context;
        palette_ops.get_dc = fake_display_get_dc;
        palette_ops.select_palette = fake_display_select_palette;
        palette_ops.realize_palette = fake_display_realize_palette;
        palette_ops.release_dc = fake_display_release_dc;
        palette_ops.invalidate_rect = fake_display_invalidate_rect;
        palette_ops.ctx = &display_context;
        redraw_ops.begin_redraw_scope = fake_display_begin_redraw_scope;
        redraw_ops.end_redraw_scope = fake_display_end_redraw_scope;
        redraw_ops.execute_redraw = fake_display_execute_redraw;
        redraw_ops.ctx = &redraw_context;
        scroll_ops.get_listener_count = fake_display_get_listener_count;
        scroll_ops.get_listener = fake_display_get_listener;
        scroll_ops.is_scroll_listener = fake_display_is_scroll_listener;
        scroll_ops.notify_scroll_listener = fake_display_notify_scroll_listener;
        scroll_ops.refresh_owner = fake_display_refresh_owner;
        scroll_ops.redraw_ops = &redraw_ops;
        scroll_ops.ctx = &scroll_context;
        present_ops.resolve_target_dc = fake_display_resolve_target_dc;
        present_ops.render_scene = fake_display_render_scene;
        present_ops.select_palette = fake_present_select_palette;
        present_ops.realize_palette = fake_present_realize_palette;
        present_ops.bit_blt = fake_display_bit_blt;
        present_ops.draw_focus_rect = fake_display_draw_focus_rect;
        present_ops.flush_gdi = fake_display_flush_gdi;
        present_ops.ctx = &present_ops_context;
        scene_ops.draw_background_tile = fake_display_draw_background_tile;
        scene_ops.get_actor_count = fake_display_get_actor_count;
        scene_ops.get_actor = fake_display_get_actor;
        scene_ops.collect_visible_actor = fake_display_collect_visible_actor;
        scene_ops.draw_actor = fake_display_draw_actor;
        scene_ops.acquire_auxiliary_sprite = fake_display_acquire_auxiliary_sprite;
        scene_ops.draw_auxiliary_sprite = fake_display_draw_auxiliary_sprite;
        scene_ops.ctx = &scene_context;

        creatures_display_surface_init(&display_surface, (void *)0x1357);
        display_surface.bounds.left = 100;
        display_surface.bounds.top = 200;
        display_surface.redraw_enabled = 1;
        display_surface.auxiliary_sprite_token = 0x11223344u;
        display_surface.auxiliary_sprite_resource = (void *)0x2468;
        creatures_display_surface_bind_owner(&display_surface, (void *)0x6262);
        creatures_display_surface_bind_palette_target(
            &display_surface, (void *)0x7171, (void *)0x8181);
        creatures_display_surface_bind_backbuffer_dc(&display_surface, (void *)0xa1a1);

        creatures_display_surface_reset_backbuffer(&display_surface, &display_ops);
        expect_i32(display_context.release_auxiliary_call_count, 1,
            "creatures_display_surface_reset_backbuffer auxiliary releases");
        expect_true(display_context.last_released_auxiliary_resource == (void *)0x2468,
            "creatures_display_surface_reset_backbuffer released resource");
        expect_i32(display_context.release_backbuffer_call_count, 1,
            "creatures_display_surface_reset_backbuffer surface releases");
        expect_true(display_context.last_released_backbuffer == (void *)0x1357,
            "creatures_display_surface_reset_backbuffer released surface");
        expect_false(display_surface.redraw_enabled,
            "creatures_display_surface_reset_backbuffer redraw flag");
        expect_true(display_surface.auxiliary_sprite_resource == (void *)0x2468,
            "creatures_display_surface_reset_backbuffer retains released pointer");

        creatures_display_surface_resize_backbuffer(&display_surface, 13, 7, &display_ops);
        expect_i32(display_context.create_backbuffer_call_count, 1,
            "creatures_display_surface_resize_backbuffer create calls");
        expect_true(display_context.last_surface_ctx == (void *)0x1357,
            "creatures_display_surface_resize_backbuffer surface context");
        expect_u32(display_context.last_create_width, 16,
            "creatures_display_surface_resize_backbuffer aligned width");
        expect_i32(display_context.last_create_height, 7,
            "creatures_display_surface_resize_backbuffer height");
        expect_i32(display_context.delete_bitmap_call_count, 1,
            "creatures_display_surface_resize_backbuffer delete calls");
        expect_true(display_context.last_deleted_bitmap == (void *)0x4444,
            "creatures_display_surface_resize_backbuffer deleted retired bitmap");
        expect_i32(display_surface.bounds.right, 116,
            "creatures_display_surface_resize_backbuffer right");
        expect_i32(display_surface.bounds.bottom, 207,
            "creatures_display_surface_resize_backbuffer bottom");

        display_surface.bounds.left = 40;
        display_surface.bounds.top = CREATURES_WORLD_HEIGHT - 5;
        display_context.retired_bitmap_handle = NULL;
        creatures_display_surface_resize_backbuffer(&display_surface, 8, 20, &display_ops);
        expect_i32(display_context.create_backbuffer_call_count, 2,
            "creatures_display_surface_resize_backbuffer second create");
        expect_i32(display_context.delete_bitmap_call_count, 1,
            "creatures_display_surface_resize_backbuffer null retired handle");
        expect_i32(display_surface.bounds.right, 48,
            "creatures_display_surface_resize_backbuffer clamped right");
        expect_i32(display_surface.bounds.top, CREATURES_WORLD_HEIGHT - 20,
            "creatures_display_surface_resize_backbuffer clamped top");
        expect_i32(display_surface.bounds.bottom, CREATURES_WORLD_HEIGHT,
            "creatures_display_surface_resize_backbuffer clamped bottom");

        creatures_display_surface_resize_backbuffer(&display_surface, 0, 10, &display_ops);
        expect_i32(display_context.create_backbuffer_call_count, 2,
            "creatures_display_surface_resize_backbuffer ignores zero width");

        expect_u32(creatures_display_surface_realize_palette(&display_surface, &palette_ops), 7,
            "creatures_display_surface_realize_palette");
        expect_i32(display_context.get_dc_call_count, 1,
            "creatures_display_surface_realize_palette get dc");
        expect_true(display_context.last_get_dc_window == (void *)0x7171,
            "creatures_display_surface_realize_palette window");
        expect_i32(display_context.select_palette_call_count, 2,
            "creatures_display_surface_realize_palette select count");
        expect_true(display_context.last_selected_dc == (void *)0x5151,
            "creatures_display_surface_realize_palette selected dc");
        expect_true(display_context.last_selected_palette == (void *)0x6161,
            "creatures_display_surface_realize_palette restored previous palette");
        expect_i32(display_context.last_select_background, 1,
            "creatures_display_surface_realize_palette restore mode");
        expect_i32(display_context.realize_palette_call_count, 2,
            "creatures_display_surface_realize_palette realize count");
        expect_true(display_context.last_realize_dc == (void *)0x5151,
            "creatures_display_surface_realize_palette realize dc");
        expect_i32(display_context.release_dc_call_count, 1,
            "creatures_display_surface_realize_palette release dc");
        expect_true(display_context.last_release_dc_window == (void *)0x7171,
            "creatures_display_surface_realize_palette release window");
        expect_true(display_context.last_release_dc_handle == (void *)0x5151,
            "creatures_display_surface_realize_palette release handle");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_display_surface_realize_palette invalidate count");
        expect_true(display_context.last_invalidated_window == (void *)0x7171,
            "creatures_display_surface_realize_palette invalidate window");
        expect_true(display_context.last_invalidated_rect == NULL,
            "creatures_display_surface_realize_palette invalidate whole window");
        expect_i32(display_context.last_invalidate_erase_background, 1,
            "creatures_display_surface_realize_palette invalidate erase");

        display_context.get_dc_call_count = 0;
        display_context.select_palette_call_count = 0;
        display_context.realize_palette_call_count = 0;
        display_context.release_dc_call_count = 0;
        display_context.invalidate_rect_call_count = 0;
        creatures_display_surface_sync_palette_window(
            &display_surface, (void *)0x7171, &palette_ops);
        expect_i32(display_context.get_dc_call_count, 0,
            "creatures_display_surface_sync_palette_window same window");
        creatures_display_surface_sync_palette_window(
            &display_surface, (void *)0x9191, &palette_ops);
        expect_i32(display_context.get_dc_call_count, 1,
            "creatures_display_surface_sync_palette_window changed window");

        creatures_display_surface_bind_palette_target(&display_surface, (void *)0x7171, NULL);
        display_context.get_dc_call_count = 0;
        expect_u32(creatures_display_surface_realize_palette(&display_surface, &palette_ops), 1,
            "creatures_display_surface_realize_palette null palette");
        expect_i32(display_context.get_dc_call_count, 0,
            "creatures_display_surface_realize_palette null palette skips gdi");

        helper_left.left = 100;
        helper_left.top = 20;
        helper_left.right = 200;
        helper_left.bottom = 60;
        helper_right.left = 150;
        helper_right.top = 30;
        helper_right.right = 250;
        helper_right.bottom = 70;
        expect_true(creatures_display_intersect_wrapped_rect(&helper_left, &helper_right),
            "creatures_display_intersect_wrapped_rect");
        expect_i32(helper_left.left, 150,
            "creatures_display_intersect_wrapped_rect left");
        expect_i32(helper_left.top, 30,
            "creatures_display_intersect_wrapped_rect top");
        expect_i32(helper_left.right, 200,
            "creatures_display_intersect_wrapped_rect right");
        expect_i32(helper_left.bottom, 60,
            "creatures_display_intersect_wrapped_rect bottom");

        display_surface.redraw_enabled = 1;
        display_surface.bounds.left = 100;
        display_surface.bounds.top = 50;
        display_surface.bounds.right = 200;
        display_surface.bounds.bottom = 150;
        requested_bounds.left = 150;
        requested_bounds.top = 70;
        requested_bounds.right = 250;
        requested_bounds.bottom = 140;
        creatures_display_surface_redraw_region(
            &display_surface, (void *)0x7373, &requested_bounds, &redraw_ops);
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_display_surface_redraw_region execute");
        expect_true(redraw_context.last_execute_scratch == (void *)0x7373,
            "creatures_display_surface_redraw_region scratch");
        expect_i32(redraw_context.last_visible_bounds.left, 150,
            "creatures_display_surface_redraw_region visible left");
        expect_i32(redraw_context.last_visible_bounds.top, 70,
            "creatures_display_surface_redraw_region visible top");
        expect_i32(redraw_context.last_visible_bounds.right, 200,
            "creatures_display_surface_redraw_region visible right");
        expect_i32(redraw_context.last_visible_bounds.bottom, 140,
            "creatures_display_surface_redraw_region visible bottom");
        expect_i32(redraw_context.last_viewport_bounds.left, 100,
            "creatures_display_surface_redraw_region viewport left");
        expect_i32(redraw_context.last_current_bounds.right, 200,
            "creatures_display_surface_redraw_region current right");

        redraw_context.begin_redraw_scope_call_count = 0;
        redraw_context.end_redraw_scope_call_count = 0;
        redraw_context.execute_redraw_call_count = 0;
        creatures_display_surface_prepare_and_redraw_region(
            &display_surface, &requested_bounds, &redraw_ops);
        expect_i32(redraw_context.begin_redraw_scope_call_count, 1,
            "creatures_display_surface_prepare_and_redraw_region begin");
        expect_i32(redraw_context.end_redraw_scope_call_count, 1,
            "creatures_display_surface_prepare_and_redraw_region end");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_display_surface_prepare_and_redraw_region execute");
        expect_true(redraw_context.last_begin_owner == (void *)0x6262,
            "creatures_display_surface_prepare_and_redraw_region owner");
        expect_true(redraw_context.last_begin_scratch == redraw_context.last_execute_scratch,
            "creatures_display_surface_prepare_and_redraw_region scratch begin");
        expect_true(redraw_context.last_end_scratch == redraw_context.last_execute_scratch,
            "creatures_display_surface_prepare_and_redraw_region scratch end");

        redraw_context.execute_redraw_call_count = 0;
        requested_bounds.left = 10;
        requested_bounds.top = 10;
        requested_bounds.right = 10;
        requested_bounds.bottom = 20;
        creatures_display_surface_redraw_region(
            &display_surface, (void *)0x7373, &requested_bounds, &redraw_ops);
        expect_i32(redraw_context.execute_redraw_call_count, 0,
            "creatures_display_surface_redraw_region ignores empty width");

        scroll_context.listener_count = 3;
        scroll_context.listeners[0].listener_id = 11;
        scroll_context.listeners[0].listener_type = 0;
        scroll_context.listeners[1].listener_id = 22;
        scroll_context.listeners[1].listener_type = 1;
        scroll_context.listeners[2].listener_id = 33;
        scroll_context.listeners[2].listener_type = 2;
        redraw_context.execute_redraw_call_count = 0;
        redraw_context.last_execute_scratch = NULL;
        display_surface.bounds.left = 100;
        display_surface.bounds.top = 50;
        display_surface.bounds.right = 200;
        display_surface.bounds.bottom = 150;
        {
            int scroll_delta_x;
            int scroll_delta_y;

            scroll_delta_x = 30;
            scroll_delta_y = 20;
            creatures_display_surface_scroll(
                &display_surface, &scroll_delta_x, &scroll_delta_y, &scroll_ops);
            expect_i32(display_surface.bounds.left, 130,
                "creatures_display_surface_scroll left");
            expect_i32(display_surface.bounds.top, 70,
                "creatures_display_surface_scroll top");
            expect_i32(display_surface.bounds.right, 230,
                "creatures_display_surface_scroll right");
            expect_i32(display_surface.bounds.bottom, 170,
                "creatures_display_surface_scroll bottom");
            expect_i32(scroll_delta_x, 30,
                "creatures_display_surface_scroll caller dx");
            expect_i32(scroll_delta_y, 20,
                "creatures_display_surface_scroll caller dy");
            expect_i32(scroll_context.refresh_owner_call_count, 1,
                "creatures_display_surface_scroll refresh owner");
            expect_true(scroll_context.last_refresh_owner == (void *)0x6262,
                "creatures_display_surface_scroll refresh handle");
            expect_i32(scroll_context.notified_listener_count, 2,
                "creatures_display_surface_scroll notify count");
            expect_i32(scroll_context.notified_listener_ids[0], 22,
                "creatures_display_surface_scroll notify id0");
            expect_i32(scroll_context.notified_listener_ids[1], 33,
                "creatures_display_surface_scroll notify id1");
            expect_i32(scroll_context.listeners[0].notify_call_count, 0,
                "creatures_display_surface_scroll ignore non scroll listener");
            expect_i32(scroll_context.listeners[1].last_delta_x, 30,
                "creatures_display_surface_scroll listener dx");
            expect_i32(scroll_context.listeners[1].last_delta_y, 20,
                "creatures_display_surface_scroll listener dy");
            expect_i32(redraw_context.execute_redraw_call_count, 1,
                "creatures_display_surface_scroll redraw");
            expect_true(redraw_context.last_execute_scratch != NULL,
                "creatures_display_surface_scroll redraw scratch");
            expect_i32(redraw_context.last_visible_bounds.left, 130,
                "creatures_display_surface_scroll redraw left");
            expect_i32(redraw_context.last_visible_bounds.bottom, 170,
                "creatures_display_surface_scroll redraw bottom");
        }

        memset(&scroll_context, 0, sizeof(scroll_context));
        scroll_context.listener_count = 1;
        scroll_context.listeners[0].listener_id = 44;
        scroll_context.listeners[0].listener_type = 1;
        redraw_context.execute_redraw_call_count = 0;
        display_surface.bounds.left = 10;
        display_surface.bounds.top = 100;
        display_surface.bounds.right = 110;
        display_surface.bounds.bottom = 200;
        {
            int scroll_delta_x;
            int scroll_delta_y;

            scroll_delta_x = -50;
            scroll_delta_y = -200;
            creatures_display_surface_scroll(
                &display_surface, &scroll_delta_x, &scroll_delta_y, &scroll_ops);
            expect_i32(display_surface.bounds.left, CREATURES_WORLD_WRAP_WIDTH - 40,
                "creatures_display_surface_scroll wrapped left");
            expect_i32(display_surface.bounds.right, CREATURES_WORLD_WRAP_WIDTH + 60,
                "creatures_display_surface_scroll wrapped right");
            expect_i32(display_surface.bounds.top, 0,
                "creatures_display_surface_scroll clamped top");
            expect_i32(display_surface.bounds.bottom, 100,
                "creatures_display_surface_scroll clamped bottom");
            expect_i32(scroll_delta_x, -50,
                "creatures_display_surface_scroll wrapped caller dx");
            expect_i32(scroll_delta_y, -100,
                "creatures_display_surface_scroll clamped caller dy");
            expect_i32(scroll_context.listeners[0].last_delta_x,
                CREATURES_WORLD_WRAP_WIDTH - 50,
                "creatures_display_surface_scroll wrapped listener dx");
            expect_i32(scroll_context.listeners[0].last_delta_y, -100,
                "creatures_display_surface_scroll clamped listener dy");
            expect_i32(redraw_context.execute_redraw_call_count, 1,
                "creatures_display_surface_scroll wrapped redraw");
        }

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        creatures_display_surface_scroll_by(&display_surface, 0, 0, &scroll_ops);
        expect_i32(scroll_context.refresh_owner_call_count, 0,
            "creatures_display_surface_scroll_by ignores zero move");
        expect_i32(redraw_context.execute_redraw_call_count, 0,
            "creatures_display_surface_scroll_by ignores zero redraw");

        memset(&scroll_context, 0, sizeof(scroll_context));
        scroll_context.listener_count = 1;
        scroll_context.listeners[0].listener_id = 55;
        scroll_context.listeners[0].listener_type = 2;
        display_surface.bounds.left = CREATURES_WORLD_WRAP_WIDTH - 22;
        display_surface.bounds.top = 100;
        display_surface.bounds.right = CREATURES_WORLD_WRAP_WIDTH + 78;
        display_surface.bounds.bottom = 200;
        expect_i32(creatures_display_surface_scroll_horizontally(&display_surface, 40, &scroll_ops),
            40, "creatures_display_surface_scroll_horizontally");
        expect_i32(display_surface.bounds.left, 18,
            "creatures_display_surface_scroll_horizontally left");
        expect_i32(display_surface.bounds.right, 118,
            "creatures_display_surface_scroll_horizontally right");
        expect_i32(scroll_context.listeners[0].last_delta_x, -8312,
            "creatures_display_surface_scroll_horizontally listener dx");

        memset(&scroll_context, 0, sizeof(scroll_context));
        scroll_context.listener_count = 1;
        scroll_context.listeners[0].listener_id = 66;
        scroll_context.listeners[0].listener_type = 1;
        display_surface.bounds.left = 100;
        display_surface.bounds.top = 900;
        display_surface.bounds.right = 200;
        display_surface.bounds.bottom = 1100;
        expect_i32(creatures_display_surface_scroll_vertically(&display_surface, 200, &scroll_ops),
            100, "creatures_display_surface_scroll_vertically");
        expect_i32(display_surface.bounds.top, 1000,
            "creatures_display_surface_scroll_vertically top");
        expect_i32(display_surface.bounds.bottom, CREATURES_WORLD_HEIGHT,
            "creatures_display_surface_scroll_vertically bottom");

        display_surface.bounds.left = 100;
        display_surface.bounds.top = 50;
        display_surface.bounds.right = 200;
        display_surface.bounds.bottom = 150;
        creatures_display_surface_bind_palette_target(
            &display_surface, (void *)0x7171, (void *)0x8181);
        focus_bounds.left = 130;
        focus_bounds.top = 60;
        focus_bounds.right = 170;
        focus_bounds.bottom = 80;
        creatures_display_surface_set_focus_bounds(&display_surface, 1, &focus_bounds);
        requested_bounds.left = 150;
        requested_bounds.top = 70;
        requested_bounds.right = 188;
        requested_bounds.bottom = 120;
        present_state.visible_bounds = requested_bounds;
        present_state.viewport_bounds = display_surface.bounds;
        present_state.current_bounds = display_surface.bounds;
        display_context.select_palette_call_count = 0;
        display_context.realize_palette_call_count = 0;
        creatures_display_surface_world_to_client_rect(
            &display_surface, &client_rect, &requested_bounds);
        expect_i32(client_rect.left, 50,
            "creatures_display_surface_world_to_client_rect left");
        expect_i32(client_rect.top, 20,
            "creatures_display_surface_world_to_client_rect top");
        expect_i32(client_rect.right, 88,
            "creatures_display_surface_world_to_client_rect right");
        expect_i32(client_rect.bottom, 70,
            "creatures_display_surface_world_to_client_rect bottom");

        scene_context.actor_count = 3;
        scene_context.actors[0].actor_id = 101;
        scene_context.actors[0].visible = 1;
        scene_context.actors[0].draw_depth = 20;
        scene_context.actors[1].actor_id = 102;
        scene_context.actors[1].visible = 1;
        scene_context.actors[1].draw_depth = 10;
        scene_context.actors[2].actor_id = 103;
        scene_context.actors[2].visible = 0;
        scene_context.actors[2].draw_depth = 30;
        scene_context.acquired_auxiliary_resource = (void *)0xc3c3;
        display_surface.auxiliary_sprite_token = 0x55667788u;
        display_surface.auxiliary_sprite_resource = NULL;
        requested_bounds.left = 150;
        requested_bounds.top = 70;
        requested_bounds.right = 410;
        requested_bounds.bottom = 220;
        creatures_display_surface_render_scene(&display_surface, &requested_bounds, &scene_ops);
        expect_i32(scene_context.background_draw_call_count, 4,
            "creatures_display_surface_render_scene background count");
        expect_i32(scene_context.background_wrapped_columns[0], 1,
            "creatures_display_surface_render_scene background col0");
        expect_i32(scene_context.background_rows[0], 0,
            "creatures_display_surface_render_scene background row0");
        expect_i32(scene_context.background_world_x[0], 144,
            "creatures_display_surface_render_scene background x0");
        expect_i32(scene_context.background_world_y[0], 0,
            "creatures_display_surface_render_scene background y0");
        expect_i32(scene_context.background_wrapped_columns[3], 2,
            "creatures_display_surface_render_scene background col3");
        expect_i32(scene_context.background_rows[3], 1,
            "creatures_display_surface_render_scene background row3");
        expect_i32(scene_context.get_actor_count_call_count, 1,
            "creatures_display_surface_render_scene actor count");
        expect_i32(scene_context.get_actor_call_count, 3,
            "creatures_display_surface_render_scene actor gets");
        expect_i32(scene_context.collect_visible_actor_call_count, 3,
            "creatures_display_surface_render_scene visibility checks");
        expect_i32(scene_context.draw_actor_call_count, 2,
            "creatures_display_surface_render_scene actor draws");
        expect_i32(scene_context.drawn_actor_ids[0], 102,
            "creatures_display_surface_render_scene actor draw order0");
        expect_i32(scene_context.drawn_actor_ids[1], 101,
            "creatures_display_surface_render_scene actor draw order1");
        expect_i32(scene_context.acquire_auxiliary_call_count, 1,
            "creatures_display_surface_render_scene auxiliary acquire");
        expect_u32(scene_context.last_acquired_auxiliary_token, 0x55667788u,
            "creatures_display_surface_render_scene auxiliary token");
        expect_i32(scene_context.draw_auxiliary_call_count, 1,
            "creatures_display_surface_render_scene auxiliary draw");
        expect_true(scene_context.last_drawn_auxiliary_resource == (void *)0xc3c3,
            "creatures_display_surface_render_scene auxiliary resource");
        expect_true(display_surface.auxiliary_sprite_resource == (void *)0xc3c3,
            "creatures_display_surface_render_scene cached auxiliary");
        expect_i32(scene_context.last_background_clip_bounds.left, 150,
            "creatures_display_surface_render_scene background clip left");
        expect_i32(scene_context.last_actor_viewport_bounds.left, 100,
            "creatures_display_surface_render_scene actor viewport left");
        expect_i32(scene_context.last_auxiliary_viewport_bounds.top, 50,
            "creatures_display_surface_render_scene auxiliary viewport top");

        scene_context.acquire_auxiliary_call_count = 0;
        scene_context.draw_auxiliary_call_count = 0;
        scene_context.last_drawn_auxiliary_resource = NULL;
        scene_context.acquired_auxiliary_resource = NULL;
        display_surface.auxiliary_sprite_token = 0xabcdef01u;
        display_surface.auxiliary_sprite_resource = NULL;
        creatures_display_surface_render_scene(&display_surface, &requested_bounds, &scene_ops);
        expect_i32(scene_context.acquire_auxiliary_call_count, 1,
            "creatures_display_surface_render_scene failed auxiliary acquire");
        expect_i32(scene_context.draw_auxiliary_call_count, 0,
            "creatures_display_surface_render_scene failed auxiliary skips draw");
        expect_u32(display_surface.auxiliary_sprite_token, 0,
            "creatures_display_surface_render_scene clears failed token");

        requested_bounds.left = 150;
        requested_bounds.top = 70;
        requested_bounds.right = 188;
        requested_bounds.bottom = 120;
        display_surface.auxiliary_sprite_token = 0;
        display_surface.auxiliary_sprite_resource = NULL;

        creatures_display_surface_present_region(
            &display_surface, (void *)0xb2b2, &present_state, &present_ops);
        expect_i32(present_context.resolve_target_dc_call_count, 1,
            "creatures_display_surface_present_region resolve dc");
        expect_true(present_context.last_resolve_scratch == (void *)0xb2b2,
            "creatures_display_surface_present_region scratch");
        expect_i32(present_context.render_scene_call_count, 1,
            "creatures_display_surface_present_region render scene");
        expect_i32(present_context.last_render_world_bounds.left, 150,
            "creatures_display_surface_present_region render left");
        expect_i32(present_context.last_render_world_bounds.right, 190,
            "creatures_display_surface_present_region aligned render right");
        expect_i32(present_context.bit_blt_call_count, 1,
            "creatures_display_surface_present_region bitblt");
        expect_true(present_context.last_bit_blt_target_dc == (void *)0x9292,
            "creatures_display_surface_present_region target dc");
        expect_i32(present_context.last_bit_blt_dest_x, 50,
            "creatures_display_surface_present_region dest x");
        expect_i32(present_context.last_bit_blt_dest_y, 20,
            "creatures_display_surface_present_region dest y");
        expect_i32(present_context.last_bit_blt_width, 40,
            "creatures_display_surface_present_region width");
        expect_i32(present_context.last_bit_blt_height, 50,
            "creatures_display_surface_present_region height");
        expect_true(present_context.last_bit_blt_source_dc == (void *)0xa1a1,
            "creatures_display_surface_present_region source dc");
        expect_i32(present_context.last_bit_blt_source_x, 50,
            "creatures_display_surface_present_region source x");
        expect_i32(present_context.last_bit_blt_source_y, 20,
            "creatures_display_surface_present_region source y");
        expect_i32(present_context.draw_focus_rect_call_count, 1,
            "creatures_display_surface_present_region focus");
        expect_i32(present_context.last_focus_rect.left, 50,
            "creatures_display_surface_present_region focus left");
        expect_i32(present_context.last_focus_rect.top, 20,
            "creatures_display_surface_present_region focus top");
        expect_i32(present_context.last_focus_rect.right, 70,
            "creatures_display_surface_present_region focus right");
        expect_i32(present_context.last_focus_rect.bottom, 30,
            "creatures_display_surface_present_region focus bottom");
        expect_i32(present_context.flush_gdi_call_count, 1,
            "creatures_display_surface_present_region flush");
        expect_i32(display_context.select_palette_call_count, 2,
            "creatures_display_surface_present_region palette selects");
        expect_i32(display_context.realize_palette_call_count, 2,
            "creatures_display_surface_present_region palette realizes");
    }

    {
        CreaturesDisplayRect wrapped_rect;
        CreaturesViewportPoint test_point;
        CreaturesDisplaySurface display_surface;

        wrapped_rect.left = 100;
        wrapped_rect.top = 20;
        wrapped_rect.right = 200;
        wrapped_rect.bottom = 60;
        test_point.x = 150;
        test_point.y = 30;
        expect_true(creatures_point_in_wrapped_rect(&wrapped_rect, &test_point),
            "creatures_point_in_wrapped_rect direct hit");
        test_point.x = 210;
        expect_false(creatures_point_in_wrapped_rect(&wrapped_rect, &test_point),
            "creatures_point_in_wrapped_rect direct miss");

        wrapped_rect.left = CREATURES_WORLD_WRAP_WIDTH - 52;
        wrapped_rect.top = 20;
        wrapped_rect.right = CREATURES_WORLD_WRAP_WIDTH + 23;
        wrapped_rect.bottom = 60;
        test_point.x = 10;
        test_point.y = 30;
        expect_true(creatures_point_in_wrapped_rect(&wrapped_rect, &test_point),
            "creatures_point_in_wrapped_rect wrapped low x");
        test_point.x = CREATURES_WORLD_WRAP_WIDTH - 10;
        expect_true(creatures_point_in_wrapped_rect(&wrapped_rect, &test_point),
            "creatures_point_in_wrapped_rect wrapped high x");
        test_point.x = 100;
        expect_false(creatures_point_in_wrapped_rect(&wrapped_rect, &test_point),
            "creatures_point_in_wrapped_rect wrapped miss");

        creatures_display_surface_init(&display_surface, NULL);
        display_surface.bounds.left = 100;
        display_surface.bounds.top = 50;
        display_surface.bounds.right = 300;
        display_surface.bounds.bottom = 250;
        expect_true(creatures_display_surface_target_inside_follow_window(
                        &display_surface, 150, 150),
            "creatures_display_surface_target_inside_follow_window direct");
        expect_false(creatures_display_surface_target_inside_follow_window(
                         &display_surface, 110, 150),
            "creatures_display_surface_target_inside_follow_window outside");

        display_surface.bounds.left = CREATURES_WORLD_WRAP_WIDTH - 40;
        display_surface.bounds.top = 50;
        display_surface.bounds.right = CREATURES_WORLD_WRAP_WIDTH + 40;
        display_surface.bounds.bottom = 210;
        expect_true(creatures_display_surface_target_inside_follow_window(
                        &display_surface, 10, 120),
            "creatures_display_surface_target_inside_follow_window wrapped");
        expect_false(creatures_display_surface_target_inside_follow_window(
                         &display_surface, 200, 120),
            "creatures_display_surface_target_inside_follow_window wrapped miss");
    }

    {
        CreaturesCameraFollowState follow_state;
        CreaturesViewportRefreshOps refresh_ops;
        CreaturesDisplayScrollOps scroll_ops;
        FakeDisplayRedrawContext redraw_context;
        FakeDisplayScrollContext scroll_context;
        CreaturesDisplayRedrawOps redraw_ops;
        CreaturesCameraFollowTarget target;

        memset(&follow_state, 0, sizeof(follow_state));
        memset(&redraw_context, 0, sizeof(redraw_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_ops.begin_redraw_scope = NULL;
        redraw_ops.end_redraw_scope = NULL;
        redraw_ops.execute_redraw = fake_display_execute_redraw;
        redraw_ops.ctx = &redraw_context;
        refresh_ops.refresh_owner = fake_display_refresh_owner;
        refresh_ops.redraw_ops = &redraw_ops;
        refresh_ops.ctx = &scroll_context;
        scroll_ops.get_listener_count = fake_display_get_listener_count;
        scroll_ops.get_listener = fake_display_get_listener;
        scroll_ops.is_scroll_listener = fake_display_is_scroll_listener;
        scroll_ops.notify_scroll_listener = fake_display_notify_scroll_listener;
        scroll_ops.refresh_owner = fake_display_refresh_owner;
        scroll_ops.redraw_ops = &redraw_ops;
        scroll_ops.ctx = &scroll_context;

        creatures_display_surface_init(&follow_state.surface, NULL);
        creatures_display_surface_bind_owner(&follow_state.surface, (void *)0xbeef);
        follow_state.surface.redraw_enabled = 1;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        follow_state.pending_target_dx = 9;
        follow_state.pending_target_dy = -7;
        follow_state.accumulated_dx = 4;
        follow_state.accumulated_dy = -3;
        follow_state.current_step_dx = 2;
        follow_state.current_step_dy = -1;
        follow_state.last_target_handle = (void *)0x1111;
        creatures_camera_follow_reset_state(&follow_state);
        expect_i32(follow_state.pending_target_dx, 0,
            "creatures_camera_follow_reset_state pending dx");
        expect_i32(follow_state.pending_target_dy, 0,
            "creatures_camera_follow_reset_state pending dy");
        expect_i32(follow_state.current_step_dx, 0,
            "creatures_camera_follow_reset_state step dx");
        expect_true(follow_state.last_target_handle == NULL,
            "creatures_camera_follow_reset_state target");

        creatures_camera_follow_set_origin(&follow_state, -5, 1200, &refresh_ops);
        expect_i32(follow_state.surface.bounds.left, 0,
            "creatures_camera_follow_set_origin left clamp");
        expect_i32(follow_state.surface.bounds.top, CREATURES_WORLD_HEIGHT - 100,
            "creatures_camera_follow_set_origin top clamp");
        expect_i32(follow_state.surface.bounds.right, 100,
            "creatures_camera_follow_set_origin right");
        expect_i32(follow_state.surface.bounds.bottom, CREATURES_WORLD_HEIGHT,
            "creatures_camera_follow_set_origin bottom");
        expect_i32(scroll_context.refresh_owner_call_count, 1,
            "creatures_camera_follow_set_origin refresh");
        expect_true(scroll_context.last_refresh_owner == (void *)0xbeef,
            "creatures_camera_follow_set_origin refresh owner");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_camera_follow_set_origin redraw");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        follow_state.smoothing_enabled = 0;
        creatures_camera_follow_seek_origin(&follow_state, 40, 60, &refresh_ops);
        expect_i32(follow_state.surface.bounds.left, 40,
            "creatures_camera_follow_seek_origin direct left");
        expect_i32(follow_state.surface.bounds.top, 60,
            "creatures_camera_follow_seek_origin direct top");
        expect_i32(follow_state.pending_target_dx, 0,
            "creatures_camera_follow_seek_origin direct pending dx");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_camera_follow_seek_origin direct redraw");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        follow_state.smoothing_enabled = 1;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        creatures_camera_follow_seek_origin(&follow_state, 130, 80, &refresh_ops);
        expect_i32(follow_state.pending_target_dx, 30,
            "creatures_camera_follow_seek_origin smooth pending dx");
        expect_i32(follow_state.pending_target_dy, 30,
            "creatures_camera_follow_seek_origin smooth pending dy");
        expect_i32(follow_state.accumulated_dx, 0,
            "creatures_camera_follow_seek_origin smooth accumulated dx");
        expect_i32(redraw_context.execute_redraw_call_count, 0,
            "creatures_camera_follow_seek_origin smooth no redraw");

        creatures_camera_follow_seek_origin(&follow_state, 400, 500, &refresh_ops);
        expect_i32(follow_state.surface.bounds.left, 400,
            "creatures_camera_follow_seek_origin large left");
        expect_i32(follow_state.surface.bounds.top, 500,
            "creatures_camera_follow_seek_origin large top");
        expect_i32(follow_state.pending_target_dx, 0,
            "creatures_camera_follow_seek_origin large pending dx");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_camera_follow_seek_origin large redraw");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        follow_state.smoothing_enabled = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.handle = NULL;
        target.world_x = 0;
        target.world_y = 0;
        target.suppress_follow = 0;
        follow_state.last_target_handle = (void *)0x7777;
        creatures_camera_follow_track_target(&follow_state, &target, NULL, &scroll_ops);
        expect_true(follow_state.last_target_handle == NULL,
            "creatures_camera_follow_track_target clears missing target");

        target.handle = (void *)0x1234;
        target.world_x = 150;
        target.world_y = 100;
        target.suppress_follow = 0;
        creatures_camera_follow_track_target(&follow_state, &target, NULL, &scroll_ops);
        expect_true(follow_state.last_target_handle == (void *)0x1234,
            "creatures_camera_follow_track_target stores handle");
        expect_i32(scroll_context.refresh_owner_call_count, 0,
            "creatures_camera_follow_track_target inside follow window");

        scroll_context.listener_count = 1;
        scroll_context.listeners[0].listener_id = 77;
        scroll_context.listeners[0].listener_type = 1;
        target.world_x = 260;
        target.world_y = 140;
        creatures_camera_follow_track_target(&follow_state, &target, NULL, &scroll_ops);
        expect_i32(follow_state.surface.bounds.left, 210,
            "creatures_camera_follow_track_target direct left");
        expect_i32(follow_state.surface.bounds.top, 78,
            "creatures_camera_follow_track_target direct top");
        expect_i32(scroll_context.listeners[0].last_delta_x, 110,
            "creatures_camera_follow_track_target direct listener dx");
        expect_i32(scroll_context.listeners[0].last_delta_y, 28,
            "creatures_camera_follow_track_target direct listener dy");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        scroll_context.listener_count = 1;
        scroll_context.listeners[0].listener_id = 88;
        scroll_context.listeners[0].listener_type = 1;
        follow_state.smoothing_enabled = 1;
        follow_state.current_step_dx = 0;
        follow_state.current_step_dy = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.world_x = 230;
        target.world_y = 140;
        creatures_camera_follow_track_target(&follow_state, &target, NULL, &scroll_ops);
        expect_i32(follow_state.surface.bounds.left, 101,
            "creatures_camera_follow_track_target smooth left");
        expect_i32(follow_state.surface.bounds.top, 51,
            "creatures_camera_follow_track_target smooth top");
        expect_i32(follow_state.current_step_dx, 2,
            "creatures_camera_follow_track_target smooth step dx");
        expect_i32(follow_state.current_step_dy, 2,
            "creatures_camera_follow_track_target smooth step dy");
        expect_i32(scroll_context.listeners[0].last_delta_x, 1,
            "creatures_camera_follow_track_target smooth listener dx");
        expect_i32(scroll_context.listeners[0].last_delta_y, 1,
            "creatures_camera_follow_track_target smooth listener dy");

        memset(&scroll_context, 0, sizeof(scroll_context));
        follow_state.pending_target_dx = 10;
        follow_state.pending_target_dy = -5;
        follow_state.accumulated_dx = 0;
        follow_state.accumulated_dy = 0;
        follow_state.current_step_dx = 0;
        follow_state.current_step_dy = 0;
        follow_state.smoothing_enabled = 1;
        expect_true(creatures_camera_follow_step_pending_motion(&follow_state, &scroll_ops),
            "creatures_camera_follow_step_pending_motion");
        expect_i32(follow_state.current_step_dx, 2,
            "creatures_camera_follow_step_pending_motion step dx");
        expect_i32(follow_state.current_step_dy, -2,
            "creatures_camera_follow_step_pending_motion step dy");
        expect_i32(follow_state.accumulated_dx, 2,
            "creatures_camera_follow_step_pending_motion accumulated dx");
        expect_i32(follow_state.accumulated_dy, -2,
            "creatures_camera_follow_step_pending_motion accumulated dy");
        expect_i32(follow_state.pending_target_dx, 8,
            "creatures_camera_follow_step_pending_motion pending dx");
        expect_i32(follow_state.pending_target_dy, -3,
            "creatures_camera_follow_step_pending_motion pending dy");

        follow_state.smoothing_enabled = 0;
        expect_false(creatures_camera_follow_step_pending_motion(&follow_state, &scroll_ops),
            "creatures_camera_follow_step_pending_motion disabled");
    }

    {
        CreaturesCameraFollowState follow_state;
        CreaturesViewportFollowController controller;
        CreaturesViewportRefreshOps refresh_ops;
        CreaturesDisplayScrollOps scroll_ops;
        CreaturesViewportScrollbarOps scrollbar_ops;
        CreaturesViewportScrollEventOps scroll_event_ops;
        CreaturesViewportInvalidationOps invalidation_ops;
        CreaturesViewportScrollMetrics scroll_metrics;
        FakeDisplayRedrawContext redraw_context;
        FakeDisplayScrollContext scroll_context;
        FakeDisplayContext display_context;
        FakeViewportScrollbarContext scrollbar_context;
        CreaturesDisplayRedrawOps redraw_ops;
        CreaturesCameraFollowTarget target;

        memset(&follow_state, 0, sizeof(follow_state));
        memset(&controller, 0, sizeof(controller));
        memset(&redraw_context, 0, sizeof(redraw_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        memset(&display_context, 0, sizeof(display_context));
        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        redraw_ops.begin_redraw_scope = NULL;
        redraw_ops.end_redraw_scope = NULL;
        redraw_ops.execute_redraw = fake_display_execute_redraw;
        redraw_ops.ctx = &redraw_context;
        refresh_ops.refresh_owner = fake_display_refresh_owner;
        refresh_ops.redraw_ops = &redraw_ops;
        refresh_ops.ctx = &scroll_context;
        scroll_ops.get_listener_count = fake_display_get_listener_count;
        scroll_ops.get_listener = fake_display_get_listener;
        scroll_ops.is_scroll_listener = fake_display_is_scroll_listener;
        scroll_ops.notify_scroll_listener = fake_display_notify_scroll_listener;
        scroll_ops.refresh_owner = fake_display_refresh_owner;
        scroll_ops.redraw_ops = &redraw_ops;
        scroll_ops.ctx = &scroll_context;
        scrollbar_ops.set_scrollbar_range = fake_viewport_set_scrollbar_range;
        scrollbar_ops.set_scrollbar_position = fake_viewport_set_scrollbar_position;
        scrollbar_ops.ctx = &scrollbar_context;
        scroll_event_ops.get_scrollbar_position = fake_viewport_get_scrollbar_position;
        scroll_event_ops.set_scrollbar_position = fake_viewport_set_scrollbar_position;
        scroll_event_ops.ctx = &scrollbar_context;
        invalidation_ops.invalidate_rect = fake_display_invalidate_rect;
        invalidation_ops.window_handle = (void *)0x8181;
        invalidation_ops.ctx = &display_context;
        scroll_metrics.horizontal_page = 50;
        scroll_metrics.vertical_page = 36;

        creatures_display_surface_init(&follow_state.surface, NULL);
        creatures_display_surface_bind_owner(&follow_state.surface, (void *)0x12345678);
        follow_state.surface.redraw_enabled = 1;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        controller.camera = &follow_state;

        creatures_viewport_sync_scrollbars(&scroll_metrics, &scrollbar_ops);
        expect_i32(scrollbar_context.set_range_call_count, 2,
            "creatures_viewport_sync_scrollbars range count");
        expect_i32(scrollbar_context.last_range_axis[0], 0,
            "creatures_viewport_sync_scrollbars horizontal axis");
        expect_i32(scrollbar_context.last_range_maximum[0], 100,
            "creatures_viewport_sync_scrollbars horizontal maximum");
        expect_i32(scrollbar_context.last_range_axis[1], 1,
            "creatures_viewport_sync_scrollbars vertical axis");
        expect_i32(scrollbar_context.last_range_maximum[1], 72,
            "creatures_viewport_sync_scrollbars vertical maximum");
        expect_i32(scrollbar_context.set_position_call_count, 2,
            "creatures_viewport_sync_scrollbars position count");
        expect_i32(scrollbar_context.last_position_axis[0], 0,
            "creatures_viewport_sync_scrollbars horizontal position axis");
        expect_i32(scrollbar_context.last_position_value[0], 50,
            "creatures_viewport_sync_scrollbars horizontal position");
        expect_i32(scrollbar_context.last_position_axis[1], 1,
            "creatures_viewport_sync_scrollbars vertical position axis");
        expect_i32(scrollbar_context.last_position_value[1], 36,
            "creatures_viewport_sync_scrollbars vertical position");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        target.handle = (void *)0x4010;
        target.world_x = 300;
        target.world_y = 200;
        target.suppress_follow = 0;
        creatures_camera_follow_seek_target(&follow_state, &target, &refresh_ops);
        expect_i32(follow_state.surface.bounds.left, 250,
            "creatures_camera_follow_seek_target left");
        expect_i32(follow_state.surface.bounds.top, 138,
            "creatures_camera_follow_seek_target top");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_camera_follow_seek_target redraw");

        follow_state.last_target_handle = (void *)0x7070;
        target.handle = NULL;
        creatures_camera_follow_seek_target(&follow_state, &target, &refresh_ops);
        expect_true(follow_state.last_target_handle == NULL,
            "creatures_camera_follow_seek_target clears missing target");

        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.handle = (void *)0x4020;
        target.world_x = 20;
        target.world_y = 200;
        creatures_camera_follow_set_target(&follow_state, &target, &refresh_ops);
        expect_i32(follow_state.surface.bounds.left, CREATURES_WORLD_WRAP_WIDTH - 100,
            "creatures_camera_follow_set_target wrapped left");
        expect_i32(follow_state.surface.bounds.top, 138,
            "creatures_camera_follow_set_target top");
        expect_i32(redraw_context.execute_redraw_call_count, 1,
            "creatures_camera_follow_set_target redraw");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        controller.follow_mode = 1;
        controller.stable_frame_count = 19;
        follow_state.smoothing_enabled = 1;
        follow_state.pending_target_dx = 0;
        follow_state.pending_target_dy = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.handle = (void *)0x4030;
        target.world_x = 150;
        target.world_y = 100;
        creatures_viewport_follow_controller_update(&controller, &scroll_metrics, &target, NULL,
            &scrollbar_ops, &scroll_ops, &invalidation_ops);
        expect_i32(controller.follow_mode, 2,
            "creatures_viewport_follow_controller_update promote mode");
        expect_i32(controller.stable_frame_count, 20,
            "creatures_viewport_follow_controller_update stable count");
        expect_i32(scrollbar_context.set_range_call_count, 2,
            "creatures_viewport_follow_controller_update sync ranges");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_follow_controller_update invalidate");
        expect_true(display_context.last_invalidated_window == (void *)0x8181,
            "creatures_viewport_follow_controller_update invalidate window");
        expect_true(display_context.last_invalidated_rect == NULL,
            "creatures_viewport_follow_controller_update invalidate full window");
        expect_i32(display_context.last_invalidate_erase_background, 0,
            "creatures_viewport_follow_controller_update invalidate erase");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        controller.follow_mode = 1;
        controller.stable_frame_count = 7;
        target.world_x = 260;
        target.world_y = 100;
        creatures_viewport_follow_controller_update(&controller, &scroll_metrics, &target, NULL,
            &scrollbar_ops, &scroll_ops, &invalidation_ops);
        expect_i32(controller.stable_frame_count, 0,
            "creatures_viewport_follow_controller_update reset stable count");
        expect_i32(scrollbar_context.set_range_call_count, 0,
            "creatures_viewport_follow_controller_update no sync when outside");
        expect_i32(display_context.invalidate_rect_call_count, 0,
            "creatures_viewport_follow_controller_update no invalidate when outside");

        memset(&scroll_context, 0, sizeof(scroll_context));
        controller.follow_mode = 2;
        follow_state.smoothing_enabled = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.world_x = 260;
        target.world_y = 140;
        creatures_viewport_follow_controller_update(&controller, &scroll_metrics, &target, NULL,
            &scrollbar_ops, &scroll_ops, &invalidation_ops);
        expect_i32(follow_state.surface.bounds.left, 210,
            "creatures_viewport_follow_controller_update direct track left");
        expect_i32(follow_state.surface.bounds.top, 78,
            "creatures_viewport_follow_controller_update direct track top");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        redraw_context.execute_redraw_call_count = 0;
        controller.follow_mode = 1;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        target.world_x = 300;
        target.world_y = 200;
        creatures_viewport_follow_controller_force_recenter(
            &controller, &scroll_metrics, &target, &scrollbar_ops, &refresh_ops,
            &invalidation_ops);
        expect_i32(controller.follow_mode, 2,
            "creatures_viewport_follow_controller_force_recenter mode");
        expect_i32(scrollbar_context.set_range_call_count, 2,
            "creatures_viewport_follow_controller_force_recenter sync ranges");
        expect_i32(follow_state.surface.bounds.left, 250,
            "creatures_viewport_follow_controller_force_recenter left");
        expect_i32(follow_state.surface.bounds.top, 138,
            "creatures_viewport_follow_controller_force_recenter top");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_follow_controller_force_recenter invalidate");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        controller.follow_mode = 0;
        follow_state.surface.bounds.left = 111;
        follow_state.surface.bounds.top = 77;
        follow_state.surface.bounds.right = 211;
        follow_state.surface.bounds.bottom = 177;
        creatures_viewport_follow_controller_force_recenter(
            &controller, &scroll_metrics, &target, &scrollbar_ops, &refresh_ops,
            &invalidation_ops);
        expect_i32(scrollbar_context.set_range_call_count, 0,
            "creatures_viewport_follow_controller_force_recenter disabled no sync");
        expect_i32(follow_state.surface.bounds.left, 111,
            "creatures_viewport_follow_controller_force_recenter disabled left");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_follow_controller_force_recenter disabled invalidate");

        memset(&display_context, 0, sizeof(display_context));
        controller.follow_mode = 2;
        controller.stable_frame_count = 9;
        follow_state.pending_target_dx = 6;
        follow_state.pending_target_dy = -4;
        follow_state.current_step_dx = 2;
        follow_state.current_step_dy = -1;
        follow_state.last_target_handle = (void *)0x5151;
        creatures_viewport_follow_controller_set_mode(&controller, 0, &invalidation_ops);
        expect_i32(controller.follow_mode, 0,
            "creatures_viewport_follow_controller_set_mode disabled");
        expect_i32(controller.stable_frame_count, 0,
            "creatures_viewport_follow_controller_set_mode stable count");
        expect_i32(follow_state.pending_target_dx, 0,
            "creatures_viewport_follow_controller_set_mode reset pending dx");
        expect_true(follow_state.last_target_handle == NULL,
            "creatures_viewport_follow_controller_set_mode reset target");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_follow_controller_set_mode invalidate");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        controller.follow_mode = 2;
        follow_state.smoothing_enabled = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        scrollbar_context.current_position[0] = 40;
        creatures_viewport_handle_horizontal_scroll(&controller, 3, 0, &scroll_metrics,
            &scroll_event_ops, &invalidation_ops, &scroll_ops);
        expect_i32(controller.follow_mode, 1,
            "creatures_viewport_handle_horizontal_scroll mode");
        expect_i32(scrollbar_context.current_position[0], 65,
            "creatures_viewport_handle_horizontal_scroll scrollbar");
        expect_i32(follow_state.surface.bounds.left, 125,
            "creatures_viewport_handle_horizontal_scroll left");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_handle_horizontal_scroll invalidate");

        memset(&scrollbar_context, 0, sizeof(scrollbar_context));
        memset(&display_context, 0, sizeof(display_context));
        memset(&scroll_context, 0, sizeof(scroll_context));
        controller.follow_mode = 2;
        follow_state.smoothing_enabled = 0;
        follow_state.surface.bounds.left = 100;
        follow_state.surface.bounds.top = 50;
        follow_state.surface.bounds.right = 200;
        follow_state.surface.bounds.bottom = 150;
        scrollbar_context.current_position[1] = 10;
        creatures_viewport_handle_vertical_scroll(&controller, 7, 0, &scroll_metrics,
            &scroll_event_ops, &invalidation_ops, &scroll_ops);
        expect_i32(controller.follow_mode, 1,
            "creatures_viewport_handle_vertical_scroll mode");
        expect_i32(scrollbar_context.current_position[1], 72,
            "creatures_viewport_handle_vertical_scroll scrollbar");
        expect_i32(follow_state.surface.bounds.top, 112,
            "creatures_viewport_handle_vertical_scroll top");
        expect_i32(display_context.invalidate_rect_call_count, 1,
            "creatures_viewport_handle_vertical_scroll invalidate");
    }

    {
        CreaturesFrameEntry frame_entry;
        CreaturesFrameSet frame_set;
        CreaturesRenderableSprite renderable_sprite;
        CreaturesPixelBuffer8 target_buffer;
        CreaturesDisplayRect clip_bounds;
        CreaturesDisplayRect viewport_bounds;
        uint8_t source_pixels[12] = {
            1, 0, 2, 3,
            4, 5, 0, 6,
            7, 8, 9, 0,
        };
        uint8_t target_pixels[12];
        uint32_t access_serial_counter;
        int draw_depth;

        memset(&frame_entry, 0, sizeof(frame_entry));
        memset(&frame_set, 0, sizeof(frame_set));
        memset(&renderable_sprite, 0, sizeof(renderable_sprite));
        frame_entry.flags = 1;
        frame_entry.pixels = source_pixels;
        frame_entry.width = 4;
        frame_entry.height = 3;
        frame_set.entries = &frame_entry;
        frame_set.entry_count = 1;
        renderable_sprite.frame_set = &frame_set;
        renderable_sprite.frame_index = 0;
        renderable_sprite.world_x = CREATURES_WORLD_WRAP_WIDTH - 2;
        renderable_sprite.world_y = 50;
        renderable_sprite.draw_depth = 1234;
        clip_bounds.left = 0;
        clip_bounds.top = 50;
        clip_bounds.right = 4;
        clip_bounds.bottom = 53;
        viewport_bounds = clip_bounds;
        target_buffer.pixels = target_pixels;
        target_buffer.stride = 4;

        expect_true(creatures_renderable_sprite_collect_visible(
                        &renderable_sprite, &clip_bounds, &draw_depth),
            "creatures_renderable_sprite_collect_visible wrapped");
        expect_i32(draw_depth, 1234,
            "creatures_renderable_sprite_collect_visible depth");

        memset(target_pixels, 0xaa, sizeof(target_pixels));
        access_serial_counter = 0;
        creatures_frame_entry_draw_clipped_to_buffer(&frame_entry, &target_buffer,
            CREATURES_WORLD_WRAP_WIDTH - 2, 50, &clip_bounds, &viewport_bounds,
            &access_serial_counter, 1);
        expect_u32(access_serial_counter, 1,
            "creatures_frame_entry_draw_clipped_to_buffer access serial");
        expect_u8(target_pixels[0], 2,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row0 col0");
        expect_u8(target_pixels[1], 3,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row0 col1");
        expect_u8(target_pixels[4], 0,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row1 col0");
        expect_u8(target_pixels[5], 6,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row1 col1");
        expect_u8(target_pixels[8], 9,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row2 col0");
        expect_u8(target_pixels[9], 0,
            "creatures_frame_entry_draw_clipped_to_buffer wrapped row2 col1");

        memset(target_pixels, 0, sizeof(target_pixels));
        access_serial_counter = 0;
        renderable_sprite.world_x = 101;
        renderable_sprite.world_y = 50;
        clip_bounds.left = 100;
        clip_bounds.top = 50;
        clip_bounds.right = 104;
        clip_bounds.bottom = 53;
        viewport_bounds = clip_bounds;
        creatures_renderable_sprite_draw(&renderable_sprite, &target_buffer,
            &clip_bounds, &viewport_bounds, &access_serial_counter, 0);
        expect_u8(target_pixels[0], 0,
            "creatures_renderable_sprite_draw masked row0 col0");
        expect_u8(target_pixels[1], 1,
            "creatures_renderable_sprite_draw masked row0 col1");
        expect_u8(target_pixels[2], 0,
            "creatures_renderable_sprite_draw masked row0 col2");
        expect_u8(target_pixels[3], 2,
            "creatures_renderable_sprite_draw masked row0 col3");
        expect_u8(target_pixels[4], 0,
            "creatures_renderable_sprite_draw masked row1 col0");
        expect_u8(target_pixels[5], 4,
            "creatures_renderable_sprite_draw masked row1 col1");
        expect_u8(target_pixels[6], 5,
            "creatures_renderable_sprite_draw masked row1 col2");
        expect_u8(target_pixels[7], 0,
            "creatures_renderable_sprite_draw masked row1 col3");
        expect_u8(target_pixels[8], 0,
            "creatures_renderable_sprite_draw masked row2 col0");
        expect_u8(target_pixels[9], 7,
            "creatures_renderable_sprite_draw masked row2 col1");
        expect_u8(target_pixels[10], 8,
            "creatures_renderable_sprite_draw masked row2 col2");
        expect_u8(target_pixels[11], 9,
            "creatures_renderable_sprite_draw masked row2 col3");
    }

    {
        CreaturesDisplaySurface display_surface;
        CreaturesViewportCaptureSource capture_source;
        CreaturesViewportCaptureOps capture_ops;
        FakeViewportCaptureContext capture_context;
        CreaturesWingBitmapInfo bitmap_info;
        CreaturesCapturedBitmapHeader *capture_header;
        CreaturesDisplayRect client_rect;
        uint8_t backbuffer_pixels[24] = {
            10, 11, 12, 13, 14, 15, 16, 17,
            20, 21, 22, 23, 24, 25, 26, 27,
            30, 31, 32, 33, 34, 35, 36, 37,
        };

        memset(&display_surface, 0, sizeof(display_surface));
        memset(&capture_context, 0, sizeof(capture_context));
        memset(&bitmap_info, 0, sizeof(bitmap_info));
        capture_context.submit_result = 1;
        bitmap_info.width = 5;
        bitmap_info.height = 1;
        bitmap_info.bit_count = 8;
        client_rect.left = 1;
        client_rect.top = 1;
        client_rect.right = 4;
        client_rect.bottom = 3;
        capture_ops.resolve_bounds = fake_viewport_capture_resolve_bounds;
        capture_ops.allocate_capture = fake_viewport_capture_allocate;
        capture_ops.free_capture = fake_viewport_capture_free;
        capture_ops.begin_capture = fake_viewport_capture_begin;
        capture_ops.submit_capture = fake_viewport_capture_submit;
        capture_ops.end_capture = fake_viewport_capture_end;
        capture_ops.report_capture_failure = fake_viewport_capture_report_failure;
        capture_ops.ctx = &capture_context;

        expect_true(creatures_capture_8bit_bitmap_region(&bitmap_info, backbuffer_pixels,
                        &client_rect, (void *)0x7777, &capture_ops),
            "creatures_capture_8bit_bitmap_region");
        expect_i32(capture_context.allocate_call_count, 1,
            "creatures_capture_8bit_bitmap_region allocate");
        expect_i32(capture_context.begin_capture_call_count, 1,
            "creatures_capture_8bit_bitmap_region begin");
        expect_i32(capture_context.submit_capture_call_count, 1,
            "creatures_capture_8bit_bitmap_region submit");
        expect_i32(capture_context.end_capture_call_count, 1,
            "creatures_capture_8bit_bitmap_region end");
        expect_i32(capture_context.free_call_count, 1,
            "creatures_capture_8bit_bitmap_region free");
        expect_true(capture_context.last_submit_target == (void *)0x7777,
            "creatures_capture_8bit_bitmap_region target");
        expect_u32(capture_context.last_submit_format, 0x1001u,
            "creatures_capture_8bit_bitmap_region format");
        capture_header = (CreaturesCapturedBitmapHeader *)capture_context.submitted_payload;
        expect_u32(capture_header->row_pitch, 4,
            "creatures_capture_8bit_bitmap_region row pitch");
        expect_u32(capture_header->height, 2,
            "creatures_capture_8bit_bitmap_region height");
        expect_u32(capture_header->stored_stride, 4,
            "creatures_capture_8bit_bitmap_region stored stride");
        expect_u8(capture_context.submitted_payload[12], 21,
            "creatures_capture_8bit_bitmap_region pixel0");
        expect_u8(capture_context.submitted_payload[13], 22,
            "creatures_capture_8bit_bitmap_region pixel1");
        expect_u8(capture_context.submitted_payload[14], 23,
            "creatures_capture_8bit_bitmap_region pixel2");
        expect_u8(capture_context.submitted_payload[15], 24,
            "creatures_capture_8bit_bitmap_region pixel3");
        expect_u8(capture_context.submitted_payload[16], 31,
            "creatures_capture_8bit_bitmap_region pixel4");
        expect_u8(capture_context.submitted_payload[17], 32,
            "creatures_capture_8bit_bitmap_region pixel5");
        expect_u8(capture_context.submitted_payload[18], 33,
            "creatures_capture_8bit_bitmap_region pixel6");
        expect_u8(capture_context.submitted_payload[19], 34,
            "creatures_capture_8bit_bitmap_region pixel7");

        memset(&capture_context, 0, sizeof(capture_context));
        capture_context.submit_result = 1;
        display_surface.bounds.left = 0;
        display_surface.bounds.top = 0;
        display_surface.bounds.right = 20;
        display_surface.bounds.bottom = 20;
        capture_source.surface = &display_surface;
        capture_source.bitmap_info = &bitmap_info;
        capture_source.backbuffer_pixels = backbuffer_pixels;
        capture_context.resolved_bounds.left = 2;
        capture_context.resolved_bounds.top = 2;
        capture_context.resolved_bounds.right = 10;
        capture_context.resolved_bounds.bottom = 10;
        capture_ops.ctx = &capture_context;
        expect_true(creatures_capture_centered_viewport_region(4, 2, (void *)0x8888, NULL,
                        &capture_source, (void *)0x9999, &capture_ops),
            "creatures_capture_centered_viewport_region");
        expect_i32(capture_context.resolve_bounds_call_count, 1,
            "creatures_capture_centered_viewport_region resolve");
        expect_i32(capture_context.submit_capture_call_count, 1,
            "creatures_capture_centered_viewport_region submit");
        expect_true(capture_context.last_submit_target == (void *)0x9999,
            "creatures_capture_centered_viewport_region target");

        memset(&capture_context, 0, sizeof(capture_context));
        capture_context.submit_result = 0;
        capture_ops.ctx = &capture_context;
        expect_false(creatures_capture_8bit_bitmap_region(&bitmap_info, backbuffer_pixels,
                         &client_rect, (void *)0x7777, &capture_ops),
            "creatures_capture_8bit_bitmap_region submit failure");
        expect_i32(capture_context.report_failure_call_count, 1,
            "creatures_capture_8bit_bitmap_region report failure");
        expect_str(capture_context.last_failure_message, "Could not create file.",
            "creatures_capture_8bit_bitmap_region failure message");
    }

    {
        static const uint8_t archive_bytes[] = {0x11, 0x34, 0x12, 0x78, 0x56, 0x00};
        CreaturesArchiveCursor archive_cursor;
        uint8_t read_u8_value;
        uint16_t read_u16_value;
        uint8_t read_block[2];

        memset(&archive_cursor, 0, sizeof(archive_cursor));
        archive_cursor.cursor = (uint8_t *)archive_bytes;
        archive_cursor.end = (uint8_t *)archive_bytes + sizeof(archive_bytes);
        expect_true(creatures_archive_read_u8(&archive_cursor, &read_u8_value),
            "creatures_archive_read_u8");
        expect_u8(read_u8_value, 0x11, "creatures_archive_read_u8 value");
        expect_true(creatures_archive_read_u16(&archive_cursor, &read_u16_value),
            "creatures_archive_read_u16");
        expect_u32(read_u16_value, 0x1234, "creatures_archive_read_u16 value");
        expect_true(creatures_archive_read_bytes(&archive_cursor, read_block, sizeof(read_block)),
            "creatures_archive_read_bytes");
        expect_u8(read_block[0], 0x78, "creatures_archive_read_bytes first");
        expect_u8(read_block[1], 0x56, "creatures_archive_read_bytes second");
        expect_true(creatures_archive_skip(&archive_cursor, 1), "creatures_archive_skip");
        expect_false(creatures_archive_read_u8(&archive_cursor, &read_u8_value),
            "creatures_archive_read_u8 end failure");
    }

    {
        static const uint8_t counted_string_bytes[] = {
            0x10, 'a', 'n', 'i', 'm', ' ', '[', '1', '1', '1', '0', ']', ',', 'e', 'n', 'd',
            'm',
        };
        CreaturesArchiveCursor archive_cursor;
        uint32_t archive_count;
        char archive_text[32];

        memset(&archive_cursor, 0, sizeof(archive_cursor));
        memset(archive_text, 0, sizeof(archive_text));
        archive_cursor.cursor = (uint8_t *)counted_string_bytes;
        archive_cursor.end = (uint8_t *)counted_string_bytes + sizeof(counted_string_bytes);
        expect_true(
            creatures_mfc_archive_read_count(&archive_cursor, &archive_count),
            "creatures_mfc_archive_read_count");
        expect_u32(archive_count, 0x10, "creatures_mfc_archive_read_count value");

        archive_cursor.cursor = (uint8_t *)counted_string_bytes;
        archive_cursor.end = (uint8_t *)counted_string_bytes + sizeof(counted_string_bytes);
        expect_true(
            creatures_mfc_archive_read_cstring(&archive_cursor, archive_text, sizeof(archive_text)),
            "creatures_mfc_archive_read_cstring");
        expect_str(archive_text, "anim [1110],endm", "creatures_mfc_archive_read_cstring text");
    }

    {
        static const uint8_t world_header_bytes[] = {
            0xff, 0xff, 0x01, 0x00, 0x07, 0x00, 'M', 'a', 'p', 'D', 'a', 't', 'a',
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0xff, 0xff, 0x01, 0x00, 0x08, 0x00, 'C', 'G', 'a', 'l', 'l', 'e', 'r', 'y',
            0xd0, 0x01, 0x00, 0x00,
            'B', 'a', 'c', 'k', 0x00, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00,
            0x90, 0x00, 0x00, 0x00,
            0x96, 0x00, 0x00, 0x00,
            0x82, 0x0e, 0x00, 0x00,
            0xff, 0xff, 0x01, 0x00, 0x0b, 0x00, 'P', 'o', 'i', 'n', 't', 'e', 'r', 'T', 'o',
            'o', 'l',
        };
        CreaturesArchiveCursor archive_cursor;
        CreaturesMfcArchiveClassHeader class_header;
        CreaturesWorldSourceHeader world_header;

        memset(&archive_cursor, 0, sizeof(archive_cursor));
        memset(&class_header, 0, sizeof(class_header));
        archive_cursor.cursor = (uint8_t *)world_header_bytes;
        archive_cursor.end = (uint8_t *)world_header_bytes + sizeof(world_header_bytes);
        expect_true(
            creatures_mfc_archive_read_new_class_header(&archive_cursor, &class_header),
            "creatures_mfc_archive_read_new_class_header");
        expect_u32(class_header.schema, 1, "creatures_mfc_archive_read_new_class_header schema");
        expect_u32(class_header.class_name_length, 7,
            "creatures_mfc_archive_read_new_class_header name length");
        expect_str(class_header.class_name, "MapData",
            "creatures_mfc_archive_read_new_class_header class name");

        expect_true(creatures_world_source_parse_header(
                        world_header_bytes, sizeof(world_header_bytes), &world_header),
            "creatures_world_source_parse_header");
        expect_str(world_header.map_class_header.class_name, "MapData",
            "creatures_world_source_parse_header map class");
        expect_u32(world_header.map_state_primary, 0,
            "creatures_world_source_parse_header map state primary");
        expect_u32(world_header.map_state_secondary, 0,
            "creatures_world_source_parse_header map state secondary");
        expect_str(world_header.gallery_class_header.class_name, "CGallery",
            "creatures_world_source_parse_header gallery class");
        expect_u32(world_header.gallery_entry_count, 0x1d0,
            "creatures_world_source_parse_header gallery entries");
        expect_str(world_header.gallery_name, "Back",
            "creatures_world_source_parse_header gallery name");
        expect_u32(world_header.gallery_plane_count, 1,
            "creatures_world_source_parse_header gallery planes");
        expect_u8(world_header.gallery_descriptor_prefix[0], 0x04,
            "creatures_world_source_parse_header descriptor prefix 0");
        expect_u8(world_header.gallery_descriptor_prefix[1], 0x00,
            "creatures_world_source_parse_header descriptor prefix 1");
        expect_u8(world_header.gallery_descriptor_prefix[2], 0x00,
            "creatures_world_source_parse_header descriptor prefix 2");
        expect_u8(world_header.gallery_descriptor_prefix[3], 0x00,
            "creatures_world_source_parse_header descriptor prefix 3");
        expect_u32(world_header.next_class_header_offset, 0x43,
            "creatures_world_source_parse_header next class offset");
        expect_str(world_header.next_class_header.class_name, "PointerTool",
            "creatures_world_source_parse_header next class");
    }

    {
        CreaturesMapDataArchive map_data;
        CreaturesMapDataArchiveLoadOps load_ops;
        FakeMapDataArchiveContext map_context;
        size_t boundary_index;
        size_t object_index;

        memset(&map_data, 0, sizeof(map_data));
        memset(&map_context, 0, sizeof(map_context));
        map_context.read_u32_values[0] = 0;
        map_context.read_u32_values[1] = 0;
        map_context.read_u32_values[2] = 2;
        map_context.read_u32_values[3] = 0x1111;
        map_context.read_u32_values[4] = 0x2222;
        map_context.read_u32_count = 5 + CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY;
        for (boundary_index = 0; boundary_index < CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY;
             boundary_index++) {
            map_context.read_u32_values[5 + boundary_index] = (uint32_t)(0x3000 + boundary_index);
        }
        for (object_index = 0; object_index < 2; object_index++) {
            memset(map_context.read_room_bytes[object_index], (int)(0x40 + object_index), 16);
        }
        map_context.read_room_byte_count = 2;
        map_context.loaded_gallery_handle = (void *)0x55667788;

        memset(&load_ops, 0, sizeof(load_ops));
        load_ops.read_u32 = fake_map_data_read_u32;
        load_ops.read_bytes = fake_map_data_read_bytes;
        load_ops.load_gallery = fake_map_data_load_gallery;
        load_ops.load_embedded_object = fake_map_data_load_embedded_object;
        load_ops.ctx = &map_context;

        expect_true(
            creatures_map_data_archive_load(&map_data, NULL, &load_ops),
            "creatures_map_data_archive_load");
        expect_u32(map_data.state_primary, 0, "creatures_map_data_archive_load state primary");
        expect_u32(map_data.state_secondary, 0, "creatures_map_data_archive_load state secondary");
        expect_true(map_data.background_gallery == (void *)0x55667788,
            "creatures_map_data_archive_load gallery handle");
        expect_u32(map_data.room_count, 2, "creatures_map_data_archive_load room count");
        expect_u8(map_data.room_records[0].packed_room_bounds[0], 0x40,
            "creatures_map_data_archive_load room 0 bytes");
        expect_u8(map_data.room_records[1].packed_room_bounds[0], 0x41,
            "creatures_map_data_archive_load room 1 bytes");
        expect_u32(map_data.room_records[0].trailing_value, 0x1111,
            "creatures_map_data_archive_load room 0 trailing");
        expect_u32(map_data.room_records[1].trailing_value, 0x2222,
            "creatures_map_data_archive_load room 1 trailing");
        expect_u32(map_data.room_scanline_boundaries[0], 0x3000,
            "creatures_map_data_archive_load boundary 0");
        expect_u32(map_data.room_scanline_boundaries[0x104], 0x3104,
            "creatures_map_data_archive_load boundary 0x104");
        expect_i32(map_context.load_gallery_count, 1,
            "creatures_map_data_archive_load gallery count");
        expect_i32(map_context.load_object_count, CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY,
            "creatures_map_data_archive_load object count");
        expect_u8(map_data.embedded_objects[0].opaque_bytes[0], 0xa0,
            "creatures_map_data_archive_load object 0");
        expect_u8(
            map_data.embedded_objects[CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY - 1]
                .opaque_bytes[0],
            (uint8_t)(0xa0 + CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY - 1),
            "creatures_map_data_archive_load object last");
    }

    {
        CreaturesMapDataArchive map_data;
        CreaturesMapDataArchiveSaveOps save_ops;
        FakeMapDataArchiveContext map_context;
        size_t boundary_index;

        memset(&map_data, 0, sizeof(map_data));
        memset(&map_context, 0, sizeof(map_context));
        map_data.state_primary = 0x01020304;
        map_data.state_secondary = 0x05060708;
        map_data.background_gallery = (void *)0x11223344;
        map_data.room_count = 2;
        memset(map_data.room_records[0].packed_room_bounds, 0x44, 16);
        memset(map_data.room_records[1].packed_room_bounds, 0x55, 16);
        map_data.room_records[0].trailing_value = 0x11112222;
        map_data.room_records[1].trailing_value = 0x33334444;
        for (boundary_index = 0; boundary_index < CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY;
             boundary_index++) {
            map_data.room_scanline_boundaries[boundary_index] =
                (uint32_t)(0x2000 + boundary_index);
        }
        map_context.loaded_gallery_handle = (void *)0x11223344;

        memset(&save_ops, 0, sizeof(save_ops));
        save_ops.write_u32 = fake_map_data_write_u32;
        save_ops.write_bytes = fake_map_data_write_bytes;
        save_ops.save_gallery = fake_map_data_save_gallery;
        save_ops.save_embedded_object = fake_map_data_save_embedded_object;
        save_ops.ctx = &map_context;

        expect_true(
            creatures_map_data_archive_save(&map_data, NULL, &save_ops),
            "creatures_map_data_archive_save");
        expect_i32(map_context.save_gallery_count, 1,
            "creatures_map_data_archive_save gallery count");
        expect_i32(map_context.save_object_count, CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY,
            "creatures_map_data_archive_save object count");
        expect_size(map_context.written_u32_count, 2 + 1 + 2 + CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY,
            "creatures_map_data_archive_save u32 count");
        expect_u32(map_context.written_u32_values[0], 0x01020304,
            "creatures_map_data_archive_save state primary");
        expect_u32(map_context.written_u32_values[1], 0x05060708,
            "creatures_map_data_archive_save state secondary");
        expect_u32(map_context.written_u32_values[2], 2,
            "creatures_map_data_archive_save room count");
        expect_u32(map_context.written_u32_values[3], 0x11112222,
            "creatures_map_data_archive_save room 0 trailing");
        expect_u32(map_context.written_u32_values[4], 0x33334444,
            "creatures_map_data_archive_save room 1 trailing");
        expect_u32(
            map_context.written_u32_values[map_context.written_u32_count - 1], 0x2104,
            "creatures_map_data_archive_save last boundary");
        expect_size(map_context.written_room_byte_count, 2,
            "creatures_map_data_archive_save room byte count");
        expect_u8(map_context.written_room_bytes[0][0], 0x44,
            "creatures_map_data_archive_save room 0 bytes");
        expect_u8(map_context.written_room_bytes[1][0], 0x55,
            "creatures_map_data_archive_save room 1 bytes");
    }

    {
        CreaturesAudioOutput audio_output;
        CreaturesAudioOutputOps audio_ops;
        FakeAudioContext audio_context;

        memset(&audio_context, 0, sizeof(audio_context));
        audio_context.created_device_handle = (void *)0x3333;
        audio_context.created_buffer_handle = (void *)0x4444;
        audio_context.initial_format.format_tag = 1;
        audio_context.initial_format.channel_count = 1;
        audio_context.initial_format.samples_per_second = 11025;
        audio_context.initial_format.average_bytes_per_second = 11025;
        audio_context.initial_format.block_align = 1;
        audio_context.initial_format.bits_per_sample = 8;

        audio_ops.create_device = fake_audio_create_device;
        audio_ops.set_cooperative_level = fake_audio_set_cooperative_level;
        audio_ops.create_buffer = fake_audio_create_buffer;
        audio_ops.get_format = fake_audio_get_format;
        audio_ops.set_format = fake_audio_set_format;
        audio_ops.stop_buffer = fake_audio_stop_buffer;
        audio_ops.release_buffer = fake_audio_release_buffer;
        audio_ops.release_stream = fake_audio_release_stream;
        audio_ops.release_owner = fake_audio_release_owner;
        audio_ops.notify_mixer_idle = fake_audio_notify_mixer_idle;
        audio_ops.ctx = &audio_context;

        expect_true(creatures_audio_output_create_primary_buffer(
                        &audio_output, (uintptr_t)0x87654321u, &audio_ops),
            "creatures_audio_output_create_primary_buffer");
        expect_i32(audio_context.create_device_call_count, 1,
            "creatures_audio_output_create_primary_buffer create device calls");
        expect_i32(audio_context.set_cooperative_level_call_count, 1,
            "creatures_audio_output_create_primary_buffer cooperative calls");
        expect_i32(audio_context.create_buffer_call_count, 1,
            "creatures_audio_output_create_primary_buffer create buffer calls");
        expect_i32(audio_context.get_format_call_count, 1,
            "creatures_audio_output_create_primary_buffer get format calls");
        expect_i32(audio_context.set_format_call_count, 1,
            "creatures_audio_output_create_primary_buffer set format calls");
        expect_u32(audio_context.last_buffer_desc.size, 0x14,
            "creatures_audio_output_create_primary_buffer desc size");
        expect_u32(audio_context.last_buffer_desc.flags, 1,
            "creatures_audio_output_create_primary_buffer desc flags");
        expect_u32((uint32_t)audio_context.last_window_handle, 0x87654321u,
            "creatures_audio_output_create_primary_buffer window handle");
        expect_i32((int)audio_context.last_cooperative_level,
            CREATURES_AUDIO_COOPERATIVE_LEVEL_PRIORITY,
            "creatures_audio_output_create_primary_buffer level");
        expect_i32((int)audio_context.last_set_format.channel_count, 2,
            "creatures_audio_output_create_primary_buffer channels");
        expect_u32(audio_context.last_set_format.samples_per_second, 22050,
            "creatures_audio_output_create_primary_buffer samples");
        expect_u32(audio_context.last_set_format.average_bytes_per_second, 88200,
            "creatures_audio_output_create_primary_buffer average bytes");
        expect_i32((int)audio_context.last_set_format.block_align, 4,
            "creatures_audio_output_create_primary_buffer block align");
        expect_i32((int)audio_context.last_set_format.bits_per_sample, 16,
            "creatures_audio_output_create_primary_buffer bits");
        expect_true(audio_output.is_device_ready,
            "creatures_audio_output_create_primary_buffer device ready");
        expect_true(audio_output.is_primary_buffer_ready,
            "creatures_audio_output_create_primary_buffer primary ready");
        expect_true(audio_output.device_handle == audio_context.created_device_handle,
            "creatures_audio_output_create_primary_buffer device handle");
        expect_true(audio_output.primary_buffer_handle == audio_context.created_buffer_handle,
            "creatures_audio_output_create_primary_buffer buffer handle");

        audio_context.set_format_result = 1;
        expect_false(creatures_audio_output_create_primary_buffer(
                         &audio_output, (uintptr_t)0x11111111u, &audio_ops),
            "creatures_audio_output_create_primary_buffer format failure");
        expect_false(audio_output.is_device_ready,
            "creatures_audio_output_create_primary_buffer format failure device ready");
        expect_false(audio_output.is_primary_buffer_ready,
            "creatures_audio_output_create_primary_buffer format failure primary ready");

        {
            CreaturesAudioBufferOwner owner_a;
            CreaturesAudioBufferOwner owner_b;
            CreaturesAudioOutput *destroy_result;

            memset(&owner_a, 0, sizeof(owner_a));
            memset(&owner_b, 0, sizeof(owner_b));
            owner_a.active_voice_ref_count = 1;
            owner_a.linked_owner = &owner_b;
            owner_b.active_voice_ref_count = 1;

            creatures_audio_output_init(&audio_output);
            audio_output.is_device_ready = 1;
            audio_output.is_primary_buffer_ready = 1;
            audio_output.primary_buffer_handle = audio_context.created_buffer_handle;
            audio_output.active_voice_count = 2;
            audio_output.voice_slots[0].buffer_handle = (void *)0x1111;
            audio_output.voice_slots[0].is_active = 1;
            audio_output.voice_slots[0].owner = &owner_a;
            audio_output.voice_slots[1].buffer_handle = (void *)0x2222;
            audio_output.voice_slots[1].is_active = 1;
            audio_output.voice_slots[1].owner = &owner_b;
            audio_output.registered_stream_count = 2;
            audio_output.registered_streams[0] = (void *)0xaaaa;
            audio_output.registered_streams[1] = (void *)0xbbbb;
            audio_output.owner_count = 1;
            audio_output.owners[0] = &owner_a;

            expect_true(creatures_audio_output_release_voice_slot(&audio_output, 0, &audio_ops),
                "creatures_audio_output_release_voice_slot");
            expect_i32(audio_context.stop_buffer_call_count, 1,
                "creatures_audio_output_release_voice_slot stop calls");
            expect_i32(audio_context.release_buffer_call_count, 1,
                "creatures_audio_output_release_voice_slot release buffer calls");
            expect_true(audio_context.last_stopped_buffer == (void *)0x1111,
                "creatures_audio_output_release_voice_slot stopped buffer");
            expect_i32(owner_a.active_voice_ref_count, 0,
                "creatures_audio_output_release_voice_slot owner refs");
            expect_i32(audio_output.active_voice_count, 1,
                "creatures_audio_output_release_voice_slot active count");

            creatures_audio_output_release_owner_chain(&audio_output, &owner_a, &audio_ops);
            expect_i32(audio_context.release_owner_call_count, 2,
                "creatures_audio_output_release_owner_chain owner releases");
            expect_i32(audio_context.release_buffer_call_count, 2,
                "creatures_audio_output_release_owner_chain buffer releases");
            expect_true(owner_a.linked_owner == NULL,
                "creatures_audio_output_release_owner_chain clears link");
            expect_i32(audio_output.active_voice_count, 0,
                "creatures_audio_output_release_owner_chain active count");

            audio_context.stop_buffer_call_count = 0;
            audio_context.release_buffer_call_count = 0;
            audio_context.release_stream_call_count = 0;
            audio_context.release_owner_call_count = 0;
            audio_context.notify_mixer_idle_call_count = 0;
            owner_a.active_voice_ref_count = 1;
            owner_a.linked_owner = &owner_b;
            owner_b.active_voice_ref_count = 1;
            audio_output.is_device_ready = 1;
            audio_output.is_primary_buffer_ready = 1;
            audio_output.primary_buffer_handle = audio_context.created_buffer_handle;
            audio_output.active_voice_count = 2;
            audio_output.voice_slots[0].buffer_handle = (void *)0x1111;
            audio_output.voice_slots[0].is_active = 1;
            audio_output.voice_slots[0].owner = &owner_a;
            audio_output.voice_slots[1].buffer_handle = (void *)0x2222;
            audio_output.voice_slots[1].is_active = 1;
            audio_output.voice_slots[1].owner = &owner_b;
            audio_output.registered_stream_count = 2;
            audio_output.registered_streams[0] = (void *)0xaaaa;
            audio_output.registered_streams[1] = (void *)0xbbbb;
            audio_output.owner_count = 1;
            audio_output.owners[0] = &owner_a;

            creatures_audio_output_shutdown(&audio_output, &audio_ops);
            expect_i32(audio_context.release_stream_call_count, 2,
                "creatures_audio_output_shutdown stream releases");
            expect_i32(audio_context.notify_mixer_idle_call_count, 2,
                "creatures_audio_output_shutdown mixer notifications");
            expect_i32(audio_context.stop_buffer_call_count, 2,
                "creatures_audio_output_shutdown stop calls");
            expect_i32(audio_context.release_buffer_call_count, 3,
                "creatures_audio_output_shutdown buffer releases");
            expect_i32(audio_context.release_owner_call_count, 2,
                "creatures_audio_output_shutdown owner releases");
            expect_false(audio_output.is_device_ready,
                "creatures_audio_output_shutdown device ready");
            expect_false(audio_output.is_primary_buffer_ready,
                "creatures_audio_output_shutdown primary ready");
            expect_true(audio_output.primary_buffer_handle == NULL,
                "creatures_audio_output_shutdown clears primary");

            audio_output.is_device_ready = 1;
            destroy_result = creatures_audio_output_destroy(&audio_output, 1, &audio_ops);
            expect_true(destroy_result == NULL, "creatures_audio_output_destroy");
            expect_i32(audio_context.release_stream_call_count, 3,
                "creatures_audio_output_destroy release stream calls");
            expect_true(audio_context.last_released_stream == &audio_output,
                "creatures_audio_output_destroy released self");
        }
    }

    puts("creatures_slice.exe: all slice checks passed");
    return 0;
}
