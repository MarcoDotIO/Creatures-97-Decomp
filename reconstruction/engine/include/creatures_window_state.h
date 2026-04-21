#ifndef CREATURES_WINDOW_STATE_H
#define CREATURES_WINDOW_STATE_H

#include "creatures_boot_registry.h"

typedef int (*CreaturesWindowIsIconicProc)(void *window_handle, void *ctx);
typedef void (*CreaturesWindowReadRectProc)(
    void *window_handle, CreaturesDisplayRect *rect_out, void *ctx);
typedef void (*CreaturesMainWindowShutdownProc)(void *ctx);
typedef void (*CreaturesEyeWindowDestroyProc)(void *owner, void *ctx);

typedef struct CreaturesMainWindowStateOps {
    CreaturesWindowIsIconicProc is_iconic;
    CreaturesWindowReadRectProc read_window_rect;
    CreaturesMainWindowShutdownProc shutdown_main_window;
    void *ctx;
} CreaturesMainWindowStateOps;

typedef struct CreaturesEyeWindowStateOps {
    CreaturesWindowReadRectProc read_window_rect;
    CreaturesEyeWindowDestroyProc destroy_eye_window;
    void *ctx;
} CreaturesEyeWindowStateOps;

void creatures_main_window_save_placement_and_shutdown(void *window_handle,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesMainWindowStateOps *window_ops);
void creatures_eye_window_save_position_and_destroy(void *owner, void *window_handle,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesEyeWindowStateOps *window_ops);

#endif
