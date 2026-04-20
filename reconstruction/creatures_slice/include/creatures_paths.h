#ifndef CREATURES_PATHS_H
#define CREATURES_PATHS_H

#include "creatures_common.h"

typedef int (*CreaturesSettingsWriteProc)(
    const char *key_name, const char *value, void *ctx);
typedef int (*CreaturesSettingsReadProc)(const char *key_name, char *out_value,
    size_t out_value_size, const char *default_value, void *ctx);

typedef struct CreaturesSettingsOps {
    CreaturesSettingsWriteProc write_setting;
    CreaturesSettingsReadProc read_setting;
    void *ctx;
} CreaturesSettingsOps;

typedef int (*CreaturesPathExistsProc)(const char *path, void *ctx);
typedef int (*CreaturesPromptInsertCdProc)(void *ctx);

typedef struct CreaturesPathResolverOps {
    CreaturesSettingsReadProc read_setting;
    CreaturesPathExistsProc path_exists;
    CreaturesPromptInsertCdProc prompt_insert_cd;
    void *ctx;
} CreaturesPathResolverOps;

typedef struct CreaturesDirectoryConfig {
    char executable_path[REMOVE_MAX_PATH];
    char directories[CREATURES_DIRECTORY_SLOT_COUNT][CREATURES_DIRECTORY_VALUE_SIZE];
} CreaturesDirectoryConfig;

typedef int (*CreaturesTextAssetLookupProc)(const char *resolved_path, const char **text_out,
    void *ctx);

typedef struct CreaturesBodyPairTable {
    uint8_t left[CREATURES_BODY_PAIR_ROWS][CREATURES_BODY_PAIR_COLUMNS];
    uint8_t right[CREATURES_BODY_PAIR_ROWS][CREATURES_BODY_PAIR_COLUMNS];
} CreaturesBodyPairTable;

typedef struct CreaturesBodyQuadTable {
    uint8_t first[CREATURES_BODY_QUAD_ROWS];
    uint8_t second[CREATURES_BODY_QUAD_ROWS];
    uint8_t third[CREATURES_BODY_QUAD_ROWS];
    uint8_t fourth[CREATURES_BODY_QUAD_ROWS];
} CreaturesBodyQuadTable;

void creatures_directory_config_init(
    CreaturesDirectoryConfig *config, const char *executable_path);
void creatures_refresh_directory_table(CreaturesDirectoryConfig *config,
    const CreaturesSettingsOps *settings_ops, int seed_defaults_from_executable);
const char *creatures_directory_slot_name(size_t index);
const char *creatures_resolve_data_path(char *out_path, size_t out_path_size,
    const char *requested_path, int fail_if_missing,
    const CreaturesPathResolverOps *resolver_ops);

uint32_t creatures_body_data_make_token(
    int family_index, int group_digit, int row_digit, int column_digit);
const char *creatures_body_data_build_path(char *out_path, size_t out_path_size, uint32_t token,
    const char file_suffix[4], const char *directory_prefix);
uint32_t creatures_body_data_find_existing_variant_token(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    char *resolved_path_out, size_t resolved_path_out_size);
bool creatures_body_data_load_pair_table(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx, CreaturesBodyPairTable *out_table,
    char *resolved_path_out, size_t resolved_path_out_size);
bool creatures_body_data_load_quad_table(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx, CreaturesBodyQuadTable *out_table,
    char *resolved_path_out, size_t resolved_path_out_size);

#endif
