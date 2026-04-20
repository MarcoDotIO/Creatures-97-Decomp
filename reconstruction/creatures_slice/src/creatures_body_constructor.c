#include "creatures_slice.h"

#include <stddef.h>
#include <string.h>

static const uint8_t k_creatures_body_chain_slot_map[CREATURES_BODY_CHAIN_COUNT][3] = {
    {0, 0xff, 0xff},
    {2, 3, 4},
    {5, 6, 7},
    {8, 9, 0xff},
    {10, 11, 0xff},
    {12, 13, 0xff},
};

static const uint8_t k_creatures_body_chain_lengths[CREATURES_BODY_CHAIN_COUNT] = {
    1, 3, 3, 2, 2, 2,
};

typedef struct CreaturesBodyLayoutPersistentState {
    uint8_t selection_mode;
    uint8_t facing_variant;
    int target_x;
    int target_y;
    uint8_t frame_override_increment;
    uint8_t keep_extended_bank;
    int horizontal_min_x;
    int horizontal_max_x;
    int vertical_limit_y;
    int facing_target_x[2];
    int facing_required_bottom[2];
    uint8_t horizontal_shift_fits;
    void (*notify_event)(uint32_t tag, int value, void *ctx);
    void *notify_ctx;
    char pose_string[15];
} CreaturesBodyLayoutPersistentState;

static CreaturesBodyQuadSprite *creatures_body_storage_chain_slot(
    CreaturesBodySpriteStorage *storage, size_t chain_index, size_t node_index) {
    switch (chain_index) {
    case 0:
        return &storage->chain0[node_index];
    case 1:
        return &storage->chain1[node_index];
    case 2:
        return &storage->chain2[node_index];
    case 3:
        return &storage->chain3[node_index];
    case 4:
        return &storage->chain4[node_index];
    case 5:
        return &storage->chain5[node_index];
    default:
        return NULL;
    }
}

/*
 * Derived from the constructor tail in Creatures.exe / FUN_0040f900 (0040f900).
 * The original consumes the packed body frame bank and the loaded pair/quad anchor tables to
 * instantiate the root sprite plus six appendage chains. The chain topology is fixed:
 *   - chain 0: slot 0
 *   - chain 1: slots 2 -> 3 -> 4
 *   - chain 2: slots 5 -> 6 -> 7
 *   - chain 3: slots 8 -> 9
 *   - chain 4: slots 10 -> 11
 *   - chain 5: slots 12 -> 13
 * The root pair sprite uses slot 1 as its pose-selector base and slot-group 1.
 */
bool creatures_body_layout_construct_sprites(CreaturesBodyLayoutRuntime *layout,
    CreaturesBodySpriteStorage *storage, CreaturesFrameSet *body_frame_set,
    int render_depth_base, const CreaturesBodySpriteBankBuildResult *bank_result,
    const CreaturesBodyPairTable *root_anchors,
    const CreaturesBodyQuadTable *const quad_tables[CREATURES_BODY_SLOT_COUNT]) {
    CreaturesBodyLayoutPersistentState persistent_state;
    size_t chain_index;

    if (layout == NULL || storage == NULL || body_frame_set == NULL || bank_result == NULL ||
        root_anchors == NULL || quad_tables == NULL ||
        bank_result->slot_frame_starts[1] == UINT16_MAX) {
        return false;
    }

    persistent_state.selection_mode = layout->selection_mode;
    persistent_state.facing_variant = layout->facing_variant;
    persistent_state.target_x = layout->target_x;
    persistent_state.target_y = layout->target_y;
    persistent_state.frame_override_increment = layout->frame_override_increment;
    persistent_state.keep_extended_bank = layout->keep_extended_bank;
    persistent_state.horizontal_min_x = layout->horizontal_min_x;
    persistent_state.horizontal_max_x = layout->horizontal_max_x;
    persistent_state.vertical_limit_y = layout->vertical_limit_y;
    persistent_state.facing_target_x[0] = layout->facing_target_x[0];
    persistent_state.facing_target_x[1] = layout->facing_target_x[1];
    persistent_state.facing_required_bottom[0] = layout->facing_required_bottom[0];
    persistent_state.facing_required_bottom[1] = layout->facing_required_bottom[1];
    persistent_state.horizontal_shift_fits = layout->horizontal_shift_fits;
    persistent_state.notify_event = layout->notify_event;
    persistent_state.notify_ctx = layout->notify_ctx;
    memcpy(persistent_state.pose_string, layout->pose_string, sizeof(persistent_state.pose_string));

    memset(layout, 0, sizeof(*layout));
    memset(storage, 0, sizeof(*storage));
    layout->selection_mode = persistent_state.selection_mode;
    layout->facing_variant = persistent_state.facing_variant;
    layout->target_x = persistent_state.target_x;
    layout->target_y = persistent_state.target_y;
    layout->frame_override_increment = persistent_state.frame_override_increment;
    layout->keep_extended_bank = persistent_state.keep_extended_bank;
    layout->horizontal_min_x = persistent_state.horizontal_min_x;
    layout->horizontal_max_x = persistent_state.horizontal_max_x;
    layout->vertical_limit_y = persistent_state.vertical_limit_y;
    layout->facing_target_x[0] = persistent_state.facing_target_x[0];
    layout->facing_target_x[1] = persistent_state.facing_target_x[1];
    layout->facing_required_bottom[0] = persistent_state.facing_required_bottom[0];
    layout->facing_required_bottom[1] = persistent_state.facing_required_bottom[1];
    layout->horizontal_shift_fits = persistent_state.horizontal_shift_fits;
    layout->notify_event = persistent_state.notify_event;
    layout->notify_ctx = persistent_state.notify_ctx;
    memcpy(layout->pose_string, persistent_state.pose_string, sizeof(layout->pose_string));

    if (creatures_body_pair_sprite_init(&storage->root_sprite, root_anchors, body_frame_set,
            (uint8_t)bank_result->slot_frame_starts[1], render_depth_base) == NULL) {
        return false;
    }
    storage->root_sprite.base.body_slot_group = 1;
    layout->root_sprite = &storage->root_sprite;

    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        CreaturesBodyQuadSprite *next_sprite;
        size_t node_index;

        next_sprite = NULL;
        for (node_index = k_creatures_body_chain_lengths[chain_index]; node_index-- > 0;) {
            uint8_t slot_index;
            CreaturesBodyQuadSprite *sprite;

            slot_index = k_creatures_body_chain_slot_map[chain_index][node_index];
            if (slot_index == 0xff || bank_result->slot_frame_starts[slot_index] == UINT16_MAX ||
                quad_tables[slot_index] == NULL) {
                next_sprite = NULL;
                continue;
            }

            sprite = creatures_body_storage_chain_slot(storage, chain_index, node_index);
            if (sprite == NULL ||
                creatures_body_quad_sprite_init(sprite, next_sprite, quad_tables[slot_index],
                    body_frame_set, (uint8_t)bank_result->slot_frame_starts[slot_index]) == NULL) {
                return false;
            }
            next_sprite = sprite;
        }
        layout->chain_heads[chain_index] = next_sprite;
    }

    return true;
}
