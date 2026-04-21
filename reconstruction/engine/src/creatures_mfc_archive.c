#include "creatures_mfc_archive.h"

#include <ctype.h>
#include <string.h>

static bool creatures_mfc_archive_class_name_is_printable(
    const CreaturesMfcArchiveClassHeader *header) {
    size_t index;

    if (header == NULL || header->class_name_length == 0 ||
        header->class_name_length >= CREATURES_MFC_CLASS_NAME_CAPACITY) {
        return false;
    }

    for (index = 0; index < header->class_name_length; index++) {
        unsigned char ch;

        ch = (unsigned char)header->class_name[index];
        if (!isalnum(ch) && ch != '_' && ch != ':' && ch != ' ') {
            return false;
        }
    }

    return true;
}

bool creatures_mfc_archive_read_count(CreaturesArchiveCursor *archive, uint32_t *out_count) {
    uint8_t encoded_count;
    uint16_t extended_count;

    if (out_count == NULL || !creatures_archive_read_u8(archive, &encoded_count)) {
        return false;
    }

    if (encoded_count < 0xffu) {
        *out_count = encoded_count;
        return true;
    }

    if (!creatures_archive_read_u16(archive, &extended_count)) {
        return false;
    }

    if (extended_count != 0xffffu) {
        *out_count = extended_count;
        return true;
    }

    return creatures_archive_read_u32(archive, out_count);
}

bool creatures_mfc_archive_read_new_class_header(
    CreaturesArchiveCursor *archive, CreaturesMfcArchiveClassHeader *out_header) {
    uint16_t tag;
    uint16_t class_name_length;

    if (out_header == NULL) {
        return false;
    }

    memset(out_header, 0, sizeof(*out_header));
    if (!creatures_archive_read_u16(archive, &tag) ||
        !creatures_archive_read_u16(archive, &out_header->schema) ||
        !creatures_archive_read_u16(archive, &class_name_length)) {
        return false;
    }
    if (tag != CREATURES_MFC_NEW_CLASS_TAG || class_name_length == 0 ||
        class_name_length >= CREATURES_MFC_CLASS_NAME_CAPACITY) {
        return false;
    }
    if (!creatures_archive_read_bytes(archive, out_header->class_name, class_name_length)) {
        return false;
    }

    out_header->class_name_length = class_name_length;
    out_header->class_name[class_name_length] = '\0';
    return true;
}

bool creatures_mfc_archive_read_fixed_string(CreaturesArchiveCursor *archive, size_t byte_count,
    char *out_text, size_t out_size) {
    uint8_t raw_bytes[CREATURES_MFC_CLASS_NAME_CAPACITY];
    size_t copy_length;

    if (out_text == NULL || out_size == 0 || byte_count >= sizeof(raw_bytes) ||
        !creatures_archive_read_bytes(archive, raw_bytes, byte_count)) {
        return false;
    }

    copy_length = 0;
    while (copy_length < byte_count && copy_length + 1 < out_size && raw_bytes[copy_length] != '\0') {
        out_text[copy_length] = (char)raw_bytes[copy_length];
        copy_length++;
    }
    out_text[copy_length < out_size ? copy_length : out_size - 1] = '\0';
    return true;
}

bool creatures_mfc_archive_read_cstring(
    CreaturesArchiveCursor *archive, char *out_text, size_t out_size) {
    uint32_t byte_count;
    char raw_text[CREATURES_MFC_CLASS_NAME_CAPACITY];
    size_t copy_length;

    if (out_text == NULL || out_size == 0 ||
        !creatures_mfc_archive_read_count(archive, &byte_count) ||
        byte_count >= CREATURES_MFC_CLASS_NAME_CAPACITY) {
        return false;
    }
    if (!creatures_archive_read_bytes(archive, raw_text, byte_count)) {
        return false;
    }

    copy_length = byte_count < out_size - 1 ? byte_count : out_size - 1;
    memcpy(out_text, raw_text, copy_length);
    out_text[copy_length] = '\0';
    return true;
}

bool creatures_mfc_archive_find_next_new_class_header(const uint8_t *data, size_t data_size,
    size_t start_offset, size_t *out_offset, CreaturesMfcArchiveClassHeader *out_header) {
    size_t offset;

    if (data == NULL || out_offset == NULL || out_header == NULL || start_offset >= data_size) {
        return false;
    }

    for (offset = start_offset; offset + 6 < data_size; offset++) {
        CreaturesArchiveCursor archive;
        CreaturesMfcArchiveClassHeader header;

        archive.cursor = (uint8_t *)data + offset;
        archive.end = (uint8_t *)data + data_size;
        archive.ensure_bytes = NULL;
        archive.ctx = NULL;
        if (!creatures_mfc_archive_read_new_class_header(&archive, &header) ||
            !creatures_mfc_archive_class_name_is_printable(&header)) {
            continue;
        }

        *out_offset = offset;
        *out_header = header;
        return true;
    }

    return false;
}
