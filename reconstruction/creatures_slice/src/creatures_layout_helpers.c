#include "creatures_slice.h"

/*
 * Derived from Creatures.exe / FUN_0040b1b0 (0040b1b0).
 * The original keeps X coordinates inside the wrapped world-width interval by adding or
 * subtracting one world width when the coordinate leaves the primary span.
 */
int creatures_wrap_world_x(int x) {
    if (x > CREATURES_WORLD_WRAP_WIDTH - 1) {
        return x - CREATURES_WORLD_WRAP_WIDTH;
    }
    if (x < 0) {
        return x + CREATURES_WORLD_WRAP_WIDTH;
    }
    return x;
}

/*
 * Derived from Creatures.exe / FUN_0041a310 (0041a310).
 * The original normalizes the sprite's X position against the wrapped world width and stores the
 * resulting X/Y pair on the runtime sprite object.
 */
void creatures_body_sprite_set_position(CreaturesBodySpriteBase *sprite, int x, int y) {
    if (sprite == NULL) {
        return;
    }

    sprite->x = creatures_wrap_world_x(x);
    sprite->y = y;
}

/*
 * Derived from Creatures.exe / FUN_0041a9f0 (0041a9f0).
 * The original applies a small conditional frame override on top of the sprite's selected frame
 * band, then optionally jumps into the extended frame bank.
 */
void creatures_body_sprite_apply_frame_override(CreaturesBodySpriteBase *sprite,
    int selection_mode, int conditional_increment, int keep_extended_bank) {
    int extra_offset;

    if (sprite == NULL) {
        return;
    }

    extra_offset = 0;
    if (conditional_increment != 0 &&
        (selection_mode == 1 || sprite->body_slot_group == 4)) {
        extra_offset = conditional_increment + 1;
    }
    if (keep_extended_bank == 0) {
        extra_offset += 13;
    }

    sprite->current_frame_index =
        (uint8_t)(sprite->pose_selector + sprite->frame_table_offset + extra_offset);
}

/*
 * Derived from Creatures.exe / FUN_0040b450 (0040b450).
 * The original merges two rectangles while accounting for Creatures' wrapped horizontal world
 * space, preserving the smaller top, larger bottom, and a horizontal span that can cross the wrap
 * boundary.
 */
void creatures_merge_wrapped_bounds(CreaturesWrappedRect *out_bounds,
    const CreaturesWrappedRect *left_bounds, const CreaturesWrappedRect *right_bounds) {
    int merged_left;
    int merged_top;
    int merged_right;
    int merged_bottom;
    int left_left;
    int left_right;
    int candidate_left;
    int candidate_right;

    if (out_bounds == NULL || left_bounds == NULL || right_bounds == NULL) {
        return;
    }

    merged_left = left_bounds->left;
    merged_top = left_bounds->top;
    merged_right = left_bounds->right;
    merged_bottom = left_bounds->bottom;

    if (right_bounds->top < left_bounds->top) {
        merged_top = right_bounds->top;
    }
    if (left_bounds->bottom < right_bounds->bottom) {
        merged_bottom = right_bounds->bottom;
    }

    left_left = left_bounds->left;
    left_right = left_bounds->right;
    candidate_left = left_left;
    if (left_right < CREATURES_WORLD_WRAP_WIDTH) {
        if (right_bounds->right < CREATURES_WORLD_WRAP_WIDTH) {
            if (right_bounds->left < merged_left) {
                candidate_left = right_bounds->left;
            }
            candidate_right = right_bounds->right;
        } else {
            if (right_bounds->left < left_right) {
                candidate_right = right_bounds->right;
                if (right_bounds->left < merged_left) {
                    merged_left = right_bounds->left;
                }
                out_bounds->left = merged_left;
                out_bounds->top = merged_top;
                out_bounds->right = candidate_right;
                out_bounds->bottom = merged_bottom;
                return;
            }

            candidate_right = right_bounds->right;
            if (right_bounds->right <= left_right + CREATURES_WORLD_WRAP_WIDTH) {
                candidate_right = left_right + CREATURES_WORLD_WRAP_WIDTH;
            }
        }
    } else if (right_bounds->right < CREATURES_WORLD_WRAP_WIDTH) {
        if (left_left < right_bounds->right) {
            if (right_bounds->left < merged_left) {
                merged_left = right_bounds->left;
            }
            out_bounds->left = merged_left;
            out_bounds->top = merged_top;
            out_bounds->right = merged_right;
            out_bounds->bottom = merged_bottom;
            return;
        }
        candidate_right = right_bounds->right + CREATURES_WORLD_WRAP_WIDTH;
    } else {
        if (right_bounds->left < merged_left) {
            candidate_left = right_bounds->left;
        }
        candidate_right = right_bounds->right;
    }

    merged_left = candidate_left;
    if (merged_right < candidate_right) {
        merged_right = candidate_right;
    }

    out_bounds->left = merged_left;
    out_bounds->top = merged_top;
    out_bounds->right = merged_right;
    out_bounds->bottom = merged_bottom;
}
