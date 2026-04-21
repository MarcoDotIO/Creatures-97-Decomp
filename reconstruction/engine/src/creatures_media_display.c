#include "creatures_media_display.h"

#include <string.h>

static uint32_t creatures_display_align_width_to_dword(uint32_t width) {
    return (width + 3u) & ~3u;
}

typedef struct CreaturesDisplayVisibleActor {
    void *actor;
    int draw_depth;
} CreaturesDisplayVisibleActor;

static bool creatures_display_intersect_client_rect(CreaturesDisplayRect *out_rect,
    const CreaturesDisplayRect *left_rect, const CreaturesDisplayRect *right_rect) {
    if (out_rect == NULL || left_rect == NULL || right_rect == NULL) {
        return false;
    }

    out_rect->left = left_rect->left > right_rect->left ? left_rect->left : right_rect->left;
    out_rect->top = left_rect->top > right_rect->top ? left_rect->top : right_rect->top;
    out_rect->right = left_rect->right < right_rect->right ? left_rect->right : right_rect->right;
    out_rect->bottom =
        left_rect->bottom < right_rect->bottom ? left_rect->bottom : right_rect->bottom;
    return out_rect->left < out_rect->right && out_rect->top < out_rect->bottom;
}

void creatures_display_surface_init(CreaturesDisplaySurface *surface, void *surface_ctx) {
    if (surface == NULL) {
        return;
    }

    memset(surface, 0, sizeof(*surface));
    surface->surface_ctx = surface_ctx;
}

void creatures_display_surface_bind_owner(CreaturesDisplaySurface *surface, void *owner_handle) {
    if (surface == NULL) {
        return;
    }

    surface->owner_handle = owner_handle;
}

void creatures_display_surface_bind_backbuffer_dc(
    CreaturesDisplaySurface *surface, void *backbuffer_dc) {
    if (surface == NULL) {
        return;
    }

    surface->backbuffer_dc = backbuffer_dc;
}

void creatures_display_surface_bind_palette_target(
    CreaturesDisplaySurface *surface, void *window_handle, void *palette_handle) {
    if (surface == NULL) {
        return;
    }

    surface->window_handle = window_handle;
    surface->palette_handle = palette_handle;
}

void creatures_display_surface_set_focus_bounds(CreaturesDisplaySurface *surface, int enabled,
    const CreaturesDisplayRect *focus_bounds) {
    if (surface == NULL) {
        return;
    }

    surface->draw_focus_bounds = enabled;
    if (focus_bounds != NULL) {
        surface->focus_bounds = *focus_bounds;
    }
}

bool creatures_display_intersect_wrapped_rect(
    CreaturesDisplayRect *left_rect, CreaturesDisplayRect *right_rect) {
    int left_wrapped_right;
    int right_left;
    int right_wrapped_right;

    if (left_rect == NULL || right_rect == NULL) {
        return false;
    }

    if (left_rect->bottom <= right_rect->top || right_rect->bottom <= left_rect->top) {
        return false;
    }

    left_wrapped_right = left_rect->right;
    if (left_wrapped_right < CREATURES_WORLD_WRAP_WIDTH) {
        if (right_rect->right < CREATURES_WORLD_WRAP_WIDTH) {
            if (right_rect->right <= left_rect->left || left_wrapped_right <= right_rect->left) {
                return false;
            }
            if (left_rect->left < right_rect->left) {
                left_rect->left = right_rect->left;
            }
            if (right_rect->right < left_wrapped_right) {
                left_rect->right = right_rect->right;
            }
            goto vertical_clip;
        }
    } else {
        if (right_rect->right >= CREATURES_WORLD_WRAP_WIDTH) {
            if (left_rect->left < right_rect->left) {
                left_rect->left = right_rect->left;
            }
            if (right_rect->right < left_wrapped_right) {
                left_rect->right = right_rect->right;
            }
            goto vertical_clip;
        }

        left_wrapped_right -= CREATURES_WORLD_WRAP_WIDTH;
        if (left_wrapped_right <= right_rect->left && right_rect->right <= left_rect->left) {
            return false;
        }
        if (left_rect->left < right_rect->right) {
            left_rect->right = right_rect->right;
            if (left_rect->left < right_rect->left) {
                left_rect->left = right_rect->left;
            }
        } else {
            left_rect->left = right_rect->left;
            right_left = right_rect->right;
            if (left_wrapped_right <= right_rect->right) {
                right_left = left_wrapped_right;
            }
            left_rect->right = right_left;
        }
        goto vertical_clip;
    }

    right_wrapped_right = right_rect->right - CREATURES_WORLD_WRAP_WIDTH;
    if (right_wrapped_right <= left_rect->left && left_wrapped_right <= right_rect->left) {
        return false;
    }
    if (right_rect->left < left_wrapped_right) {
        right_rect->right = left_wrapped_right;
        if (right_rect->left < left_rect->left) {
            right_rect->left = left_rect->left;
        }
    } else {
        right_rect->left = left_rect->left;
        left_wrapped_right = left_rect->right;
        if (right_wrapped_right <= left_rect->right) {
            left_wrapped_right = right_wrapped_right;
        }
        right_rect->right = left_wrapped_right;
    }

vertical_clip:
    if (left_rect->top < right_rect->top) {
        left_rect->top = right_rect->top;
    }
    if (right_rect->bottom < left_rect->bottom) {
        left_rect->bottom = right_rect->bottom;
    }
    return true;
}

