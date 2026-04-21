#ifndef CREATURES_MEDIA_DISPLAY_H
#define CREATURES_MEDIA_DISPLAY_H

#include "creatures_common.h"

typedef struct CreaturesDisplayRect {
    int left;
    int top;
    int right;
    int bottom;
} CreaturesDisplayRect;

typedef struct CreaturesDisplaySurface CreaturesDisplaySurface;

typedef void (*CreaturesDisplaySurfaceReleaseAuxiliaryProc)(void *resource, void *ctx);
typedef void (*CreaturesDisplaySurfaceReleaseBackbufferProc)(void *surface_ctx, void *ctx);
typedef void *(*CreaturesDisplaySurfaceCreateBackbufferProc)(
    void *surface_ctx, uint32_t width, int height, void *ctx);
typedef int (*CreaturesDisplaySurfaceDeleteBitmapProc)(void *bitmap_handle, void *ctx);
typedef void *(*CreaturesDisplayGetDcProc)(void *window_handle, void *ctx);
typedef void *(*CreaturesDisplaySelectPaletteProc)(
    void *dc, void *palette_handle, int force_background, void *ctx);
typedef unsigned int (*CreaturesDisplayRealizePaletteProc)(void *dc, void *ctx);
typedef int (*CreaturesDisplayReleaseDcProc)(void *window_handle, void *dc, void *ctx);
typedef int (*CreaturesDisplayInvalidateRectProc)(
    void *window_handle, const CreaturesDisplayRect *rect, int erase_background, void *ctx);
typedef void (*CreaturesDisplayBeginRedrawScopeProc)(
    void *owner_handle, void *scratch_context, void *ctx);
typedef void (*CreaturesDisplayEndRedrawScopeProc)(void *scratch_context, void *ctx);
typedef void *(*CreaturesDisplayResolveTargetDcProc)(void *scratch_context, void *ctx);
typedef void (*CreaturesDisplayRenderSceneProc)(
    CreaturesDisplaySurface *surface, const CreaturesDisplayRect *world_bounds, void *ctx);
typedef int (*CreaturesDisplayBitBltProc)(void *target_dc, int dest_x, int dest_y, int width,
    int height, void *source_dc, int source_x, int source_y, void *ctx);
typedef void (*CreaturesDisplayDrawFocusRectProc)(
    void *target_dc, const CreaturesDisplayRect *focus_rect, void *ctx);
typedef void (*CreaturesDisplayFlushGdiProc)(void *ctx);
typedef void (*CreaturesDisplayDrawBackgroundTileProc)(CreaturesDisplaySurface *surface,
    int wrapped_column, int tile_row, int world_x, int world_y,
    const CreaturesDisplayRect *clip_bounds, const CreaturesDisplayRect *viewport_bounds,
    void *ctx);
typedef size_t (*CreaturesDisplayActorCountProc)(void *ctx);
typedef void *(*CreaturesDisplayGetActorProc)(size_t actor_index, void *ctx);
typedef int (*CreaturesDisplayCollectVisibleActorProc)(
    void *actor, const CreaturesDisplayRect *clip_bounds, int *draw_depth_out, void *ctx);
typedef void (*CreaturesDisplayDrawActorProc)(CreaturesDisplaySurface *surface, void *actor,
    const CreaturesDisplayRect *clip_bounds, const CreaturesDisplayRect *viewport_bounds,
    void *ctx);
typedef void *(*CreaturesDisplayAcquireAuxiliarySpriteProc)(uint32_t token, void *ctx);
typedef void (*CreaturesDisplayDrawAuxiliarySpriteProc)(CreaturesDisplaySurface *surface,
    void *auxiliary_sprite, const CreaturesDisplayRect *clip_bounds,
    const CreaturesDisplayRect *viewport_bounds, void *ctx);

typedef struct CreaturesDisplaySurfaceOps {
    CreaturesDisplaySurfaceReleaseAuxiliaryProc release_auxiliary_resource;
    CreaturesDisplaySurfaceReleaseBackbufferProc release_backbuffer;
    CreaturesDisplaySurfaceCreateBackbufferProc create_backbuffer;
    CreaturesDisplaySurfaceDeleteBitmapProc delete_bitmap;
    void *ctx;
} CreaturesDisplaySurfaceOps;

typedef struct CreaturesDisplayPaletteOps {
    CreaturesDisplayGetDcProc get_dc;
    CreaturesDisplaySelectPaletteProc select_palette;
    CreaturesDisplayRealizePaletteProc realize_palette;
    CreaturesDisplayReleaseDcProc release_dc;
    CreaturesDisplayInvalidateRectProc invalidate_rect;
    void *ctx;
} CreaturesDisplayPaletteOps;

typedef struct CreaturesDisplayRedrawState {
    CreaturesDisplayRect visible_bounds;
    CreaturesDisplayRect viewport_bounds;
    CreaturesDisplayRect current_bounds;
} CreaturesDisplayRedrawState;

typedef void (*CreaturesDisplayExecuteRedrawProc)(CreaturesDisplaySurface *surface,
    void *scratch_context, const CreaturesDisplayRedrawState *state, void *ctx);

typedef struct CreaturesDisplayRedrawOps {
    CreaturesDisplayBeginRedrawScopeProc begin_redraw_scope;
    CreaturesDisplayEndRedrawScopeProc end_redraw_scope;
    CreaturesDisplayExecuteRedrawProc execute_redraw;
    void *ctx;
} CreaturesDisplayRedrawOps;

