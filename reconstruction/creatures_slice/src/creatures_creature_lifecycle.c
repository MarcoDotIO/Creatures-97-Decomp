#include "creatures_slice.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>

static void creatures_copy_behavior_script(
    CreaturesBehaviorScriptState *slot, const char *script_text) {
    if (slot == NULL) {
        return;
    }

    memset(slot->text, 0, sizeof(slot->text));
    if (script_text != NULL) {
        snprintf(slot->text, sizeof(slot->text), "%s", script_text);
    }
    slot->state_code = 0xff;
}

/*
 * Derived from Creatures.exe / FUN_00420b20 (00420b20).
 * The original seeds sixteen primary behavior-script slots plus three auxiliary script slots,
 * ensures the body-variant stage has advanced out of zero, switches the wait-state code to `8`,
 * and queues the literal "WAIT FOR 40 SECS!" script line.
 */
void creatures_creature_start_waiting_behavior(CreaturesWaitBehaviorRuntime *runtime,
    const char *const primary_scripts[CREATURES_WAIT_BEHAVIOR_PRIMARY_SCRIPT_COUNT],
    const char *const auxiliary_scripts[CREATURES_WAIT_BEHAVIOR_AUXILIARY_SCRIPT_COUNT],
    const char *wait_message, const CreaturesWaitBehaviorOps *ops) {
    size_t script_index;

    if (runtime == NULL || primary_scripts == NULL || auxiliary_scripts == NULL) {
        return;
    }

    for (script_index = 0;
         script_index < CREATURES_WAIT_BEHAVIOR_PRIMARY_SCRIPT_COUNT;
         script_index++) {
        creatures_copy_behavior_script(
            &runtime->primary_scripts[script_index], primary_scripts[script_index]);
    }
    for (script_index = 0;
         script_index < CREATURES_WAIT_BEHAVIOR_AUXILIARY_SCRIPT_COUNT;
         script_index++) {
        creatures_copy_behavior_script(
            &runtime->auxiliary_scripts[script_index], auxiliary_scripts[script_index]);
    }

    if (runtime->body_variant_selector == 0) {
        runtime->body_variant_selector = 1;
        if (ops != NULL && ops->refresh_body_assets != NULL) {
            ops->refresh_body_assets(runtime, ops->ctx);
        }
    }

    runtime->wait_state_code = 8;
    if (ops != NULL && ops->queue_message != NULL) {
        ops->queue_message(runtime, wait_message, ops->ctx);
    }
}

/*
 * Derived from Creatures.exe / FUN_004224c0 (004224c0).
 * The original resolves a signed orientation delta against a global target, updates the current
 * primary behavior code, derives a short-range target bias when a tracked target exists, toggles
 * two cached focus flags, and advances the body-variant stage through the recovered enable-mask
 * table before delegating to the body refresh or finalization path.
 */
