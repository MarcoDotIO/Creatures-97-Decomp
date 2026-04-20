#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

static const char *const k_creatures_directory_slot_names[CREATURES_DIRECTORY_SLOT_COUNT] = {
    "Main Directory",
    "Sound Directory",
    "Macro Directory",
    "Palette Directory",
    "Image Directory",
    "Genetics Directory",
    "Body Data",
    "Programs",
};

static const char *const k_creatures_directory_seed_values[CREATURES_DIRECTORY_SLOT_COUNT - 1] = {
    "Sounds\\",
    "Macros\\",
    "Palettes\\",
    "Images\\",
    "Genetics\\",
    "Body data\\",
    "",
};

static bool creatures_copy_string(char *out, size_t out_size, const char *value) {
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

static bool creatures_append_string(char *out, size_t out_size, const char *value) {
    size_t current_length;
    size_t value_length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    current_length = strlen(out);
    value_length = strlen(value);
    if (current_length + value_length >= out_size) {
        return false;
    }

    memcpy(out + current_length, value, value_length + 1);
    return true;
}

static void creatures_build_main_directory_default(
    const char *executable_path, char *out_value, size_t out_value_size) {
    size_t length;

    if (!creatures_copy_string(out_value, out_value_size, executable_path)) {
        if (out_value_size > 0) {
            out_value[0] = '\0';
        }
        return;
    }

    length = strlen(out_value);
    while (length > 0) {
        if (out_value[length - 1] == '\\') {
            break;
        }
        if (out_value[length - 1] == '.') {
            out_value[length - 1] = '\0';
        } else {
            out_value[length - 1] = '\0';
        }
        length--;
    }
}

void creatures_directory_config_init(
    CreaturesDirectoryConfig *config, const char *executable_path) {
    if (config == NULL) {
        return;
    }

    memset(config, 0, sizeof(*config));
    if (executable_path != NULL) {
        creatures_copy_string(config->executable_path, sizeof(config->executable_path),
            executable_path);
    }
}

/*
 * Derived from Creatures.exe / FUN_00429920 (00429920).
 * The original optionally seeds directory defaults from the executable path and then reloads the
 * full eight-slot directory table from the settings store.
 */
void creatures_refresh_directory_table(CreaturesDirectoryConfig *config,
    const CreaturesSettingsOps *settings_ops, int seed_defaults_from_executable) {
    size_t index;
    char main_directory_default[CREATURES_DIRECTORY_VALUE_SIZE];

    if (config == NULL || settings_ops == NULL || settings_ops->read_setting == NULL) {
        return;
    }

    memset(config->directories, 0, sizeof(config->directories));
    creatures_build_main_directory_default(
        config->executable_path, main_directory_default, sizeof(main_directory_default));

    if (seed_defaults_from_executable != 0 && settings_ops->write_setting != NULL) {
        settings_ops->write_setting(
            k_creatures_directory_slot_names[0], main_directory_default, settings_ops->ctx);
        for (index = 1; index < CREATURES_DIRECTORY_SLOT_COUNT; index++) {
            settings_ops->write_setting(k_creatures_directory_slot_names[index],
                k_creatures_directory_seed_values[index - 1], settings_ops->ctx);
        }
    }

    for (index = 0; index < CREATURES_DIRECTORY_SLOT_COUNT; index++) {
        const char *default_value;

        if (index == 0) {
            default_value = main_directory_default;
        } else {
            default_value = k_creatures_directory_seed_values[index - 1];
        }

        settings_ops->read_setting(k_creatures_directory_slot_names[index], config->directories[index],
            sizeof(config->directories[index]), default_value, settings_ops->ctx);
    }
}

const char *creatures_directory_slot_name(size_t index) {
    if (index >= CREATURES_DIRECTORY_SLOT_COUNT) {
        return "";
    }
    return k_creatures_directory_slot_names[index];
}

/*
 * Derived from Creatures.exe / FUN_0040b670 (0040b670).
 * The original retries missing asset paths against the configured CD drive and keeps prompting
 * until the fallback Genetics path appears or the user cancels.
 */
const char *creatures_resolve_data_path(char *out_path, size_t out_path_size,
    const char *requested_path, int fail_if_missing,
    const CreaturesPathResolverOps *resolver_ops) {
    char cd_drive[64];
    char probe_path[REMOVE_MAX_PATH];
    const char *relative_path;

    if (out_path == NULL || out_path_size == 0 || requested_path == NULL || resolver_ops == NULL ||
        resolver_ops->read_setting == NULL || resolver_ops->path_exists == NULL) {
        return NULL;
    }

    if (!creatures_copy_string(out_path, out_path_size, requested_path)) {
        return NULL;
    }
    if (resolver_ops->path_exists(out_path, resolver_ops->ctx) != 0) {
        return out_path;
    }
    if (fail_if_missing != 0) {
        return NULL;
    }

    resolver_ops->read_setting("CD Drive", cd_drive, sizeof(cd_drive), "", resolver_ops->ctx);
    if (cd_drive[0] == '\0') {
        return NULL;
    }
    if (cd_drive[strlen(cd_drive) - 1] != '\\' && cd_drive[strlen(cd_drive) - 1] != '/') {
        if (!creatures_append_string(cd_drive, sizeof(cd_drive), "\\")) {
            return NULL;
        }
    }

    if (!creatures_copy_string(probe_path, sizeof(probe_path), cd_drive) ||
        !creatures_append_string(probe_path, sizeof(probe_path), "Genetics")) {
        return NULL;
    }

    while (resolver_ops->path_exists(probe_path, resolver_ops->ctx) == 0) {
        if (resolver_ops->prompt_insert_cd == NULL || resolver_ops->prompt_insert_cd(resolver_ops->ctx) != 0) {
            return NULL;
        }
    }

    relative_path = requested_path;
    if (requested_path[1] == ':' &&
        (requested_path[2] == '\\' || requested_path[2] == '/')) {
        relative_path = requested_path + 3;
    }

    if (!creatures_copy_string(out_path, out_path_size, cd_drive) ||
        !creatures_append_string(out_path, out_path_size, relative_path)) {
        return NULL;
    }
    if (resolver_ops->path_exists(out_path, resolver_ops->ctx) == 0) {
        return NULL;
    }

    return out_path;
}