typedef struct CreaturesDisplayPresentOps {
    CreaturesDisplayResolveTargetDcProc resolve_target_dc;
    CreaturesDisplayRenderSceneProc render_scene;
    CreaturesDisplaySelectPaletteProc select_palette;
    CreaturesDisplayRealizePaletteProc realize_palette;
    CreaturesDisplayBitBltProc bit_blt;
    CreaturesDisplayDrawFocusRectProc draw_focus_rect;
    CreaturesDisplayFlushGdiProc flush_gdi;
    void *ctx;
} CreaturesDisplayPresentOps;

typedef struct CreaturesDisplaySceneOps {
    CreaturesDisplayDrawBackgroundTileProc draw_background_tile;
    CreaturesDisplayActorCountProc get_actor_count;
    CreaturesDisplayGetActorProc get_actor;
    CreaturesDisplayCollectVisibleActorProc collect_visible_actor;
    CreaturesDisplayDrawActorProc draw_actor;
    CreaturesDisplayAcquireAuxiliarySpriteProc acquire_auxiliary_sprite;
    CreaturesDisplayDrawAuxiliarySpriteProc draw_auxiliary_sprite;
    void *ctx;
} CreaturesDisplaySceneOps;

typedef size_t (*CreaturesDisplayListenerCountProc)(void *ctx);
typedef void *(*CreaturesDisplayGetListenerProc)(size_t listener_index, void *ctx);
typedef int (*CreaturesDisplayIsScrollListenerProc)(void *listener, void *ctx);
typedef void (*CreaturesDisplayNotifyScrollListenerProc)(
    void *listener, int delta_x, int delta_y, void *ctx);
typedef void (*CreaturesDisplayRefreshOwnerProc)(void *owner_handle, void *ctx);

typedef struct CreaturesDisplayScrollOps {
    CreaturesDisplayListenerCountProc get_listener_count;
    CreaturesDisplayGetListenerProc get_listener;
    CreaturesDisplayIsScrollListenerProc is_scroll_listener;
    CreaturesDisplayNotifyScrollListenerProc notify_scroll_listener;
    CreaturesDisplayRefreshOwnerProc refresh_owner;
    const CreaturesDisplayRedrawOps *redraw_ops;
    void *ctx;
} CreaturesDisplayScrollOps;

struct CreaturesDisplaySurface {
    CreaturesDisplayRect bounds;
    CreaturesDisplayRect focus_bounds;
    int redraw_enabled;
    int draw_focus_bounds;
    uint32_t auxiliary_sprite_token;
    void *auxiliary_sprite_resource;
    void *surface_ctx;
    void *backbuffer_dc;
    void *owner_handle;
    void *window_handle;
    void *palette_handle;
};

void creatures_display_surface_init(CreaturesDisplaySurface *surface, void *surface_ctx);
void creatures_display_surface_bind_owner(CreaturesDisplaySurface *surface, void *owner_handle);
void creatures_display_surface_bind_palette_target(
    CreaturesDisplaySurface *surface, void *window_handle, void *palette_handle);
void creatures_display_surface_bind_backbuffer_dc(
    CreaturesDisplaySurface *surface, void *backbuffer_dc);
void creatures_display_surface_set_focus_bounds(CreaturesDisplaySurface *surface, int enabled,
    const CreaturesDisplayRect *focus_bounds);
bool creatures_display_intersect_wrapped_rect(
    CreaturesDisplayRect *left_rect, CreaturesDisplayRect *right_rect);
void creatures_display_surface_reset_backbuffer(
    CreaturesDisplaySurface *surface, const CreaturesDisplaySurfaceOps *ops);
void creatures_display_surface_resize_backbuffer(CreaturesDisplaySurface *surface, uint32_t width,
    int height, const CreaturesDisplaySurfaceOps *ops);
unsigned int creatures_display_surface_realize_palette(
    CreaturesDisplaySurface *surface, const CreaturesDisplayPaletteOps *ops);
void creatures_display_surface_sync_palette_window(CreaturesDisplaySurface *surface,
    void *observed_window_handle, const CreaturesDisplayPaletteOps *ops);
void creatures_display_surface_redraw_region(CreaturesDisplaySurface *surface, void *scratch_context,
    const CreaturesDisplayRect *requested_bounds, const CreaturesDisplayRedrawOps *ops);
void creatures_display_surface_prepare_and_redraw_region(
    CreaturesDisplaySurface *surface, const CreaturesDisplayRect *requested_bounds,
    const CreaturesDisplayRedrawOps *ops);
void creatures_display_surface_world_to_client_rect(CreaturesDisplaySurface *surface,
    CreaturesDisplayRect *client_rect, const CreaturesDisplayRect *world_rect);
void creatures_display_surface_scroll(CreaturesDisplaySurface *surface, int *delta_x, int *delta_y,
    const CreaturesDisplayScrollOps *ops);
void creatures_display_surface_scroll_by(CreaturesDisplaySurface *surface, int delta_x, int delta_y,
    const CreaturesDisplayScrollOps *ops);
int creatures_display_surface_scroll_horizontally(
    CreaturesDisplaySurface *surface, int delta_x, const CreaturesDisplayScrollOps *ops);
int creatures_display_surface_scroll_vertically(
    CreaturesDisplaySurface *surface, int delta_y, const CreaturesDisplayScrollOps *ops);
void creatures_display_surface_render_scene(CreaturesDisplaySurface *surface,
    const CreaturesDisplayRect *world_bounds, const CreaturesDisplaySceneOps *ops);
void creatures_display_surface_present_region(CreaturesDisplaySurface *surface, void *scratch_context,
    const CreaturesDisplayRedrawState *state, const CreaturesDisplayPresentOps *ops);

#endif
