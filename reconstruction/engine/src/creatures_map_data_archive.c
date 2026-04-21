#include "creatures_map_data_archive.h"

#include <string.h>

bool creatures_map_data_archive_load(CreaturesMapDataArchive *map_data, void *archive_ctx,
    const CreaturesMapDataArchiveLoadOps *ops) {
    uint32_t room_index;
    uint32_t boundary_index;
    uint32_t object_index;

    if (map_data == NULL || ops == NULL || ops->read_u32 == NULL || ops->read_bytes == NULL ||
        ops->load_gallery == NULL || ops->load_embedded_object == NULL) {
        return false;
    }

    memset(map_data, 0, sizeof(*map_data));
    if (ops->read_u32(archive_ctx, &map_data->state_primary, ops->ctx) != 0 ||
        ops->read_u32(archive_ctx, &map_data->state_secondary, ops->ctx) != 0 ||
        ops->load_gallery(archive_ctx, &map_data->background_gallery, ops->ctx) != 0 ||
        ops->read_u32(archive_ctx, &map_data->room_count, ops->ctx) != 0) {
        return false;
    }
    if (map_data->room_count > CREATURES_MAP_DATA_ROOM_CAPACITY) {
        return false;
    }

    for (room_index = 0; room_index < map_data->room_count; room_index++) {
        CreaturesMapDataRoomRecord *room_record;

        room_record = &map_data->room_records[room_index];
        if (ops->read_bytes(
                archive_ctx, room_record->packed_room_bounds, sizeof(room_record->packed_room_bounds),
                ops->ctx) != 0 ||
            ops->read_u32(archive_ctx, &room_record->trailing_value, ops->ctx) != 0) {
            return false;
        }
    }

    for (boundary_index = 0; boundary_index < CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY;
         boundary_index++) {
        if (ops->read_u32(
                archive_ctx, &map_data->room_scanline_boundaries[boundary_index], ops->ctx) != 0) {
            return false;
        }
    }

    for (object_index = 0; object_index < CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY;
         object_index++) {
        if (ops->load_embedded_object(
                archive_ctx, &map_data->embedded_objects[object_index], ops->ctx) != 0) {
            return false;
        }
    }

    return true;
}

bool creatures_map_data_archive_save(const CreaturesMapDataArchive *map_data, void *archive_ctx,
    const CreaturesMapDataArchiveSaveOps *ops) {
    uint32_t room_index;
    uint32_t boundary_index;
    uint32_t object_index;

    if (map_data == NULL || ops == NULL || ops->write_u32 == NULL || ops->write_bytes == NULL ||
        ops->save_gallery == NULL || ops->save_embedded_object == NULL ||
        map_data->room_count > CREATURES_MAP_DATA_ROOM_CAPACITY) {
        return false;
    }

    if (ops->write_u32(archive_ctx, map_data->state_primary, ops->ctx) != 0 ||
        ops->write_u32(archive_ctx, map_data->state_secondary, ops->ctx) != 0 ||
        ops->save_gallery(archive_ctx, map_data->background_gallery, ops->ctx) != 0 ||
        ops->write_u32(archive_ctx, map_data->room_count, ops->ctx) != 0) {
        return false;
    }

    for (room_index = 0; room_index < map_data->room_count; room_index++) {
        const CreaturesMapDataRoomRecord *room_record;

        room_record = &map_data->room_records[room_index];
        if (ops->write_bytes(
                archive_ctx, room_record->packed_room_bounds, sizeof(room_record->packed_room_bounds),
                ops->ctx) != 0 ||
            ops->write_u32(archive_ctx, room_record->trailing_value, ops->ctx) != 0) {
            return false;
        }
    }

    for (boundary_index = 0; boundary_index < CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY;
         boundary_index++) {
        if (ops->write_u32(
                archive_ctx, map_data->room_scanline_boundaries[boundary_index], ops->ctx) != 0) {
            return false;
        }
    }

    for (object_index = 0; object_index < CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY;
         object_index++) {
        if (ops->save_embedded_object(
                archive_ctx, &map_data->embedded_objects[object_index], ops->ctx) != 0) {
            return false;
        }
    }

    return true;
}
