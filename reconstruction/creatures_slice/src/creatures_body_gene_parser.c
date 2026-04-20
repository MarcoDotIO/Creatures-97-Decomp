#include "creatures_slice.h"

#include <string.h>

static const uint8_t k_creatures_body_slot_frame_counts[CREATURES_BODY_SLOT_COUNT] = {
    0x1a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
};

static const int8_t k_creatures_body_slot_group_targets[5][6] = {
    {0, -1, -1, -1, -1, -1},
    {1, -1, -1, -1, -1, -1},
    {4, 3, 2, 7, 6, 5},
    {9, 8, 11, 10, -1, -1},
    {13, 12, -1, -1, -1, -1},
};

static bool creatures_gene_cursor_has_remaining(const CreaturesGeneCursor *cursor, size_t count) {
    size_t offset;

    if (cursor == NULL || cursor->buffer == NULL || cursor->cursor == NULL) {
        return false;
    }

    offset = (size_t)(cursor->cursor - cursor->buffer);
    return offset + count <= cursor->size;
}

static void creatures_gene_cursor_align_to_word(CreaturesGeneCursor *cursor) {
    size_t offset;
    size_t aligned_offset;

    if (cursor == NULL || cursor->buffer == NULL || cursor->cursor == NULL) {
        return;
    }

    offset = (size_t)(cursor->cursor - cursor->buffer);
    aligned_offset = (offset + 3u) & ~(size_t)3u;
    if (aligned_offset > cursor->size) {
        aligned_offset = cursor->size;
    }
    cursor->cursor = cursor->buffer + aligned_offset;
}

/*
 * Derived from Creatures.exe / FUN_0041b400 (0041b400) and the non-I/O state writes in
 * FUN_0041b520 (0041b520). The original initializes the genome cursor's buffer/cursor pair and
 * stores the active genome token, sex selector, and variant selector used by the record filter.
 */
void creatures_gene_cursor_init(CreaturesGeneCursor *cursor, const uint8_t *buffer, size_t size,
    uint32_t genome_token, int sex, uint8_t variant_selector) {
    if (cursor == NULL) {
        return;
    }

    cursor->buffer = buffer;
    cursor->cursor = buffer;
    cursor->size = size;
    cursor->genome_token = genome_token;
    cursor->sex = sex;
    cursor->variant_selector = variant_selector;
}

/*
 * Derived from Creatures.exe / FUN_0041bd90 (0041bd90).
 * The original resets the active genome cursor back to the beginning of the loaded buffer.
 */
void creatures_gene_cursor_reset(CreaturesGeneCursor *cursor) {
    if (cursor == NULL) {
        return;
    }

    cursor->cursor = cursor->buffer;
}

/*
 * Derived from Creatures.exe / FUN_0041bda0 (0041bda0).
 * The original consumes one byte and clamps it into the requested range by wrapping through a
 * modulo operation when the source byte falls outside the expected interval.
 */
uint8_t creatures_gene_cursor_read_bounded_byte(CreaturesGeneCursor *cursor,
    int min_value, int max_value) {
    uint8_t value;

    if (cursor == NULL || !creatures_gene_cursor_has_remaining(cursor, 1)) {
        return (uint8_t)min_value;
    }

    value = *cursor->cursor++;
    if (min_value <= (int)value && (int)value <= max_value) {
        return value;
    }
    return (uint8_t)(min_value + ((int)value % ((max_value - min_value) + 1)));
}

/*
 * Derived from Creatures.exe / FUN_0041bde0 (0041bde0).
 * The original consumes the next little-endian 32-bit word from the genome cursor.
 */
uint32_t creatures_gene_cursor_read_u32(CreaturesGeneCursor *cursor) {
    uint32_t value;

    if (cursor == NULL || !creatures_gene_cursor_has_remaining(cursor, sizeof(value))) {
        return 0;
    }

    memcpy(&value, cursor->cursor, sizeof(value));
    cursor->cursor += sizeof(value);
    return value;
}

/*
 * Derived from Creatures.exe / FUN_0041bdf0 (0041bdf0).
 * The original scans 32-bit words until it finds the next `gene` marker, skips the remaining
 * three header words, and stops on `gend`.
 */
