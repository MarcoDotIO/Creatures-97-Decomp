#include "creatures_slice.h"

#include <stddef.h>

static const int8_t k_creatures_body_chain_group_deltas[4][CREATURES_BODY_CHAIN_COUNT] = {
    {3, 1, 1, 1, 1, 1},
    {3, 1, 1, 1, 1, -1},
    {3, -1, 1, -1, 1, 0},
    {3, 1, -1, 1, -1, 0},
};

static const uint8_t k_creatures_body_chain_pose_counts[CREATURES_BODY_CHAIN_COUNT] = {
    1, 3, 3, 2, 2, 2,
};

static const uint8_t k_creatures_body_chain_pose_offsets[CREATURES_BODY_CHAIN_COUNT] = {
    1, 3, 6, 9, 11, 13,
};

/*
 * Derived from Creatures.exe / FUN_0040eac0 (0040eac0).
 * The original uses a small signed delta table keyed by the current selection mode to assign
 * body-slot groups along each appendage chain relative to the root sprite's base group.
 */
void creatures_body_layout_apply_selection_mode(CreaturesBodyLayoutRuntime *layout) {
    const int8_t *group_deltas;
    int group_delta;
    int group_step;
    int root_group;
    int chain_index;
    CreaturesBodyQuadSprite *sprite;

    if (layout == NULL || layout->root_sprite == NULL || layout->selection_mode >= 4) {
        return;
    }

    root_group = layout->root_sprite->base.body_slot_group;
    group_deltas = k_creatures_body_chain_group_deltas[layout->selection_mode];
    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        group_delta = group_deltas[chain_index];
        group_step = 1;
        if (group_delta < 0) {
            group_step = -1;
        }

        for (sprite = layout->chain_heads[chain_index]; sprite != NULL; sprite = sprite->next) {
            sprite->base.body_slot_group = root_group + group_delta;
            group_delta += group_step;
        }
    }
}

/*
 * Derived from Creatures.exe / FUN_0040eb30 (0040eb30).
 * The original applies a 15-character posture string where index `0` selects the body-slot
 * grouping mode, index `2` sets the root pose digit, and the remaining digits are distributed
 * across the six appendage chains using fixed count/offset tables. `X` leaves the current digit
 * unchanged. The routine then rebuilds posture and stores the non-`X` characters back into the
 * runtime pose string.
 */
void creatures_body_layout_apply_pose_string(CreaturesBodyLayoutRuntime *layout,
    const char pose_string[15]) {
    int chain_index;

    if (layout == NULL || pose_string == NULL) {
        return;
    }

    if (pose_string[0] != 'X' && '0' <= pose_string[0] && pose_string[0] <= '3') {
        layout->selection_mode = (uint8_t)(pose_string[0] - '0');
        creatures_body_layout_apply_selection_mode(layout);
    }
    if (layout->root_sprite != NULL && pose_string[2] != 'X' &&
        '0' <= pose_string[2] && pose_string[2] <= '9') {
        layout->root_sprite->base.pose_selector = (uint8_t)(pose_string[2] - '0');
    }

    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        int pose_index;
        CreaturesBodyQuadSprite *sprite;

        sprite = layout->chain_heads[chain_index];
        for (pose_index = 0; pose_index < k_creatures_body_chain_pose_counts[chain_index];
             pose_index++) {
            char pose_digit;

            if (sprite == NULL) {
                break;
            }
            pose_digit = pose_string[k_creatures_body_chain_pose_offsets[chain_index] + pose_index];
            if (pose_digit != 'X' && '0' <= pose_digit && pose_digit <= '9') {
                sprite->base.pose_selector = (uint8_t)(pose_digit - '0');
            }
            sprite = sprite->next;
        }
    }

    creatures_body_layout_refresh_posture(layout);
    for (chain_index = 0; chain_index < 15; chain_index++) {
        if (pose_string[chain_index] != 'X') {
            layout->pose_string[chain_index] = pose_string[chain_index];
        }
    }
}
