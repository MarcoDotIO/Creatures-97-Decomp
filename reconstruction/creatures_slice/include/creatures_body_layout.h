#ifndef CREATURES_BODY_LAYOUT_H
#define CREATURES_BODY_LAYOUT_H

#include "creatures_body_sprites.h"
#include "creatures_layout_helpers.h"

typedef struct CreaturesBodyLayoutRuntime {
    CreaturesBodyPairSprite *root_sprite;
    CreaturesBodyQuadSprite *chain_heads[CREATURES_BODY_CHAIN_COUNT];
    uint8_t selection_mode;
    uint8_t facing_variant;
    int target_x;
    int target_y;
    int chain_end_x[CREATURES_BODY_CHAIN_COUNT];
    int chain_end_y[CREATURES_BODY_CHAIN_COUNT];
    CreaturesWrappedRect current_bounds;
    CreaturesWrappedRect previous_bounds;
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
} CreaturesBodyLayoutRuntime;

#define CREATURES_LAYOUT_EVENT_STEP 0x70657473u

void creatures_body_layout_rebuild(CreaturesBodyLayoutRuntime *layout);
bool creatures_body_layout_toggle_facing_if_needed(CreaturesBodyLayoutRuntime *layout);
int creatures_body_layout_recenter_horizontally(CreaturesBodyLayoutRuntime *layout);
void creatures_body_layout_refresh_posture(CreaturesBodyLayoutRuntime *layout);

#endif
