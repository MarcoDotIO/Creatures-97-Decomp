#ifndef CREATURES_FRAME_CACHE_H
#define CREATURES_FRAME_CACHE_H

#include "creatures_common.h"

struct CreaturesFrameEntry;
struct CreaturesFrameSet;

typedef uint8_t *(*CreaturesFrameDecodeProc)(struct CreaturesFrameEntry *entry, void *ctx);
typedef void (*CreaturesFrameDestroyProc)(struct CreaturesFrameSet *frame_set,
    int destroy_mode, void *ctx);
typedef struct CreaturesFrameSet *(*CreaturesFrameCreateProc)(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new, void *ctx);

typedef struct CreaturesFrameEntry {
    uint8_t flags;
    uint8_t *pixels;
    int width;
    int height;
    uint32_t last_access_serial;
    CreaturesFrameDecodeProc decode_pixels;
    void *decode_ctx;
} CreaturesFrameEntry;

typedef struct CreaturesFrameSet {
    uint32_t primary_key;
    int secondary_key;
    int ref_count;
    CreaturesFrameEntry *entries;
    int entry_count;
    CreaturesFrameDestroyProc destroy;
    void *destroy_ctx;
} CreaturesFrameSet;

typedef struct CreaturesFrameCacheOps {
    CreaturesFrameSet **entries;
    size_t entry_count;
    CreaturesFrameCreateProc create_frame_set;
    void *ctx;
} CreaturesFrameCacheOps;

CreaturesFrameSet *creatures_frame_cache_acquire(
    uint32_t primary_key, int secondary_key, int entry_count, int force_new,
    const CreaturesFrameCacheOps *cache_ops);
void creatures_frame_set_release(CreaturesFrameSet *frame_set);
uint8_t *creatures_frame_entry_pixels(
    CreaturesFrameEntry *entry, uint32_t *access_serial_counter);
void creatures_frame_entry_apply_palette_map(CreaturesFrameEntry *entry,
    const uint8_t palette_map[256], uint32_t *access_serial_counter);
void creatures_frame_set_apply_palette_map(CreaturesFrameSet *frame_set,
    const uint8_t palette_map[256], uint32_t *access_serial_counter);

#endif
