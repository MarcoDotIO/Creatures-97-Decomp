#include "creatures_world_bootstrap.h"

#include <stddef.h>

void creatures_window_timer_start(void *window_handle, const CreaturesWindowTimerOps *ops) {
    if (window_handle == NULL || ops == NULL || ops->set_timer == NULL) {
        return;
    }

    ops->set_timer(window_handle, 1, 0x5a, ops->ctx);
}

void creatures_window_timer_stop(void *window_handle, const CreaturesWindowTimerOps *ops) {
    if (window_handle == NULL || ops == NULL || ops->kill_timer == NULL) {
        return;
    }

    ops->kill_timer(window_handle, 1, ops->ctx);
}

void creatures_world_reset_metrics(CreaturesWorldMetrics *metrics,
    CreaturesBootstrapVoidProc reset_callback, void *reset_ctx) {
    if (metrics == NULL) {
        return;
    }

    metrics->first = 0;
    metrics->second = 0;
    metrics->third = 0;
    metrics->fourth = 0;
    if (reset_callback != NULL) {
        reset_callback(reset_ctx);
    }
}

bool creatures_world_load_bootstrap(void *world_source, int *loading_flag, void *window_handle,
    CreaturesWorldMetrics *metrics, const CreaturesWorldBootstrapOps *ops) {
    if (loading_flag == NULL || metrics == NULL || ops == NULL ||
        ops->load_world_source == NULL || ops->bootstrap_palette == NULL) {
        return false;
    }

    creatures_window_timer_stop(window_handle, ops->timer_ops);
    *loading_flag = 0;
    if (ops->load_world_source(world_source, ops->ctx) == 0) {
        return false;
    }
    if (ops->bootstrap_palette(ops->ctx) == 0) {
        return false;
    }

    if (ops->stage_temp_backup != NULL) {
        ops->stage_temp_backup(ops->ctx);
    }
    creatures_world_reset_metrics(metrics, ops->reset_metrics_callback, ops->ctx);
    if (ops->refresh_creature_status != NULL) {
        ops->refresh_creature_status(ops->ctx);
    }
    if (ops->refresh_score_panel != NULL) {
        ops->refresh_score_panel(ops->ctx);
    }

    creatures_window_timer_start(window_handle, ops->timer_ops);
    *loading_flag = 1;
    if (ops->refresh_window_title != NULL) {
        ops->refresh_window_title(ops->ctx);
    }
    return true;
}
