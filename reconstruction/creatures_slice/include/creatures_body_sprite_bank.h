#ifndef CREATURES_BODY_SPRITE_BANK_H
#define CREATURES_BODY_SPRITE_BANK_H

#include "creatures_body_gene_parser.h"
#include "creatures_frame_cache.h"
#include "creatures_paths.h"

typedef struct CreaturesBodySpriteBankBuildResult {
    uint32_t slot_tokens[CREATURES_BODY_SLOT_COUNT];
    uint16_t slot_frame_starts[CREATURES_BODY_SLOT_COUNT];
    uint16_t frame_count;
    uint32_t access_serial_counter;
    size_t image_size;
} CreaturesBodySpriteBankBuildResult;

bool creatures_body_sprite_bank_build(const CreaturesBodyAssemblyRecipe *recipe,
    int group_digit_selector, int column_digit_limit,
    const CreaturesPathResolverOps *resolver_ops,
    const CreaturesFrameCacheOps *frame_cache_ops,
    const uint8_t *palette_rgb, uint8_t *image_buffer, size_t image_buffer_size,
    CreaturesBodySpriteBankBuildResult *out_result);

#endif
