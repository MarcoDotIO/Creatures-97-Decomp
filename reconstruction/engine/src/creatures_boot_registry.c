#include "creatures_boot_registry.h"

#include <string.h>

static const char k_creatures_root_current_user[] = "HKEY_CURRENT_USER";
static const char k_creatures_root_local_machine[] = "HKEY_LOCAL_MACHINE";
static const char k_creatures_company[] = "Millennium Interactive";
static const char k_creatures_product[] = "Creatures";
static const char k_creatures_section[] = "1.0";
static const char k_creatures_window_pos_value[] = "WindowPosn";

static bool creatures_registry_copy_string(char *out, size_t out_size, const char *value) {
    size_t length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    length = strlen(value);
    if (length >= out_size) {
        return false;
    }

    memcpy(out, value, length + 1);
    return true;
}

static bool creatures_registry_append_string(char *out, size_t out_size, const char *value) {
    size_t current_length;
    size_t add_length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    current_length = strlen(out);
    add_length = strlen(value);
    if (current_length + add_length >= out_size) {
        return false;
    }

    memcpy(out + current_length, value, add_length + 1);
    return true;
}

static const char *creatures_registry_root_name(int use_machine_hive) {
    if (use_machine_hive == 0) {
        return k_creatures_root_current_user;
    }
    return k_creatures_root_local_machine;
}

bool creatures_registry_handler_init(CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, const char *company, const char *product,
    const char *section) {
    if (handler == NULL || registry_ops == NULL || registry_ops->create_key == NULL ||
        company == NULL || product == NULL || section == NULL) {
        return false;
    }

    memset(handler, 0, sizeof(*handler));
    if (!creatures_registry_copy_string(handler->company, sizeof(handler->company), company) ||
        !creatures_registry_copy_string(handler->product, sizeof(handler->product), product) ||
        !creatures_registry_copy_string(handler->section, sizeof(handler->section), section) ||
        !creatures_registry_copy_string(
            handler->registry_path, sizeof(handler->registry_path), "SOFTWARE\\") ||
        !creatures_registry_append_string(
            handler->registry_path, sizeof(handler->registry_path), company) ||
        !creatures_registry_append_string(handler->registry_path, sizeof(handler->registry_path),
            "\\") ||
        !creatures_registry_append_string(
            handler->registry_path, sizeof(handler->registry_path), product) ||
        !creatures_registry_append_string(handler->registry_path, sizeof(handler->registry_path),
            "\\") ||
        !creatures_registry_append_string(
            handler->registry_path, sizeof(handler->registry_path), section)) {
        return false;
    }

    if (registry_ops->create_key(
            k_creatures_root_current_user, handler->registry_path, registry_ops->ctx) != 0) {
        return false;
    }
    if (registry_ops->create_key(
            k_creatures_root_local_machine, handler->registry_path, registry_ops->ctx) != 0) {
        return false;
    }

    handler->is_open = 1;
    return true;
}

bool creatures_registry_bootstrap_main_handler(CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops) {
    return creatures_registry_handler_init(
        handler, registry_ops, k_creatures_company, k_creatures_product, k_creatures_section);
}

bool creatures_registry_read_value(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    uint8_t *data_out, size_t *size_inout) {
    if (handler == NULL || registry_ops == NULL || registry_ops->read_value == NULL ||
        value_name == NULL || data_out == NULL || size_inout == NULL || handler->is_open == 0) {
        return false;
    }

    return registry_ops->read_value(creatures_registry_root_name(use_machine_hive),
               handler->registry_path, value_name, data_out, size_inout, registry_ops->ctx) == 0;
}

bool creatures_registry_write_string(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const char *value) {
    size_t value_size;

    if (handler == NULL || registry_ops == NULL || registry_ops->write_value == NULL ||
        value_name == NULL || value == NULL || handler->is_open == 0) {
        return false;
    }

    value_size = strlen(value) + 1;
    return registry_ops->write_value(creatures_registry_root_name(use_machine_hive),
               handler->registry_path, value_name, (const uint8_t *)value, value_size,
               registry_ops->ctx) == 0;
}

