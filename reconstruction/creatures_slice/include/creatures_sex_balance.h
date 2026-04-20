#ifndef CREATURES_SEX_BALANCE_H
#define CREATURES_SEX_BALANCE_H

#include "creatures_common.h"

typedef struct CreaturesPopulationMember {
    uint8_t sex_selector;
    uint8_t excluded_from_sex_balance;
} CreaturesPopulationMember;

uint8_t creatures_choose_population_balanced_sex(const CreaturesPopulationMember *members,
    size_t member_count, CreaturesRandomProc next_random, void *ctx);

#endif
