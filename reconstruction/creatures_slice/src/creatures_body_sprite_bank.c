#include "creatures_slice.h"

#include <limits.h>
#include <stddef.h>
#include <string.h>

static const char k_creatures_body_sprite_suffix[4] = "SPR";
static const char k_creatures_body_directory_prefix[] = "Body data\\";

/*
 * Derived from the temporary `SPR` bank build loop in Creatures.exe / FUN_0040f900 (0040f900).
 * The original walks the active body slots, resolves the best-matching slot `SPR` token, loads
 * that frame bank through the normal cache path, remaps its pixels through the generated palette,
 * and appends the resulting frames into a temporary packed `SPR` image.
 */
bool creatures_body_sprite_bank_build(const CreaturesBodyAssemblyRecipe *recipe,
    int group_digit_selector, int column_digit_limit,
    const CreaturesPathResolverOps *resolver_ops,
    const CreaturesFrameCacheOps *frame_cache_ops,
    const uint8_t *palette_rgb, uint8_t *image_buffer, size_t image_buffer_size,
    CreaturesBodySpriteBankBuildResult *out_result) {
    CreaturesSpriteFileWriter writer;
    uint8_t palette_map[256];
    uint16_t frame_cursor;
    size_t slot_index;

    if (recipe == NULL || resolver_ops == NULL || frame_cache_ops == NULL || palette_rgb == NULL ||
        image_buffer == NULL || out_result == NULL || recipe->active_slot_count > CREATURES_BODY_SLOT_COUNT ||
        recipe->total_frame_entries > UINT16_MAX) {
        return false;
    }

    creatures_palette_build_body_remap(palette_rgb, palette_map,
        recipe->palette_average[0], recipe->palette_average[1], recipe->palette_average[2]);
    if (!creatures_sprite_file_writer_init(&writer, (uint16_t)recipe->total_frame_entries,
            image_buffer, image_buffer_size)) {
        return false;
    }

    memset(out_result, 0, sizeof(*out_result));
    memset(out_result->slot_frame_starts, 0xff, sizeof(out_result->slot_frame_starts));
    frame_cursor = 0;
    for (slot_index = 0; slot_index < recipe->active_slot_count; slot_index++) {
        char resolved_path[REMOVE_MAX_PATH];
        CreaturesFrameSet *frame_set;
        uint32_t token;
        uint8_t slot_frame_count;
        int frame_index;

        slot_frame_count = creatures_body_slot_frame_count((uint8_t)slot_index);
        if ((size_t)frame_cursor + slot_frame_count > recipe->total_frame_entries) {
            return false;
        }

        out_result->slot_frame_starts[slot_index] = frame_cursor;
        token = creatures_body_data_find_existing_variant_token((int)slot_index,
            recipe->body_variant_group_base, group_digit_selector, column_digit_limit,
            recipe->slot_variants[slot_index], k_creatures_body_sprite_suffix,
            k_creatures_body_directory_prefix, resolver_ops, resolved_path, sizeof(resolved_path));
        if (token == 0) {
            return false;
        }

        out_result->slot_tokens[slot_index] = token;
        frame_set = creatures_frame_cache_acquire(token, 0, slot_frame_count, 0, frame_cache_ops);
        if (frame_set == NULL || frame_set->entries == NULL || frame_set->entry_count != slot_frame_count) {
            if (frame_set != NULL) {
                creatures_frame_set_release(frame_set);
            }
            return false;
        }

        creatures_frame_set_apply_palette_map(frame_set, palette_map, &out_result->access_serial_counter);
        for (frame_index = 0; frame_index < frame_set->entry_count; frame_index++) {
            CreaturesFrameEntry *entry;
            uint8_t *pixels;
            size_t pixel_count;

            entry = &frame_set->entries[frame_index];
            pixel_count = (size_t)entry->width * (size_t)entry->height;
            pixels = creatures_frame_entry_pixels(entry, &out_result->access_serial_counter);
            if (pixels == NULL ||
                !creatures_sprite_file_writer_append_frame(&writer, frame_cursor,
                    (uint16_t)entry->width, (uint16_t)entry->height, pixels, pixel_count)) {
                creatures_frame_set_release(frame_set);
                return false;
            }
            frame_cursor++;
        }
        creatures_frame_set_release(frame_set);
    }

    if (frame_cursor != recipe->total_frame_entries) {
        return false;
    }

    creatures_sprite_file_writer_finalize(&writer);
    out_result->frame_count = frame_cursor;
    out_result->image_size = writer.payload_write_offset;
    return true;
}
