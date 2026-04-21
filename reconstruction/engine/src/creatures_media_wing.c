#include "creatures_media_wing.h"

#include <string.h>

void creatures_wing_surface_init(
    CreaturesWingSurface *surface, void *dc, void *palette_handle) {
    if (surface == NULL) {
        return;
    }

    memset(surface, 0, sizeof(*surface));
    surface->dc = dc;
    surface->palette_handle = palette_handle;
    surface->bitmap_info.header_size = 40;
    surface->bitmap_info.planes = 1;
    surface->bitmap_info.bit_count = 8;
    surface->bitmap_info.colors_used = 256;
    surface->bitmap_info.colors_important = 256;
}

void creatures_wing_surface_refresh_palette(
    CreaturesWingSurface *surface, const CreaturesWingSurfaceOps *ops) {
    CreaturesWingPaletteEntry palette_entries[256];
    unsigned int index;

    if (surface == NULL || ops == NULL || ops->get_palette_entries == NULL ||
        ops->set_color_table == NULL || surface->dc == NULL || surface->palette_handle == NULL) {
        return;
    }

    if (ops->get_palette_entries(surface->palette_handle, 0, 256, palette_entries, ops->ctx) !=
        256) {
        return;
    }

    for (index = 0; index < 256; index++) {
        surface->bitmap_info.colors[index].blue = palette_entries[index].blue;
        surface->bitmap_info.colors[index].green = palette_entries[index].green;
        surface->bitmap_info.colors[index].red = palette_entries[index].red;
        surface->bitmap_info.colors[index].reserved = 0;
    }

    ops->set_color_table(surface->dc, 0, 256, surface->bitmap_info.colors, ops->ctx);
}

bool creatures_wing_surface_create_8bit_bitmap(
    CreaturesWingSurface *surface, int width, int height, const CreaturesWingSurfaceOps *ops) {
    void *created_bitmap;
    void *previous_bitmap;

    if (surface == NULL || ops == NULL || ops->get_palette_entries == NULL ||
        ops->create_bitmap == NULL || ops->select_object == NULL || width <= 0 || height <= 0) {
        return false;
    }

    surface->bitmap_info.width = width;
    surface->bitmap_info.height = -height;
    surface->bitmap_info.compression = 0;
    surface->bitmap_info.image_size = 0;
    creatures_wing_surface_refresh_palette(surface, ops);

    created_bitmap =
        ops->create_bitmap(surface->dc, &surface->bitmap_info, &surface->pixels, ops->ctx);
    if (created_bitmap == NULL) {
        surface->bitmap_handle = NULL;
        surface->pixels = NULL;
        return false;
    }

    surface->bitmap_handle = created_bitmap;
    previous_bitmap = ops->select_object(surface->dc, created_bitmap, ops->ctx);
    surface->selected_bitmap_before_surface = previous_bitmap;
    creatures_wing_surface_refresh_palette(surface, ops);
    return true;
}

void creatures_wing_surface_release(
    CreaturesWingSurface *surface, const CreaturesWingSurfaceOps *ops) {
    if (surface == NULL || ops == NULL || surface->dc == NULL || surface->bitmap_handle == NULL ||
        ops->delete_object == NULL || ops->delete_dc == NULL) {
        return;
    }

    if (surface->selected_bitmap_before_surface != NULL && ops->select_object != NULL) {
        ops->select_object(surface->dc, surface->selected_bitmap_before_surface, ops->ctx);
    }

    ops->delete_object(surface->bitmap_handle, ops->ctx);
    ops->delete_dc(surface->dc, ops->ctx);
    surface->bitmap_handle = NULL;
    surface->selected_bitmap_before_surface = NULL;
    surface->dc = NULL;
    surface->pixels = NULL;
}
