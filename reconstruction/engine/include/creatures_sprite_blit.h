#ifndef CREATURES_SPRITE_BLIT_H
#define CREATURES_SPRITE_BLIT_H

#include "creatures_frame_cache.h"
#include "creatures_media_display.h"

typedef struct CreaturesPixelBuffer8 {
    uint8_t *pixels;
    int stride;
} CreaturesPixelBuffer8;

typedef struct CreaturesRenderableSprite {
    CreaturesFrameSet *frame_set;
    uint8_t frame_index;
    int world_x;
    int world_y;
    int draw_depth;
} CreaturesRenderableSprite;

void creatures_copy_masked_pixels(const uint8_t *source_pixels, int source_x, int source_y,
    int source_stride, uint8_t *target_pixels, int target_x, int target_y, int target_stride,
    int width, int height);
void creatures_copy_opaque_pixels(const uint8_t *source_pixels, int source_x, int source_y,
    int source_stride, uint8_t *target_pixels, int target_x, int target_y, int target_stride,
    int width, int height);
bool creatures_renderable_sprite_collect_visible(const CreaturesRenderableSprite *sprite,
    const CreaturesDisplayRect *clip_bounds, int *draw_depth_out);
void creatures_renderable_sprite_draw(const CreaturesRenderableSprite *sprite,
    const CreaturesPixelBuffer8 *target_buffer, const CreaturesDisplayRect *clip_bounds,
    const CreaturesDisplayRect *viewport_bounds, uint32_t *access_serial_counter,
    int copy_zero_pixels);
void creatures_frame_entry_draw_clipped_to_buffer(const CreaturesFrameEntry *entry,
    const CreaturesPixelBuffer8 *target_buffer, int world_x, int world_y,
    const CreaturesDisplayRect *clip_bounds, const CreaturesDisplayRect *viewport_bounds,
    uint32_t *access_serial_counter, int copy_zero_pixels);

#endif
