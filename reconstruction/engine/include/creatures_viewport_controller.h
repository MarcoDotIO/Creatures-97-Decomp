#ifndef CREATURES_VIEWPORT_CONTROLLER_H
#define CREATURES_VIEWPORT_CONTROLLER_H

#include "creatures_camera_follow.h"

typedef int (*CreaturesViewportSetScrollbarRangeProc)(
    int axis, int minimum, int maximum, int redraw, void *ctx);
typedef int (*CreaturesViewportSetScrollbarPositionProc)(
    int axis, int position, int redraw, void *ctx);

typedef struct CreaturesViewportScrollMetrics {
    int horizontal_page;
    int vertical_page;
} CreaturesViewportScrollMetrics;

typedef struct CreaturesViewportScrollbarOps {
    CreaturesViewportSetScrollbarRangeProc set_scrollbar_range;
    CreaturesViewportSetScrollbarPositionProc set_scrollbar_position;
    void *ctx;
} CreaturesViewportScrollbarOps;

typedef int (*CreaturesViewportGetScrollbarPositionProc)(int axis, void *ctx);

typedef struct CreaturesViewportScrollEventOps {
    CreaturesViewportGetScrollbarPositionProc get_scrollbar_position;
    CreaturesViewportSetScrollbarPositionProc set_scrollbar_position;
    void *ctx;
} CreaturesViewportScrollEventOps;

typedef struct CreaturesViewportInvalidationOps {
    CreaturesDisplayInvalidateRectProc invalidate_rect;
    void *window_handle;
    void *ctx;
} CreaturesViewportInvalidationOps;

typedef struct CreaturesViewportFollowController {
    int follow_mode;
    int stable_frame_count;
    CreaturesCameraFollowState *camera;
} CreaturesViewportFollowController;

void creatures_viewport_sync_scrollbars(const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollbarOps *ops);
void creatures_viewport_follow_controller_set_mode(CreaturesViewportFollowController *controller,
    int enabled, const CreaturesViewportInvalidationOps *invalidation_ops);
void creatures_camera_follow_seek_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportRefreshOps *refresh_ops);
void creatures_camera_follow_set_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportRefreshOps *refresh_ops);
void creatures_viewport_handle_horizontal_scroll(CreaturesViewportFollowController *controller,
    int scroll_code, int track_position, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollEventOps *scrollbar_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops,
    const CreaturesDisplayScrollOps *scroll_ops);
void creatures_viewport_handle_vertical_scroll(CreaturesViewportFollowController *controller,
    int scroll_code, int track_position, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollEventOps *scrollbar_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops,
    const CreaturesDisplayScrollOps *scroll_ops);
void creatures_viewport_follow_controller_update(CreaturesViewportFollowController *controller,
    const CreaturesViewportScrollMetrics *metrics, const CreaturesCameraFollowTarget *target,
    void *excluded_target_handle, const CreaturesViewportScrollbarOps *scrollbar_ops,
    const CreaturesDisplayScrollOps *scroll_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops);
void creatures_viewport_follow_controller_force_recenter(
    CreaturesViewportFollowController *controller, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportScrollbarOps *scrollbar_ops,
    const CreaturesViewportRefreshOps *refresh_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops);

#endif
