#include "creatures_slice.h"

#include <string.h>

static const char k_creatures_male_voice_asset[] = "male.vce";
static const char k_creatures_female_voice_asset[] = "female.vce";
static const char k_creatures_grendel_voice_asset[] = "grendel.vce";

/*
 * Derived from the voice-selection tail in Creatures.exe / FUN_00422db0 (00422db0).
 * Standard Norn/Ettin-style bodies use male or female voices depending on the recovered sex byte;
 * other creature flag families fall back to the shared grendel voice set.
 */
const char *creatures_creature_select_voice_asset(uint32_t creature_flags, uint8_t sex_selector) {
    if ((creature_flags & 0xffff0000u) == 0x04010000u) {
        if (sex_selector == 1) {
            return k_creatures_male_voice_asset;
        }
        return k_creatures_female_voice_asset;
    }
    return k_creatures_grendel_voice_asset;
}

/*
 * Derived from Creatures.exe / FUN_00422db0 (00422db0).
 * The original reconstructs a short genome/body state block, optionally primes the default seed
 * helper for non-variant bodies, rebuilds the body assets from that state, applies the resulting
 * data back onto the creature runtime, and then selects the final voice token.
 */
bool creatures_creature_refresh_body_assets(CreaturesCreatureBodyRefreshRuntime *runtime,
    const CreaturesCreatureBodyRefreshOps *ops) {
    CreaturesGenomeState genome_state;

    if (runtime == NULL || ops == NULL || ops->init_genome_state == NULL ||
        ops->build_body_from_genome == NULL || ops->apply_appearance_from_genome == NULL ||
        ops->apply_runtime_from_genome == NULL || ops->assign_voice_asset == NULL) {
        return false;
    }

    memset(&genome_state, 0, sizeof(genome_state));
    if (!ops->init_genome_state(&genome_state, runtime->species_token, runtime->sex_selector,
            runtime->body_variant_selector, ops->ctx)) {
        return false;
    }

    if (runtime->body_variant_selector == 0 && ops->prepare_default_seed != NULL) {
        ops->prepare_default_seed(runtime->optional_seed_target, &genome_state, ops->ctx);
    }

    ops->build_body_from_genome(&genome_state, runtime->body_variant_selector, ops->ctx);
    ops->apply_appearance_from_genome(runtime->appearance_target, &genome_state, ops->ctx);
    ops->apply_runtime_from_genome(runtime->runtime_target, &genome_state, ops->ctx);
    ops->assign_voice_asset(runtime->voice_target,
        creatures_creature_select_voice_asset(runtime->creature_flags, runtime->sex_selector),
        ops->ctx);
    return true;
}
