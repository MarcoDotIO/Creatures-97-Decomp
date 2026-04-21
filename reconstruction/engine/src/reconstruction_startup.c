#include "reconstruction_startup.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

typedef struct ReconstructionResolverContext {
    ReconstructionCreaturesStartupResult *result;
    const ReconstructionStartupHostOps *host_ops;
} ReconstructionResolverContext;

static bool reconstruction_startup_copy_string(char *out, size_t out_size, const char *value) {
    size_t length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    length = strlen(value);
    if (length >= out_size) {
        return false;
    }

    memcpy(out, value, length + 1);
    return true;
}

static bool reconstruction_startup_join_windows_path(
    char *out, size_t out_size, const char *left, const char *right) {
    size_t left_length;
    size_t right_length;
    size_t position;

    if (out == NULL || out_size == 0 || left == NULL || right == NULL) {
        return false;
    }

    left_length = strlen(left);
    right_length = strlen(right);
    if (left_length == 0) {
        return reconstruction_startup_copy_string(out, out_size, right);
    }
    if (right_length == 0) {
        return reconstruction_startup_copy_string(out, out_size, left);
    }

    position = left_length;
    if (left_length + right_length + 2 > out_size) {
        return false;
    }

    memcpy(out, left, left_length);
    if (out[position - 1] != '\\' && out[position - 1] != '/') {
        out[position++] = '\\';
    }
    memcpy(out + position, right, right_length + 1);
    return true;
}

static bool reconstruction_startup_windowsify_path(
    char *out, size_t out_size, const char *host_like_path) {
    size_t index;

    if (!reconstruction_startup_copy_string(out, out_size, host_like_path)) {
        return false;
    }

    for (index = 0; out[index] != '\0'; index++) {
        if (out[index] == '/') {
            out[index] = '\\';
        }
    }
    return true;
}

void reconstruction_creatures_startup_result_init(
    ReconstructionCreaturesStartupResult *result) {
    if (result == NULL) {
        return;
    }

    memset(result, 0, sizeof(*result));
    reconstruction_settings_store_init(&result->settings_store);
}

void reconstruction_host_path_from_windows(
    char *out_path, size_t out_path_size, const char *windows_path) {
    size_t index;

    if (!reconstruction_startup_copy_string(out_path, out_path_size, windows_path)) {
        if (out_path != NULL && out_path_size > 0) {
            out_path[0] = '\0';
        }
        return;
    }

#ifndef _WIN32
    for (index = 0; out_path[index] != '\0'; index++) {
        if (out_path[index] == '\\') {
            out_path[index] = '/';
        }
    }
#else
    (void)index;
#endif
}

int reconstruction_host_path_exists(const char *path, void *ctx) {
    struct stat path_stat;
    char host_path[REMOVE_MAX_PATH];

    (void)ctx;
    if (path == NULL || path[0] == '\0') {
        return 0;
    }

    reconstruction_host_path_from_windows(host_path, sizeof(host_path), path);
    return stat(host_path, &path_stat) == 0 ? 1 : 0;
}

int reconstruction_prompt_insert_cd_default(void *ctx) {
    (void)ctx;
    return 1;
}

static int reconstruction_resolver_path_exists(const char *path, void *ctx) {
    ReconstructionResolverContext *resolver_context;

    resolver_context = (ReconstructionResolverContext *)ctx;
    if (resolver_context == NULL || resolver_context->host_ops == NULL ||
        resolver_context->host_ops->path_exists == NULL) {
        return 0;
    }

    return resolver_context->host_ops->path_exists(path, resolver_context->host_ops->ctx);
}

static int reconstruction_resolver_read_setting(const char *key_name, char *out_value,
    size_t out_value_size, const char *default_value, void *ctx) {
    ReconstructionResolverContext *resolver_context;

    resolver_context = (ReconstructionResolverContext *)ctx;
    if (resolver_context == NULL || resolver_context->result == NULL) {
        if (out_value != NULL && out_value_size > 0) {
            out_value[0] = '\0';
        }
        return 1;
    }

    return reconstruction_settings_store_read_setting(key_name, out_value, out_value_size,
        default_value, &resolver_context->result->settings_store);
}

static int reconstruction_resolver_prompt_insert_cd(void *ctx) {
    ReconstructionResolverContext *resolver_context;

    resolver_context = (ReconstructionResolverContext *)ctx;
    if (resolver_context == NULL || resolver_context->result == NULL) {
        return 1;
    }

    resolver_context->result->prompt_count++;
    if (resolver_context->host_ops == NULL ||
        resolver_context->host_ops->prompt_insert_cd == NULL) {
        return reconstruction_prompt_insert_cd_default(NULL);
    }

    return resolver_context->host_ops->prompt_insert_cd(resolver_context->host_ops->ctx);
}

static void reconstruction_probe_asset(ReconstructionStartupAssetStatus *asset,
    const char *label, int required, const char *requested_path,
    const CreaturesPathResolverOps *resolver_ops, int allow_cd_fallback) {
    asset->label = label;
    asset->required = required;
    asset->present = 0;
    asset->used_cd_fallback = 0;

    if (!reconstruction_startup_copy_string(
            asset->requested_path, sizeof(asset->requested_path), requested_path)) {
        return;
    }

    if (creatures_resolve_data_path(asset->resolved_path, sizeof(asset->resolved_path), requested_path,
            allow_cd_fallback ? 0 : 1, resolver_ops) == NULL) {
        asset->resolved_path[0] = '\0';
        return;
    }

    asset->present = 1;
    asset->used_cd_fallback = strcmp(asset->requested_path, asset->resolved_path) != 0;
}

