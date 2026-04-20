#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

static const char k_creatures_body_pair_suffix[4] = "att";
static const char k_creatures_body_quad_suffix[4] = "qad";
static const char k_creatures_body_data_directory[] = "Body data\\";
static const uint8_t k_creatures_required_quad_slots[CREATURES_BODY_SLOT_COUNT - 1] = {
    0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
};

/*
 * Derived from the anchor-table loading pass in Creatures.exe / FUN_0040f900 (0040f900).
 * After the temporary body bank has been constructed, the original resolves the root `ATT`
 * table for slot 1, then loads the `QAD` tables for each quad-chain slot that will be present
 * in the assembled body. Those anchors are passed directly into the fixed constructor topology.
 */
bool creatures_body_layout_load_and_construct_sprites(CreaturesBodyLayoutRuntime *layout,
    CreaturesBodySpriteStorage *sprite_storage, CreaturesBodyTableStorage *table_storage,
    CreaturesFrameSet *body_frame_set, int render_depth_base,
    const CreaturesBodyAssemblyRecipe *recipe,
    const CreaturesBodySpriteBankBuildResult *bank_result, int group_digit_selector,
    int column_digit_limit, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx) {
    const CreaturesBodyQuadTable *quad_tables[CREATURES_BODY_SLOT_COUNT];
    size_t slot_list_index;
    char resolved_path[REMOVE_MAX_PATH];

    if (layout == NULL || sprite_storage == NULL || table_storage == NULL ||
        body_frame_set == NULL || recipe == NULL || bank_result == NULL ||
        resolver_ops == NULL || lookup_text == NULL) {
        return false;
    }

    memset(table_storage, 0, sizeof(*table_storage));
    memset(quad_tables, 0, sizeof(quad_tables));
    if (!creatures_body_data_load_pair_table(1, recipe->body_variant_group_base,
            group_digit_selector, column_digit_limit, recipe->slot_variants[1],
            k_creatures_body_pair_suffix, k_creatures_body_data_directory, resolver_ops,
            lookup_text, lookup_ctx, &table_storage->root_anchors, resolved_path,
            sizeof(resolved_path))) {
        return false;
    }

    for (slot_list_index = 0; slot_list_index < sizeof(k_creatures_required_quad_slots);
         slot_list_index++) {
        uint8_t slot_index;

        slot_index = k_creatures_required_quad_slots[slot_list_index];
        if (slot_index >= CREATURES_BODY_BASE_SLOT_COUNT && !recipe->include_extended_slots) {
            continue;
        }

        if (!creatures_body_data_load_quad_table((int)slot_index,
                recipe->body_variant_group_base, group_digit_selector, column_digit_limit,
                recipe->slot_variants[slot_index], k_creatures_body_quad_suffix,
                k_creatures_body_data_directory, resolver_ops, lookup_text, lookup_ctx,
                &table_storage->quad_anchors[slot_index], resolved_path,
                sizeof(resolved_path))) {
            return false;
        }

        table_storage->quad_anchor_loaded[slot_index] = 1;
        quad_tables[slot_index] = &table_storage->quad_anchors[slot_index];
    }

    return creatures_body_layout_construct_sprites(layout, sprite_storage, body_frame_set,
        render_depth_base, bank_result, &table_storage->root_anchors, quad_tables);
}

/*
 * Derived from the final tail of Creatures.exe / FUN_0040f900 (0040f900).
 * After loading the anchor tables and constructing the sprite graph, the original immediately
 * applies the persisted 15-byte posture string stored in the owning body object.
 */
bool creatures_body_layout_load_construct_and_apply_pose_string(
    CreaturesBodyLayoutRuntime *layout, CreaturesBodySpriteStorage *sprite_storage,
    CreaturesBodyTableStorage *table_storage, CreaturesFrameSet *body_frame_set,
    int render_depth_base, const CreaturesBodyAssemblyRecipe *recipe,
    const CreaturesBodySpriteBankBuildResult *bank_result, int group_digit_selector,
    int column_digit_limit, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx,
    const char pose_string[15]) {
    if (pose_string == NULL ||
        !creatures_body_layout_load_and_construct_sprites(layout, sprite_storage, table_storage,
            body_frame_set, render_depth_base, recipe, bank_result, group_digit_selector,
            column_digit_limit, resolver_ops, lookup_text, lookup_ctx)) {
        return false;
    }

    creatures_body_layout_apply_pose_string(layout, pose_string);
    return true;
}
