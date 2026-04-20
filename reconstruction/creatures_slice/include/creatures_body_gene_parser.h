#ifndef CREATURES_BODY_GENE_PARSER_H
#define CREATURES_BODY_GENE_PARSER_H

#include "creatures_common.h"

typedef struct CreaturesGeneCursor {
    const uint8_t *buffer;
    const uint8_t *cursor;
    size_t size;
    uint32_t genome_token;
    int sex;
    uint8_t variant_selector;
} CreaturesGeneCursor;

typedef struct CreaturesBodyAssemblyRecipe {
    uint8_t body_variant_group_base;
    uint32_t body_gene_primary_value;
    uint32_t body_gene_secondary_value;
    uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT];
    uint8_t palette_average[3];
    uint8_t include_extended_slots;
    uint8_t extended_slot_group_count;
    size_t active_slot_count;
    size_t total_frame_entries;
} CreaturesBodyAssemblyRecipe;

void creatures_gene_cursor_init(CreaturesGeneCursor *cursor, const uint8_t *buffer, size_t size,
    uint32_t genome_token, int sex, uint8_t variant_selector);
void creatures_gene_cursor_reset(CreaturesGeneCursor *cursor);
uint8_t creatures_gene_cursor_read_bounded_byte(CreaturesGeneCursor *cursor,
    int min_value, int max_value);
uint32_t creatures_gene_cursor_read_u32(CreaturesGeneCursor *cursor);
bool creatures_gene_cursor_next_entry(CreaturesGeneCursor *cursor);
bool creatures_gene_cursor_match_switch_case(const CreaturesGeneCursor *cursor,
    uint8_t selector_value, int selector_mode);
bool creatures_gene_cursor_seek_record(CreaturesGeneCursor *cursor, uint8_t gene_type,
    uint8_t gene_subtype, int subtype_upper_bound, int selector_mode);

bool creatures_body_assembly_parse_recipe(CreaturesGeneCursor *cursor,
    CreaturesBodyAssemblyRecipe *out_recipe);
uint8_t creatures_body_slot_frame_count(uint8_t slot_index);
size_t creatures_body_total_frame_entry_count(int include_extended_slots);
void creatures_body_slot_variant_map_reset(uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT]);
void creatures_body_slot_variant_map_apply_group(uint8_t slot_group, uint8_t variant,
    uint8_t slot_variants[CREATURES_BODY_SLOT_COUNT]);

#endif
