#include "creatures_viewport_follow.h"

bool creatures_point_in_wrapped_rect(
    const CreaturesDisplayRect *rect, const CreaturesViewportPoint *point) {
    if (rect == NULL || point == NULL) {
        return false;
    }

    if (rect->right < CREATURES_WORLD_WRAP_WIDTH) {
        return rect->left <= point->x && point->x < rect->right &&
            rect->top <= point->y && point->y < rect->bottom;
    }

    return rect->top <= point->y && point->y < rect->bottom &&
        (point->x < rect->right - CREATURES_WORLD_WRAP_WIDTH || rect->left <= point->x);
}

bool creatures_display_surface_target_inside_follow_window(
    const CreaturesDisplaySurface *surface, int target_x, int target_y) {
    CreaturesDisplayRect follow_window;
    CreaturesViewportPoint target_point;
    int viewport_width;
    int viewport_height;

    if (surface == NULL) {
        return false;
    }

    viewport_width = surface->bounds.right - surface->bounds.left;
    follow_window.left = surface->bounds.left + viewport_width / 8;
    if (follow_window.left > CREATURES_WORLD_WRAP_WIDTH - 1) {
        follow_window.left -= CREATURES_WORLD_WRAP_WIDTH;
    }
    follow_window.right = follow_window.left + (viewport_width * 3) / 4;

    viewport_height = surface->bounds.bottom - surface->bounds.top;
    follow_window.top = surface->bounds.top + (viewport_height * 3) / 8;
    follow_window.bottom = follow_window.top + viewport_height / 2;

    target_point.x = target_x;
    target_point.y = target_y;
    return creatures_point_in_wrapped_rect(&follow_window, &target_point);
}
