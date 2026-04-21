#ifndef CREATURES_WORLD_FILES_H
#define CREATURES_WORLD_FILES_H

#include "creatures_common.h"

typedef int (*CreaturesWorldFileVisitorProc)(const char *entry_name, void *visitor_ctx);
typedef int (*CreaturesWorldEnumerateGlobProc)(const char *search_glob,
    CreaturesWorldFileVisitorProc visitor, void *visitor_ctx, void *ctx);
typedef int (*CreaturesWorldDeletePathProc)(const char *path, void *ctx);
typedef int (*CreaturesWorldCopyPathProc)(
    const char *source_path, const char *destination_path, void *ctx);
typedef int (*CreaturesWorldEnsureDirectoryProc)(const char *path, void *ctx);

typedef struct CreaturesWorldFilesystemOps {
    CreaturesWorldEnumerateGlobProc enumerate_glob;
    CreaturesWorldDeletePathProc delete_path;
    CreaturesWorldCopyPathProc copy_path;
    CreaturesWorldEnsureDirectoryProc ensure_directory;
    void *ctx;
} CreaturesWorldFilesystemOps;

size_t creatures_world_directory_delete_mask(
    const char *directory_path, const char *pattern, const CreaturesWorldFilesystemOps *ops);
size_t creatures_world_directory_copy_mask(const char *source_directory,
    const char *destination_directory, const char *pattern,
    const CreaturesWorldFilesystemOps *ops);
bool creatures_world_stage_temp_backup(const char *source_directory,
    const char *temp_backup_directory, const char *const *extra_patterns,
    size_t extra_pattern_count, const CreaturesWorldFilesystemOps *ops);
bool creatures_world_restore_backup_to_temp(const char *temp_backup_directory,
    const char *backup_directory, const CreaturesWorldFilesystemOps *ops);

#endif