bool creatures_gene_cursor_next_entry(CreaturesGeneCursor *cursor) {
    uint32_t marker;

    if (cursor == NULL) {
        return false;
    }

    while (creatures_gene_cursor_has_remaining(cursor, sizeof(marker))) {
        marker = creatures_gene_cursor_read_u32(cursor);
        if (marker == CREATURES_GENE_END_MAGIC) {
            return false;
        }
        if (marker == CREATURES_GENE_MAGIC) {
            if (!creatures_gene_cursor_has_remaining(cursor, 3 * sizeof(uint32_t))) {
                return false;
            }
            cursor->cursor += 3 * sizeof(uint32_t);
            return true;
        }
    }
    return false;
}

/*
 * Derived from Creatures.exe / FUN_0041bf20 (0041bf20).
 * The original accepts any selector for modes `1` and higher except mode `2`, which only accepts
 * a zero selector, while mode `0` requires an exact match against the cursor's stored variant
 * selector.
 */
bool creatures_gene_cursor_match_switch_case(const CreaturesGeneCursor *cursor,
    uint8_t selector_value, int selector_mode) {
    if (selector_mode == 0) {
        return cursor != NULL && cursor->variant_selector == selector_value;
    }
    if (selector_mode == 2) {
        return selector_value == 0;
    }
    return true;
}

/*
 * Derived from Creatures.exe / FUN_0041be70 (0041be70).
 * The original iterates to the next gene entry, matches its type/subtype pair, skips the two
 * padding bytes that follow, applies the selector filter, and rejects entries whose sex flags do
 * not admit the current cursor sex.
 */
bool creatures_gene_cursor_seek_record(CreaturesGeneCursor *cursor, uint8_t gene_type,
    uint8_t gene_subtype, int subtype_upper_bound, int selector_mode) {
    uint8_t sex_flags;
    uint8_t selector_value;

    if (cursor == NULL) {
        return false;
    }

    for (;;) {
        if (!creatures_gene_cursor_next_entry(cursor)) {
            return false;
        }
        if (creatures_gene_cursor_read_bounded_byte(cursor, 0, 2) != gene_type) {
            continue;
        }
        if (creatures_gene_cursor_read_bounded_byte(cursor, 0, subtype_upper_bound - 1) !=
            gene_subtype) {
            continue;
        }
        if (!creatures_gene_cursor_has_remaining(cursor, 2)) {
            return false;
        }
        cursor->cursor += 2;
        selector_value = creatures_gene_cursor_read_bounded_byte(cursor, 0, 0xff);
        if (!creatures_gene_cursor_match_switch_case(cursor, selector_value, selector_mode)) {
            continue;
        }
        sex_flags = creatures_gene_cursor_read_bounded_byte(cursor, 0, 0xff);
        if ((sex_flags & 0x18) != 0 &&
            (((sex_flags & 0x08) == 0 || cursor->sex != 1) &&
             ((sex_flags & 0x10) == 0 || cursor->sex != 2))) {
            continue;
        }
        return true;
    }
}

/*
 * Derived from the three genome scans at the start of Creatures.exe / FUN_0040f900 (0040f900).
 * The original extracts the body-variant group base and two 32-bit body gene values from subtype
 * `1`, applies subtype `2` slot overrides through the recovered static slot-group table, tracks
 * whether the extended-slot group appeared, and averages subtype `6` palette entries per channel.
 */
