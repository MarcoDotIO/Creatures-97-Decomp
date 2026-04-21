#include "creatures_viewport_controller.h"

static int creatures_camera_follow_divide_by_8_toward_zero(int value) {
    return (value + ((value >> 31) & 7)) >> 3;
}

static int creatures_viewport_clamp_scroll_position(int requested_position, int page_size) {
    int max_position;

    max_position = page_size * 2;
    if (requested_position < 0) {
        return 0;
    }
    if (requested_position > max_position) {
        return max_position;
    }
    return requested_position;
}

static int creatures_viewport_compute_scroll_position(
    int current_position, int scroll_code, int track_position, int page_size) {
    int requested_position;

    requested_position = current_position;
    switch (scroll_code) {
    case 0:
        requested_position = current_position - 0x10;
        break;
    case 1:
        requested_position = current_position + 0x10;
        break;
    case 2:
        requested_position = current_position - page_size / 2;
        break;
    case 3:
        requested_position = current_position + page_size / 2;
        break;
    case 4:
    case 5:
        requested_position = track_position;
        break;
    case 6:
        requested_position = 0;
        break;
    case 7:
        requested_position = page_size * 2;
        break;
    default:
        break;
    }

    return creatures_viewport_clamp_scroll_position(requested_position, page_size);
}

static void creatures_viewport_handle_scroll(CreaturesViewportFollowController *controller,
    int axis, int scroll_code, int track_position, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollEventOps *scrollbar_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops,
    const CreaturesDisplayScrollOps *scroll_ops) {
    int current_position;
    int requested_position;
    int applied_delta;
    int page_size;

    if (controller == NULL || controller->camera == NULL || metrics == NULL ||
        scrollbar_ops == NULL || scrollbar_ops->get_scrollbar_position == NULL ||
        scrollbar_ops->set_scrollbar_position == NULL) {
        return;
    }

    page_size = axis == 0 ? metrics->horizontal_page : metrics->vertical_page;
    current_position = scrollbar_ops->get_scrollbar_position(axis, scrollbar_ops->ctx);
    creatures_viewport_follow_controller_set_mode(controller, 1, invalidation_ops);
    requested_position = creatures_viewport_compute_scroll_position(
        current_position, scroll_code, track_position, page_size);
    if (requested_position == current_position) {
        return;
    }

    if (axis == 0) {
        applied_delta = creatures_display_surface_scroll_horizontally(
            &controller->camera->surface, requested_position - current_position, scroll_ops);
    } else {
        applied_delta = creatures_display_surface_scroll_vertically(
            &controller->camera->surface, requested_position - current_position, scroll_ops);
    }

    scrollbar_ops->set_scrollbar_position(axis, applied_delta + current_position, 1,
        scrollbar_ops->ctx);
}

static void creatures_viewport_invalidate_window(
    const CreaturesViewportInvalidationOps *invalidation_ops) {
    if (invalidation_ops == NULL || invalidation_ops->invalidate_rect == NULL) {
        return;
    }

    invalidation_ops->invalidate_rect(
        invalidation_ops->window_handle, NULL, 0, invalidation_ops->ctx);
}

static int creatures_camera_follow_compute_target_origin(const CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, int *left_out, int *top_out) {
    CreaturesDisplayRect world_bounds;
    CreaturesViewportPoint target_point;
    int horizontal_origin;
    int vertical_origin;
    int vertical_anchor_term;

    if (state == NULL || target == NULL || target->handle == NULL || left_out == NULL ||
        top_out == NULL) {
        return 0;
    }

    world_bounds.left = 0;
    world_bounds.top = 0;
    world_bounds.right = CREATURES_WORLD_WRAP_WIDTH;
    world_bounds.bottom = CREATURES_WORLD_HEIGHT;
    target_point.x = target->world_x;
    target_point.y = target->world_y;
    if (!creatures_point_in_wrapped_rect(&world_bounds, &target_point)) {
        return 0;
    }

    horizontal_origin =
        target->world_x + (state->surface.bounds.left - state->surface.bounds.right) / 2;
    if (horizontal_origin < 0) {
        horizontal_origin += CREATURES_WORLD_WRAP_WIDTH;
    } else if (horizontal_origin > CREATURES_WORLD_WRAP_WIDTH - 1) {
        horizontal_origin -= CREATURES_WORLD_WRAP_WIDTH;
    }

    vertical_anchor_term = (state->surface.bounds.top - state->surface.bounds.bottom) * 5;
    vertical_origin =
        target->world_y + creatures_camera_follow_divide_by_8_toward_zero(vertical_anchor_term);

    *left_out = horizontal_origin;
    *top_out = vertical_origin;
    return 1;
}

