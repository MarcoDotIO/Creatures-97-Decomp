#ifndef CREATURES_MAP_DATA_ARCHIVE_H
#define CREATURES_MAP_DATA_ARCHIVE_H

#include "creatures_common.h"

#define CREATURES_MAP_DATA_ROOM_CAPACITY 40u
#define CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY 0x105u
#define CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY 100u
#define CREATURES_MAP_DATA_EMBEDDED_OBJECT_SIZE 12u

typedef struct CreaturesMapDataRoomRecord {
    uint8_t packed_room_bounds[16];
    uint32_t trailing_value;
} CreaturesMapDataRoomRecord;

typedef struct CreaturesMapDataEmbeddedObjectSlot {
    uint8_t opaque_bytes[CREATURES_MAP_DATA_EMBEDDED_OBJECT_SIZE];
} CreaturesMapDataEmbeddedObjectSlot;

typedef struct CreaturesMapDataArchive {
    uint32_t state_primary;
    uint32_t state_secondary;
    void *background_gallery;
    uint32_t room_count;
    CreaturesMapDataRoomRecord room_records[CREATURES_MAP_DATA_ROOM_CAPACITY];
    uint32_t room_scanline_boundaries[CREATURES_MAP_DATA_BOUNDARY_TABLE_CAPACITY];
    CreaturesMapDataEmbeddedObjectSlot embedded_objects[CREATURES_MAP_DATA_EMBEDDED_OBJECT_CAPACITY];
} CreaturesMapDataArchive;

typedef int (*CreaturesMapDataReadU32Proc)(void *archive_ctx, uint32_t *out_value, void *ctx);
typedef int (*CreaturesMapDataWriteU32Proc)(void *archive_ctx, uint32_t value, void *ctx);
typedef int (*CreaturesMapDataReadBytesProc)(
    void *archive_ctx, void *out_bytes, size_t byte_count, void *ctx);
typedef int (*CreaturesMapDataWriteBytesProc)(
    void *archive_ctx, const void *bytes, size_t byte_count, void *ctx);
typedef int (*CreaturesMapDataLoadGalleryProc)(
    void *archive_ctx, void **gallery_slot, void *ctx);
typedef int (*CreaturesMapDataSaveGalleryProc)(
    void *archive_ctx, void *gallery_slot, void *ctx);
typedef int (*CreaturesMapDataLoadEmbeddedObjectProc)(
    void *archive_ctx, CreaturesMapDataEmbeddedObjectSlot *slot, void *ctx);
typedef int (*CreaturesMapDataSaveEmbeddedObjectProc)(
    void *archive_ctx, const CreaturesMapDataEmbeddedObjectSlot *slot, void *ctx);

typedef struct CreaturesMapDataArchiveLoadOps {
    CreaturesMapDataReadU32Proc read_u32;
    CreaturesMapDataReadBytesProc read_bytes;
    CreaturesMapDataLoadGalleryProc load_gallery;
    CreaturesMapDataLoadEmbeddedObjectProc load_embedded_object;
    void *ctx;
} CreaturesMapDataArchiveLoadOps;

typedef struct CreaturesMapDataArchiveSaveOps {
    CreaturesMapDataWriteU32Proc write_u32;
    CreaturesMapDataWriteBytesProc write_bytes;
    CreaturesMapDataSaveGalleryProc save_gallery;
    CreaturesMapDataSaveEmbeddedObjectProc save_embedded_object;
    void *ctx;
} CreaturesMapDataArchiveSaveOps;

bool creatures_map_data_archive_load(CreaturesMapDataArchive *map_data, void *archive_ctx,
    const CreaturesMapDataArchiveLoadOps *ops);
bool creatures_map_data_archive_save(const CreaturesMapDataArchive *map_data, void *archive_ctx,
    const CreaturesMapDataArchiveSaveOps *ops);

#endif
