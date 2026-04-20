#ifndef CREATURES_BODY_CONSTRUCTOR_H
#define CREATURES_BODY_CONSTRUCTOR_H

#include "creatures_body_layout.h"
#include "creatures_body_sprite_bank.h"
#include "creatures_frame_cache.h"

typedef struct CreaturesBodySpriteStorage {
    CreaturesBodyPairSprite root_sprite;
    CreaturesBodyQuadSprite chain0[1];
    CreaturesBodyQuadSprite chain1[3];
    CreaturesBodyQuadSprite chain2[3];
    CreaturesBodyQuadSprite chain3[2];
    CreaturesBodyQuadSprite chain4[2];
    CreaturesBodyQuadSprite chain5[2];
} CreaturesBodySpriteStorage;

typedef struct CreaturesBodyTableStorage {
    CreaturesBodyPairTable root_anchors;
    CreaturesBodyQuadTable quad_anchors[CREATURES_BODY_SLOT_COUNT];
    uint8_t quad_anchor_loaded[CREATURES_BODY_SLOT_COUNT];
} CreaturesBodyTableStorage;

bool creatures_body_layout_construct_sprites(CreaturesBodyLayoutRuntime *layout,
    CreaturesBodySpriteStorage *storage, CreaturesFrameSet *body_frame_set,
    int render_depth_base, const CreaturesBodySpriteBankBuildResult *bank_result,
    const CreaturesBodyPairTable *root_anchors,
    const CreaturesBodyQuadTable *const quad_tables[CREATURES_BODY_SLOT_COUNT]);

#endif
