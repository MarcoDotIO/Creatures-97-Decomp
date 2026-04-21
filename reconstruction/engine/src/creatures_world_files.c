#include "creatures_world_files.h"

#include <stddef.h>
#include <string.h>

typedef struct CreaturesWorldDeleteVisitorState {
    const CreaturesWorldFilesystemOps *ops;
    const char *directory_path;
    size_t deleted_count;
} CreaturesWorldDeleteVisitorState;

typedef struct CreaturesWorldCopyVisitorState {
    const CreaturesWorldFilesystemOps *ops;
    const char *source_directory;
    const char *destination_directory;
    size_t copied_count;
} CreaturesWorldCopyVisitorState;

static bool creatures_world_files_copy_string(char *out, size_t out_size, const char *value) {
    size_t length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    length = strlen(value);
    if (length >= out_size) {
        return false;
    }

    memcpy(out, value, length + 1);
    return true;
}

static bool creatures_world_files_join_windows_path(
    char *out, size_t out_size, const char *left, const char *right) {
    size_t left_length;
    size_t right_length;
    size_t position;

    if (out == NULL || out_size == 0 || left == NULL || right == NULL) {
        return false;
    }

    left_length = strlen(left);
    right_length = strlen(right);
    if (left_length == 0) {
        return creatures_world_files_copy_string(out, out_size, right);
    }

    position = left_length;
    if (left_length + right_length + 2 > out_size) {
        return false;
    }

    memcpy(out, left, left_length);
    if (left[left_length - 1] != '\\' && left[left_length - 1] != '/') {
        out[position++] = '\\';
    }
    memcpy(out + position, right, right_length + 1);
    return true;
}

static int creatures_world_delete_visitor(const char *entry_name, void *visitor_ctx) {
    CreaturesWorldDeleteVisitorState *state;
    char full_path[REMOVE_MAX_PATH];

    state = (CreaturesWorldDeleteVisitorState *)visitor_ctx;
    if (state == NULL || entry_name == NULL || state->ops == NULL ||
        state->ops->delete_path == NULL) {
        return 0;
    }

    if (!creatures_world_files_join_windows_path(
            full_path, sizeof(full_path), state->directory_path, entry_name)) {
        return 0;
    }

    if (state->ops->delete_path(full_path, state->ops->ctx) == 0) {
        state->deleted_count++;
    }
    return 0;
}

static int creatures_world_copy_visitor(const char *entry_name, void *visitor_ctx) {
    CreaturesWorldCopyVisitorState *state;
    char source_path[REMOVE_MAX_PATH];
    char destination_path[REMOVE_MAX_PATH];

    state = (CreaturesWorldCopyVisitorState *)visitor_ctx;
    if (state == NULL || entry_name == NULL || state->ops == NULL ||
        state->ops->copy_path == NULL) {
        return 0;
    }

    if (!creatures_world_files_join_windows_path(
            source_path, sizeof(source_path), state->source_directory, entry_name) ||
        !creatures_world_files_join_windows_path(destination_path, sizeof(destination_path),
            state->destination_directory, entry_name)) {
        return 0;
    }

    if (state->ops->copy_path(source_path, destination_path, state->ops->ctx) == 0) {
        state->copied_count++;
    }
    return 0;
}

size_t creatures_world_directory_delete_mask(
    const char *directory_path, const char *pattern, const CreaturesWorldFilesystemOps *ops) {
    CreaturesWorldDeleteVisitorState visitor_state;
    char search_glob[REMOVE_MAX_PATH];

    if (directory_path == NULL || pattern == NULL || ops == NULL || ops->enumerate_glob == NULL ||
        ops->delete_path == NULL) {
        return 0;
    }

    if (!creatures_world_files_join_windows_path(
            search_glob, sizeof(search_glob), directory_path, pattern)) {
        return 0;
    }

    visitor_state.ops = ops;
    visitor_state.directory_path = directory_path;
    visitor_state.deleted_count = 0;
    ops->enumerate_glob(search_glob, creatures_world_delete_visitor, &visitor_state, ops->ctx);
    return visitor_state.deleted_count;
}

size_t creatures_world_directory_copy_mask(const char *source_directory,
    const char *destination_directory, const char *pattern,
    const CreaturesWorldFilesystemOps *ops) {
    CreaturesWorldCopyVisitorState visitor_state;
    char search_glob[REMOVE_MAX_PATH];

    if (source_directory == NULL || destination_directory == NULL || pattern == NULL ||
        ops == NULL || ops->enumerate_glob == NULL || ops->copy_path == NULL) {
        return 0;
    }

    if (!creatures_world_files_join_windows_path(
            search_glob, sizeof(search_glob), source_directory, pattern)) {
        return 0;
    }

    visitor_state.ops = ops;
    visitor_state.source_directory = source_directory;
    visitor_state.destination_directory = destination_directory;
    visitor_state.copied_count = 0;
    ops->enumerate_glob(search_glob, creatures_world_copy_visitor, &visitor_state, ops->ctx);
    return visitor_state.copied_count;
}

bool creatures_world_stage_temp_backup(const char *source_directory,
    const char *temp_backup_directory, const char *const *extra_patterns,
    size_t extra_pattern_count, const CreaturesWorldFilesystemOps *ops) {
    size_t pattern_index;

    if (source_directory == NULL || temp_backup_directory == NULL || ops == NULL ||
        ops->ensure_directory == NULL) {
        return false;
    }

    if (ops->ensure_directory(temp_backup_directory, ops->ctx) != 0) {
        return false;
    }

    creatures_world_directory_delete_mask(temp_backup_directory, "World.sfc", ops);
    creatures_world_directory_delete_mask(temp_backup_directory, "*.spr", ops);
    creatures_world_directory_copy_mask(source_directory, temp_backup_directory, "World.sfc", ops);
    creatures_world_directory_copy_mask(source_directory, temp_backup_directory, "*.spr", ops);

    for (pattern_index = 0; pattern_index < extra_pattern_count; pattern_index++) {
        if (extra_patterns[pattern_index] == NULL || extra_patterns[pattern_index][0] == '\0') {
            continue;
        }
        creatures_world_directory_copy_mask(
            source_directory, temp_backup_directory, extra_patterns[pattern_index], ops);
    }

    return true;
}

bool creatures_world_restore_backup_to_temp(const char *temp_backup_directory,
    const char *backup_directory, const CreaturesWorldFilesystemOps *ops) {
    if (temp_backup_directory == NULL || backup_directory == NULL || ops == NULL ||
        ops->ensure_directory == NULL) {
        return false;
    }

    if (ops->ensure_directory(temp_backup_directory, ops->ctx) != 0 ||
        ops->ensure_directory(backup_directory, ops->ctx) != 0) {
        return false;
    }

    creatures_world_directory_delete_mask(temp_backup_directory, "World.sfc", ops);
    creatures_world_directory_delete_mask(temp_backup_directory, "*.spr", ops);
    creatures_world_directory_copy_mask(backup_directory, temp_backup_directory, "World.sfc", ops);
    creatures_world_directory_copy_mask(backup_directory, temp_backup_directory, "*.spr", ops);
    return true;
}
