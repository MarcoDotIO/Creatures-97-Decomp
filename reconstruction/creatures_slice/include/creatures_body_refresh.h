#ifndef CREATURES_BODY_REFRESH_H
#define CREATURES_BODY_REFRESH_H

#include "creatures_common.h"

typedef struct CreaturesGenomeState {
    uint8_t bytes[CREATURES_GENOME_STATE_SIZE];
} CreaturesGenomeState;

typedef bool (*CreaturesGenomeStateInitProc)(CreaturesGenomeState *state, int species_token,
    uint8_t sex_selector, uint8_t body_variant_selector, void *ctx);
typedef void (*CreaturesGenomeStateTargetProc)(
    void *target, CreaturesGenomeState *state, void *ctx);
typedef void (*CreaturesGenomeStateBodyBuildProc)(
    CreaturesGenomeState *state, uint8_t body_variant_selector, void *ctx);
typedef void (*CreaturesVoiceAssignProc)(void *voice_target, const char *voice_asset, void *ctx);

typedef struct CreaturesCreatureBodyRefreshRuntime {
    uint32_t creature_flags;
    int species_token;
    uint8_t sex_selector;
    uint8_t body_variant_selector;
    void *optional_seed_target;
    void *appearance_target;
    void *runtime_target;
    void *voice_target;
} CreaturesCreatureBodyRefreshRuntime;

typedef struct CreaturesCreatureBodyRefreshOps {
    CreaturesGenomeStateInitProc init_genome_state;
    CreaturesGenomeStateTargetProc prepare_default_seed;
    CreaturesGenomeStateBodyBuildProc build_body_from_genome;
    CreaturesGenomeStateTargetProc apply_appearance_from_genome;
    CreaturesGenomeStateTargetProc apply_runtime_from_genome;
    CreaturesVoiceAssignProc assign_voice_asset;
    void *ctx;
} CreaturesCreatureBodyRefreshOps;

const char *creatures_creature_select_voice_asset(uint32_t creature_flags, uint8_t sex_selector);
bool creatures_creature_refresh_body_assets(CreaturesCreatureBodyRefreshRuntime *runtime,
    const CreaturesCreatureBodyRefreshOps *ops);

#endif
