#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

static const char k_launcher_root_current_user[] = "HKEY_CURRENT_USER";
static const char k_launcher_root_local_machine[] = "HKEY_LOCAL_MACHINE";

static bool launcher_copy_string(char *out, size_t out_size, const char *value) {
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

static bool launcher_append_string(char *out, size_t out_size, const char *value) {
    size_t current_length;
    size_t add_length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    current_length = strlen(out);
    add_length = strlen(value);
    if (current_length + add_length >= out_size) {
        return false;
    }

    memcpy(out + current_length, value, add_length + 1);
    return true;
}

static const char *launcher_root_name(int use_machine_hive) {
    if (use_machine_hive == 0) {
        return k_launcher_root_current_user;
    }
    return k_launcher_root_local_machine;
}

/*
 * Derived from Launcher.exe / FUN_00401180 (00401180).
 * The original duplicates three strings, builds SOFTWARE\<company>\<product>\<section>,
 * and creates matching HKCU/HKLM keys.
 */
bool launcher_registry_handler_init(LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, const char *company, const char *product,
    const char *section) {
    if (handler == NULL || registry_ops == NULL || registry_ops->create_key == NULL ||
        company == NULL || product == NULL || section == NULL) {
        return false;
    }

    memset(handler, 0, sizeof(*handler));
    if (!launcher_copy_string(handler->company, sizeof(handler->company), company) ||
        !launcher_copy_string(handler->product, sizeof(handler->product), product) ||
        !launcher_copy_string(handler->section, sizeof(handler->section), section) ||
        !launcher_copy_string(handler->registry_path, sizeof(handler->registry_path), "SOFTWARE\\") ||
        !launcher_append_string(handler->registry_path, sizeof(handler->registry_path), company) ||
        !launcher_append_string(handler->registry_path, sizeof(handler->registry_path), "\\") ||
        !launcher_append_string(handler->registry_path, sizeof(handler->registry_path), product) ||
        !launcher_append_string(handler->registry_path, sizeof(handler->registry_path), "\\") ||
        !launcher_append_string(handler->registry_path, sizeof(handler->registry_path), section)) {
        return false;
    }

    if (registry_ops->create_key(k_launcher_root_current_user, handler->registry_path,
            registry_ops->ctx) != 0) {
        return false;
    }
    if (registry_ops->create_key(k_launcher_root_local_machine, handler->registry_path,
            registry_ops->ctx) != 0) {
        return false;
    }

    handler->is_open = 1;
    return true;
}

/*
 * Derived from Launcher.exe / FUN_00401410 (00401410).
 * The original reads a value from either the HKCU or HKLM launcher key.
 */
bool launcher_registry_read_value(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t *size_inout) {
    if (handler == NULL || registry_ops == NULL || registry_ops->read_value == NULL ||
        value_name == NULL || data_out == NULL || size_inout == NULL || handler->is_open == 0) {
        return false;
    }

    return registry_ops->read_value(launcher_root_name(use_machine_hive), handler->registry_path,
               value_name, data_out, size_inout, registry_ops->ctx) == 0;
}

/*
 * Derived from Launcher.exe / FUN_00401470 (00401470).
 * The original reads a value and falls back to a default string when the read fails.
 */
void launcher_registry_read_or_default(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t data_out_size, const uint8_t *default_value) {
    size_t size_inout;

    if (data_out == NULL || data_out_size == 0) {
        return;
    }

    size_inout = data_out_size;
    if (launcher_registry_read_value(
            handler, registry_ops, use_machine_hive, value_name, data_out, &size_inout)) {
        return;
    }

    if (default_value != NULL) {
        launcher_copy_string((char *)data_out, data_out_size, (const char *)default_value);
    } else {
        data_out[0] = '\0';
    }
}

/*
 * Derived from Launcher.exe / FUN_004014e0 (004014e0).
 * The original writes a NUL-terminated string value into the launcher key.
 */
bool launcher_registry_write_string(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const char *value) {
    size_t value_size;

    if (handler == NULL || registry_ops == NULL || registry_ops->write_value == NULL ||
        value_name == NULL || value == NULL || handler->is_open == 0) {
        return false;
    }

    value_size = strlen(value) + 1;
    return registry_ops->write_value(launcher_root_name(use_machine_hive), handler->registry_path,
               value_name, (const uint8_t *)value, value_size, registry_ops->ctx) == 0;
}

/*
 * Derived from Launcher.exe / FUN_00402b90 (00402b90).
 * The original splits a pipe-delimited applet list and ShellExecutes each existing entry.
 */
size_t launcher_launch_applets(
    const char *pipe_delimited_applets, const LauncherShellOps *shell_ops) {
    char token[REMOVE_MAX_PATH];
    size_t index;
    size_t token_length;
    size_t launch_count;

    if (pipe_delimited_applets == NULL || shell_ops == NULL || shell_ops->execute == NULL ||
        shell_ops->path_exists == NULL) {
        return 0;
    }

    launch_count = 0;
    token_length = 0;
    for (index = 0;; index++) {
        char current;

        current = pipe_delimited_applets[index];
        if (current != '|' && current != '\0') {
            if (token_length + 1 < sizeof(token)) {
                token[token_length++] = current;
            }
            continue;
        }

        token[token_length] = '\0';
        if (token_length > 0 && shell_ops->path_exists(token, shell_ops->ctx) != 0 &&
            shell_ops->execute(token, shell_ops->ctx) == 0) {
            launch_count++;
        }

        if (current == '\0') {
            break;
        }
        token_length = 0;
    }

    return launch_count;
}

/*
 * Derived from Launcher.exe / FUN_00402330 (00402330).
 * The original warns when the active display depth is below 8 bits per pixel.
 */
bool launcher_warn_if_low_color_depth(
    const LauncherDisplayOps *display_ops, unsigned int bits_per_pixel) {
    if (display_ops == NULL || display_ops->show_low_color_warning == NULL) {
        return false;
    }

    if (bits_per_pixel >= 8) {
        return false;
    }

    return display_ops->show_low_color_warning(display_ops->ctx) == 0;
}