void creatures_display_surface_reset_backbuffer(
    CreaturesDisplaySurface *surface, const CreaturesDisplaySurfaceOps *ops) {
    if (surface == NULL) {
        return;
    }

    if (surface->auxiliary_sprite_resource != NULL && ops != NULL &&
        ops->release_auxiliary_resource != NULL) {
        ops->release_auxiliary_resource(surface->auxiliary_sprite_resource, ops->ctx);
    }

    surface->redraw_enabled = 0;

    if (ops != NULL && ops->release_backbuffer != NULL) {
        ops->release_backbuffer(surface->surface_ctx, ops->ctx);
    }
}

void creatures_display_surface_resize_backbuffer(CreaturesDisplaySurface *surface, uint32_t width,
    int height, const CreaturesDisplaySurfaceOps *ops) {
    uint32_t aligned_width;
    void *replaced_bitmap;
    int unclamped_bottom;

    if (surface == NULL || width == 0 || height == 0) {
        return;
    }

    aligned_width = creatures_display_align_width_to_dword(width);
    replaced_bitmap = NULL;
    if (ops != NULL && ops->create_backbuffer != NULL) {
        replaced_bitmap = ops->create_backbuffer(surface->surface_ctx, aligned_width, height,
            ops->ctx);
    }

    if (replaced_bitmap != NULL && ops != NULL && ops->delete_bitmap != NULL) {
        ops->delete_bitmap(replaced_bitmap, ops->ctx);
    }

    surface->bounds.right = surface->bounds.left + (int)aligned_width;
    unclamped_bottom = surface->bounds.top + height;
    surface->bounds.bottom = unclamped_bottom;
    if (surface->bounds.bottom > CREATURES_WORLD_HEIGHT) {
        surface->bounds.bottom = CREATURES_WORLD_HEIGHT;
        surface->bounds.top = (surface->bounds.top - unclamped_bottom) + CREATURES_WORLD_HEIGHT;
    }
}

unsigned int creatures_display_surface_realize_palette(
    CreaturesDisplaySurface *surface, const CreaturesDisplayPaletteOps *ops) {
    void *dc;
    void *previous_palette;
    unsigned int realized_color_count;

    realized_color_count = 1;
    if (surface == NULL || ops == NULL || surface->window_handle == NULL ||
        surface->palette_handle == NULL) {
        return realized_color_count;
    }

    if (ops->get_dc == NULL || ops->select_palette == NULL || ops->realize_palette == NULL ||
        ops->release_dc == NULL || ops->invalidate_rect == NULL) {
        return realized_color_count;
    }

    dc = ops->get_dc(surface->window_handle, ops->ctx);
    if (dc == NULL) {
        return realized_color_count;
    }

    previous_palette = ops->select_palette(dc, surface->palette_handle, 0, ops->ctx);
    realized_color_count = ops->realize_palette(dc, ops->ctx);
    ops->select_palette(dc, previous_palette, 1, ops->ctx);
    ops->realize_palette(dc, ops->ctx);
    ops->release_dc(surface->window_handle, dc, ops->ctx);
    ops->invalidate_rect(surface->window_handle, NULL, 1, ops->ctx);
    return realized_color_count;
}

