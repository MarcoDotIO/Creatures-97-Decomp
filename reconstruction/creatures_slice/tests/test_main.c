#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "creatures_slice.h"

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
    FakeFilesystemContext remove_filesystem_context = {
        remove_match_sets,
        sizeof(remove_match_sets) / sizeof(remove_match_sets[0]),
        {{0}},
        0,
    };
    FakeShellContext remove_shell_context = {NULL, 0};
    const LauncherRegistryEntry launcher_registry_entries[] = {
        {"HKEY_CURRENT_USER", "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
            "IntroPath", "D:\\Creatures\\ntro2.smk"},
        {"HKEY_LOCAL_MACHINE", "SOFTWARE\\Millennium Interactive\\Creatures\\AppletConfig",
            "TitlePath", "D:\\Creatures\\Title.bmp"},
    };
    LauncherRegistryContext launcher_registry_context;
    LauncherRegistryOps launcher_registry_ops = {
        fake_launcher_registry_create_key,
        fake_launcher_registry_read_value,
        fake_launcher_registry_write_value,
        &launcher_registry_context,
    };
    LauncherRegistryHandler launcher_registry_handler;
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
    RemoveShellOps remove_shell_ops = {
        fake_remove_shell_execute,
        &remove_shell_context,
    };
    RemoveInstallLayout remove_layout;
    RemoveCleanupPlan remove_plan;
    size_t registry_key_count;
    const char *const *registry_keys;
    size_t value_size;
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

    puts("creatures_slice.exe: all slice checks passed");
    return 0;
}
