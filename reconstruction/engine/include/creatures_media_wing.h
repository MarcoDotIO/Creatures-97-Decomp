#ifndef CREATURES_MEDIA_WING_H
#define CREATURES_MEDIA_WING_H

#include "creatures_common.h"

typedef struct CreaturesWingPaletteEntry {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t flags;
} CreaturesWingPaletteEntry;

typedef struct CreaturesWingRgbQuad {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
    uint8_t reserved;
} CreaturesWingRgbQuad;

typedef struct CreaturesWingBitmapInfo {
    uint32_t header_size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bit_count;
    uint32_t compression;
    uint32_t image_size;
    int32_t x_pixels_per_meter;
    int32_t y_pixels_per_meter;
    uint32_t colors_used;
    uint32_t colors_important;
    CreaturesWingRgbQuad colors[256];
} CreaturesWingBitmapInfo;

typedef int (*CreaturesWingGetPaletteEntriesProc)(void *palette_handle, unsigned int start_index,
    unsigned int entry_count, CreaturesWingPaletteEntry *entries_out, void *ctx);
typedef void *(*CreaturesWingCreateBitmapProc)(void *dc, CreaturesWingBitmapInfo *bitmap_info,
    uint8_t **pixels_out, void *ctx);
typedef void *(*CreaturesWingSelectObjectProc)(void *dc, void *object_handle, void *ctx);
typedef int (*CreaturesWingSetColorTableProc)(void *dc, unsigned int start_index,
    unsigned int color_count, const CreaturesWingRgbQuad *colors, void *ctx);
typedef int (*CreaturesWingDeleteObjectProc)(void *object_handle, void *ctx);
typedef int (*CreaturesWingDeleteDcProc)(void *dc, void *ctx);

typedef struct CreaturesWingSurfaceOps {
    CreaturesWingGetPaletteEntriesProc get_palette_entries;
    CreaturesWingCreateBitmapProc create_bitmap;
    CreaturesWingSelectObjectProc select_object;
    CreaturesWingSetColorTableProc set_color_table;
    CreaturesWingDeleteObjectProc delete_object;
    CreaturesWingDeleteDcProc delete_dc;
    void *ctx;
} CreaturesWingSurfaceOps;

typedef struct CreaturesWingSurface {
    void *dc;
    void *palette_handle;
    void *bitmap_handle;
    void *selected_bitmap_before_surface;
    uint8_t *pixels;
    CreaturesWingBitmapInfo bitmap_info;
} CreaturesWingSurface;

void creatures_wing_surface_init(
    CreaturesWingSurface *surface, void *dc, void *palette_handle);
bool creatures_wing_surface_create_8bit_bitmap(
    CreaturesWingSurface *surface, int width, int height, const CreaturesWingSurfaceOps *ops);
void creatures_wing_surface_refresh_palette(
    CreaturesWingSurface *surface, const CreaturesWingSurfaceOps *ops);
void creatures_wing_surface_release(
    CreaturesWingSurface *surface, const CreaturesWingSurfaceOps *ops);

#endif
