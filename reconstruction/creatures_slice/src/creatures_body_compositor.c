#include "creatures_slice.h"

#include <limits.h>

static CreaturesWrappedRect creatures_world_bounds(void) {
    CreaturesWrappedRect bounds;

    bounds.left = 0;
    bounds.top = 0;
    bounds.right = CREATURES_WORLD_WRAP_WIDTH;
    bounds.bottom = 0x4b0;
    return bounds;
}

/*
 * Derived from Creatures.exe / FUN_0042da20 (0042da20).
 * The original scans a five-int terrain span table, selects the span whose horizontal range
 * contains the requested X coordinate, and keeps the one whose bottom edge is vertically closest
 * to the requested Y coordinate.
 */
bool creatures_boundary_map_find_closest_span(const CreaturesBoundaryMap *map,
    int target_x, int target_y, CreaturesWrappedRect *out_bounds) {
    size_t index;
    int best_distance;
    bool found;

    if (map == NULL || out_bounds == NULL) {
        return false;
    }

    out_bounds->bottom = 9999;
    best_distance = INT_MAX;
    found = false;
    for (index = 0; index < map->span_count; index++) {
        int distance;
        const CreaturesBoundarySpan *span;

        span = &map->spans[index];
        if (target_x < span->left || span->right < target_x) {
            continue;
        }

        distance = target_y - span->bottom;
        if (distance < 0) {
            distance = -distance;
        }
        if (distance >= best_distance) {
            continue;
        }

        out_bounds->left = span->left;
        out_bounds->top = span->top;
        out_bounds->right = span->right;
        out_bounds->bottom = span->bottom;
        best_distance = distance;
        found = true;
    }

    return found;
}

/*
 * Derived from Creatures.exe / FUN_00417f60 (00417f60).
 * The original starts from a cached local rectangle and shifts it into world space by adding the
 * owning sprite's current X/Y position.
 */
void creatures_attached_bounds_resolve_world_rect(const CreaturesAttachedBoundsSource *source,
    CreaturesWrappedRect *out_bounds) {
    if (source == NULL || out_bounds == NULL) {
        return;
    }

    *out_bounds = source->local_bounds;
    if (source->anchor_sprite == NULL) {
        return;
    }

    out_bounds->left += source->anchor_sprite->x;
    out_bounds->right += source->anchor_sprite->x;
    out_bounds->top += source->anchor_sprite->y;
    out_bounds->bottom += source->anchor_sprite->y;
}

/*
 * Derived from Creatures.exe / FUN_00414f10 (00414f10).
 * The original refreshes the compositor's allowed-placement bounds from one of several sources:
 * world bounds, unbounded sentinels, an attached object's cached local bounds, or a peer's
 * previously computed allowed bounds.
 */
bool creatures_body_bounds_refresh_source(CreaturesBodyCompositorRuntime *runtime) {
    CreaturesWrappedRect resolved_bounds;
    bool have_bounds;

    if (runtime == NULL) {
        return false;
    }

    have_bounds = true;
    resolved_bounds = creatures_world_bounds();
    switch (runtime->bounds_source.mode) {
    case CREATURES_BODY_BOUNDS_MODE_DEFAULT:
        if (runtime->bounds_source.use_boundary_map != 0 &&
            runtime->bounds_source.boundary_map != NULL &&
            runtime->bounds_source.read_source_point != NULL) {
            int source_x;
            int source_y;

            source_x = 0;
            source_y = 0;
            have_bounds = runtime->bounds_source.read_source_point(
                runtime->bounds_source.source_ref, &source_x, &source_y,
                runtime->bounds_source.read_source_point_ctx);
            if (have_bounds) {
                have_bounds = creatures_boundary_map_find_closest_span(
                    runtime->bounds_source.boundary_map, source_x, source_y, &resolved_bounds);
            }
        }
        break;
    case CREATURES_BODY_BOUNDS_MODE_UNBOUNDED_A:
    case CREATURES_BODY_BOUNDS_MODE_UNBOUNDED_B:
        resolved_bounds.left = 0;
        resolved_bounds.top = 0;
        resolved_bounds.right = 0x7fff;
        resolved_bounds.bottom = 0x7fff;
        break;
    case CREATURES_BODY_BOUNDS_MODE_ATTACHED_SOURCE:
        have_bounds = runtime->bounds_source.source_ref != NULL;
        if (have_bounds) {
            creatures_attached_bounds_resolve_world_rect(
                (const CreaturesAttachedBoundsSource *)runtime->bounds_source.source_ref,
                &resolved_bounds);
        }
        break;
    case CREATURES_BODY_BOUNDS_MODE_COPY_ALLOWED_BOUNDS:
        have_bounds = runtime->bounds_source.source_ref != NULL;
        if (have_bounds) {
            resolved_bounds =
                *(const CreaturesWrappedRect *)runtime->bounds_source.source_ref;
        }
        break;
    default:
        have_bounds = false;
        break;
    }

    if (runtime->force_world_bounds != 0) {
        resolved_bounds = creatures_world_bounds();
        have_bounds = true;
    }

    runtime->allowed_bounds = resolved_bounds;
    runtime->layout.horizontal_min_x = resolved_bounds.left;
    runtime->layout.horizontal_max_x = resolved_bounds.right;
    runtime->layout.vertical_limit_y = resolved_bounds.bottom;
    return have_bounds;
}

