#include "creatures_slice.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

static bool creatures_body_data_parse_u8(const char **cursor, uint8_t *out_value) {
    char *end_ptr;
    long parsed_value;

    if (cursor == NULL || *cursor == NULL || out_value == NULL) {
        return false;
    }

    while (**cursor == ' ' || **cursor == '\t' || **cursor == '\n' || **cursor == '\r') {
        (*cursor)++;
    }
    if (**cursor == '\0') {
        return false;
    }

    parsed_value = strtol(*cursor, &end_ptr, 10);
    if (end_ptr == *cursor || parsed_value < 0 || parsed_value > 255) {
        return false;
    }

    *out_value = (uint8_t)parsed_value;
    *cursor = end_ptr;
    return true;
}

static bool creatures_body_data_parse_pair_table_text(
    const char *text, CreaturesBodyPairTable *out_table) {
    const char *cursor;
    size_t row;
    size_t column;

    if (text == NULL || out_table == NULL) {
        return false;
    }

    memset(out_table, 0, sizeof(*out_table));
    cursor = text;
    for (row = 0; row < CREATURES_BODY_PAIR_ROWS; row++) {
        for (column = 0; column < CREATURES_BODY_PAIR_COLUMNS; column++) {
            if (!creatures_body_data_parse_u8(&cursor, &out_table->left[row][column]) ||
                !creatures_body_data_parse_u8(&cursor, &out_table->right[row][column])) {
                return false;
            }
        }
    }
    return true;
}

static bool creatures_body_data_parse_quad_table_text(
    const char *text, CreaturesBodyQuadTable *out_table) {
    const char *cursor;
    size_t row;

    if (text == NULL || out_table == NULL) {
        return false;
    }

    memset(out_table, 0, sizeof(*out_table));
    cursor = text;
    for (row = 0; row < CREATURES_BODY_QUAD_ROWS; row++) {
        if (!creatures_body_data_parse_u8(&cursor, &out_table->first[row]) ||
            !creatures_body_data_parse_u8(&cursor, &out_table->second[row]) ||
            !creatures_body_data_parse_u8(&cursor, &out_table->third[row]) ||
            !creatures_body_data_parse_u8(&cursor, &out_table->fourth[row])) {
            return false;
        }
    }
    return true;
}

uint32_t creatures_body_data_make_token(
    int family_index, int group_digit, int row_digit, int column_digit) {
    return (uint32_t)((family_index + 'A') |
        ((group_digit + '0') << 8) |
        ((row_digit + '0') << 16) |
        ((column_digit + '0') << 24));
}

/*
 * Derived from Creatures.exe / FUN_0040b5c0 (0040b5c0).
 * The original writes a four-character token, appends a three-byte suffix, and prefixes the
 * selected directory slot to create a body-data asset path.
 */
const char *creatures_body_data_build_path(char *out_path, size_t out_path_size, uint32_t token,
    const char file_suffix[4], const char *directory_prefix) {
    size_t prefix_length;

    if (out_path == NULL || out_path_size < 8 || file_suffix == NULL) {
        return NULL;
    }

    out_path[0] = '\0';
    if (directory_prefix != NULL) {
        prefix_length = strlen(directory_prefix);
        if (prefix_length >= out_path_size) {
            return NULL;
        }
        memcpy(out_path, directory_prefix, prefix_length + 1);
    } else {
        prefix_length = 0;
    }

    if (prefix_length + 7 >= out_path_size) {
        return NULL;
    }

    out_path[prefix_length + 0] = (char)(token & 0xff);
    out_path[prefix_length + 1] = (char)((token >> 8) & 0xff);
    out_path[prefix_length + 2] = (char)((token >> 16) & 0xff);
    out_path[prefix_length + 3] = (char)((token >> 24) & 0xff);
    out_path[prefix_length + 4] = file_suffix[0];
    out_path[prefix_length + 5] = file_suffix[1];
    out_path[prefix_length + 6] = file_suffix[2];
    out_path[prefix_length + 7] = '\0';
    return out_path;
}

/*
 * Derived from Creatures.exe / FUN_0040f590 (0040f590).
 * The original probes body-data variants in descending row/column order and flips the group-digit
 * offset once before giving up.
 */
uint32_t creatures_body_data_find_existing_variant_token(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    char *resolved_path_out, size_t resolved_path_out_size) {
    int pass_index;
    char built_path[REMOVE_MAX_PATH];

    if (resolver_ops == NULL || resolved_path_out == NULL || resolved_path_out_size == 0) {
        return 0;
    }

    for (pass_index = 0; pass_index < 2; pass_index++) {
        int group_offset;
        int group_digit;
        int row_digit;
        int column_digit;

        group_offset = group_digit_selector - 1;
        if (pass_index != 0) {
            group_offset = 1 - (group_digit_selector - 1);
        }
        group_digit = group_digit_base + group_offset * 4;

        for (row_digit = max_row_digit; row_digit >= 0; row_digit--) {
            for (column_digit = max_column_digit; column_digit >= 0; column_digit--) {
                uint32_t token;

                token = creatures_body_data_make_token(
                    family_index, group_digit, row_digit, column_digit);
                if (creatures_body_data_build_path(
                        built_path, sizeof(built_path), token, file_suffix, directory_prefix) == NULL) {
                    continue;
                }
                if (creatures_resolve_data_path(resolved_path_out, resolved_path_out_size, built_path,
                        1, resolver_ops) != NULL) {
                    return token;
                }
            }
        }
    }

    resolved_path_out[0] = '\0';
    return 0;
}

bool creatures_body_data_load_pair_table(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx, CreaturesBodyPairTable *out_table,
    char *resolved_path_out, size_t resolved_path_out_size) {
    const char *text;
    uint32_t token;

    if (lookup_text == NULL || out_table == NULL || resolved_path_out == NULL) {
        return false;
    }

    token = creatures_body_data_find_existing_variant_token(family_index, group_digit_base,
        group_digit_selector, max_column_digit, max_row_digit, file_suffix, directory_prefix,
        resolver_ops, resolved_path_out, resolved_path_out_size);
    if (token == 0) {
        return false;
    }

    (void)token;
    if (lookup_text(resolved_path_out, &text, lookup_ctx) != 0) {
        return false;
    }
    return creatures_body_data_parse_pair_table_text(text, out_table);
}

bool creatures_body_data_load_quad_table(int family_index, int group_digit_base,
    int group_digit_selector, int max_column_digit, int max_row_digit, const char file_suffix[4],
    const char *directory_prefix, const CreaturesPathResolverOps *resolver_ops,
    CreaturesTextAssetLookupProc lookup_text, void *lookup_ctx, CreaturesBodyQuadTable *out_table,
    char *resolved_path_out, size_t resolved_path_out_size) {
    const char *text;
    uint32_t token;

    if (lookup_text == NULL || out_table == NULL || resolved_path_out == NULL) {
        return false;
    }

    token = creatures_body_data_find_existing_variant_token(family_index, group_digit_base,
        group_digit_selector, max_column_digit, max_row_digit, file_suffix, directory_prefix,
        resolver_ops, resolved_path_out, resolved_path_out_size);
    if (token == 0) {
        return false;
    }

    (void)token;
    if (lookup_text(resolved_path_out, &text, lookup_ctx) != 0) {
        return false;
    }
    return creatures_body_data_parse_quad_table_text(text, out_table);
}