bool creatures_registry_write_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const CreaturesDisplayRect *rect) {
    if (handler == NULL || registry_ops == NULL || registry_ops->write_value == NULL ||
        value_name == NULL || rect == NULL || handler->is_open == 0) {
        return false;
    }

    return registry_ops->write_value(creatures_registry_root_name(use_machine_hive),
               handler->registry_path, value_name, (const uint8_t *)rect, sizeof(*rect),
               registry_ops->ctx) == 0;
}

bool creatures_registry_read_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesDisplayRect *rect_out) {
    size_t rect_size;

    if (rect_out == NULL) {
        return false;
    }

    rect_size = sizeof(*rect_out);
    return creatures_registry_read_value(
        handler, registry_ops, use_machine_hive, value_name, (uint8_t *)rect_out, &rect_size);
}

bool creatures_registry_write_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    const CreaturesRegistryPair32 *pair) {
    if (handler == NULL || registry_ops == NULL || registry_ops->write_value == NULL ||
        value_name == NULL || pair == NULL || handler->is_open == 0) {
        return false;
    }

    return registry_ops->write_value(creatures_registry_root_name(use_machine_hive),
               handler->registry_path, value_name, (const uint8_t *)pair, sizeof(*pair),
               registry_ops->ctx) == 0;
}

bool creatures_registry_read_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesRegistryPair32 *pair_out) {
    size_t pair_size;

    if (pair_out == NULL) {
        return false;
    }

    pair_size = sizeof(*pair_out);
    return creatures_registry_read_value(
        handler, registry_ops, use_machine_hive, value_name, (uint8_t *)pair_out, &pair_size);
}

void creatures_registry_read_or_default_rect(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesDisplayRect *rect_out, const CreaturesDisplayRect *default_rect) {
    if (rect_out == NULL || default_rect == NULL) {
        return;
    }

    if (creatures_registry_read_rect(handler, registry_ops, use_machine_hive, value_name,
            rect_out)) {
        return;
    }

    creatures_registry_write_rect(handler, registry_ops, use_machine_hive, value_name,
        default_rect);
    *rect_out = *default_rect;
}

void creatures_registry_read_or_default_pair32(const CreaturesRegistryHandler *handler,
    const CreaturesRegistryOps *registry_ops, int use_machine_hive, const char *value_name,
    CreaturesRegistryPair32 *pair_out, const CreaturesRegistryPair32 *default_pair) {
    if (pair_out == NULL || default_pair == NULL) {
        return;
    }

    if (creatures_registry_read_pair32(handler, registry_ops, use_machine_hive, value_name,
            pair_out)) {
        return;
    }

    creatures_registry_write_pair32(handler, registry_ops, use_machine_hive, value_name,
        default_pair);
    *pair_out = *default_pair;
}

void creatures_window_bootstrap_placement(CreaturesWindowPlacement *placement,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesWindowBootOps *window_ops) {
    CreaturesDisplayRect rect;

    if (placement == NULL || handler == NULL || registry_ops == NULL || window_ops == NULL ||
        window_ops->get_system_metric == NULL) {
        return;
    }

    rect.left = 0;
    rect.top = 0;
    rect.right = 0x280;
    rect.bottom = 0x1e0;
    creatures_registry_read_or_default_rect(
        handler, registry_ops, 0, k_creatures_window_pos_value, &rect, &rect);

    if (!(rect.left < window_ops->get_system_metric(0x10, window_ops->ctx) &&
            rect.top < window_ops->get_system_metric(0x11, window_ops->ctx))) {
        rect.left = 0;
        rect.top = 0;
        rect.right = 0x280;
        rect.bottom = 0x1e0;
    }

    placement->x = rect.left;
    placement->y = rect.top;
    placement->style = 0x00cf0000u;
    placement->width = rect.right - rect.left;
    placement->height = rect.bottom - rect.top;
    if (window_ops->finalize_window_placement != NULL) {
        window_ops->finalize_window_placement(placement, window_ops->ctx);
    }
}
