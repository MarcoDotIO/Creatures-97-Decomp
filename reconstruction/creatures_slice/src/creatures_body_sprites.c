#include "creatures_slice.h"

#include <stddef.h>
#include <string.h>

/*
 * Derived from Creatures.exe / FUN_0041a860 (0041a860).
 * The original runs the common body-sprite base initializer and clears the band-selection state.
 */
void creatures_body_sprite_init_base(CreaturesBodySpriteBase *sprite) {
    if (sprite == NULL) {
        return;
    }

    memset(sprite, 0, sizeof(*sprite));
    sprite->kind = CREATURES_BODY_SPRITE_KIND_BASE;
}

/*
 * Derived from Creatures.exe / FUN_0041a990 (0041a990).
 * The original chooses a frame-table band from the body-slot group and selection mode, then
 * derives the current frame index by adding the pose selector to that band offset.
 */
void creatures_body_sprite_select_frame_band(CreaturesBodySpriteBase *sprite, int selection_mode) {
    int frame_table_offset;

    if (sprite == NULL) {
        return;
    }

    if (selection_mode == 1) {
        frame_table_offset = 8;
    } else if (selection_mode == 2) {
        frame_table_offset = sprite->body_slot_group;
    } else if (selection_mode == 3) {
        frame_table_offset = sprite->body_slot_group + 4;
    } else {
        frame_table_offset = 9;
    }

    if (sprite->body_slot_group > 3) {
        frame_table_offset = 8;
        if (sprite->body_slot_group == 5) {
            frame_table_offset = 9;
        }
    }

    sprite->frame_table_offset = frame_table_offset;
    sprite->current_frame_index = (uint8_t)(sprite->pose_selector + frame_table_offset);
}

/*
 * Derived from Creatures.exe / FUN_0041aa30 (0041aa30).
 * The original constructs a linked quad-table body sprite, copies ten dwords of anchor data, and
 * immediately selects the default frame-table band for body-slot group 1.
 */
CreaturesBodyQuadSprite *creatures_body_quad_sprite_init(CreaturesBodyQuadSprite *sprite,
    CreaturesBodyQuadSprite *next_sprite, const CreaturesBodyQuadTable *anchors,
    CreaturesFrameSet *frame_set, uint8_t pose_selector) {
    if (sprite == NULL || anchors == NULL) {
        return NULL;
    }

    creatures_body_sprite_init_base(&sprite->base);
    sprite->base.kind = CREATURES_BODY_SPRITE_KIND_QUAD_CHAIN;
    sprite->next = next_sprite;
    memcpy(&sprite->anchors, anchors, sizeof(sprite->anchors));
    sprite->base.frame_set = frame_set;
    sprite->base.pose_selector = pose_selector;
    sprite->base.body_slot_group = 1;
    creatures_body_sprite_select_frame_band(&sprite->base, 2);
    return sprite;
}

/*
 * Derived from Creatures.exe / FUN_0041aca0 (0041aca0).
 * The original constructs the root pair-table body sprite, copies the full 10x6 anchor table, and
 * stores the frame set, pose selector, and render-depth base.
 */
CreaturesBodyPairSprite *creatures_body_pair_sprite_init(CreaturesBodyPairSprite *sprite,
    const CreaturesBodyPairTable *anchors, CreaturesFrameSet *frame_set, uint8_t pose_selector,
    int render_depth_base) {
    if (sprite == NULL || anchors == NULL) {
        return NULL;
    }

    creatures_body_sprite_init_base(&sprite->base);
    sprite->base.kind = CREATURES_BODY_SPRITE_KIND_PAIR_ROOT;
    memcpy(&sprite->anchors, anchors, sizeof(sprite->anchors));
    sprite->base.frame_set = frame_set;
    sprite->base.pose_selector = pose_selector;
    sprite->base.render_depth_base = render_depth_base;
    return sprite;
}