void creatures_creature_update_attention_and_growth(CreaturesGrowthStageRuntime *runtime,
    const CreaturesGrowthUpdateOps *ops) {
    int orientation_delta;
    int distance_to_target;

    if (runtime == NULL || runtime->is_retired != 0 || ops == NULL ||
        ops->compute_orientation_delta == NULL || ops->select_primary_behavior_code == NULL ||
        ops->read_target_distance == NULL) {
        return;
    }

    orientation_delta = (ops->compute_orientation_delta(ops->ctx) * 0xff) / 3;
    runtime->negative_orientation_delta = 0;
    runtime->positive_orientation_delta = 0;
    if (orientation_delta < 1) {
        if (orientation_delta < 0) {
            runtime->negative_orientation_delta = -orientation_delta;
        }
    } else {
        runtime->positive_orientation_delta = orientation_delta;
    }

    runtime->primary_behavior_code = ops->select_primary_behavior_code(ops->ctx);
    if (!ops->read_target_distance(&distance_to_target, ops->ctx)) {
        runtime->target_distance_bias = 0;
    } else if (distance_to_target < 0xc9) {
        runtime->target_distance_bias = -6 - distance_to_target;
    } else {
        runtime->target_distance_bias = 0x32;
    }

    if (runtime->active_focus_target != 0) {
        if (runtime->primary_behavior_code < 0x50) {
            runtime->active_focus_target = 0;
        }
    }
    if (runtime->active_focus_target == 0 && runtime->primary_behavior_code > 0xa0) {
        runtime->active_focus_target = runtime->default_focus_target;
    }

    runtime->active_focus_flag = runtime->active_focus_target != 0 ? -1 : 0;
    runtime->secondary_focus_flag = runtime->secondary_focus_target != 0 ? -1 : 0;

    if (runtime->body_variant_selector < CREATURES_MAX_BODY_VARIANT_STAGE &&
        runtime->enabled_growth_stages[runtime->body_variant_selector] != 0) {
        runtime->body_variant_selector++;
        if (runtime->body_variant_selector < CREATURES_MAX_BODY_VARIANT_STAGE) {
            if (ops->refresh_body_assets != NULL) {
                ops->refresh_body_assets(ops->ctx);
            }
        } else if (ops->finalize_growth != NULL) {
            ops->finalize_growth(ops->ctx);
        }
    }

    if (runtime->force_finalize_growth != 0 && ops->finalize_growth != NULL) {
        ops->finalize_growth(ops->ctx);
    }
}

static int creatures_imported_creature_duplicate_count(
    const CreaturesImportedCreatureRuntime *runtime, const CreaturesImportedCreatureOps *ops) {
    if (runtime == NULL || ops == NULL || ops->count_matching_identity == NULL) {
        return 0;
    }
    return ops->count_matching_identity(runtime->identity_token, ops->ctx);
}

/*
 * Derived from Creatures.exe / FUN_004230c0 (004230c0).
 * The original clones an exported genome document, regenerates its identity when another live or
 * serialized creature already uses the same token, rebuilds the body assets for the current
 * variant stage, snaps the creature through the imported placement pass, and notifies the global
 * event path that a live creature body has changed.
 */
bool creatures_creature_rebuild_from_export_genome(CreaturesImportedCreatureRuntime *runtime,
    const void *source_export, const CreaturesImportedCreatureOps *ops) {
    void *genome_export;

    if (runtime == NULL || ops == NULL || ops->load_genome_export == NULL ||
        ops->prepare_genome_export == NULL || ops->rebuild_body_assets == NULL ||
        ops->release_genome_export == NULL || ops->refresh_bounds == NULL ||
        ops->place_in_world == NULL || ops->notify_runtime_change == NULL ||
        ops->post_global_event == NULL || ops->flush_global_events == NULL) {
        return false;
    }

    genome_export = ops->load_genome_export(source_export, ops->ctx);
    if (genome_export == NULL) {
        return false;
    }

    if (creatures_imported_creature_duplicate_count(runtime, ops) != 0 &&
        ops->regenerate_identity != NULL && ops->read_identity != NULL) {
        ops->regenerate_identity(genome_export, ops->ctx);
        runtime->identity_token = ops->read_identity(genome_export, ops->ctx);
    }

    ops->prepare_genome_export(genome_export, ops->ctx);
    ops->rebuild_body_assets(genome_export, runtime->body_variant_selector, ops->ctx);
    ops->release_genome_export(genome_export, 1, ops->ctx);

    runtime->activity_state = 2;
    ops->refresh_bounds(runtime, ops->ctx);
    ops->place_in_world(
        runtime, CREATURES_IMPORTED_CREATURE_WORLD_X, CREATURES_IMPORTED_CREATURE_WORLD_Y, ops->ctx);
    runtime->activity_state = 0;
    ops->refresh_bounds(runtime, ops->ctx);
    ops->notify_runtime_change(runtime, 1, ops->ctx);
    ops->post_global_event(3, 1, 1, ops->ctx);
    ops->flush_global_events(ops->ctx);
    return true;
}
