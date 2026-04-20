#include "creatures_slice.h"

#include <stddef.h>

static int creatures_divide_truncating(int value, int divisor) {
    int bias_mask;

    bias_mask = divisor - 1;
    return (value + ((value >> 31) & bias_mask)) / divisor;
}

/*
 * Derived from Creatures.exe / FUN_00403fb0 (00403fb0).
 * The original fills four 64-entry curve segments between the requested control points using
 * signed integer accumulators and truncating division.
 */
void creatures_palette_build_channel_curve(uint8_t curve[256],
    int start, int quarter, int midpoint, int three_quarter, int end) {
    int quarter_delta_accumulator;
    int midpoint_delta_accumulator;
    int three_quarter_delta_accumulator;
    int end_delta_accumulator;
    int index;

    if (curve == NULL) {
        return;
    }

    quarter_delta_accumulator = 0;
    midpoint_delta_accumulator = 0;
    three_quarter_delta_accumulator = 0;
    end_delta_accumulator = 0;
    for (index = 0; index < 64; index++) {
        curve[index] = (uint8_t)(start + creatures_divide_truncating(
            quarter_delta_accumulator, 64));
        curve[0x40 + index] = (uint8_t)(quarter + creatures_divide_truncating(
            midpoint_delta_accumulator, 64));
        curve[0x80 + index] = (uint8_t)(midpoint + creatures_divide_truncating(
            three_quarter_delta_accumulator, 64));
        curve[0xc0 + index] = (uint8_t)(three_quarter + creatures_divide_truncating(
            end_delta_accumulator, 64));
        end_delta_accumulator += end - three_quarter;
        three_quarter_delta_accumulator += three_quarter - midpoint;
        midpoint_delta_accumulator += midpoint - quarter;
        quarter_delta_accumulator += quarter - start;
    }
}

/*
 * Derived from Creatures.exe / FUN_00403f40 (00403f40).
 * The original searches the 236-color body palette for the nearest RGB triplet by squared
 * Euclidean distance and returns the zero-based palette slot.
 */
uint8_t creatures_palette_find_nearest_color(const uint8_t *palette_rgb,
    uint8_t red, uint8_t green, uint8_t blue) {
    size_t best_index;
    uint32_t best_distance;
    size_t palette_index;

    if (palette_rgb == NULL) {
        return 0;
    }

    best_index = 0;
    best_distance = UINT32_MAX;
    for (palette_index = 0; palette_index < 0xec; palette_index++) {
        int red_delta;
        int green_delta;
        int blue_delta;
        uint32_t distance;

        red_delta = (int)red - (int)palette_rgb[palette_index * 3];
        green_delta = (int)green - (int)palette_rgb[palette_index * 3 + 1];
        blue_delta = (int)blue - (int)palette_rgb[palette_index * 3 + 2];
        distance = (uint32_t)(red_delta * red_delta + green_delta * green_delta +
            blue_delta * blue_delta);
        if (palette_index == 0 || distance < best_distance) {
            best_index = palette_index;
            best_distance = distance;
        }
    }

    return (uint8_t)best_index;
}

/*
 * Derived from Creatures.exe / FUN_00404090 (00404090).
 * The original builds three 256-entry per-channel remap curves from the requested RGB controls,
 * preserves palette slots `0..9` and `246..255`, and remaps the 236 body-palette colors back onto
 * the nearest existing body-palette entries. A global generation counter is incremented each time.
 */
void creatures_palette_build_body_remap(const uint8_t *palette_rgb,
    uint8_t remap[256], uint8_t red, uint8_t green, uint8_t blue) {
    int control_points[9];
    uint8_t red_curve[256];
    uint8_t green_curve[256];
    uint8_t blue_curve[256];
    uint32_t requested_channels[3];
    size_t channel_index;
    size_t palette_index;

    if (palette_rgb == NULL || remap == NULL) {
        return;
    }

    requested_channels[0] = red;
    requested_channels[1] = green;
    requested_channels[2] = blue;
    for (channel_index = 0; channel_index < 3; channel_index++) {
        int centered_delta;
        int mirrored_delta;

        centered_delta = (int)((requested_channels[channel_index] * 4) - 0x200) * 5;
        mirrored_delta = (int)(requested_channels[channel_index] - 0x80) * 0x20;
        control_points[channel_index * 3] =
            creatures_divide_truncating(centered_delta, 128) + 0x40;
        control_points[channel_index * 3 + 1] =
            creatures_divide_truncating(mirrored_delta, 128) + 0x80;
        control_points[channel_index * 3 + 2] =
            creatures_divide_truncating(centered_delta, 128) + 0xc0;
    }

    creatures_palette_build_channel_curve(red_curve,
        0, control_points[0], control_points[1], control_points[2], 0xff);
    creatures_palette_build_channel_curve(green_curve,
        0, control_points[3], control_points[4], control_points[5], 0xff);
    creatures_palette_build_channel_curve(blue_curve,
        0, control_points[6], control_points[7], control_points[8], 0xff);

    for (palette_index = 0; palette_index < 10; palette_index++) {
        remap[palette_index] = (uint8_t)palette_index;
    }
    for (palette_index = 0xf6; palette_index < 0x100; palette_index++) {
        remap[palette_index] = (uint8_t)palette_index;
    }
    for (palette_index = 0; palette_index < 0xec; palette_index++) {
        uint8_t mapped_red;
        uint8_t mapped_green;
        uint8_t mapped_blue;

        mapped_red = red_curve[palette_rgb[palette_index * 3]];
        mapped_green = green_curve[palette_rgb[palette_index * 3 + 1]];
        mapped_blue = blue_curve[palette_rgb[palette_index * 3 + 2]];
        remap[10 + palette_index] = (uint8_t)(10 +
            creatures_palette_find_nearest_color(palette_rgb, mapped_red, mapped_green, mapped_blue));
    }

    DAT_00435234++;
}
