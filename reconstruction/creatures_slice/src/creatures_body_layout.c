#include "creatures_slice.h"

#include <stddef.h>

static uint8_t creatures_body_pair_anchor_x(
    const CreaturesBodyPairSprite *sprite, int frame_band, int chain_index) {
    return sprite->anchors.left[frame_band][chain_index];
}

static uint8_t creatures_body_pair_anchor_y(
    const CreaturesBodyPairSprite *sprite, int frame_band, int chain_index) {
    return sprite->anchors.right[frame_band][chain_index];
}

static bool creatures_frame_set_bounds(const CreaturesBodySpriteBase *sprite,
    CreaturesWrappedRect *out_bounds) {
    const CreaturesFrameEntry *entry;

    if (sprite == NULL || out_bounds == NULL || sprite->frame_set == NULL ||
        sprite->frame_set->entries == NULL || sprite->current_frame_index >= sprite->frame_set->entry_count) {
        return false;
    }

    entry = &sprite->frame_set->entries[sprite->current_frame_index];
    out_bounds->left = sprite->x;
    out_bounds->top = sprite->y;
    out_bounds->right = sprite->x + entry->width;
    out_bounds->bottom = sprite->y + entry->height;
    return true;
}

/*
 * Derived from Creatures.exe / FUN_0040e700 (0040e700).
 * The original reselects frame bands, places the root body sprite against the requested target,
 * walks each linked appendage chain, merges the resulting wrapped bounds, records the chain-end
 * coordinates, and finally applies a small post-pass frame override to the first chain head.
 */
void creatures_body_layout_rebuild(CreaturesBodyLayoutRuntime *layout) {
    int alignment_chain_index;
    int accumulated_x;
    int accumulated_y;
    int root_frame_band;
    int chain_index;
    CreaturesWrappedRect sprite_bounds;
    CreaturesBodyQuadSprite *sprite;

    if (layout == NULL || layout->root_sprite == NULL) {
        return;
    }

    creatures_body_sprite_select_frame_band(&layout->root_sprite->base, layout->selection_mode);
    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        for (sprite = layout->chain_heads[chain_index]; sprite != NULL; sprite = sprite->next) {
            creatures_body_sprite_select_frame_band(&sprite->base, layout->selection_mode);
        }
    }

    alignment_chain_index = 2 - (layout->facing_variant == 0);
    accumulated_x = 0;
    accumulated_y = 0;
    for (sprite = layout->chain_heads[alignment_chain_index]; sprite != NULL; sprite = sprite->next) {
        accumulated_x = accumulated_x - sprite->anchors.first[sprite->base.frame_table_offset] +
            sprite->anchors.third[sprite->base.frame_table_offset];
        accumulated_y = accumulated_y - sprite->anchors.second[sprite->base.frame_table_offset] +
            sprite->anchors.fourth[sprite->base.frame_table_offset];
    }

    root_frame_band = layout->root_sprite->base.frame_table_offset;
    creatures_body_sprite_set_position(&layout->root_sprite->base,
        layout->target_x -
            (int)creatures_body_pair_anchor_x(layout->root_sprite, root_frame_band,
                alignment_chain_index) -
            accumulated_x,
        layout->target_y -
            (int)creatures_body_pair_anchor_y(layout->root_sprite, root_frame_band,
                alignment_chain_index) -
            accumulated_y);
    if (!creatures_frame_set_bounds(&layout->root_sprite->base, &layout->current_bounds)) {
        layout->current_bounds.left = layout->root_sprite->base.x;
        layout->current_bounds.top = layout->root_sprite->base.y;
        layout->current_bounds.right = layout->root_sprite->base.x;
        layout->current_bounds.bottom = layout->root_sprite->base.y;
    }

    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        int anchor_x;
        int anchor_y;

        anchor_x = layout->root_sprite->base.x +
            (int)creatures_body_pair_anchor_x(layout->root_sprite, root_frame_band, chain_index);
        anchor_y = layout->root_sprite->base.y +
            (int)creatures_body_pair_anchor_y(layout->root_sprite, root_frame_band, chain_index);

        for (sprite = layout->chain_heads[chain_index]; sprite != NULL; sprite = sprite->next) {
            creatures_body_sprite_set_position(&sprite->base,
                anchor_x - (int)sprite->anchors.first[sprite->base.frame_table_offset],
                anchor_y - (int)sprite->anchors.second[sprite->base.frame_table_offset]);
            anchor_x = sprite->base.x + (int)sprite->anchors.third[sprite->base.frame_table_offset];
            anchor_y = sprite->base.y + (int)sprite->anchors.fourth[sprite->base.frame_table_offset];

            if (creatures_frame_set_bounds(&sprite->base, &sprite_bounds)) {
                creatures_merge_wrapped_bounds(
                    &layout->current_bounds, &layout->current_bounds, &sprite_bounds);
            }
        }

        layout->chain_end_x[chain_index] = anchor_x;
        layout->chain_end_y[chain_index] = anchor_y;
    }

    if (layout->chain_heads[0] != NULL) {
        creatures_body_sprite_apply_frame_override(&layout->chain_heads[0]->base,
            layout->selection_mode, layout->frame_override_increment,
            layout->keep_extended_bank);
    }
}

