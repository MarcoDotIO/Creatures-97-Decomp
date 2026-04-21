#ifndef RECONSTRUCTION_STARTUP_H
#define RECONSTRUCTION_STARTUP_H

#include "creatures_paths.h"
#include "reconstruction_settings_store.h"

#define RECONSTRUCTION_STARTUP_ASSET_COUNT 6

typedef int (*ReconstructionPathExistsProc)(const char *path, void *ctx);
typedef int (*ReconstructionPromptProc)(void *ctx);

typedef struct ReconstructionStartupHostOps {
    ReconstructionPathExistsProc path_exists;
    ReconstructionPromptProc prompt_insert_cd;
    void *ctx;
} ReconstructionStartupHostOps;

typedef struct ReconstructionStartupProbeOptions {
    const char *install_root;
    const char *cd_drive;
    int seed_defaults_from_executable;
    const char *world_file_name;
    const char *genetics_probe_name;
    const char *image_probe_name;
    const char *body_data_probe_name;
} ReconstructionStartupProbeOptions;

typedef struct ReconstructionStartupAssetStatus {
    const char *label;
    int required;
    int present;
    int used_cd_fallback;
    char requested_path[REMOVE_MAX_PATH];
    char resolved_path[REMOVE_MAX_PATH];
} ReconstructionStartupAssetStatus;

typedef struct ReconstructionCreaturesStartupResult {
    char executable_path[REMOVE_MAX_PATH];
    int prompt_count;
    int all_required_assets_present;
    CreaturesDirectoryConfig directory_config;
    ReconstructionSettingsStore settings_store;
    ReconstructionStartupAssetStatus assets[RECONSTRUCTION_STARTUP_ASSET_COUNT];
    size_t asset_count;
} ReconstructionCreaturesStartupResult;

void reconstruction_creatures_startup_result_init(
    ReconstructionCreaturesStartupResult *result);
void reconstruction_host_path_from_windows(
    char *out_path, size_t out_path_size, const char *windows_path);
int reconstruction_host_path_exists(const char *path, void *ctx);
int reconstruction_prompt_insert_cd_default(void *ctx);
bool reconstruction_probe_creatures_startup(ReconstructionCreaturesStartupResult *result,
    const ReconstructionStartupProbeOptions *options,
    const ReconstructionStartupHostOps *host_ops);

#endif
