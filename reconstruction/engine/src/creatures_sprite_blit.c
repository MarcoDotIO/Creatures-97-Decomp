#include "creatures_sprite_blit.h"

#include <string.h>

static int creatures_sprite_blit_adjust_wrapped_x(int world_x, int clip_left) {
    int relative_x;

    relative_x = world_x - clip_left;
    if (relative_x < 0x1051) {
        if (relative_x < -0x1050) {
            relative_x += CREATURES_WORLD_WRAP_WIDTH;
        }
    } else {
        relative_x -= CREATURES_WORLD_WRAP_WIDTH;
    }
    return relative_x;
}

static const CreaturesFrameEntry *creatures_renderable_sprite_current_frame(
    const CreaturesRenderableSprite *sprite) {
    if (sprite == NULL || sprite->frame_set == NULL || sprite->frame_set->entries == NULL ||
        sprite->frame_index >= sprite->frame_set->entry_count) {
        return NULL;
    }

    return &sprite->frame_set->entries[sprite->frame_index];
}

void creatures_copy_masked_pixels(const uint8_t *source_pixels, int source_x, int source_y,
    int source_stride, uint8_t *target_pixels, int target_x, int target_y, int target_stride,
    int width, int height) {
    const uint8_t *source_row;
    uint8_t *target_row;
    int row_index;

    source_row = source_pixels + source_y * source_stride + source_x;
    target_row = target_pixels + target_y * target_stride + target_x;
    for (row_index = 0; row_index < height; row_index++) {
        const uint8_t *source_cursor;
        uint8_t *target_cursor;
        int column_index;

        source_cursor = source_row;
        target_cursor = target_row;
        for (column_index = 0; column_index < width; column_index++) {
            if (*source_cursor != 0) {
                *target_cursor = *source_cursor;
            }
            source_cursor++;
            target_cursor++;
        }

        source_row += source_stride;
        target_row += target_stride;
    }
}

void creatures_copy_opaque_pixels(const uint8_t *source_pixels, int source_x, int source_y,
    int source_stride, uint8_t *target_pixels, int target_x, int target_y, int target_stride,
    int width, int height) {
    const uint8_t *source_row;
    uint8_t *target_row;
    int row_index;

    source_row = source_pixels + source_y * source_stride + source_x;
    target_row = target_pixels + target_y * target_stride + target_x;
    for (row_index = 0; row_index < height; row_index++) {
        /* The original switches between 32-bit, 16-bit, and byte copies based on width. */
        if ((width & 3) == 0) {
            const uint32_t *source_words;
            uint32_t *target_words;
            int word_index;

            source_words = (const uint32_t *)source_row;
            target_words = (uint32_t *)target_row;
            for (word_index = 0; word_index < width / 4; word_index++) {
                target_words[word_index] = source_words[word_index];
            }
        } else if ((width & 1) == 0) {
            const uint16_t *source_words;
            uint16_t *target_words;
            int word_index;

            source_words = (const uint16_t *)source_row;
            target_words = (uint16_t *)target_row;
            for (word_index = 0; word_index < width / 2; word_index++) {
                target_words[word_index] = source_words[word_index];
            }
        } else {
            memcpy(target_row, source_row, (size_t)width);
        }

        source_row += source_stride;
        target_row += target_stride;
    }
}

bool creatures_renderable_sprite_collect_visible(const CreaturesRenderableSprite *sprite,
    const CreaturesDisplayRect *clip_bounds, int *draw_depth_out) {
    const CreaturesFrameEntry *frame_entry;
    int relative_x;

    if (clip_bounds == NULL || draw_depth_out == NULL) {
        return false;
    }

    frame_entry = creatures_renderable_sprite_current_frame(sprite);
    if (frame_entry == NULL) {
        return false;
    }

    relative_x = creatures_sprite_blit_adjust_wrapped_x(sprite->world_x, clip_bounds->left);
    if (relative_x > clip_bounds->right - clip_bounds->left ||
        sprite->world_y > clip_bounds->bottom ||
        frame_entry->width + relative_x <= 0 ||
        clip_bounds->top > frame_entry->height + sprite->world_y) {
        return false;
    }

    *draw_depth_out = sprite->draw_depth;
    return true;
}

