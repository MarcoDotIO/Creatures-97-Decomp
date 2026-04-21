#ifndef CREATURES_WORLD_SOURCE_H
#define CREATURES_WORLD_SOURCE_H

#include "creatures_mfc_archive.h"

typedef struct CreaturesWorldSourceHeader {
    CreaturesMfcArchiveClassHeader map_class_header;
    uint32_t map_state_primary;
    uint32_t map_state_secondary;
    CreaturesMfcArchiveClassHeader gallery_class_header;
    uint32_t gallery_entry_count;
    char gallery_name[9];
    uint32_t gallery_plane_count;
    uint8_t gallery_descriptor_prefix[16];
    CreaturesMfcArchiveClassHeader next_class_header;
    size_t next_class_header_offset;
    size_t bytes_consumed;
} CreaturesWorldSourceHeader;

bool creatures_world_source_parse_header(
    const uint8_t *data, size_t data_size, CreaturesWorldSourceHeader *out_header);

#endif
