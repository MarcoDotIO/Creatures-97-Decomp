#include "creatures_camera_follow.h"

#include <string.h>

static void creatures_camera_follow_redraw_full_viewport(CreaturesCameraFollowState *state,
    const CreaturesViewportRefreshOps *ops) {
    unsigned char redraw_scope_storage[20];
    CreaturesDisplayRect redraw_bounds;

    if (state == NULL || ops == NULL) {
        return;
    }

    if (ops->refresh_owner != NULL) {
        ops->refresh_owner(state->surface.owner_handle, ops->ctx);
    }
    if (ops->redraw_ops == NULL) {
        return;
    }

    redraw_bounds = state->surface.bounds;
    creatures_display_surface_redraw_region(
        &state->surface, redraw_scope_storage, &redraw_bounds, ops->redraw_ops);
}

static int creatures_camera_follow_decay_toward_zero(int value) {
    if (value < 0) {
        return value + 1;
    }
    if (value > 0) {
        return value - 1;
    }
    return value;
}

void creatures_camera_follow_reset_state(CreaturesCameraFollowState *state) {
    if (state == NULL) {
        return;
    }

    state->pending_target_dx = 0;
    state->pending_target_dy = 0;
    state->accumulated_dx = 0;
    state->accumulated_dy = 0;
    state->current_step_dx = 0;
    state->current_step_dy = 0;
    state->last_target_handle = NULL;
}

void creatures_camera_follow_set_origin(CreaturesCameraFollowState *state, int left, int top,
    const CreaturesViewportRefreshOps *ops) {
    int viewport_width;
    int viewport_height;

    if (state == NULL) {
        return;
    }

    viewport_width = state->surface.bounds.right - state->surface.bounds.left;
    viewport_height = state->surface.bounds.bottom - state->surface.bounds.top;
    if (left < 0) {
        left = 0;
    }
    if (left + viewport_width > CREATURES_WORLD_WRAP_WIDTH - 1) {
        left = CREATURES_WORLD_WRAP_WIDTH - viewport_width;
    }
    if (top < 0) {
        top = 0;
    }
    if (top + viewport_height > CREATURES_WORLD_HEIGHT - 1) {
        top = CREATURES_WORLD_HEIGHT - viewport_height;
    }

    state->surface.bounds.left = left;
    state->surface.bounds.top = top;
    state->surface.bounds.right = left + viewport_width;
    state->surface.bounds.bottom = top + viewport_height;
    creatures_camera_follow_redraw_full_viewport(state, ops);
}

void creatures_camera_follow_seek_origin(CreaturesCameraFollowState *state, int left, int top,
    const CreaturesViewportRefreshOps *ops) {
    int delta_x;
    int delta_y;
    int current_left;
    int current_top;

    if (state == NULL) {
        return;
    }

    if (state->smoothing_enabled == 0) {
        creatures_camera_follow_set_origin(state, left, top, ops);
    }

    current_left = state->surface.bounds.left;
    current_top = state->surface.bounds.top;
    delta_x = left - current_left;
    delta_y = top - current_top;
    if (delta_x < -0x104f) {
        delta_x += CREATURES_WORLD_WRAP_WIDTH;
    } else if (delta_x > 0x1050) {
        delta_x -= CREATURES_WORLD_WRAP_WIDTH;
    }

    if (delta_x <= state->surface.bounds.right - current_left &&
        current_left - state->surface.bounds.right <= delta_x &&
        delta_y <= state->surface.bounds.bottom - current_top &&
        current_top - state->surface.bounds.bottom <= delta_y) {
        state->pending_target_dx = delta_x;
        state->pending_target_dy = delta_y;
        state->accumulated_dx = 0;
        state->accumulated_dy = 0;
        state->current_step_dx = 0;
        state->current_step_dy = 0;
        return;
    }

    state->pending_target_dx = 0;
    state->pending_target_dy = 0;
    state->accumulated_dx = 0;
    state->accumulated_dy = 0;
    state->current_step_dx = 0;
    state->current_step_dy = 0;
    creatures_camera_follow_set_origin(state, left, top, ops);
}

