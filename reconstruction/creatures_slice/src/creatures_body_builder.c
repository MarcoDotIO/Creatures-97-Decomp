#include "creatures_slice.h"

#include <stdbool.h>
#include <string.h>

static bool creatures_body_builder_ops_are_valid(const CreaturesBodyBuilderOps *ops) {
    return ops != NULL && ops->resolver_ops != NULL && ops->slot_frame_cache_ops != NULL &&
        ops->body_frame_cache_ops != NULL && ops->palette_rgb != NULL &&
        ops->image_buffer != NULL && ops->lookup_text != NULL &&
        ops->render_depth_participants != NULL && ops->read_render_depth != NULL &&
        ops->next_random != NULL;
}

static uint32_t creatures_body_builder_encode_body_id(
    const CreaturesGeneCursor *cursor, const CreaturesBodyAssemblyRecipe *recipe) {
    return (((uint32_t)cursor->sex | 0x00040000u) << 8) |
        ((uint32_t)(recipe->body_variant_group_base + 1) << 16);
}

/*
 * Derived from the higher-level body-assembly orchestration in Creatures.exe /
 * FUN_0040f922 (0040f922). The original clears the temporary sprite cache, releases the current
 * assembled graph, reparses the active genome recipe, rebuilds the packed body-bank image,
 * reacquires the finished frame set through the normal cache path, chooses a unique render-depth
 * base, reconstructs the sprite graph, and reapplies the stored 15-byte posture string.
 */
bool creatures_body_builder_rebuild_from_genome(CreaturesBodyBuilderRuntime *runtime,
    CreaturesGeneCursor *cursor, int group_digit_selector, int column_digit_limit,
    const CreaturesBodyBuilderOps *ops) {
    CreaturesBodyAssemblyRecipe recipe;
    CreaturesBodySpriteBankBuildResult bank_result;
    CreaturesFrameSet *body_frame_set;

    if (runtime == NULL || cursor == NULL || !creatures_body_builder_ops_are_valid(ops)) {
        return false;
    }

    if (ops->sprite_file_cache != NULL) {
        creatures_sprite_file_cache_flush(
            ops->sprite_file_cache, ops->release_sprite_file, ops->sprite_file_ctx);
    }
    creatures_body_builder_release_assets(
        &runtime->layout, &runtime->owned_frame_set, ops->release_ops);
    memset(&runtime->sprite_storage, 0, sizeof(runtime->sprite_storage));
    memset(&runtime->table_storage, 0, sizeof(runtime->table_storage));

    memset(&recipe, 0, sizeof(recipe));
    if (!creatures_body_assembly_parse_recipe(cursor, &recipe)) {
        return false;
    }

    memset(&bank_result, 0, sizeof(bank_result));
    if (!creatures_body_sprite_bank_build(&recipe, group_digit_selector, column_digit_limit,
            ops->resolver_ops, ops->slot_frame_cache_ops, ops->palette_rgb, ops->image_buffer,
            ops->image_buffer_size, &bank_result)) {
        return false;
    }

    if (ops->publish_body_bank_image != NULL &&
        !ops->publish_body_bank_image(
            cursor->genome_token, ops->image_buffer, bank_result.image_size, ops->publish_ctx)) {
        return false;
    }

    body_frame_set = creatures_frame_cache_acquire(cursor->genome_token, 0,
        (int)recipe.total_frame_entries, 0, ops->body_frame_cache_ops);
    if (body_frame_set == NULL || body_frame_set->entries == NULL ||
        body_frame_set->entry_count != (int)recipe.total_frame_entries) {
        if (body_frame_set != NULL) {
            creatures_frame_set_release(body_frame_set);
        }
        return false;
    }

    runtime->owned_frame_set = body_frame_set;
    runtime->assembled_body_id = creatures_body_builder_encode_body_id(cursor, &recipe);
    runtime->body_gene_primary_value = recipe.body_gene_primary_value;
    runtime->body_gene_secondary_value = recipe.body_gene_secondary_value;
    runtime->render_depth_base = creatures_choose_unique_render_depth_base(
        ops->render_depth_self, ops->render_depth_participants,
        ops->render_depth_participant_count, ops->read_render_depth, ops->next_random,
        ops->render_depth_ctx);
    runtime->last_recipe = recipe;
    runtime->last_bank_result = bank_result;

    if (!creatures_body_layout_load_construct_and_apply_pose_string(&runtime->layout,
            &runtime->sprite_storage, &runtime->table_storage, runtime->owned_frame_set,
            runtime->render_depth_base, &runtime->last_recipe, &runtime->last_bank_result,
            group_digit_selector, column_digit_limit, ops->resolver_ops, ops->lookup_text,
            ops->lookup_ctx, runtime->layout.pose_string)) {
        creatures_body_builder_release_assets(
            &runtime->layout, &runtime->owned_frame_set, ops->release_ops);
        return false;
    }

    return true;
}
