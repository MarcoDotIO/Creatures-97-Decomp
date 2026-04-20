#ifndef CREATURES_BODY_COMPOSITOR_H
#define CREATURES_BODY_COMPOSITOR_H

#include "creatures_body_layout.h"

typedef struct CreaturesAttachedBoundsSource {
    CreaturesWrappedRect local_bounds;
    const CreaturesBodySpriteBase *anchor_sprite;
} CreaturesAttachedBoundsSource;

typedef enum CreaturesBodyBoundsMode {
    CREATURES_BODY_BOUNDS_MODE_DEFAULT = 0,
    CREATURES_BODY_BOUNDS_MODE_UNBOUNDED_A = 1,
    CREATURES_BODY_BOUNDS_MODE_UNBOUNDED_B = 2,
    CREATURES_BODY_BOUNDS_MODE_ATTACHED_SOURCE = 3,
    CREATURES_BODY_BOUNDS_MODE_COPY_ALLOWED_BOUNDS = 4,
} CreaturesBodyBoundsMode;

typedef bool (*CreaturesBoundsPointProc)(void *source_ref, int *x_out, int *y_out, void *ctx);
typedef void (*CreaturesInvalidateRectProc)(const CreaturesWrappedRect *bounds, void *ctx);

typedef struct CreaturesBodyBoundsSource {
    CreaturesBodyBoundsMode mode;
    uint8_t use_boundary_map;
    const CreaturesBoundaryMap *boundary_map;
    void *source_ref;
    CreaturesBoundsPointProc read_source_point;
    void *read_source_point_ctx;
} CreaturesBodyBoundsSource;

typedef struct CreaturesBodyCompositorRuntime {
    CreaturesBodyLayoutRuntime layout;
    CreaturesWrappedRect allowed_bounds;
    CreaturesBodyBoundsSource bounds_source;
    uint8_t force_world_bounds;
    CreaturesInvalidateRectProc invalidate_rect;
    void *invalidate_ctx;
} CreaturesBodyCompositorRuntime;

void creatures_attached_bounds_resolve_world_rect(const CreaturesAttachedBoundsSource *source,
    CreaturesWrappedRect *out_bounds);
bool creatures_body_bounds_refresh_source(CreaturesBodyCompositorRuntime *runtime);
void creatures_body_layout_set_target_and_refresh(CreaturesBodyCompositorRuntime *runtime,
    int target_x, int target_y);
void creatures_body_layout_translate(CreaturesBodyCompositorRuntime *runtime,
    int delta_x, int delta_y);
void creatures_body_layout_set_target_and_invalidate(CreaturesBodyCompositorRuntime *runtime,
    int target_x, int target_y);

#endif
