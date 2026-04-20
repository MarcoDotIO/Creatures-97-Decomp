#ifndef CREATURES_RENDER_DEPTH_H
#define CREATURES_RENDER_DEPTH_H

#include "creatures_common.h"

typedef int (*CreaturesRenderDepthReadProc)(const void *participant, void *ctx);

int creatures_choose_unique_render_depth_base(const void *self, const void *const *participants,
    size_t participant_count, CreaturesRenderDepthReadProc read_render_depth,
    CreaturesRandomProc next_random, void *ctx);

#endif
