#include "creatures_slice.h"

#include <string.h>

static CreaturesSpriteFileCacheSlot *creatures_sprite_file_cache_find_slot(
    CreaturesSpriteFileCache *cache, uint32_t token) {
    size_t slot_index;

    if (cache == NULL) {
        return NULL;
    }

    for (slot_index = 0; slot_index < CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT; slot_index++) {
        if (cache->slots[slot_index].token == token && cache->slots[slot_index].resource != NULL) {
            return &cache->slots[slot_index];
        }
    }
    return NULL;
}

static CreaturesSpriteFileCacheSlot *creatures_sprite_file_cache_pick_oldest_slot(
    CreaturesSpriteFileCache *cache, uint32_t oldest_allowed_stamp) {
    size_t slot_index;
    CreaturesSpriteFileCacheSlot *selected_slot;

    if (cache == NULL) {
        return NULL;
    }

    selected_slot = &cache->slots[0];
    for (slot_index = 0; slot_index < CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT; slot_index++) {
        if (cache->slots[slot_index].use_stamp <= oldest_allowed_stamp) {
            oldest_allowed_stamp = cache->slots[slot_index].use_stamp;
            selected_slot = &cache->slots[slot_index];
        }
    }
    return selected_slot;
}

/*
 * Derived from the static startup state of the global sprite-file cache used by
 * FUN_0040c0f0/FUN_0040c118/FUN_0040c1f0. The original cache keys sprite resources by token and
 * always loads them through the `spr` suffix.
 */
void creatures_sprite_file_cache_init(CreaturesSpriteFileCache *cache, const char file_suffix[4]) {
    if (cache == NULL) {
        return;
    }

    memset(cache, 0, sizeof(*cache));
    if (file_suffix == NULL) {
        memcpy(cache->file_suffix, "spr", 4);
        return;
    }
    memcpy(cache->file_suffix, file_suffix, 4);
}

/*
 * Derived from Creatures.exe / FUN_0040c0f0 (0040c0f0).
 * The original returns a cached sprite resource on a hit, otherwise it evicts the least-recently
 * used slot, releases its resource, loads the requested token through the `spr` suffix, and
 * stamps the new slot with the next monotonic use counter.
 */
void *creatures_sprite_file_cache_acquire(CreaturesSpriteFileCache *cache, uint32_t token,
    CreaturesSpriteFileLoadProc load_proc, void *load_ctx,
    CreaturesSpriteFileReleaseProc release_proc, void *release_ctx) {
    return creatures_sprite_file_cache_acquire_before_or_at_stamp(
        cache, token, UINT32_MAX, load_proc, load_ctx, release_proc, release_ctx);
}

/*
 * Derived from Creatures.exe / FUN_0040c118 (0040c118).
 * The original exposes the same cache lookup/load behavior as FUN_0040c0f0, but constrains the
 * eviction search to slots whose use-stamp is not newer than the caller's threshold.
 */
void *creatures_sprite_file_cache_acquire_before_or_at_stamp(CreaturesSpriteFileCache *cache,
    uint32_t token, uint32_t oldest_allowed_stamp, CreaturesSpriteFileLoadProc load_proc,
    void *load_ctx, CreaturesSpriteFileReleaseProc release_proc, void *release_ctx) {
    CreaturesSpriteFileCacheSlot *slot;

    if (cache == NULL) {
        return NULL;
    }

    slot = creatures_sprite_file_cache_find_slot(cache, token);
    if (slot == NULL) {
        slot = creatures_sprite_file_cache_pick_oldest_slot(cache, oldest_allowed_stamp);
        if (slot != NULL && slot->resource != NULL && release_proc != NULL) {
            release_proc(slot->resource, 1, release_ctx);
        }
        if (slot != NULL) {
            slot->token = token;
            slot->resource = load_proc != NULL ?
                load_proc(token, cache->file_suffix, load_ctx) : NULL;
        }
    }

    cache->next_use_stamp++;
    if (slot != NULL) {
        slot->use_stamp = cache->next_use_stamp;
        return slot->resource;
    }
    return NULL;
}

/*
 * Derived from Creatures.exe / FUN_0040c1f0 (0040c1f0).
 * The original walks the fixed-size global sprite-file cache, releases each live resource, and
 * clears the slot so the assembler starts from an empty cache.
 */
size_t creatures_sprite_file_cache_flush(CreaturesSpriteFileCache *cache,
    CreaturesSpriteFileReleaseProc release_proc, void *release_ctx) {
    size_t slot_index;
    size_t release_count;

    if (cache == NULL) {
        return 0;
    }

    release_count = 0;
    for (slot_index = 0; slot_index < CREATURES_SPRITE_FILE_CACHE_SLOT_COUNT; slot_index++) {
        if (cache->slots[slot_index].resource != NULL && release_proc != NULL) {
            release_proc(cache->slots[slot_index].resource, 1, release_ctx);
            release_count++;
        }
        cache->slots[slot_index].resource = NULL;
        cache->slots[slot_index].token = 0;
        cache->slots[slot_index].use_stamp = 0;
    }
    return release_count;
}

/*
 * Derived from Creatures.exe / FUN_004102a0 (004102a0).
 * The original releases every chain sprite from tail to head, then releases the root sprite and
 * the owned frame set cached on the assembled body object.
 */
size_t creatures_body_builder_release_assets(CreaturesBodyLayoutRuntime *layout,
    CreaturesFrameSet **owned_frame_set, const CreaturesBodyBuilderReleaseOps *release_ops) {
    size_t release_count;
    int chain_index;

    release_count = 0;
    if (layout == NULL) {
        return 0;
    }

    for (chain_index = 0; chain_index < CREATURES_BODY_CHAIN_COUNT; chain_index++) {
        CreaturesBodyQuadSprite *current_head;

        current_head = layout->chain_heads[chain_index];
        while (current_head != NULL) {
            CreaturesBodyQuadSprite *current;
            CreaturesBodyQuadSprite *previous;

            current = current_head;
            previous = NULL;
            while (current->next != NULL) {
                previous = current;
                current = current->next;
            }

            if (previous == NULL) {
                layout->chain_heads[chain_index] = NULL;
                current_head = NULL;
            } else {
                previous->next = NULL;
                current_head = layout->chain_heads[chain_index];
            }

            if (release_ops != NULL && release_ops->release_quad_sprite != NULL) {
                release_ops->release_quad_sprite(current, 1, release_ops->ctx);
            }
            release_count++;
        }
    }

    if (layout->root_sprite != NULL) {
        if (release_ops != NULL && release_ops->release_pair_sprite != NULL) {
            release_ops->release_pair_sprite(layout->root_sprite, 1, release_ops->ctx);
        }
        layout->root_sprite = NULL;
        release_count++;
    }

    if (owned_frame_set != NULL && *owned_frame_set != NULL) {
        creatures_frame_set_release(*owned_frame_set);
        *owned_frame_set = NULL;
        release_count++;
    }
    return release_count;
}
