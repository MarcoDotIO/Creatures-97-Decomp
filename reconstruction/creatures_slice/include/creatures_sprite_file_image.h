#ifndef CREATURES_SPRITE_FILE_IMAGE_H
#define CREATURES_SPRITE_FILE_IMAGE_H

#include "creatures_common.h"

typedef struct CreaturesSpriteFileDirectoryEntry {
    uint32_t data_offset;
    uint16_t width;
    uint16_t height;
} CreaturesSpriteFileDirectoryEntry;

typedef struct CreaturesSpriteFileWriter {
    uint16_t frame_count;
    size_t header_size;
    uint8_t *buffer;
    size_t buffer_size;
    size_t payload_write_offset;
} CreaturesSpriteFileWriter;

size_t creatures_sprite_file_image_size(uint16_t frame_count, size_t total_payload_size);
bool creatures_sprite_file_writer_init(CreaturesSpriteFileWriter *writer,
    uint16_t frame_count, uint8_t *buffer, size_t buffer_size);
bool creatures_sprite_file_writer_append_frame(CreaturesSpriteFileWriter *writer, size_t frame_index,
    uint16_t width, uint16_t height, const uint8_t *pixels, size_t pixel_count);
void creatures_sprite_file_writer_finalize(CreaturesSpriteFileWriter *writer);

#endif