bool creatures_body_assembly_parse_recipe(CreaturesGeneCursor *cursor,
    CreaturesBodyAssemblyRecipe *out_recipe) {
    int palette_counts[3];
    int palette_sums[3];
    uint8_t channel_index;
    bool found_body_record;

    if (cursor == NULL || out_recipe == NULL) {
        return false;
    }

    memset(out_recipe, 0, sizeof(*out_recipe));
    creatures_body_slot_variant_map_reset(out_recipe->slot_variants);
    out_recipe->palette_average[0] = 0x80;
    out_recipe->palette_average[1] = 0x80;
    out_recipe->palette_average[2] = 0x80;

    found_body_record = false;
    creatures_gene_cursor_reset(cursor);
    while (creatures_gene_cursor_seek_record(cursor, 2, 1, 7, 1)) {
        out_recipe->body_variant_group_base =
            creatures_gene_cursor_read_bounded_byte(cursor, 0, 3);
        out_recipe->body_gene_primary_value = creatures_gene_cursor_read_u32(cursor);
        out_recipe->body_gene_secondary_value = creatures_gene_cursor_read_u32(cursor);
        creatures_gene_cursor_align_to_word(cursor);
        found_body_record = true;
    }
    if (!found_body_record) {
        return false;
    }

    creatures_gene_cursor_reset(cursor);
    while (creatures_gene_cursor_seek_record(cursor, 2, 2, 7, 1)) {
        uint8_t slot_group;
        uint8_t variant_value;

        slot_group = creatures_gene_cursor_read_bounded_byte(cursor, 0, 4);
        variant_value = creatures_gene_cursor_read_bounded_byte(cursor, 0, 9);
        creatures_body_slot_variant_map_apply_group(
            slot_group, variant_value, out_recipe->slot_variants);
        if (slot_group == 4) {
            out_recipe->extended_slot_group_count++;
        }
        creatures_gene_cursor_align_to_word(cursor);
    }

    out_recipe->include_extended_slots = out_recipe->extended_slot_group_count != 0;
    out_recipe->active_slot_count = out_recipe->include_extended_slots != 0 ?
        CREATURES_BODY_SLOT_COUNT : CREATURES_BODY_BASE_SLOT_COUNT;
    out_recipe->total_frame_entries =
        creatures_body_total_frame_entry_count(out_recipe->include_extended_slots != 0);

    memset(palette_counts, 0, sizeof(palette_counts));
    memset(palette_sums, 0, sizeof(palette_sums));
    creatures_gene_cursor_reset(cursor);
    while (creatures_gene_cursor_seek_record(cursor, 2, 6, 7, 1)) {
        channel_index = creatures_gene_cursor_read_bounded_byte(cursor, 0, 2);
        palette_sums[channel_index] += creatures_gene_cursor_read_bounded_byte(cursor, 0, 0xff);
        palette_counts[channel_index]++;
    }

    for (channel_index = 0; channel_index < 3; channel_index++) {
        if (palette_counts[channel_index] > 0) {
            out_recipe->palette_average[channel_index] =
                (uint8_t)(palette_sums[channel_index] / palette_counts[channel_index]);
        }
    }
    return true;
}

/*
 * Derived from the static byte table at Creatures.exe / DAT_00436158.
 * The original body assembler uses this table to determine how many frame entries belong to each
 * body slot when building the packed sprite bank.
 */
uint8_t creatures_body_slot_frame_count(uint8_t slot_index) {
    if (slot_index >= CREATURES_BODY_SLOT_COUNT) {
        return 0;
    }
    return k_creatures_body_slot_frame_counts[slot_index];
}

/*
 * Derived from the sprite-count summation in Creatures.exe / FUN_0040f900 (0040f900).
 * The original sums the first 12 body-slot counts by default and includes the final two extended
 * slots only when the extended-body gene group was present.
 */
size_t creatures_body_total_frame_entry_count(int include_extended_slots) {
    size_t count;
    size_t slot_index;
    size_t slot_limit;

    count = 0;
    slot_limit = include_extended_slots != 0 ?
        CREATURES_BODY_SLOT_COUNT : CREATURES_BODY_BASE_SLOT_COUNT;
    for (slot_index = 0; slot_index < slot_limit; slot_index++) {
        count += k_creatures_body_slot_frame_counts[slot_index];
    }
    return count;
}

/*
 * Derived from the variant-map zeroing in Creatures.exe / FUN_0040f900 (0040f900).
 * The original clears the 14-slot variant table before applying group-specific overrides from the
 * genome stream.
 */
void creatures_body_slot_variant_map_reset(uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT]) {
    if (slot_variants == NULL) {
        return;
    }

    memset(slot_variants, 0, CREATURES_BODY_SLOT_COUNT);
}

/*
 * Derived from the static group-target table at Creatures.exe / DAT_004360e0 and its use in
 * FUN_0040f900 (0040f900). The original writes one variant digit into each body slot targeted by
 * the selected gene group and stops at `-1` sentinels.
 */
void creatures_body_slot_variant_map_apply_group(uint8_t slot_group, uint8_t variant,
    uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT]) {
    int target_index;
    int slot_index;

    if (slot_variants == NULL || slot_group >= 5) {
        return;
    }

    for (target_index = 0; target_index < 6; target_index++) {
        slot_index = k_creatures_body_slot_group_targets[slot_group][target_index];
        if (slot_index < 0) {
            break;
        }
        slot_variants[slot_index] = variant;
    }
}
