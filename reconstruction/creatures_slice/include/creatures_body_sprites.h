#ifndef CREATURES_BODY_SPRITES_H
#define CREATURES_BODY_SPRITES_H

#include "creatures_common.h"
#include "creatures_frame_cache.h"
#include "creatures_paths.h"

typedef enum CreaturesBodySpriteKind {
    CREATURES_BODY_SPRITE_KIND_BASE = 0,
    CREATURES_BODY_SPRITE_KIND_QUAD_CHAIN = 1,
    CREATURES_BODY_SPRITE_KIND_PAIR_ROOT = 2,
} CreaturesBodySpriteKind;

typedef struct CreaturesBodySpriteBase {
    CreaturesBodySpriteKind kind;
    CreaturesFrameSet *frame_set;
    uint8_t current_frame_index;
    uint8_t pose_selector;
    int x;
    int y;
    int render_depth_base;
    int body_slot_group;
    int frame_table_offset;
} CreaturesBodySpriteBase;

typedef struct CreaturesBodyQuadSprite {
    CreaturesBodySpriteBase base;
    struct CreaturesBodyQuadSprite *next;
    CreaturesBodyQuadTable anchors;
} CreaturesBodyQuadSprite;

typedef struct CreaturesBodyPairSprite {
    CreaturesBodySpriteBase base;
    CreaturesBodyPairTable anchors;
} CreaturesBodyPairSprite;

void creatures_body_sprite_init_base(CreaturesBodySpriteBase *sprite);
void creatures_body_sprite_select_frame_band(CreaturesBodySpriteBase *sprite, int selection_mode);
CreaturesBodyQuadSprite *creatures_body_quad_sprite_init(CreaturesBodyQuadSprite *sprite,
    CreaturesBodyQuadSprite *next_sprite, const CreaturesBodyQuadTable *anchors,
    CreaturesFrameSet *frame_set, uint8_t pose_selector);
CreaturesBodyPairSprite *creatures_body_pair_sprite_init(CreaturesBodyPairSprite *sprite,
    const CreaturesBodyPairTable *anchors, CreaturesFrameSet *frame_set, uint8_t pose_selector,
    int render_depth_base);

#endif
