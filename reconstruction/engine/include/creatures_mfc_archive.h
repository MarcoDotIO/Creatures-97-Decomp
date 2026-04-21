#ifndef CREATURES_MFC_ARCHIVE_H
#define CREATURES_MFC_ARCHIVE_H

#include "creatures_archive_stream.h"

#define CREATURES_MFC_NEW_CLASS_TAG 0xffffu
#define CREATURES_MFC_CLASS_NAME_CAPACITY 64

typedef struct CreaturesMfcArchiveClassHeader {
    uint16_t schema;
    uint16_t class_name_length;
    char class_name[CREATURES_MFC_CLASS_NAME_CAPACITY];
} CreaturesMfcArchiveClassHeader;

bool creatures_mfc_archive_read_count(CreaturesArchiveCursor *archive, uint32_t *out_count);
bool creatures_mfc_archive_read_new_class_header(
    CreaturesArchiveCursor *archive, CreaturesMfcArchiveClassHeader *out_header);
bool creatures_mfc_archive_read_fixed_string(CreaturesArchiveCursor *archive, size_t byte_count,
    char *out_text, size_t out_size);
bool creatures_mfc_archive_read_cstring(
    CreaturesArchiveCursor *archive, char *out_text, size_t out_size);
bool creatures_mfc_archive_find_next_new_class_header(const uint8_t *data, size_t data_size,
    size_t start_offset, size_t *out_offset, CreaturesMfcArchiveClassHeader *out_header);

#endif
