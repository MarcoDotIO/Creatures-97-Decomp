#ifndef CREATURES_VIEWPORT_FOLLOW_H
#define CREATURES_VIEWPORT_FOLLOW_H

#include "creatures_media_display.h"

typedef struct CreaturesViewportPoint {
    int x;
    int y;
} CreaturesViewportPoint;

bool creatures_point_in_wrapped_rect(
    const CreaturesDisplayRect *rect, const CreaturesViewportPoint *point);
bool creatures_display_surface_target_inside_follow_window(
    const CreaturesDisplaySurface *surface, int target_x, int target_y);

#endif
