#include "creatures_archive_stream.h"

#include <string.h>

static bool creatures_archive_require_bytes(CreaturesArchiveCursor *archive, size_t byte_count) {
    size_t available_bytes;
    size_t missing_bytes;

    if (archive == NULL || archive->cursor == NULL || archive->end == NULL) {
        return false;
    }

    available_bytes = (size_t)(archive->end - archive->cursor);
    if (available_bytes < byte_count) {
        missing_bytes = byte_count - available_bytes;
        if (archive->ensure_bytes == NULL ||
            archive->ensure_bytes(archive, missing_bytes, archive->ctx) != 0) {
            return false;
        }
    }

    return (size_t)(archive->end - archive->cursor) >= byte_count;
}

bool creatures_archive_read_u8(CreaturesArchiveCursor *archive, uint8_t *out_value) {
    if (out_value == NULL || !creatures_archive_require_bytes(archive, sizeof(*out_value))) {
        return false;
    }

    *out_value = *archive->cursor;
    archive->cursor += sizeof(*out_value);
    return true;
}

bool creatures_archive_read_u16(CreaturesArchiveCursor *archive, uint16_t *out_value) {
    uint8_t bytes[sizeof(*out_value)];

    if (out_value == NULL || !creatures_archive_require_bytes(archive, sizeof(*out_value))) {
        return false;
    }

    memcpy(bytes, archive->cursor, sizeof(bytes));
    *out_value = (uint16_t)((uint16_t)bytes[0] | ((uint16_t)bytes[1] << 8));
    archive->cursor += sizeof(*out_value);
    return true;
}

bool creatures_archive_read_u32(CreaturesArchiveCursor *archive, uint32_t *out_value) {
    uint8_t bytes[sizeof(*out_value)];

    if (out_value == NULL || !creatures_archive_require_bytes(archive, sizeof(*out_value))) {
        return false;
    }

    memcpy(bytes, archive->cursor, sizeof(bytes));
    *out_value = (uint32_t)bytes[0] | ((uint32_t)bytes[1] << 8) |
        ((uint32_t)bytes[2] << 16) | ((uint32_t)bytes[3] << 24);
    archive->cursor += sizeof(*out_value);
    return true;
}

bool creatures_archive_read_bytes(
    CreaturesArchiveCursor *archive, void *out_bytes, size_t byte_count) {
    if (out_bytes == NULL || !creatures_archive_require_bytes(archive, byte_count)) {
        return false;
    }

    memcpy(out_bytes, archive->cursor, byte_count);
    archive->cursor += byte_count;
    return true;
}

bool creatures_archive_skip(CreaturesArchiveCursor *archive, size_t byte_count) {
    if (!creatures_archive_require_bytes(archive, byte_count)) {
        return false;
    }

    archive->cursor += byte_count;
    return true;
}