void creatures_frame_entry_draw_clipped_to_buffer(const CreaturesFrameEntry *entry,
    const CreaturesPixelBuffer8 *target_buffer, int world_x, int world_y,
    const CreaturesDisplayRect *clip_bounds, const CreaturesDisplayRect *viewport_bounds,
    uint32_t *access_serial_counter, int copy_zero_pixels) {
    CreaturesFrameEntry *mutable_entry;
    uint8_t *source_pixels;
    int source_x;
    int source_y;
    int source_right_index;
    int source_bottom_index;
    int dest_right;
    int dest_bottom;
    int max_clip_x;
    int max_clip_y;
    int target_x;
    int target_y;
    int width;
    int height;

    if (entry == NULL || target_buffer == NULL || target_buffer->pixels == NULL ||
        clip_bounds == NULL || viewport_bounds == NULL || access_serial_counter == NULL) {
        return;
    }

    mutable_entry = (CreaturesFrameEntry *)entry;
    source_pixels = creatures_frame_entry_pixels(mutable_entry, access_serial_counter);
    if (source_pixels == NULL) {
        return;
    }

    source_x = 0;
    source_y = 0;
    target_x = creatures_sprite_blit_adjust_wrapped_x(world_x, clip_bounds->left);
    target_y = world_y - clip_bounds->top;
    source_right_index = entry->width - 1;
    source_bottom_index = entry->height - 1;
    dest_right = source_right_index + target_x;
    dest_bottom = source_bottom_index + target_y;
    max_clip_x = (clip_bounds->right - clip_bounds->left) - 1;
    max_clip_y = (clip_bounds->bottom - clip_bounds->top) - 1;

    if (target_x > max_clip_x || target_y > max_clip_y || dest_right < 0 || dest_bottom < 0) {
        return;
    }

    if (target_x < 0) {
        source_x = -target_x;
        target_x = 0;
    }
    if (target_y < 0) {
        source_y = -target_y;
        target_y = 0;
    }
    if (dest_right > max_clip_x) {
        source_right_index = (source_right_index - dest_right) + max_clip_x;
    }
    if (dest_bottom > max_clip_y) {
        source_bottom_index = (source_bottom_index - dest_bottom) + max_clip_y;
    }

    target_x = (target_x - viewport_bounds->left) + clip_bounds->left;
    target_y = (target_y - viewport_bounds->top) + clip_bounds->top;
    if (target_x < 0) {
        target_x += CREATURES_WORLD_WRAP_WIDTH;
    }

    width = (source_right_index - source_x) + 1;
    height = (source_bottom_index - source_y) + 1;
    if (width <= 0 || height <= 0) {
        return;
    }

    if (copy_zero_pixels != 0) {
        creatures_copy_opaque_pixels(source_pixels, source_x, source_y, entry->width,
            target_buffer->pixels, target_x, target_y, target_buffer->stride, width, height);
        return;
    }

    creatures_copy_masked_pixels(source_pixels, source_x, source_y, entry->width,
        target_buffer->pixels, target_x, target_y, target_buffer->stride, width, height);
}

void creatures_renderable_sprite_draw(const CreaturesRenderableSprite *sprite,
    const CreaturesPixelBuffer8 *target_buffer, const CreaturesDisplayRect *clip_bounds,
    const CreaturesDisplayRect *viewport_bounds, uint32_t *access_serial_counter,
    int copy_zero_pixels) {
    const CreaturesFrameEntry *frame_entry;

    frame_entry = creatures_renderable_sprite_current_frame(sprite);
    if (frame_entry == NULL) {
        return;
    }

    creatures_frame_entry_draw_clipped_to_buffer(frame_entry, target_buffer, sprite->world_x,
        sprite->world_y, clip_bounds, viewport_bounds, access_serial_counter, copy_zero_pixels);
}
