#include "creatures_slice.h"

#include <stddef.h>
#include <string.h>

static void creatures_write_le16(uint8_t *dst, uint16_t value) {
    dst[0] = (uint8_t)(value & 0xff);
    dst[1] = (uint8_t)((value >> 8) & 0xff);
}

static void creatures_write_le32(uint8_t *dst, uint32_t value) {
    dst[0] = (uint8_t)(value & 0xff);
    dst[1] = (uint8_t)((value >> 8) & 0xff);
    dst[2] = (uint8_t)((value >> 16) & 0xff);
    dst[3] = (uint8_t)((value >> 24) & 0xff);
}

/*
 * Derived from the temporary `SPR` image size arithmetic in Creatures.exe / FUN_0040f900
 * (0040f900). The original reserves two bytes for the frame count, an inner two-byte header pad,
 * and one 8-byte directory entry per frame before appending the packed pixel payload.
 */
size_t creatures_sprite_file_image_size(uint16_t frame_count, size_t total_payload_size) {
    return 2u + ((size_t)frame_count * sizeof(CreaturesSpriteFileDirectoryEntry)) + 2u +
        total_payload_size;
}

/*
 * Derived from the placeholder header write in Creatures.exe / FUN_0040f900 (0040f900).
 * The original zeroes the frame-count field and the inner header/directory block before writing
 * pixel payloads, then revisits the start of the file to write the final frame count and filled
 * directory entries.
 */
bool creatures_sprite_file_writer_init(CreaturesSpriteFileWriter *writer,
    uint16_t frame_count, uint8_t *buffer, size_t buffer_size) {
    size_t header_size;
    size_t minimum_size;

    if (writer == NULL || buffer == NULL) {
        return false;
    }

    header_size = ((size_t)frame_count * sizeof(CreaturesSpriteFileDirectoryEntry)) + 2u;
    minimum_size = 2u + header_size;
    if (buffer_size < minimum_size) {
        return false;
    }

    writer->frame_count = frame_count;
    writer->header_size = header_size;
    writer->buffer = buffer;
    writer->buffer_size = buffer_size;
    writer->payload_write_offset = 2u + header_size;
    memset(buffer, 0, minimum_size);
    return true;
}

/*
 * Derived from the directory-entry and payload writes in Creatures.exe / FUN_0040f900
 * (0040f900). The original records the pixel-data offset relative to the post-count blob base,
 * writes width and height as 16-bit values, and appends the frame pixels sequentially.
 */
bool creatures_sprite_file_writer_append_frame(CreaturesSpriteFileWriter *writer, size_t frame_index,
    uint16_t width, uint16_t height, const uint8_t *pixels, size_t pixel_count) {
    size_t directory_offset;
    uint32_t relative_payload_offset;

    if (writer == NULL || writer->buffer == NULL || frame_index >= writer->frame_count ||
        (pixel_count != 0 && pixels == NULL)) {
        return false;
    }
    if (writer->payload_write_offset + pixel_count > writer->buffer_size) {
        return false;
    }

    directory_offset = 4u + (frame_index * sizeof(CreaturesSpriteFileDirectoryEntry));
    relative_payload_offset = (uint32_t)(writer->payload_write_offset - 2u);
    creatures_write_le32(writer->buffer + directory_offset, relative_payload_offset);
    creatures_write_le16(writer->buffer + directory_offset + 4u, width);
    creatures_write_le16(writer->buffer + directory_offset + 6u, height);
    if (pixel_count != 0) {
        memcpy(writer->buffer + writer->payload_write_offset, pixels, pixel_count);
        writer->payload_write_offset += pixel_count;
    }
    return true;
}

/*
 * Derived from the final seek-and-rewrite pass in Creatures.exe / FUN_0040f900 (0040f900).
 * After all payload bytes are appended, the original writes the final 16-bit frame count into the
 * leading two bytes of the generated `SPR` file.
 */
void creatures_sprite_file_writer_finalize(CreaturesSpriteFileWriter *writer) {
    if (writer == NULL || writer->buffer == NULL) {
        return;
    }

    creatures_write_le16(writer->buffer, writer->frame_count);
}
