#ifndef CREATURES_BODY_BUILDER_H
#define CREATURES_BODY_BUILDER_H

#include "creatures_body_builder_lifecycle.h"
#include "creatures_body_graph_loader.h"
#include "creatures_body_sprite_bank.h"
#include "creatures_render_depth.h"

typedef bool (*CreaturesBodyBankPublishProc)(uint32_t image_token,
    const uint8_t *image_buffer, size_t image_size, void *ctx);

typedef struct CreaturesBodyBuilderRuntime {
    CreaturesBodyLayoutRuntime layout;
    CreaturesFrameSet *owned_frame_set;
    CreaturesBodySpriteStorage sprite_storage;
    CreaturesBodyTableStorage table_storage;
    CreaturesBodyAssemblyRecipe last_recipe;
    CreaturesBodySpriteBankBuildResult last_bank_result;
    uint32_t assembled_body_id;
    uint32_t body_gene_primary_value;
    uint32_t body_gene_secondary_value;
    int render_depth_base;
} CreaturesBodyBuilderRuntime;

typedef struct CreaturesBodyBuilderOps {
    CreaturesSpriteFileCache *sprite_file_cache;
    CreaturesSpriteFileReleaseProc release_sprite_file;
    void *sprite_file_ctx;
    const CreaturesBodyBuilderReleaseOps *release_ops;
    const CreaturesPathResolverOps *resolver_ops;
    const CreaturesFrameCacheOps *slot_frame_cache_ops;
    const CreaturesFrameCacheOps *body_frame_cache_ops;
    const uint8_t *palette_rgb;
    uint8_t *image_buffer;
    size_t image_buffer_size;
    CreaturesTextAssetLookupProc lookup_text;
    void *lookup_ctx;
    CreaturesBodyBankPublishProc publish_body_bank_image;
    void *publish_ctx;
    const void *render_depth_self;
    const void *const *render_depth_participants;
    size_t render_depth_participant_count;
    CreaturesRenderDepthReadProc read_render_depth;
    CreaturesRandomProc next_random;
    void *render_depth_ctx;
} CreaturesBodyBuilderOps;

bool creatures_body_builder_rebuild_from_genome(CreaturesBodyBuilderRuntime *runtime,
    CreaturesGeneCursor *cursor, int group_digit_selector, int column_digit_limit,
    const CreaturesBodyBuilderOps *ops);

#endif
