#include "creatures_slice.h"

#include <stddef.h>

/*
 * Derived from Creatures.exe / FUN_0040c580 (0040c580).
 * The original performs a linear cache lookup by primary and secondary key, bumps the reference
 * count on a hit, and otherwise constructs a new frame set.
 */
CreaturesFrameSet *creatures_frame_cache_acquire(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new,
    const CreaturesFrameCacheOps *cache_ops) {
    size_t index;

    if (cache_ops == NULL || cache_ops->create_frame_set == NULL) {
        return NULL;
    }

    if (force_new == 0 && cache_ops->entries != NULL) {
        for (index = 0; index < cache_ops->entry_count; index++) {
            CreaturesFrameSet *frame_set;

            frame_set = cache_ops->entries[index];
            if (frame_set == NULL) {
                continue;
            }
            if (frame_set->primary_key != primary_key ||
                frame_set->secondary_key != secondary_key) {
                continue;
            }

            frame_set->ref_count++;
            return frame_set;
        }
    }

    return cache_ops->create_frame_set(
        primary_key, secondary_key, entry_count, force_new, cache_ops->ctx);
}

/*
 * Derived from Creatures.exe / FUN_0040c640 (0040c640).
 * The original decrements the frame-set reference count and destroys the set when it reaches
 * zero.
 */
void creatures_frame_set_release(CreaturesFrameSet *frame_set) {
    int next_ref_count;

    if (frame_set == NULL) {
        return;
    }

    next_ref_count = frame_set->ref_count - 1;
    frame_set->ref_count = next_ref_count;
    if (next_ref_count == 0 && frame_set->destroy != NULL) {
        frame_set->destroy(frame_set, 1, frame_set->destroy_ctx);
    }
}

/*
 * Derived from Creatures.exe / FUN_0040cb50 (0040cb50) and FUN_0040ceb0 (0040ceb0).
 * The original stamps the frame entry with a monotonically increasing access serial, returns the
 * cached pixel buffer when the low two flag bits indicate it is already materialized, and
 * otherwise decodes the buffer on demand.
 */
uint8_t *creatures_frame_entry_pixels(
    CreaturesFrameEntry *entry, uint32_t *access_serial_counter) {
    if (entry == NULL || access_serial_counter == NULL) {
        return NULL;
    }

    *access_serial_counter = *access_serial_counter + 1;
    entry->last_access_serial = *access_serial_counter;
    if ((entry->flags & 3u) != 0) {
        return entry->pixels;
    }
    if (entry->decode_pixels == NULL) {
        return entry->pixels;
    }

    entry->pixels = entry->decode_pixels(entry, entry->decode_ctx);
    if (entry->pixels != NULL) {
        entry->flags = (uint8_t)(entry->flags | 1u);
    }
    return entry->pixels;
}

/*
 * Derived from Creatures.exe / FUN_0040ce80 (0040ce80).
 * The original remaps every pixel in the decoded frame through a 256-byte palette table.
 */
void creatures_frame_entry_apply_palette_map(CreaturesFrameEntry *entry,
    const uint8_t palette_map[256], uint32_t *access_serial_counter) {
    uint8_t *pixels;
    int pixel_count;
    int index;

    if (entry == NULL || palette_map == NULL) {
        return;
    }

    pixels = creatures_frame_entry_pixels(entry, access_serial_counter);
    if (pixels == NULL) {
        return;
    }

    pixel_count = entry->width * entry->height;
    for (index = 0; index < pixel_count; index++) {
        pixels[index] = palette_map[pixels[index]];
    }
}

/*
 * Derived from Creatures.exe / FUN_0040c890 (0040c890).
 * The original walks each packed frame entry in the set and applies the palette remap helper.
 */
void creatures_frame_set_apply_palette_map(CreaturesFrameSet *frame_set,
    const uint8_t palette_map[256], uint32_t *access_serial_counter) {
    int index;

    if (frame_set == NULL || frame_set->entries == NULL || frame_set->entry_count <= 0) {
        return;
    }

    for (index = 0; index < frame_set->entry_count; index++) {
        creatures_frame_entry_apply_palette_map(
            &frame_set->entries[index], palette_map, access_serial_counter);
    }
}
