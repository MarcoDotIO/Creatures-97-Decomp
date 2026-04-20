#ifndef HATCHERY_TOOL_H
#define HATCHERY_TOOL_H

#include "creatures_common.h"

typedef int (*HatcheryRegistryQueryProc)(uintptr_t hive_handle, const char *value_name,
    uint32_t *type_out, uint8_t *data_out, uint32_t *size_inout);

typedef struct HatcheryRegistryHandler {
    uint8_t reserved_00[4];
    int is_open;
    uint8_t reserved_08[0x0c];
    uintptr_t machine_hive;
    uintptr_t user_hive;
    HatcheryRegistryQueryProc query_proc;
} HatcheryRegistryHandler;

typedef struct HatcherySelectionState {
    uint32_t fields[5];
} HatcherySelectionState;

extern char s_Sounds______wav_0040a4a8[16];
extern uint32_t g_hatchery_communicate_value;

bool __thiscall FUN_004042c0(void *this_ptr, int use_machine_hive, LPCSTR value_name,
    LPBYTE value_buffer, DWORD value_size);
undefined4 * __fastcall FUN_004045a0(undefined4 *param_1);
char *FUN_00404860(const char *sound_token);
void __cdecl FUN_00406920(undefined4 param_1);

bool hatchery_registry_read(HatcheryRegistryHandler *handler, int use_machine_hive,
    const char *value_name, uint8_t *value_buffer, uint32_t value_size);
void reset_hatchery_selection_state(HatcherySelectionState *state);
const char *build_hatchery_sound_path(const char sound_token[4]);
void set_hatchery_communicate_value(uint32_t value);

#endif
