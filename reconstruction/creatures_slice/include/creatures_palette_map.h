#ifndef CREATURES_PALETTE_MAP_H
#define CREATURES_PALETTE_MAP_H

#include "creatures_common.h"

void creatures_palette_build_channel_curve(uint8_t curve[256],
    int start, int quarter, int midpoint, int three_quarter, int end);
uint8_t creatures_palette_find_nearest_color(const uint8_t *palette_rgb,
    uint8_t red, uint8_t green, uint8_t blue);
void creatures_palette_build_body_remap(const uint8_t *palette_rgb,
    uint8_t remap[256], uint8_t red, uint8_t green, uint8_t blue);

#endif
