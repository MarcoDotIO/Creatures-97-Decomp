#ifndef CREATURES_WORLD_BOOTSTRAP_H
#define CREATURES_WORLD_BOOTSTRAP_H

#include <stdbool.h>

typedef int (*CreaturesSetTimerProc)(
    void *window_handle, unsigned int timer_id, unsigned int interval_ms, void *ctx);
typedef int (*CreaturesKillTimerProc)(void *window_handle, unsigned int timer_id, void *ctx);

typedef struct CreaturesWindowTimerOps {
    CreaturesSetTimerProc set_timer;
    CreaturesKillTimerProc kill_timer;
    void *ctx;
} CreaturesWindowTimerOps;

typedef struct CreaturesWorldMetrics {
    int first;
    int second;
    int third;
    int fourth;
} CreaturesWorldMetrics;

typedef int (*CreaturesLoadWorldSourceProc)(void *world_source, void *ctx);
typedef int (*CreaturesBootstrapPaletteProc)(void *ctx);
typedef void (*CreaturesBootstrapVoidProc)(void *ctx);
typedef void (*CreaturesBootstrapToolProc)(void *tool_owner, void *ctx);

typedef struct CreaturesWorldBootstrapOps {
    CreaturesLoadWorldSourceProc load_world_source;
    CreaturesBootstrapPaletteProc bootstrap_palette;
    CreaturesBootstrapVoidProc stage_temp_backup;
    CreaturesBootstrapVoidProc reset_metrics_callback;
    CreaturesBootstrapVoidProc refresh_creature_status;
    CreaturesBootstrapVoidProc refresh_score_panel;
    CreaturesBootstrapVoidProc refresh_window_title;
    const CreaturesWindowTimerOps *timer_ops;
    void *ctx;
} CreaturesWorldBootstrapOps;

void creatures_window_timer_start(void *window_handle, const CreaturesWindowTimerOps *ops);
void creatures_window_timer_stop(void *window_handle, const CreaturesWindowTimerOps *ops);
void creatures_world_reset_metrics(CreaturesWorldMetrics *metrics,
    CreaturesBootstrapVoidProc reset_callback, void *reset_ctx);
bool creatures_world_load_bootstrap(void *world_source, int *loading_flag,
    void *window_handle, CreaturesWorldMetrics *metrics,
    const CreaturesWorldBootstrapOps *ops);

#endif
