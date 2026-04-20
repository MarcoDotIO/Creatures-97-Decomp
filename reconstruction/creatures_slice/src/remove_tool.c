#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

static const char k_creatures_install_key[] =
    "SOFTWARE\\Millennium Interactive\\Creatures\\1.0";
static const char k_uninstall_key[] =
    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey";
static const char k_value_main_directory[] = "Main Directory";
static const char k_value_image_directory[] = "Image Directory";
static const char k_value_genetics_directory[] = "Genetics Directory";
static const char k_value_uninstall_string[] = "UninstallString";

static const char *const k_remove_registry_cleanup_keys[] = {
    "Software\\Classes\\CLSID\\{77C733E1-6797-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{B4A467E1-AF33-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{3DC4BDA1-B95B-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{D7885C00-9F7D-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{4388EF01-A35C-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{7CCFFEC1-A43D-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{BE01C580-66B3-11CF-8756-0020AF4B3441}",
    "Software\\Classes\\CLSID\\{F10D5CA1-A8B7-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{D3BCF121-A4D8-11CF-BBF2-0020AF71E433}",
    "Software\\Classes\\CLSID\\{380459A0-3587-11CF-94B8-444553540000}",
    "Software\\Classes\\.SFC",
    "Software\\Classes\\Creatures.Document",
    "Software\\Classes\\Hatchery.Document",
    "Software\\Classes\\SFC.ole",
    "Software\\Classes\\Sex.ole",
    "Software\\Classes\\Score.ole",
    "Software\\Classes\\Science.ole",
    "Software\\Classes\\Owner.OLE",
    "Software\\Classes\\Health.ole",
    "Software\\Classes\\Hatchery.ole",
    "Software\\Classes\\Funeral.ole",
    "SOFTWARE\\Millennium Interactive\\Creatures",
    "SOFTWARE\\Millennium Interactive",
    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\CreaturesDeinstKey",
};

typedef struct RemoveDeleteVisitorState {
    const RemoveFilesystemOps *filesystem_ops;
    const char *directory_path;
    size_t deleted_count;
} RemoveDeleteVisitorState;

static bool remove_copy_string(char *out, size_t out_size, const char *value) {
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

static bool remove_join_windows_path(
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
        return remove_copy_string(out, out_size, right);
    }

    position = left_length;
    if (left_length + right_length + 2 > out_size) {
        return false;
    }

    memcpy(out, left, left_length);
    if (left[left_length - 1] != '\\' && left[left_length - 1] != '/') {
        out[position++] = '\\';
    }
    memcpy(out + position, right, right_length + 1);
    return true;
}

static bool remove_append_action(
    RemoveCleanupPlan *plan, RemoveActionKind kind, const char *target) {
    RemovePlanAction *action;

    if (plan == NULL || target == NULL || plan->action_count >= REMOVE_MAX_ACTIONS) {
        return false;
    }

    action = &plan->actions[plan->action_count];
    action->kind = kind;
    if (!remove_copy_string(action->target, sizeof(action->target), target)) {
        return false;
    }

    plan->action_count++;
    return true;
}

static int remove_delete_visitor(const char *entry_name, void *visitor_ctx) {
    RemoveDeleteVisitorState *state;
    char full_path[REMOVE_MAX_PATH];

    state = (RemoveDeleteVisitorState *)visitor_ctx;
    if (state == NULL || entry_name == NULL || state->filesystem_ops == NULL ||
        state->filesystem_ops->delete_path == NULL) {
        return 0;
    }

    if (!remove_join_windows_path(
            full_path, sizeof(full_path), state->directory_path, entry_name)) {
        return 0;
    }

    if (state->filesystem_ops->delete_path(full_path, state->filesystem_ops->ctx) == 0) {
        state->deleted_count++;
    }
    return 0;
}

/*
 * Derived from remove.exe / FUN_004017e0 (004017e0).
 * The original opens the Creatures install key under HKLM and copies the requested value.
 */
bool remove_read_install_value(const RemoveRegistryOps *registry_ops, const char *value_name,
    char *out_value, size_t out_value_size) {
    if (registry_ops == NULL || registry_ops->read_string == NULL || value_name == NULL ||
        out_value == NULL || out_value_size == 0) {
        return false;
    }

    out_value[0] = '\0';
    return registry_ops->read_string(
               k_creatures_install_key, value_name, out_value, out_value_size, registry_ops->ctx) ==
           0;
}

bool remove_read_uninstall_string(const RemoveRegistryOps *registry_ops, char *out_value,
    size_t out_value_size) {
    if (registry_ops == NULL || registry_ops->read_string == NULL || out_value == NULL ||
        out_value_size == 0) {
        return false;
    }

    out_value[0] = '\0';
    return registry_ops->read_string(k_uninstall_key, k_value_uninstall_string, out_value,
               out_value_size, registry_ops->ctx) == 0;
}

/*
 * Derived from remove.exe / FUN_00401890 (00401890).
 * The original constructs a search glob, enumerates matching files, and deletes each one.
 */