void creatures_display_surface_sync_palette_window(CreaturesDisplaySurface *surface,
    void *observed_window_handle, const CreaturesDisplayPaletteOps *ops) {
    if (surface == NULL) {
        return;
    }

    if (surface->window_handle != observed_window_handle) {
        creatures_display_surface_realize_palette(surface, ops);
    }
}

void creatures_display_surface_world_to_client_rect(CreaturesDisplaySurface *surface,
    CreaturesDisplayRect *client_rect, const CreaturesDisplayRect *world_rect) {
    int screen_left;

    if (surface == NULL || client_rect == NULL || world_rect == NULL) {
        return;
    }

    screen_left = world_rect->left - surface->bounds.left;
    if ((surface->bounds.left - surface->bounds.right) + CREATURES_WORLD_WRAP_WIDTH < screen_left) {
        screen_left -= CREATURES_WORLD_WRAP_WIDTH;
    } else if (screen_left <
        (surface->bounds.right - surface->bounds.left) - CREATURES_WORLD_WRAP_WIDTH) {
        screen_left += CREATURES_WORLD_WRAP_WIDTH;
    }

    client_rect->left = screen_left;
    client_rect->top = world_rect->top - surface->bounds.top;
    client_rect->right = (world_rect->right - world_rect->left) + screen_left;
    client_rect->bottom = world_rect->bottom - surface->bounds.top;
}

void creatures_display_surface_scroll(CreaturesDisplaySurface *surface, int *delta_x, int *delta_y,
    const CreaturesDisplayScrollOps *ops) {
    unsigned char redraw_scope_storage[20];
    int wrap_adjust;
    int wrapped_left;
    int clamped_top;

    if (surface == NULL || delta_x == NULL || delta_y == NULL) {
        return;
    }

    wrap_adjust = 0;
    wrapped_left = surface->bounds.left + *delta_x;
    clamped_top = surface->bounds.top + *delta_y;
    if (wrapped_left < 0) {
        wrap_adjust = -1;
        wrapped_left += CREATURES_WORLD_WRAP_WIDTH;
    } else if (wrapped_left > CREATURES_WORLD_WRAP_WIDTH - 1) {
        wrap_adjust = 1;
        wrapped_left -= CREATURES_WORLD_WRAP_WIDTH;
    }

    if (clamped_top < 0) {
        clamped_top = 0;
    } else {
        int max_top;

        max_top = (surface->bounds.top - surface->bounds.bottom) + CREATURES_WORLD_HEIGHT;
        if (max_top < clamped_top) {
            clamped_top = max_top;
        }
    }

    *delta_x = wrapped_left - surface->bounds.left;
    *delta_y = clamped_top - surface->bounds.top;
    if (*delta_x != 0 || *delta_y != 0) {
        surface->bounds.left += *delta_x;
        surface->bounds.top += *delta_y;
        surface->bounds.right += *delta_x;
        surface->bounds.bottom += *delta_y;

        if (ops != NULL) {
            if (ops->get_listener_count != NULL && ops->get_listener != NULL &&
                ops->notify_scroll_listener != NULL) {
                size_t listener_count;
                size_t listener_index;

                listener_count = ops->get_listener_count(ops->ctx);
                for (listener_index = 0; listener_index < listener_count; listener_index++) {
                    void *listener;

                    listener = ops->get_listener(listener_index, ops->ctx);
                    if (listener == NULL) {
                        continue;
                    }
                    if (ops->is_scroll_listener != NULL &&
                        !ops->is_scroll_listener(listener, ops->ctx)) {
                        continue;
                    }
                    ops->notify_scroll_listener(listener, *delta_x, *delta_y, ops->ctx);
                }
            }

            if (ops->refresh_owner != NULL) {
                ops->refresh_owner(surface->owner_handle, ops->ctx);
            }

            if (ops->redraw_ops != NULL) {
                CreaturesDisplayRect redraw_bounds;

                redraw_bounds = surface->bounds;
                creatures_display_surface_redraw_region(
                    surface, redraw_scope_storage, &redraw_bounds, ops->redraw_ops);
            }
        }
    }

    *delta_x += wrap_adjust * CREATURES_WORLD_WRAP_WIDTH;
}