/*
 * Derived from Creatures.exe / FUN_0040e9e0 (0040e9e0).
 * The original flips the facing variant when the alternate layout requires more vertical space
 * than the current limit allows, then rebuilds the layout and emits a `step` event.
 */
bool creatures_body_layout_toggle_facing_if_needed(CreaturesBodyLayoutRuntime *layout) {
    int alternate_variant;

    if (layout == NULL) {
        return false;
    }

    alternate_variant = 1 - layout->facing_variant;
    if (layout->vertical_limit_y >= layout->facing_required_bottom[alternate_variant]) {
        return false;
    }

    layout->target_x = layout->facing_target_x[alternate_variant];
    layout->target_y = layout->vertical_limit_y;
    layout->facing_variant = (uint8_t)alternate_variant;
    creatures_body_layout_rebuild(layout);
    if (layout->notify_event != NULL) {
        layout->notify_event(CREATURES_LAYOUT_EVENT_STEP, 0, layout->notify_ctx);
    }
    return true;
}

/*
 * Derived from Creatures.exe / FUN_0040ea40 (0040ea40).
 * The original attempts to shift the current layout horizontally into the requested interval and
 * falls back to centering when a pure left/right correction would still overflow the interval.
 */
int creatures_body_layout_recenter_horizontally(CreaturesBodyLayoutRuntime *layout) {
    int delta_x;
    int current_left;
    int current_right;

    if (layout == NULL) {
        return 0;
    }

    delta_x = 0;
    current_left = layout->current_bounds.left;
    current_right = layout->current_bounds.right;
    if (layout->horizontal_max_x < current_right) {
        delta_x = layout->horizontal_max_x - current_right;
        layout->horizontal_shift_fits = 1;
        if (layout->horizontal_min_x > current_left + delta_x) {
            layout->horizontal_shift_fits = 0;
            delta_x = (((layout->horizontal_min_x - current_right) - current_left) +
                layout->horizontal_max_x) / 2;
        }
    } else {
        if (layout->horizontal_min_x <= current_left) {
            return 0;
        }

        delta_x = layout->horizontal_min_x - current_left;
        layout->horizontal_shift_fits = 1;
        if (current_right + delta_x > layout->horizontal_max_x) {
            layout->horizontal_shift_fits = 0;
            delta_x = (((layout->horizontal_min_x - current_right) - current_left) +
                layout->horizontal_max_x) / 2;
        }
    }

    if (delta_x != 0) {
        layout->target_x += delta_x;
        creatures_body_layout_rebuild(layout);
    }
    return delta_x;
}

/*
 * Derived from Creatures.exe / FUN_0040eb10 (0040eb10).
 * The original rebuilds the layout, applies the facing-switch heuristic, and then recenters the
 * result horizontally inside the requested interval.
 */
void creatures_body_layout_refresh_posture(CreaturesBodyLayoutRuntime *layout) {
    if (layout == NULL) {
        return;
    }

    creatures_body_layout_rebuild(layout);
    creatures_body_layout_toggle_facing_if_needed(layout);
    creatures_body_layout_recenter_horizontally(layout);
}
