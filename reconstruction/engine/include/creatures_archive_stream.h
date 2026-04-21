#ifndef CREATURES_ARCHIVE_STREAM_H
#define CREATURES_ARCHIVE_STREAM_H

#include "creatures_common.h"

struct CreaturesArchiveCursor;

typedef int (*CreaturesArchiveEnsureBytesProc)(
    struct CreaturesArchiveCursor *archive, size_t bytes_needed, void *ctx);

typedef struct CreaturesArchiveCursor {
    uint8_t *cursor;
    uint8_t *end;
    CreaturesArchiveEnsureBytesProc ensure_bytes;
    void *ctx;
} CreaturesArchiveCursor;

bool creatures_archive_read_u8(CreaturesArchiveCursor *archive, uint8_t *out_value);
bool creatures_archive_read_u16(CreaturesArchiveCursor *archive, uint16_t *out_value);
bool creatures_archive_read_u32(CreaturesArchiveCursor *archive, uint32_t *out_value);
bool creatures_archive_read_bytes(
    CreaturesArchiveCursor *archive, void *out_bytes, size_t byte_count);
bool creatures_archive_skip(CreaturesArchiveCursor *archive, size_t byte_count);

#endif
