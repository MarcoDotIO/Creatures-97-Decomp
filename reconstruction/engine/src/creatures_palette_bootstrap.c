#include "creatures_palette_bootstrap.h"

#include <string.h>

bool creatures_palette_table_load(uint8_t rgb_out[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const char *palette_directory, const char *file_name, const CreaturesPaletteFileOps *ops) {
    char path[128];
    void *file_handle;
    size_t directory_length;
    size_t file_name_length;
    size_t color_index;

    if (rgb_out == NULL || palette_directory == NULL || file_name == NULL || ops == NULL ||
        ops->open_file == NULL || ops->seek_file == NULL || ops->read_byte == NULL ||
        ops->close_file == NULL) {
        return false;
    }

    directory_length = strlen(palette_directory);
    file_name_length = strlen(file_name);
    if (directory_length + file_name_length + 1 > sizeof(path)) {
        return false;
    }

    memcpy(path, palette_directory, directory_length);
    memcpy(path + directory_length, file_name, file_name_length + 1);

    file_handle = ops->open_file(path, "rb", ops->ctx);
    if (file_handle == NULL) {
        return false;
    }

    if (ops->seek_file(file_handle, CREATURES_PALETTE_FILE_HEADER_SKIP, 0, ops->ctx) != 0) {
        ops->close_file(file_handle, ops->ctx);
        return false;
    }

    for (color_index = 0; color_index < CREATURES_PALETTE_GAME_COLOR_COUNT; color_index++) {
        int red;
        int green;
        int blue;

        red = ops->read_byte(file_handle, ops->ctx);
        green = ops->read_byte(file_handle, ops->ctx);
        blue = ops->read_byte(file_handle, ops->ctx);
        if (red < 0 || green < 0 || blue < 0) {
            ops->close_file(file_handle, ops->ctx);
            return false;
        }

        rgb_out[color_index * 3 + 0] = (uint8_t)(red << 2);
        rgb_out[color_index * 3 + 1] = (uint8_t)(green << 2);
        rgb_out[color_index * 3 + 2] = (uint8_t)(blue << 2);
    }

    ops->close_file(file_handle, ops->ctx);
    return true;
}

void creatures_log_palette_seed_system_colors(
    CreaturesLogPalette *palette, const CreaturesPaletteSystemOps *ops) {
    size_t index;
    void *screen_dc;
    void *palette_handle;
    void *previous_palette;

    if (palette == NULL) {
        return;
    }

    palette->version = 0x300;
    palette->entry_count = CREATURES_PALETTE_ENTRY_COUNT;
    for (index = 0; index < CREATURES_PALETTE_ENTRY_COUNT; index++) {
        palette->entries[index].red = 0;
        palette->entries[index].green = 0;
        palette->entries[index].blue = 0;
        palette->entries[index].flags = 4;
    }

    if (ops == NULL || ops->get_screen_dc == NULL || ops->create_palette == NULL ||
        ops->select_palette == NULL || ops->realize_palette == NULL ||
        ops->get_system_entries == NULL || ops->delete_object == NULL ||
        ops->release_dc == NULL) {
        return;
    }

    screen_dc = ops->get_screen_dc(ops->ctx);
    if (screen_dc == NULL) {
        return;
    }

    palette_handle = ops->create_palette(palette, ops->ctx);
    if (palette_handle != NULL) {
        previous_palette = ops->select_palette(screen_dc, palette_handle, 0, ops->ctx);
        ops->realize_palette(screen_dc, ops->ctx);
        previous_palette = ops->select_palette(screen_dc, previous_palette, 0, ops->ctx);
        ops->delete_object(previous_palette, ops->ctx);
    }

    ops->get_system_entries(screen_dc, 0, CREATURES_PALETTE_SYSTEM_RESERVED_COUNT,
        palette->entries, ops->ctx);
    ops->get_system_entries(screen_dc,
        CREATURES_PALETTE_ENTRY_COUNT - CREATURES_PALETTE_SYSTEM_RESERVED_COUNT,
        CREATURES_PALETTE_SYSTEM_RESERVED_COUNT,
        &palette->entries[CREATURES_PALETTE_ENTRY_COUNT - CREATURES_PALETTE_SYSTEM_RESERVED_COUNT],
        ops->ctx);

    for (index = 0; index < CREATURES_PALETTE_SYSTEM_RESERVED_COUNT; index++) {
        palette->entries[index].flags = 0;
    }
    for (index = CREATURES_PALETTE_SYSTEM_RESERVED_COUNT;
         index < CREATURES_PALETTE_ENTRY_COUNT - CREATURES_PALETTE_SYSTEM_RESERVED_COUNT;
         index++) {
        palette->entries[index].flags = 4;
    }
    for (index = CREATURES_PALETTE_ENTRY_COUNT - CREATURES_PALETTE_SYSTEM_RESERVED_COUNT;
         index < CREATURES_PALETTE_ENTRY_COUNT; index++) {
        palette->entries[index].flags = 0;
    }

    ops->release_dc(screen_dc, ops->ctx);
}

bool creatures_palette_handle_create(void **palette_handle_out,
    const uint8_t rgb_values[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const CreaturesPaletteSystemOps *ops) {
    CreaturesLogPalette palette;
    size_t index;
    void *palette_handle;

    if (palette_handle_out == NULL || rgb_values == NULL || ops == NULL ||
        ops->create_palette == NULL) {
        return false;
    }

    creatures_log_palette_seed_system_colors(&palette, ops);
    for (index = 0; index < CREATURES_PALETTE_GAME_COLOR_COUNT; index++) {
        palette.entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT + index].red =
            rgb_values[index * 3 + 0];
        palette.entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT + index].green =
            rgb_values[index * 3 + 1];
        palette.entries[CREATURES_PALETTE_SYSTEM_RESERVED_COUNT + index].blue =
            rgb_values[index * 3 + 2];
    }

    palette_handle = ops->create_palette(&palette, ops->ctx);
    *palette_handle_out = palette_handle;
    return palette_handle != NULL;
}

bool creatures_palette_bootstrap(void **palette_handle_out,
    uint8_t primary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t secondary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t tertiary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    uint8_t quaternary_rgb[CREATURES_PALETTE_GAME_COLOR_COUNT * 3],
    const char *palette_directory, const char *file_name, const CreaturesPaletteFileOps *file_ops,
    const CreaturesPaletteSystemOps *system_ops) {
    if (!creatures_palette_table_load(primary_rgb, palette_directory, file_name, file_ops)) {
        return false;
    }
    if (!creatures_palette_table_load(secondary_rgb, palette_directory, file_name, file_ops)) {
        return false;
    }
    if (!creatures_palette_table_load(tertiary_rgb, palette_directory, file_name, file_ops)) {
        return false;
    }
    if (!creatures_palette_table_load(quaternary_rgb, palette_directory, file_name, file_ops)) {
        return false;
    }

    return creatures_palette_handle_create(palette_handle_out, primary_rgb, system_ops);
}
