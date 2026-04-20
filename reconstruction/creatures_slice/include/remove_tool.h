#ifndef REMOVE_TOOL_H
#define REMOVE_TOOL_H

#include "creatures_common.h"

#define REMOVE_MAX_ACTIONS 16

typedef int (*RemoveRegistryReadProc)(const char *key_path, const char *value_name,
    char *out_value, size_t out_value_size, void *ctx);
typedef int (*RemoveRegistryDeleteKeyProc)(const char *key_path, void *ctx);
typedef int (*RemoveFilesystemEnumerateProc)(const char *search_glob,
    int (*visitor)(const char *entry_name, void *visitor_ctx), void *visitor_ctx, void *ctx);
typedef int (*RemoveFilesystemDeletePathProc)(const char *path, void *ctx);
typedef int (*RemoveShellExecuteProc)(const char *command_line, void *ctx);

typedef struct RemoveRegistryOps {
    RemoveRegistryReadProc read_string;
    RemoveRegistryDeleteKeyProc delete_key;
    void *ctx;
} RemoveRegistryOps;

typedef struct RemoveFilesystemOps {
    RemoveFilesystemEnumerateProc enumerate_glob;
    RemoveFilesystemDeletePathProc delete_path;
    void *ctx;
} RemoveFilesystemOps;

typedef struct RemoveShellOps {
    RemoveShellExecuteProc execute;
    void *ctx;
} RemoveShellOps;

typedef enum RemoveActionKind {
    REMOVE_ACTION_DELETE_FILE = 0,
    REMOVE_ACTION_DELETE_GLOB = 1,
} RemoveActionKind;

typedef struct RemovePlanAction {
    RemoveActionKind kind;
    char target[REMOVE_MAX_PATH];
} RemovePlanAction;

typedef struct RemoveInstallLayout {
    char main_directory[REMOVE_MAX_PATH];
    char image_directory[REMOVE_MAX_PATH];
    char genetics_directory[REMOVE_MAX_PATH];
    char uninstall_command[REMOVE_MAX_PATH];
} RemoveInstallLayout;

typedef struct RemoveCleanupPlan {
    RemovePlanAction actions[REMOVE_MAX_ACTIONS];
    size_t action_count;
} RemoveCleanupPlan;

bool remove_read_install_value(const RemoveRegistryOps *registry_ops, const char *value_name,
    char *out_value, size_t out_value_size);
bool remove_read_uninstall_string(const RemoveRegistryOps *registry_ops, char *out_value,
    size_t out_value_size);
size_t remove_delete_files_matching_pattern(const RemoveFilesystemOps *filesystem_ops,
    const char *directory_path, const char *pattern);
bool remove_collect_install_layout(const RemoveRegistryOps *registry_ops, RemoveInstallLayout *layout);
void remove_build_cleanup_plan(const RemoveInstallLayout *layout, RemoveCleanupPlan *plan);
size_t remove_execute_cleanup_plan(const RemoveCleanupPlan *plan,
    const RemoveFilesystemOps *filesystem_ops);
size_t remove_execute_registry_cleanup(const RemoveRegistryOps *registry_ops);
bool remove_launch_uninstaller(const RemoveShellOps *shell_ops, const char *command_line);
const char *const *remove_registry_cleanup_keys(size_t *count_out);

#endif
