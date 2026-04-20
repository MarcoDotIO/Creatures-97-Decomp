#ifndef CREATURES_CREATURE_LIFECYCLE_H
#define CREATURES_CREATURE_LIFECYCLE_H

#include "creatures_common.h"

typedef struct CreaturesBehaviorScriptState {
    char text[CREATURES_BEHAVIOR_SCRIPT_TEXT_CAPACITY];
    int state_code;
} CreaturesBehaviorScriptState;

typedef struct CreaturesWaitBehaviorRuntime {
    CreaturesBehaviorScriptState primary_scripts[CREATURES_WAIT_BEHAVIOR_PRIMARY_SCRIPT_COUNT];
    CreaturesBehaviorScriptState
        auxiliary_scripts[CREATURES_WAIT_BEHAVIOR_AUXILIARY_SCRIPT_COUNT];
    uint8_t body_variant_selector;
    int wait_state_code;
} CreaturesWaitBehaviorRuntime;

typedef void (*CreaturesWaitBehaviorRefreshProc)(
    CreaturesWaitBehaviorRuntime *runtime, void *ctx);
typedef void (*CreaturesWaitBehaviorMessageProc)(
    CreaturesWaitBehaviorRuntime *runtime, const char *message, void *ctx);

typedef struct CreaturesWaitBehaviorOps {
    CreaturesWaitBehaviorRefreshProc refresh_body_assets;
    CreaturesWaitBehaviorMessageProc queue_message;
    void *ctx;
} CreaturesWaitBehaviorOps;

void creatures_creature_start_waiting_behavior(CreaturesWaitBehaviorRuntime *runtime,
    const char *const primary_scripts[CREATURES_WAIT_BEHAVIOR_PRIMARY_SCRIPT_COUNT],
    const char *const auxiliary_scripts[CREATURES_WAIT_BEHAVIOR_AUXILIARY_SCRIPT_COUNT],
    const char *wait_message, const CreaturesWaitBehaviorOps *ops);

typedef bool (*CreaturesGrowthTargetDistanceProc)(int *distance_out, void *ctx);
typedef int (*CreaturesOrientationDeltaProc)(void *ctx);
typedef uint8_t (*CreaturesBehaviorCodeProc)(void *ctx);
typedef void (*CreaturesGrowthStageProc)(void *ctx);

typedef struct CreaturesGrowthStageRuntime {
    uint8_t is_retired;
    int negative_orientation_delta;
    int positive_orientation_delta;
    uint8_t primary_behavior_code;
    int target_distance_bias;
    intptr_t active_focus_target;
    intptr_t default_focus_target;
    intptr_t secondary_focus_target;
    int active_focus_flag;
    int secondary_focus_flag;
    uint8_t body_variant_selector;
    uint8_t enabled_growth_stages[CREATURES_MAX_BODY_VARIANT_STAGE];
    uint8_t force_finalize_growth;
} CreaturesGrowthStageRuntime;

typedef struct CreaturesGrowthUpdateOps {
    CreaturesOrientationDeltaProc compute_orientation_delta;
    CreaturesBehaviorCodeProc select_primary_behavior_code;
    CreaturesGrowthTargetDistanceProc read_target_distance;
    CreaturesGrowthStageProc refresh_body_assets;
    CreaturesGrowthStageProc finalize_growth;
    void *ctx;
} CreaturesGrowthUpdateOps;

void creatures_creature_update_attention_and_growth(CreaturesGrowthStageRuntime *runtime,
    const CreaturesGrowthUpdateOps *ops);

typedef int (*CreaturesIdentityCountProc)(int identity_token, void *ctx);
typedef void *(*CreaturesGenomeExportLoadProc)(const void *source_export, void *ctx);
typedef void (*CreaturesGenomeExportProc)(void *genome_export, void *ctx);
typedef int (*CreaturesGenomeExportIdentityReadProc)(
    const void *genome_export, void *ctx);
typedef void (*CreaturesGenomeBodyBuildProc)(
    void *genome_export, uint8_t body_variant_selector, void *ctx);
typedef void (*CreaturesGenomeExportReleaseProc)(
    void *genome_export, int destroy_mode, void *ctx);
typedef void (*CreaturesCreatureRuntimeProc)(
    void *runtime, void *ctx);
typedef void (*CreaturesCreaturePlacementProc)(
    void *runtime, int x, int y, void *ctx);
typedef void (*CreaturesCreatureNotifyProc)(
    void *runtime, int value, void *ctx);
typedef void (*CreaturesGlobalEventProc)(int channel, int code, int value, void *ctx);
typedef void (*CreaturesGlobalFlushProc)(void *ctx);

typedef struct CreaturesImportedCreatureRuntime {
    int identity_token;
    uint8_t activity_state;
    uint8_t body_variant_selector;
} CreaturesImportedCreatureRuntime;

typedef struct CreaturesImportedCreatureOps {
    CreaturesIdentityCountProc count_matching_identity;
    CreaturesGenomeExportLoadProc load_genome_export;
    CreaturesGenomeExportProc regenerate_identity;
    CreaturesGenomeExportIdentityReadProc read_identity;
    CreaturesGenomeExportProc prepare_genome_export;
    CreaturesGenomeBodyBuildProc rebuild_body_assets;
    CreaturesGenomeExportReleaseProc release_genome_export;
    CreaturesCreatureRuntimeProc refresh_bounds;
    CreaturesCreaturePlacementProc place_in_world;
    CreaturesCreatureNotifyProc notify_runtime_change;
    CreaturesGlobalEventProc post_global_event;
    CreaturesGlobalFlushProc flush_global_events;
    void *ctx;
} CreaturesImportedCreatureOps;

bool creatures_creature_rebuild_from_export_genome(CreaturesImportedCreatureRuntime *runtime,
    const void *source_export, const CreaturesImportedCreatureOps *ops);

#endif
