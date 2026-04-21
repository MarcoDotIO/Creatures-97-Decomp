#ifndef CREATURES_BOOT_REGISTRY_H
#define CREATURES_BOOT_REGISTRY_H

#include "creatures_media_display.h"

typedef struct CreaturesRegistryHandler {
    int is_open;
    char company[64];
    char product[64];
    char section[64];
    char registry_path[200];
} CreaturesRegistryHandler;

typedef int (*CreaturesRegistryCreateKeyProc)(
    const char *root_name, const char *subkey, void *ctx);
typedef int (*CreaturesRegistryReadValueProc)(const char *root_name, const char *subkey,
    const char *value_name, uint8_t *data_out, size_t *size_inout, void *ctx);
typedef int (*CreaturesRegistryWriteValueProc)(const char *root_name, const char *subkey,
    const char *value_name, const uint8_t *data, size_t data_size, void *ctx);

typedef struct CreaturesRegistryOps {
    CreaturesRegistryCreateKeyProc create_key;
    CreaturesRegistryReadValueProc read_value;
    CreaturesRegistryWriteValueProc write_value;
    void *ctx;
} CreaturesRegistryOps;

typedef struct CreaturesWindowPlacement {
    int height;
    int width;
    int y;
    int x;
    uint32_t style;
} CreaturesWindowPlacement;

typedef struct CreaturesRegistryPair32 {
    int first;
    int second;
} CreaturesRegistryPair32;

typedef int (*CreaturesGetSystemMetricProc)(int metric_index, void *ctx);
typedef void (*CreaturesFinalizeWindowPlacementProc)(
    CreaturesWindowPlacement *placement, void *ctx);

typedef struct CreaturesWindowBootOps {
    CreaturesGetSystemMetricProc get_system_metric;
    CreaturesFinalizeWindowPlacementProc finalize_window_placement;
    void *ctx;
} CreaturesWindowBootOps;

bool creatures_registry_handler_init(CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, const char *company, const char *product,
    const char *section);
bool creatures_registry_bootstrap_main_handler(CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops);
bool creatures_registry_read_value(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t *size_inout);
bool creatures_registry_write_string(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const char *value);
bool creatures_registry_write_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const CreaturesDisplayRect *rect);
bool creatures_registry_read_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesDisplayRect *rect_out);
bool creatures_registry_write_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const CreaturesRegistryPair32 *pair);
bool creatures_registry_read_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesRegistryPair32 *pair_out);
void creatures_registry_read_or_default_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesDisplayRect *rect_out, const CreaturesDisplayRect *default_rect);
void creatures_registry_read_or_default_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesRegistryPair32 *pair_out, const CreaturesRegistryPair32 *default_pair);
void creatures_window_bootstrap_placement(CreaturesWindowPlacement *placement,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesWindowBootOps *window_ops);

#endif
