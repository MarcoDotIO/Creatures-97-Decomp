#include "reconstruction_settings_store.h"

#include <string.h>

static bool reconstruction_settings_copy_string(char *out, size_t out_size, const char *value) {
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

void reconstruction_settings_store_init(ReconstructionSettingsStore *store) {
    if (store == NULL) {
        return;
    }

    memset(store, 0, sizeof(*store));
}

bool reconstruction_settings_store_set(
    ReconstructionSettingsStore *store, const char *key_name, const char *value) {
    size_t index;

    if (store == NULL || key_name == NULL || value == NULL) {
        return false;
    }

    for (index = 0; index < store->entry_count; index++) {
        if (strcmp(store->entries[index].key_name, key_name) == 0) {
            return reconstruction_settings_copy_string(
                store->entries[index].value, sizeof(store->entries[index].value), value);
        }
    }

    if (store->entry_count >= RECONSTRUCTION_SETTINGS_CAPACITY) {
        return false;
    }

    if (!reconstruction_settings_copy_string(store->entries[store->entry_count].key_name,
            sizeof(store->entries[store->entry_count].key_name), key_name) ||
        !reconstruction_settings_copy_string(store->entries[store->entry_count].value,
            sizeof(store->entries[store->entry_count].value), value)) {
        return false;
    }

    store->entry_count++;
    return true;
}

const char *reconstruction_settings_store_get(
    const ReconstructionSettingsStore *store, const char *key_name) {
    size_t index;

    if (store == NULL || key_name == NULL) {
        return NULL;
    }

    for (index = 0; index < store->entry_count; index++) {
        if (strcmp(store->entries[index].key_name, key_name) == 0) {
            return store->entries[index].value;
        }
    }

    return NULL;
}

int reconstruction_settings_store_write_setting(
    const char *key_name, const char *value, void *ctx) {
    ReconstructionSettingsStore *store;

    store = (ReconstructionSettingsStore *)ctx;
    return reconstruction_settings_store_set(store, key_name, value) ? 0 : 1;
}

int reconstruction_settings_store_read_setting(const char *key_name, char *out_value,
    size_t out_value_size, const char *default_value, void *ctx) {
    ReconstructionSettingsStore *store;
    const char *stored_value;
    const char *selected_value;

    store = (ReconstructionSettingsStore *)ctx;
    stored_value = reconstruction_settings_store_get(store, key_name);
    selected_value = stored_value != NULL ? stored_value : default_value;
    if (selected_value == NULL) {
        if (out_value != NULL && out_value_size > 0) {
            out_value[0] = '\0';
        }
        return 1;
    }

    return reconstruction_settings_copy_string(out_value, out_value_size, selected_value) ? 0 : 1;
}
