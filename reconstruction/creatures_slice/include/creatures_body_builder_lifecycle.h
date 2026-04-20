#ifndef CREATURES_BODY_BUILDER_LIFECYCLE_H
#define CREATURES_BODY_BUILDER_LIFECYCLE_H

#include "creatures_body_layout.h"
#include "creatures_frame_cache.h"

typedef void *(*CreaturesSpriteFileLoadProc)(uint32_t token, const char file_suffix[4], void *ctx);
typedef void (*CreaturesSpriteFileReleaseProc)(void *resource, int destroy_mode, void *ctx);

typedef struct CreaturesSpriteFileCacheSlot {
    uint32_t token;
    void *resource;
    uint32_t use_stamp;
} CreaturesSpriteFileCacheSlot;

typedef struct CreaturesSpriteFileCache {
    CreaturesSpriteFileCacheSlot slots[CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT];
    uint32_t next_use_stamp;
    char file_suffix[4];
} CreaturesSpriteFileCache;

void creatures_sprite_file_cache_init(CreaturesSpriteFileCache *cache, const char file_suffix[4]);
void *creatures_sprite_file_cache_acquire(CreaturesSpriteFileCache *cache, uint32_t token,
    CreaturesSpriteFileLoadProc load_proc, void *load_ctx,
    CreaturesSpriteFileReleaseProc release_proc, void *release_ctx);
void *creatures_sprite_file_cache_acquire_before_or_at_stamp(CreaturesSpriteFileCache *cache,
    uint32_t token, uint32_t oldest_allowed_stamp, CreaturesSpriteFileLoadProc load_proc,
    void *load_ctx, CreaturesSpriteFileReleaseProc release_proc, void *release_ctx);
size_t creatures_sprite_file_cache_flush(CreaturesSpriteFileCache *cache,
    CreaturesSpriteFileReleaseProc release_proc, void *release_ctx);

typedef void (*CreaturesReleasePairSpriteProc)(CreaturesBodyPairSprite *sprite, int destroy_mode,
    void *ctx);
typedef void (*CreaturesReleaseQuadSpriteProc)(CreaturesBodyQuadSprite *sprite, int destroy_mode,
    void *ctx);

typedef struct CreaturesBodyBuilderReleaseOps {
    CreaturesReleasePairSpriteProc release_pair_sprite;
    CreaturesReleaseQuadSpriteProc release_quad_sprite;
    void *ctx;
} CreaturesBodyBuilderReleaseOps;

size_t creatures_body_builder_release_assets(CreaturesBodyLayoutRuntime *layout,
    CreaturesFrameSet **owned_frame_set, const CreaturesBodyBuilderReleaseOps *release_ops);

#endif