void creatures_display_surface_scroll_by(CreaturesDisplaySurface *surface, int delta_x, int delta_y,
    const CreaturesDisplayScrollOps *ops) {
    if (delta_x == 0 && delta_y == 0) {
        return;
    }

    creatures_display_surface_scroll(surface, &delta_x, &delta_y, ops);
}

int creatures_display_surface_scroll_horizontally(
    CreaturesDisplaySurface *surface, int delta_x, const CreaturesDisplayScrollOps *ops) {
    int delta_y;

    delta_y = 0;
    creatures_display_surface_scroll(surface, &delta_x, &delta_y, ops);
    return delta_x;
}

int creatures_display_surface_scroll_vertically(
    CreaturesDisplaySurface *surface, int delta_y, const CreaturesDisplayScrollOps *ops) {
    int delta_x;

    delta_x = 0;
    creatures_display_surface_scroll(surface, &delta_x, &delta_y, ops);
    return delta_y;
}

void creatures_display_surface_render_scene(CreaturesDisplaySurface *surface,
    const CreaturesDisplayRect *world_bounds, const CreaturesDisplaySceneOps *ops) {
    CreaturesDisplayVisibleActor visible_actors[CREATURES_DISPLAY_MAX_VISIBLE_ACTORS];
    int first_row;
    int last_row;
    int first_column;
    int last_column;
    int row_index;
    int row_world_y;
    size_t actor_count;
    size_t actor_index;
    size_t visible_actor_count;
    void *auxiliary_sprite;

    if (surface == NULL || world_bounds == NULL || ops == NULL) {
        return;
    }

    first_row = world_bounds->top / CREATURES_BACKGROUND_TILE_HEIGHT;
    last_row = (world_bounds->bottom - 1) / CREATURES_BACKGROUND_TILE_HEIGHT;
    row_world_y = first_row * CREATURES_BACKGROUND_TILE_HEIGHT;
    for (row_index = first_row; row_index <= last_row; row_index++) {
        int column_index;

        first_column = world_bounds->left / CREATURES_BACKGROUND_TILE_WIDTH;
        last_column = (world_bounds->right - 1) / CREATURES_BACKGROUND_TILE_WIDTH;
        for (column_index = first_column; column_index <= last_column; column_index++) {
            int wrapped_column;

            if (ops->draw_background_tile == NULL) {
                continue;
            }

            wrapped_column = column_index % CREATURES_BACKGROUND_TILE_COLUMN_COUNT;
            if (wrapped_column < 0) {
                wrapped_column += CREATURES_BACKGROUND_TILE_COLUMN_COUNT;
            }
            ops->draw_background_tile(surface, wrapped_column, row_index,
                wrapped_column * CREATURES_BACKGROUND_TILE_WIDTH, row_world_y, world_bounds,
                &surface->bounds, ops->ctx);
        }

        row_world_y += CREATURES_BACKGROUND_TILE_HEIGHT;
    }

    visible_actor_count = 0;
    actor_count = 0;
    if (ops->get_actor_count != NULL) {
        actor_count = ops->get_actor_count(ops->ctx);
    }
    for (actor_index = 0; actor_index < actor_count; actor_index++) {
        void *actor;
        int draw_depth;

        if (ops->get_actor == NULL || ops->collect_visible_actor == NULL) {
            break;
        }

        actor = ops->get_actor(actor_index, ops->ctx);
        if (actor == NULL) {
            continue;
        }

        if (!ops->collect_visible_actor(actor, world_bounds, &draw_depth, ops->ctx)) {
            continue;
        }
        if (visible_actor_count >= CREATURES_DISPLAY_MAX_VISIBLE_ACTORS) {
            continue;
        }

        visible_actors[visible_actor_count].actor = actor;
        visible_actors[visible_actor_count].draw_depth = draw_depth;
        visible_actor_count++;
    }

    while (visible_actor_count > 0) {
        int frontmost_depth;
        size_t frontmost_index;

        frontmost_depth = 0x7fff;
        frontmost_index = 0;
        for (actor_index = 0; actor_index < visible_actor_count; actor_index++) {
            if (visible_actors[actor_index].draw_depth < frontmost_depth) {
                frontmost_depth = visible_actors[actor_index].draw_depth;
                frontmost_index = actor_index;
            }
        }

        if (frontmost_depth == 0x7fff) {
            break;
        }

        if (ops->draw_actor != NULL) {
            ops->draw_actor(surface, visible_actors[frontmost_index].actor, world_bounds,
                &surface->bounds, ops->ctx);
        }
        visible_actors[frontmost_index].draw_depth = 0x7fff;
    }

    if (surface->auxiliary_sprite_token == 0 || ops->draw_auxiliary_sprite == NULL) {
        return;
    }

    auxiliary_sprite = surface->auxiliary_sprite_resource;
    if (auxiliary_sprite == NULL) {
        if (ops->acquire_auxiliary_sprite == NULL) {
            return;
        }

        auxiliary_sprite = ops->acquire_auxiliary_sprite(surface->auxiliary_sprite_token, ops->ctx);
        surface->auxiliary_sprite_resource = auxiliary_sprite;
        if (auxiliary_sprite == NULL) {
            surface->auxiliary_sprite_token = 0;
            return;
        }
    }

    ops->draw_auxiliary_sprite(surface, auxiliary_sprite, world_bounds, &surface->bounds, ops->ctx);
}

