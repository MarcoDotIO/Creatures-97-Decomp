#ifndef CREATURES_PALETTE_BOOTSTRAP_H
#define CREATURES_PALETTE_BOOTSTRAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define CREATURES_PALETTE_ENTRY_COUNT 256
#define CREATURES_PALETTE_SYSTEM_RESERVED_COUNT 10
#define CREATURES_PALETTE_GAME_COLOR_COUNT 0xec
#define CREATURES_PALETTE_FILE_HEADER_SKIP 0x1e

typedef struct CreaturesPaletteEntry {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t flags;
} CreaturesPaletteEntry;

typedef struct CreaturesLogPalette {
    uint16_t version;
    uint16_t entry_count;
    CreaturesPaletteEntry entries[CREATURES_PALETTE_ENTRY_COUNT];
} CreaturesLogPalette;

typedef void *(*CreaturesPaletteOpenFileProc)(
    const char *path, const char *mode, void *ctx);
typedef int (*CreaturesPaletteSeekFileProc)(void *file_handle, long offset, int origin, void *ctx);
typedef int (*CreaturesPaletteReadByteProc)(void *file_handle, void *ctx);
typedef int (*CreaturesPaletteCloseFileProc)(void *file_handle, void *ctx);

typedef struct CreaturesPaletteFileOps {
    CreaturesPaletteOpenFileProc open_file;
    CreaturesPaletteSeekFileProc seek_file;
    CreaturesPaletteReadByteProc read_byte;
    CreaturesPaletteCloseFileProc close_file;
    void *ctx;
} CreaturesPaletteFileOps;

typedef void *(*CreaturesPaletteGetScreenDcProc)(void *ctx);
typedef void *(*CreaturesPaletteCreatePaletteProc)(
    const CreaturesLogPalette *palette, void *ctx);
typedef void *(*CreaturesPaletteSelectPaletteProc)(
    void *dc, void *palette_handle, int force_background, void *ctx);
typedef unsigned int (*CreaturesPaletteRealizePaletteProc)(void *dc, void *ctx);
typedef unsigned int (*CreaturesPaletteGetSystemEntriesProc)(
    void *dc, unsigned int start_index, unsigned int entry_count,
    CreaturesPaletteEntry *entries_out, void *ctx);
typedef int (*CreaturesPaletteDeleteObjectProc)(void *object_handle, void *ctx);
typedef int (*CreaturesPaletteReleaseDcProc)(void *dc, void *ctx);

typedef struct CreaturesPaletteSystemOps {
    CreaturesPaletteGetScreenDcProc get_screen_dc;
    CreaturesPaletteCreatePaletteProc create_palette;
    CreaturesPaletteSelectPaletteProc select_palette;
    CreaturesPaletteRealizePaletteProc realize_palette;
    CreaturesPaletteGetSystemEntriesProc get_system_entries;
    CreaturesPaletteDeleteObjectProc delete_object;
    CreaturesPaletteReleaseDcProc release_dc;
    void *ctx;
} CreaturesPaletteSystemOps;

bool creatures_palette_table_load(uint8_t rgb_out[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const char *palette_directory, const char *file_name, const CreaturesPaletteFileOps *ops);
void creatures_log_palette_seed_system_colors(
    CreaturesLogPalette *palette, const CreaturesPaletteSystemOps *ops);
bool creatures_palette_handle_create(void **palette_handle_out,
    const uint8_t rgb_values[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const CreaturesPaletteSystemOps *ops);
bool creatures_palette_bootstrap(void **palette_handle_out,
    uint8_t primary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t secondary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t tertiary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t quaternary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const char *palette_directory, const char *file_name, const CreaturesPaletteFileOps *file_ops,
    const CreaturesPaletteSystemOps *system_ops);

#endif