void creatures_camera_follow_track_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, void *excluded_target_handle,
    const CreaturesDisplayScrollOps *scroll_ops) {
    int delta_x;
    int delta_y;
    int horizontal_step;
    int vertical_step;
    int threshold;

    if (state == NULL) {
        return;
    }

    if (target == NULL || target->handle == NULL) {
        state->last_target_handle = NULL;
        return;
    }

    if (state->last_target_handle != target->handle) {
        state->last_target_handle = target->handle;
    }
    if (target->handle == excluded_target_handle || target->suppress_follow) {
        return;
    }

    if (state->smoothing_enabled == 0 &&
        creatures_display_surface_target_inside_follow_window(
            &state->surface, target->world_x, target->world_y)) {
        return;
    }

    delta_x = target->world_x - (state->surface.bounds.left + state->surface.bounds.right) / 2;
    delta_y = target->world_y -
        (((state->surface.bounds.bottom * 5) + (state->surface.bounds.top * 3)) / 8);
    if (delta_x < -0x1050) {
        delta_x += CREATURES_WORLD_WRAP_WIDTH;
    } else if (delta_x > 0x104f) {
        delta_x -= CREATURES_WORLD_WRAP_WIDTH;
    }

    if (state->smoothing_enabled == 0) {
        creatures_display_surface_scroll_by(&state->surface, delta_x, delta_y, scroll_ops);
        return;
    }

    horizontal_step = 0;
    vertical_step = 0;
    threshold = (state->surface.bounds.left - state->surface.bounds.right) / 4;
    if (delta_x < threshold && state->current_step_dx > -0x19) {
        horizontal_step = -3;
    }
    threshold = (state->surface.bounds.right - state->surface.bounds.left) / 4;
    if (threshold < delta_x && state->current_step_dx < 0x19) {
        horizontal_step = 3;
    }
    threshold = (state->surface.bounds.top - state->surface.bounds.bottom) / 6;
    if (delta_y < threshold && state->current_step_dy > -0x19) {
        vertical_step = -3;
    }
    threshold = (state->surface.bounds.bottom - state->surface.bounds.top) / 6;
    if (threshold < delta_y && state->current_step_dy < 0x19) {
        vertical_step = 3;
    }

    state->current_step_dx += horizontal_step;
    state->current_step_dy += vertical_step;
    creatures_display_surface_scroll_by(&state->surface, state->current_step_dx / 3,
        state->current_step_dy / 3, scroll_ops);
    state->current_step_dx = creatures_camera_follow_decay_toward_zero(state->current_step_dx);
    state->current_step_dy = creatures_camera_follow_decay_toward_zero(state->current_step_dy);
}

int creatures_camera_follow_step_pending_motion(CreaturesCameraFollowState *state,
    const CreaturesDisplayScrollOps *scroll_ops) {
    if (state == NULL || state->smoothing_enabled == 0 ||
        (state->pending_target_dx == 0 && state->pending_target_dy == 0)) {
        return 0;
    }

    if (state->pending_target_dx < 0) {
        if (state->pending_target_dx < -2) {
            if (state->pending_target_dx < state->accumulated_dx + state->current_step_dx - 2) {
                state->current_step_dx -= 2;
            } else if (state->current_step_dx + 2 < -3) {
                state->current_step_dx += 2;
            } else {
                state->current_step_dx = -4;
            }
        } else {
            state->current_step_dx = state->pending_target_dx;
        }
    } else if (state->pending_target_dx < 1) {
        state->current_step_dx = 0;
    } else if (state->pending_target_dx < 3) {
        state->current_step_dx = state->pending_target_dx;
    } else if (state->accumulated_dx + state->current_step_dx + 2 < state->pending_target_dx) {
        state->current_step_dx += 2;
    } else if (state->current_step_dx - 2 < 4) {
        state->current_step_dx = 4;
    } else {
        state->current_step_dx -= 2;
    }

    if (state->pending_target_dy < 0) {
        if (state->pending_target_dy < -2) {
            if (state->pending_target_dy < state->accumulated_dy + state->current_step_dy - 2) {
                state->current_step_dy -= 2;
            } else if (state->current_step_dy + 2 < -3) {
                state->current_step_dy += 2;
            } else {
                state->current_step_dy = -4;
            }
        } else {
            state->current_step_dy = state->pending_target_dy;
        }
    } else if (state->pending_target_dy < 1) {
        state->current_step_dy = 0;
    } else if (state->pending_target_dy < 3) {
        state->current_step_dy = state->pending_target_dy;
    } else if (state->accumulated_dy + state->current_step_dy + 2 < state->pending_target_dy) {
        state->current_step_dy += 2;
    } else if (state->current_step_dy - 2 < 4) {
        state->current_step_dy = 4;
    } else {
        state->current_step_dy -= 2;
    }

    creatures_display_surface_scroll_by(
        &state->surface, state->current_step_dx, state->current_step_dy, scroll_ops);
    state->accumulated_dx += state->current_step_dx;
    state->accumulated_dy += state->current_step_dy;
    state->pending_target_dx -= state->current_step_dx;
    state->pending_target_dy -= state->current_step_dy;
    return 1;
}