void creatures_display_surface_redraw_region(CreaturesDisplaySurface *surface, void *scratch_context,
    const CreaturesDisplayRect *requested_bounds, const CreaturesDisplayRedrawOps *ops) {
    CreaturesDisplayRect visible_bounds;
    CreaturesDisplayRect requested;
    CreaturesDisplayRedrawState redraw_state;

    if (surface == NULL || requested_bounds == NULL || ops == NULL || ops->execute_redraw == NULL) {
        return;
    }

    if (!surface->redraw_enabled || requested_bounds->left >= requested_bounds->right ||
        requested_bounds->top >= requested_bounds->bottom) {
        return;
    }

    visible_bounds = surface->bounds;
    requested = *requested_bounds;
    if (!creatures_display_intersect_wrapped_rect(&visible_bounds, &requested)) {
        return;
    }

    redraw_state.visible_bounds = visible_bounds;
    redraw_state.viewport_bounds = surface->bounds;
    redraw_state.current_bounds = surface->bounds;
    ops->execute_redraw(surface, scratch_context, &redraw_state, ops->ctx);
}

void creatures_display_surface_prepare_and_redraw_region(
    CreaturesDisplaySurface *surface, const CreaturesDisplayRect *requested_bounds,
    const CreaturesDisplayRedrawOps *ops) {
    unsigned char redraw_scope_storage[20];

    if (surface == NULL || requested_bounds == NULL || ops == NULL || ops->execute_redraw == NULL) {
        return;
    }

    if (!surface->redraw_enabled || requested_bounds->left >= requested_bounds->right ||
        requested_bounds->top >= requested_bounds->bottom) {
        return;
    }

    if (ops->begin_redraw_scope != NULL) {
        ops->begin_redraw_scope(surface->owner_handle, redraw_scope_storage, ops->ctx);
    }

    creatures_display_surface_redraw_region(
        surface, redraw_scope_storage, requested_bounds, ops);

    if (ops->end_redraw_scope != NULL) {
        ops->end_redraw_scope(redraw_scope_storage, ops->ctx);
    }
}

