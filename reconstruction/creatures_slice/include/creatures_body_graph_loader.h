#ifndef CREATURES_BODY_GRAPH_LOADER_H
#define CREATURES_BODY_GRAPH_LOADER_H

#include "creatures_body_constructor.h"
#include "creatures_body_gene_parser.h"
#include "creatures_body_sprite_bank.h"
#include "creatures_paths.h"

bool creatures_body_layout_load_and_construct_sprites(CreaturesBodyLayoutRuntime *layout,
    CreaturesBodySpriteStorage *sprite_storage, CreaturesBodyTableStorage *table_storage,
    CreaturesFrameSet *body_frame_set, int render_depth_base,
    const CreaturesBodyAssemblyRecipe *recipe,
    const CreaturesBodySpriteBankBuildResult *bank_result, int group_digit_selector,
    int column_digit_limit, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx);
bool creatures_body_layout_load_construct_and_apply_pose_string(
    CreaturesBodyLayoutRuntime *layout, CreaturesBodySpriteStorage *sprite_storage,
    CreaturesBodyTableStorage *table_storage, CreaturesFrameSet *body_frame_set,
    int render_depth_base, const CreaturesBodyAssemblyRecipe *recipe,
    const CreaturesBodySpriteBankBuildResult *bank_result, int group_digit_selector,
    int column_digit_limit, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx,
    const char pose_string[15]);

#endif
