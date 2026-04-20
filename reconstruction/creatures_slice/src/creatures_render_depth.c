#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>

/*
 * Derived from Creatures.exe / FUN_0040f870 (0040f870).
 * The original repeatedly chooses a random depth base in the inclusive range [1000, 3000] and
 * rejects it when another participant already occupies any depth in the eight-slot band that
 * starts at that base.
 */
int creatures_choose_unique_render_depth_base(const void *self, const void *const *participants,
    size_t participant_count, CreaturesRenderDepthReadProc read_render_depth,
    CreaturesRandomProc next_random, void *ctx) {
    if (participants == NULL || read_render_depth == NULL || next_random == NULL) {
        return 0;
    }

    for (;;) {
        int random_band;
        int candidate_base;
        int candidate_limit;
        size_t index;
        bool is_available;

        random_band = next_random(ctx) % 0x7d1;
        candidate_base = random_band + 1000;
        candidate_limit = candidate_base + 8;
        is_available = true;

        for (index = 0; index < participant_count; index++) {
            int existing_depth;

            if (participants[index] == self) {
                continue;
            }

            existing_depth = read_render_depth(participants[index], ctx);
            if (candidate_base <= existing_depth && existing_depth <= candidate_limit) {
                is_available = false;
                break;
            }
        }

        if (is_available) {
            return candidate_base;
        }
    }
}
