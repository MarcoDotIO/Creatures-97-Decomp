#include "creatures_world_source.h"

#include <string.h>

bool creatures_world_source_parse_header(
    const uint8_t *data, size_t data_size, CreaturesWorldSourceHeader *out_header) {
    CreaturesArchiveCursor archive;

    if (data == NULL || out_header == NULL) {
        return false;
    }

    memset(out_header, 0, sizeof(*out_header));
    archive.cursor = (uint8_t *)data;
    archive.end = (uint8_t *)data + data_size;
    archive.ensure_bytes = NULL;
    archive.ctx = NULL;

    if (!creatures_mfc_archive_read_new_class_header(&archive, &out_header->map_class_header) ||
        !creatures_archive_read_u32(&archive, &out_header->map_state_primary) ||
        !creatures_archive_read_u32(&archive, &out_header->map_state_secondary) ||
        !creatures_mfc_archive_read_new_class_header(&archive, &out_header->gallery_class_header) ||
        !creatures_archive_read_u32(&archive, &out_header->gallery_entry_count) ||
        !creatures_mfc_archive_read_fixed_string(
            &archive, 8, out_header->gallery_name, sizeof(out_header->gallery_name)) ||
        !creatures_archive_read_u32(&archive, &out_header->gallery_plane_count) ||
        !creatures_archive_read_bytes(&archive, out_header->gallery_descriptor_prefix,
            sizeof(out_header->gallery_descriptor_prefix))) {
        return false;
    }

    out_header->bytes_consumed = (size_t)(archive.cursor - data);
    creatures_mfc_archive_find_next_new_class_header(
        data, data_size, out_header->bytes_consumed, &out_header->next_class_header_offset,
        &out_header->next_class_header);
    return true;
}