size_t remove_delete_files_matching_pattern(const RemoveFilesystemOps *filesystem_ops,
    const char *directory_path, const char *pattern) {
    RemoveDeleteVisitorState visitor_state;
    char search_glob[REMOVE_MAX_PATH];

    if (filesystem_ops == NULL || filesystem_ops->enumerate_glob == NULL ||
        filesystem_ops->delete_path == NULL || directory_path == NULL || pattern == NULL) {
        return 0;
    }

    if (!remove_join_windows_path(search_glob, sizeof(search_glob), directory_path, pattern)) {
        return 0;
    }

    visitor_state.filesystem_ops = filesystem_ops;
    visitor_state.directory_path = directory_path;
    visitor_state.deleted_count = 0;

    filesystem_ops->enumerate_glob(
        search_glob, remove_delete_visitor, &visitor_state, filesystem_ops->ctx);
    return visitor_state.deleted_count;
}

/*
 * The cleanup plan below is inferred from remove.exe string tables and the glob-delete helper above.
 * It captures the game-authored uninstall targets in a portable form.
 */
bool remove_collect_install_layout(const RemoveRegistryOps *registry_ops, RemoveInstallLayout *layout) {
    if (layout == NULL) {
        return false;
    }

    memset(layout, 0, sizeof(*layout));
    if (!remove_read_install_value(
            registry_ops, k_value_main_directory, layout->main_directory, sizeof(layout->main_directory))) {
        return false;
    }
    if (!remove_read_install_value(registry_ops, k_value_image_directory, layout->image_directory,
            sizeof(layout->image_directory))) {
        return false;
    }
    if (!remove_read_install_value(registry_ops, k_value_genetics_directory,
            layout->genetics_directory, sizeof(layout->genetics_directory))) {
        return false;
    }

    remove_read_uninstall_string(
        registry_ops, layout->uninstall_command, sizeof(layout->uninstall_command));
    return true;
}

void remove_build_cleanup_plan(const RemoveInstallLayout *layout, RemoveCleanupPlan *plan) {
    char target[REMOVE_MAX_PATH];

    if (layout == NULL || plan == NULL) {
        return;
    }

    memset(plan, 0, sizeof(*plan));

    if (remove_join_windows_path(target, sizeof(target), layout->main_directory, "TempBU\\*.sfc")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_GLOB, target);
    }
    if (remove_join_windows_path(
            target, sizeof(target), layout->main_directory, "Backup\\*.photo album")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_GLOB, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->main_directory, "chemicals.str")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_FILE, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->main_directory, "creatures.fts")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_FILE, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->main_directory, "creatures.gid")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_FILE, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->image_directory, "*.spr")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_GLOB, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->genetics_directory, "*.gno")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_GLOB, target);
    }
    if (remove_join_windows_path(target, sizeof(target), layout->genetics_directory, "*.gen")) {
        remove_append_action(plan, REMOVE_ACTION_DELETE_GLOB, target);
    }
}

size_t remove_execute_cleanup_plan(
    const RemoveCleanupPlan *plan, const RemoveFilesystemOps *filesystem_ops) {
    size_t index;
    size_t deleted_count;
    const char *last_separator;
    char directory[REMOVE_MAX_PATH];

    if (plan == NULL || filesystem_ops == NULL || filesystem_ops->delete_path == NULL) {
        return 0;
    }

    deleted_count = 0;
    for (index = 0; index < plan->action_count; index++) {
        if (plan->actions[index].kind == REMOVE_ACTION_DELETE_FILE) {
            if (filesystem_ops->delete_path(plan->actions[index].target, filesystem_ops->ctx) == 0) {
                deleted_count++;
            }
            continue;
        }

        last_separator = strrchr(plan->actions[index].target, '\\');
        if (last_separator == NULL) {
            last_separator = strrchr(plan->actions[index].target, '/');
        }
        if (last_separator == NULL) {
            continue;
        }

        if ((size_t)(last_separator - plan->actions[index].target) >= sizeof(directory)) {
            continue;
        }

        memcpy(directory, plan->actions[index].target,
            (size_t)(last_separator - plan->actions[index].target));
        directory[last_separator - plan->actions[index].target] = '\0';
        deleted_count += remove_delete_files_matching_pattern(
            filesystem_ops, directory, last_separator + 1);
    }

    return deleted_count;
}

size_t remove_execute_registry_cleanup(const RemoveRegistryOps *registry_ops) {
    size_t index;
    size_t deleted_count;

    if (registry_ops == NULL || registry_ops->delete_key == NULL) {
        return 0;
    }

    deleted_count = 0;
    for (index = 0; index < sizeof(k_remove_registry_cleanup_keys) /
            sizeof(k_remove_registry_cleanup_keys[0]);
         index++) {
        if (registry_ops->delete_key(k_remove_registry_cleanup_keys[index], registry_ops->ctx) == 0) {
            deleted_count++;
        }
    }

    return deleted_count;
}

bool remove_launch_uninstaller(const RemoveShellOps *shell_ops, const char *command_line) {
    if (shell_ops == NULL || shell_ops->execute == NULL || command_line == NULL ||
        command_line[0] == '\0') {
        return false;
    }

    return shell_ops->execute(command_line, shell_ops->ctx) == 0;
}

const char *const *remove_registry_cleanup_keys(size_t *count_out) {
    if (count_out != NULL) {
        *count_out = sizeof(k_remove_registry_cleanup_keys) / sizeof(k_remove_registry_cleanup_keys[0]);
    }
    return k_remove_registry_cleanup_keys;
}
