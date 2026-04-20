#ifndef LAUNCHER_TOOL_H
#define LAUNCHER_TOOL_H

#include "creatures_common.h"

typedef int (*LauncherRegistryCreateKeyProc)(
    const char *root_name, const char *subkey, void *ctx);
typedef int (*LauncherRegistryReadValueProc)(const char *root_name, const char *subkey,
    const char *value_name, uint8_t *data_out, size_t *size_inout, void *ctx);
typedef int (*LauncherRegistryWriteValueProc)(const char *root_name, const char *subkey,
    const char *value_name, const uint8_t *data, size_t data_size, void *ctx);
typedef int (*LauncherShellExecuteProc)(const char *target, void *ctx);
typedef int (*LauncherPathExistsProc)(const char *target, void *ctx);
typedef int (*LauncherLowColorWarningProc)(void *ctx);

typedef struct LauncherRegistryOps {
    LauncherRegistryCreateKeyProc create_key;
    LauncherRegistryReadValueProc read_value;
    LauncherRegistryWriteValueProc write_value;
    void *ctx;
} LauncherRegistryOps;

typedef struct LauncherShellOps {
    LauncherShellExecuteProc execute;
    LauncherPathExistsProc path_exists;
    void *ctx;
} LauncherShellOps;

typedef struct LauncherDisplayOps {
    LauncherLowColorWarningProc show_low_color_warning;
    void *ctx;
} LauncherDisplayOps;

typedef struct LauncherRegistryHandler {
    int is_open;
    char company[32];
    char product[32];
    char section[32];
    char registry_path[128];
} LauncherRegistryHandler;

bool launcher_registry_handler_init(LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, const char *company, const char *product,
    const char *section);
bool launcher_registry_read_value(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t *size_inout);
void launcher_registry_read_or_default(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t data_out_size, const uint8_t *default_value);
bool launcher_registry_write_string(const LauncherRegistryHandler *handler,
    const LauncherRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const char *value);
size_t launcher_launch_applets(
    const char *pipe_delimited_applets, const LauncherShellOps *shell_ops);
bool launcher_warn_if_low_color_depth(
    const LauncherDisplayOps *display_ops, unsigned int bits_per_pixel);

#endif