void creatures_display_surface_present_region(CreaturesDisplaySurface *surface, void *scratch_context,
    const CreaturesDisplayRedrawState *state, const CreaturesDisplayPresentOps *ops) {
    CreaturesDisplayRect visible_world_bounds;
    CreaturesDisplayRect client_rect;
    CreaturesDisplayRect focus_client_rect;
    CreaturesDisplayRect clipped_focus_rect;
    void *target_dc;
    void *previous_palette;
    int padding;
    int adjusted_right;

    if (surface == NULL || state == NULL || ops == NULL || ops->resolve_target_dc == NULL ||
        ops->render_scene == NULL || ops->bit_blt == NULL) {
        return;
    }

    visible_world_bounds = state->visible_bounds;
    if (((visible_world_bounds.right - visible_world_bounds.left) & 3) != 0) {
        padding = 4 - ((visible_world_bounds.right - visible_world_bounds.left) & 3);
        visible_world_bounds.right += padding;
        if (state->current_bounds.right < CREATURES_WORLD_WRAP_WIDTH) {
            if (state->current_bounds.right < visible_world_bounds.right) {
                visible_world_bounds.right -= padding;
                visible_world_bounds.left -= padding;
            }
            if (visible_world_bounds.left < state->current_bounds.left) {
                visible_world_bounds.left += padding;
            }
        } else {
            adjusted_right = visible_world_bounds.right;
            if (adjusted_right > CREATURES_WORLD_WRAP_WIDTH - 1) {
                adjusted_right -= CREATURES_WORLD_WRAP_WIDTH;
            }
            if (state->current_bounds.right - CREATURES_WORLD_WRAP_WIDTH < adjusted_right) {
                visible_world_bounds.right -= padding;
                visible_world_bounds.left -= padding;
                if (visible_world_bounds.left < 0) {
                    visible_world_bounds.left += CREATURES_WORLD_WRAP_WIDTH;
                    visible_world_bounds.right += CREATURES_WORLD_WRAP_WIDTH;
                }
            }
            if (state->current_bounds.right - CREATURES_WORLD_WRAP_WIDTH <=
                    visible_world_bounds.left &&
                visible_world_bounds.left < state->current_bounds.left) {
                visible_world_bounds.left += padding;
            }
        }
    }

    ops->render_scene(surface, &visible_world_bounds, ops->ctx);
    creatures_display_surface_world_to_client_rect(surface, &client_rect, &visible_world_bounds);
    target_dc = ops->resolve_target_dc(scratch_context, ops->ctx);
    if (target_dc == NULL) {
        return;
    }

    previous_palette = NULL;
    if (surface->palette_handle != NULL && ops->select_palette != NULL &&
        ops->realize_palette != NULL) {
        previous_palette = ops->select_palette(target_dc, surface->palette_handle, 0, ops->ctx);
        ops->realize_palette(target_dc, ops->ctx);
    }

    ops->bit_blt(target_dc, client_rect.left, client_rect.top,
        client_rect.right - client_rect.left, client_rect.bottom - client_rect.top,
        surface->backbuffer_dc, client_rect.left, client_rect.top, ops->ctx);

    if (surface->draw_focus_bounds && ops->draw_focus_rect != NULL) {
        creatures_display_surface_world_to_client_rect(surface, &focus_client_rect,
            &surface->focus_bounds);
        if (creatures_display_intersect_client_rect(
                &clipped_focus_rect, &focus_client_rect, &client_rect)) {
            ops->draw_focus_rect(target_dc, &clipped_focus_rect, ops->ctx);
        }
    }

    if (ops->flush_gdi != NULL) {
        ops->flush_gdi(ops->ctx);
    }

    if (surface->palette_handle != NULL && ops->select_palette != NULL &&
        ops->realize_palette != NULL) {
        ops->select_palette(target_dc, previous_palette, 0, ops->ctx);
        ops->realize_palette(target_dc, ops->ctx);
    }
}
