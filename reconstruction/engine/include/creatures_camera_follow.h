#ifndef CREATURES_CAMERA_FOLLOW_H
#define CREATURES_CAMERA_FOLLOW_H

#include "creatures_media_display.h"
#include "creatures_viewport_follow.h"

typedef struct CreaturesViewportRefreshOps {
    CreaturesDisplayRefreshOwnerProc refresh_owner;
    const CreaturesDisplayRedrawOps *redraw_ops;
    void *ctx;
} CreaturesViewportRefreshOps;

typedef struct CreaturesCameraFollowTarget {
    void *handle;
    int world_x;
    int world_y;
    int suppress_follow;
} CreaturesCameraFollowTarget;

typedef struct CreaturesCameraFollowState {
    int smoothing_enabled;
    CreaturesDisplaySurface surface;
    int pending_target_dx;
    int pending_target_dy;
    int accumulated_dx;
    int accumulated_dy;
    int current_step_dx;
    int current_step_dy;
    void *last_target_handle;
} CreaturesCameraFollowState;

void creatures_camera_follow_reset_state(CreaturesCameraFollowState *state);
void creatures_camera_follow_set_origin(CreaturesCameraFollowState *state, int left, int top,
    const CreaturesViewportRefreshOps *ops);
void creatures_camera_follow_seek_origin(CreaturesCameraFollowState *state, int left, int top,
    const CreaturesViewportRefreshOps *ops);
void creatures_camera_follow_track_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, void *excluded_target_handle,
    const CreaturesDisplayScrollOps *scroll_ops);
int creatures_camera_follow_step_pending_motion(CreaturesCameraFollowState *state,
    const CreaturesDisplayScrollOps *scroll_ops);

#endif
