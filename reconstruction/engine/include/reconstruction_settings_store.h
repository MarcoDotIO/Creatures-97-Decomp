#ifndef RECONSTRUCTION_SETTINGS_STORE_H
#define RECONSTRUCTION_SETTINGS_STORE_H

#include "creatures_common.h"

#define RECONSTRUCTION_SETTINGS_CAPACITY 32
#define RECONSTRUCTION_SETTING_NAME_CAPACITY 64
#define RECONSTRUCTION_SETTING_VALUE_CAPACITY REMOVE_MAX_PATH

typedef struct ReconstructionSettingEntry {
    char key_name[RECONSTRUCTION_SETTING_NAME_CAPACITY];
    char value[RECONSTRUCTION_SETTING_VALUE_CAPACITY];
} ReconstructionSettingEntry;

typedef struct ReconstructionSettingsStore {
    ReconstructionSettingEntry entries[RECONSTRUCTION_SETTINGS_CAPACITY];
    size_t entry_count;
} ReconstructionSettingsStore;

void reconstruction_settings_store_init(ReconstructionSettingsStore *store);
bool reconstruction_settings_store_set(
    ReconstructionSettingsStore *store, const char *key_name, const char *value);
const char *reconstruction_settings_store_get(
    const ReconstructionSettingsStore *store, const char *key_name);

int reconstruction_settings_store_write_setting(
    const char *key_name, const char *value, void *ctx);
int reconstruction_settings_store_read_setting(const char *key_name, char *out_value,
    size_t out_value_size, const char *default_value, void *ctx);

#endif