bool reconstruction_probe_creatures_startup(ReconstructionCreaturesStartupResult *result,
    const ReconstructionStartupProbeOptions *options,
    const ReconstructionStartupHostOps *host_ops) {
    ReconstructionStartupHostOps default_host_ops;
    ReconstructionResolverContext resolver_context;
    CreaturesSettingsOps settings_ops;
    CreaturesPathResolverOps resolver_ops;
    char install_root_windows[REMOVE_MAX_PATH];
    char asset_path[REMOVE_MAX_PATH];
    const char *world_file_name;
    const char *genetics_probe_name;
    const char *image_probe_name;
    const char *body_data_probe_name;
    size_t asset_index;

    if (result == NULL) {
        return false;
    }

    reconstruction_creatures_startup_result_init(result);

    default_host_ops.path_exists = reconstruction_host_path_exists;
    default_host_ops.prompt_insert_cd = reconstruction_prompt_insert_cd_default;
    default_host_ops.ctx = NULL;
    if (host_ops == NULL) {
        host_ops = &default_host_ops;
    }

    if (options != NULL && options->install_root != NULL) {
        if (!reconstruction_startup_windowsify_path(
                install_root_windows, sizeof(install_root_windows), options->install_root)) {
            return false;
        }
    } else {
        if (!reconstruction_startup_copy_string(
                install_root_windows, sizeof(install_root_windows), ".")) {
            return false;
        }
    }

    if (!reconstruction_startup_join_windows_path(
            result->executable_path, sizeof(result->executable_path), install_root_windows,
            "Creatures.exe")) {
        return false;
    }

    if (options != NULL && options->cd_drive != NULL) {
        char cd_drive_windows[REMOVE_MAX_PATH];

        if (!reconstruction_startup_windowsify_path(
                cd_drive_windows, sizeof(cd_drive_windows), options->cd_drive) ||
            !reconstruction_settings_store_set(
                &result->settings_store, "CD Drive", cd_drive_windows)) {
            return false;
        }
    }

    creatures_directory_config_init(&result->directory_config, result->executable_path);

    settings_ops.write_setting = reconstruction_settings_store_write_setting;
    settings_ops.read_setting = reconstruction_settings_store_read_setting;
    settings_ops.ctx = &result->settings_store;
    creatures_refresh_directory_table(&result->directory_config, &settings_ops,
        options != NULL ? options->seed_defaults_from_executable : 1);

    resolver_context.result = result;
    resolver_context.host_ops = host_ops;

    resolver_ops.read_setting = reconstruction_resolver_read_setting;
    resolver_ops.path_exists = reconstruction_resolver_path_exists;
    resolver_ops.prompt_insert_cd = reconstruction_resolver_prompt_insert_cd;
    resolver_ops.ctx = &resolver_context;

    world_file_name = options != NULL && options->world_file_name != NULL ?
        options->world_file_name :
        "World.sfc";
    genetics_probe_name = options != NULL && options->genetics_probe_name != NULL ?
        options->genetics_probe_name :
        "norn.gen";
    image_probe_name = options != NULL && options->image_probe_name != NULL ?
        options->image_probe_name :
        "A000.spr";
    body_data_probe_name = options != NULL && options->body_data_probe_name != NULL ?
        options->body_data_probe_name :
        "a000.att";

    result->asset_count = 0;

    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], world_file_name)) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "world", 1, asset_path,
            &resolver_ops, 1);
    }
    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], result->directory_config.directories[5]) &&
        reconstruction_startup_join_windows_path(
            asset_path, sizeof(asset_path), asset_path, genetics_probe_name)) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "genetics", 1,
            asset_path, &resolver_ops, 1);
    }
    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], result->directory_config.directories[4]) &&
        reconstruction_startup_join_windows_path(
            asset_path, sizeof(asset_path), asset_path, image_probe_name)) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "image", 1, asset_path,
            &resolver_ops, 1);
    }
    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], result->directory_config.directories[6]) &&
        reconstruction_startup_join_windows_path(
            asset_path, sizeof(asset_path), asset_path, body_data_probe_name)) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "body_data", 1,
            asset_path, &resolver_ops, 1);
    }
    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], result->directory_config.directories[3])) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "palette_directory", 1,
            asset_path, &resolver_ops, 0);
    }
    if (reconstruction_startup_join_windows_path(asset_path, sizeof(asset_path),
            result->directory_config.directories[0], result->directory_config.directories[1])) {
        reconstruction_probe_asset(&result->assets[result->asset_count++], "sound_directory", 1,
            asset_path, &resolver_ops, 0);
    }

    result->all_required_assets_present = 1;
    for (asset_index = 0; asset_index < result->asset_count; asset_index++) {
        if (result->assets[asset_index].required != 0 &&
            result->assets[asset_index].present == 0) {
            result->all_required_assets_present = 0;
            break;
        }
    }

    return true;
}
