#include "creatures_slice.h"

#include <stdint.h>

static uint32_t creatures_random_unsigned_magnitude(int value) {
    if (value < 0) {
        return (uint32_t)(-(int64_t)value);
    }
    return (uint32_t)value;
}

/*
 * Derived from the automatic-sex branch in Creatures.exe / FUN_00422aa0 (00422aa0).
 * The original counts only non-excluded creatures, then biases the next sex choice toward the
 * underrepresented side of the population. With no live population, it falls back to a parity
 * split from the random source.
 */
uint8_t creatures_choose_population_balanced_sex(const CreaturesPopulationMember *members,
    size_t member_count, CreaturesRandomProc next_random, void *ctx) {
    size_t member_index;
    size_t male_count;
    size_t female_count;
    uint32_t draw;

    if (next_random == NULL) {
        return 1;
    }

    male_count = 0;
    female_count = 0;
    for (member_index = 0; member_index < member_count; member_index++) {
        if (members[member_index].excluded_from_sex_balance != 0) {
            continue;
        }
        if (members[member_index].sex_selector == 1) {
            male_count++;
        } else if (members[member_index].sex_selector == 2) {
            female_count++;
        }
    }

    draw = creatures_random_unsigned_magnitude(next_random(ctx));
    if (male_count + female_count == 0) {
        return (uint8_t)((draw & 1u) + 1u);
    }

    draw = draw % (uint32_t)(male_count + female_count);
    if (draw + 1u <= male_count) {
        return 2;
    }
    return 1;
}