/*
 * Derived from Creatures.exe / FUN_0040f240 (0040f240).
 * The original stores a requested target, performs an eager rebuild, refreshes the allowed bounds
 * source, and then reruns the higher-level posture wrapper against those refreshed bounds.
 */
void creatures_body_layout_set_target_and_refresh(CreaturesBodyCompositorRuntime *runtime,
    int target_x, int target_y) {
    if (runtime == NULL) {
        return;
    }

    runtime->layout.target_x = target_x;
    runtime->layout.target_y = target_y;
    creatures_body_layout_rebuild(&runtime->layout);
    creatures_body_bounds_refresh_source(runtime);
    creatures_body_layout_refresh_posture(&runtime->layout);
}

/*
 * Derived from Creatures.exe / FUN_0040f270 (0040f270).
 * The original translates the root sprite, every appendage chain, the requested target, the
 * cached chain-end coordinates, and both the current and previous wrapped bounds.
 */
void creatures_body_layout_translate(CreaturesBodyCompositorRuntime *runtime,
    int delta_x, int delta_y) {
    int chain_index;
    int previous_left;
    int previous_right;
    int translated_left;
    CreaturesBodyLayoutRuntime *layout;
    CreaturesBodyQuadSprite *sprite;

    if (runtime == NULL || runtime->layout.root_sprite == NULL) {
        return;
    }

    layout = &runtime->layout;
    creatures_body_sprite_set_position(&layout->root_sprite->base,
        layout->root_sprite->base.x + delta_x, layout->root_sprite->base.y + delta_y);
    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        for (sprite = layout->chain_heads[chain_index]; sprite != NULL; sprite = sprite->next) {
            creatures_body_sprite_set_position(&sprite->base,
                sprite->base.x + delta_x, sprite->base.y + delta_y);
        }
    }

    layout->target_x += delta_x;
    layout->target_y += delta_y;
    layout->target_x = creatures_wrap_world_x(layout->target_x);
    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        layout->chain_end_x[chain_index] += delta_x;
        layout->chain_end_x[chain_index] =
            creatures_wrap_world_x(layout->chain_end_x[chain_index]);
        layout->chain_end_y[chain_index] += delta_y;
    }

    layout->previous_bounds = layout->current_bounds;
    previous_left = layout->current_bounds.left;
    previous_right = layout->current_bounds.right;
    translated_left = creatures_wrap_world_x(previous_left + delta_x);
    layout->current_bounds.left = translated_left;
    layout->current_bounds.right = translated_left + (previous_right - previous_left);
    layout->current_bounds.top += delta_y;
    layout->current_bounds.bottom += delta_y;
}

/*
 * Derived from Creatures.exe / FUN_0040f3d0 (0040f3d0).
 * The original snapshots the old wrapped bounds, applies the higher-level posture wrapper at a new
 * target coordinate, and invalidates both the old and new bounds through the compositor surface.
 */
void creatures_body_layout_set_target_and_invalidate(CreaturesBodyCompositorRuntime *runtime,
    int target_x, int target_y) {
    if (runtime == NULL) {
        return;
    }

    runtime->layout.previous_bounds = runtime->layout.current_bounds;
    runtime->layout.target_x = target_x;
    runtime->layout.target_y = target_y;
    creatures_body_layout_refresh_posture(&runtime->layout);
    if (runtime->invalidate_rect != NULL) {
        runtime->invalidate_rect(&runtime->layout.previous_bounds, runtime->invalidate_ctx);
        runtime->invalidate_rect(&runtime->layout.current_bounds, runtime->invalidate_ctx);
    }
}
