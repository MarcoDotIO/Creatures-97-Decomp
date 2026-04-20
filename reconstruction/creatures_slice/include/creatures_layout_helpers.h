#ifndef CREATURES_LAYOUT_HELPERS_H
#define CREATURES_LAYOUT_HELPERS_H

#include "creatures_body_sprites.h"

typedef struct CreaturesWrappedRect {
    int left;
    int top;
    int right;
    int bottom;
} CreaturesWrappedRect;

typedef struct CreaturesBoundarySpan {
    int left;
    int top;
    int right;
    int bottom;
    int metadata;
} CreaturesBoundarySpan;

typedef struct CreaturesBoundaryMap {
    const CreaturesBoundarySpan *spans;
    size_t span_count;
} CreaturesBoundaryMap;

int creatures_wrap_world_x(int x);
void creatures_body_sprite_set_position(CreaturesBodySpriteBase *sprite, int x, int y);
void creatures_body_sprite_apply_frame_override(CreaturesBodySpriteBase *sprite,
    int selection_mode, int conditional_increment, int keep_extended_bank);
void creatures_merge_wrapped_bounds(CreaturesWrappedRect *out_bounds,
    const CreaturesWrappedRect *left_bounds, const CreaturesWrappedRect *right_bounds);
bool creatures_boundary_map_find_closest_span(const CreaturesBoundaryMap *map,
    int target_x, int target_y, CreaturesWrappedRect *out_bounds);

#endif