static void creatures_camera_follow_move_to_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportRefreshOps *refresh_ops,
    int use_immediate_set_origin) {
    int left;
    int top;

    if (state == NULL) {
        return;
    }

    if (target == NULL || target->handle == NULL) {
        state->last_target_handle = NULL;
        return;
    }

    if (!creatures_camera_follow_compute_target_origin(state, target, &left, &top)) {
        return;
    }

    if (use_immediate_set_origin) {
        creatures_camera_follow_set_origin(state, left, top, refresh_ops);
    } else {
        creatures_camera_follow_seek_origin(state, left, top, refresh_ops);
    }
}

void creatures_viewport_sync_scrollbars(const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollbarOps *ops) {
    if (metrics == NULL || ops == NULL || ops->set_scrollbar_range == NULL ||
        ops->set_scrollbar_position == NULL) {
        return;
    }

    ops->set_scrollbar_range(0, 0, metrics->horizontal_page * 2, 0, ops->ctx);
    ops->set_scrollbar_range(1, 0, metrics->vertical_page * 2, 0, ops->ctx);
    ops->set_scrollbar_position(0, metrics->horizontal_page, 1, ops->ctx);
    ops->set_scrollbar_position(1, metrics->vertical_page, 1, ops->ctx);
}

void creatures_viewport_follow_controller_set_mode(CreaturesViewportFollowController *controller,
    int enabled, const CreaturesViewportInvalidationOps *invalidation_ops) {
    if (controller == NULL || controller->follow_mode == 0) {
        return;
    }

    controller->follow_mode = 1;
    if (enabled == 0) {
        controller->follow_mode = 0;
    }
    if (controller->camera != NULL) {
        creatures_camera_follow_reset_state(controller->camera);
    }
    controller->stable_frame_count = 0;
    creatures_viewport_invalidate_window(invalidation_ops);
}

void creatures_camera_follow_seek_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportRefreshOps *refresh_ops) {
    creatures_camera_follow_move_to_target(state, target, refresh_ops, 0);
}

void creatures_camera_follow_set_target(CreaturesCameraFollowState *state,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportRefreshOps *refresh_ops) {
    creatures_camera_follow_move_to_target(state, target, refresh_ops, 1);
}

void creatures_viewport_handle_horizontal_scroll(CreaturesViewportFollowController *controller,
    int scroll_code, int track_position, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollEventOps *scrollbar_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops,
    const CreaturesDisplayScrollOps *scroll_ops) {
    creatures_viewport_handle_scroll(controller, 0, scroll_code, track_position, metrics,
        scrollbar_ops, invalidation_ops, scroll_ops);
}

void creatures_viewport_handle_vertical_scroll(CreaturesViewportFollowController *controller,
    int scroll_code, int track_position, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesViewportScrollEventOps *scrollbar_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops,
    const CreaturesDisplayScrollOps *scroll_ops) {
    creatures_viewport_handle_scroll(controller, 1, scroll_code, track_position, metrics,
        scrollbar_ops, invalidation_ops, scroll_ops);
}

void creatures_viewport_follow_controller_update(CreaturesViewportFollowController *controller,
    const CreaturesViewportScrollMetrics *metrics, const CreaturesCameraFollowTarget *target,
    void *excluded_target_handle, const CreaturesViewportScrollbarOps *scrollbar_ops,
    const CreaturesDisplayScrollOps *scroll_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops) {
    if (controller == NULL || controller->camera == NULL) {
        return;
    }

    if (creatures_camera_follow_step_pending_motion(controller->camera, scroll_ops) != 0) {
        return;
    }

    if (controller->follow_mode == 1) {
        if (target == NULL || target->handle == NULL ||
            !creatures_display_surface_target_inside_follow_window(
                &controller->camera->surface, target->world_x, target->world_y)) {
            controller->stable_frame_count = 0;
            return;
        }

        controller->stable_frame_count++;
        if (controller->stable_frame_count == 0x14) {
            creatures_viewport_sync_scrollbars(metrics, scrollbar_ops);
            controller->follow_mode = 2;
            creatures_viewport_invalidate_window(invalidation_ops);
        }
        return;
    }

    if (controller->follow_mode != 2) {
        return;
    }

    creatures_camera_follow_track_target(
        controller->camera, target, excluded_target_handle, scroll_ops);
}

void creatures_viewport_follow_controller_force_recenter(
    CreaturesViewportFollowController *controller, const CreaturesViewportScrollMetrics *metrics,
    const CreaturesCameraFollowTarget *target, const CreaturesViewportScrollbarOps *scrollbar_ops,
    const CreaturesViewportRefreshOps *refresh_ops,
    const CreaturesViewportInvalidationOps *invalidation_ops) {
    if (controller != NULL && controller->follow_mode != 0) {
        creatures_viewport_sync_scrollbars(metrics, scrollbar_ops);
        controller->follow_mode = 2;
        if (controller->camera != NULL) {
            creatures_camera_follow_seek_target(controller->camera, target, refresh_ops);
        }
    }

    creatures_viewport_invalidate_window(invalidation_ops);
}
