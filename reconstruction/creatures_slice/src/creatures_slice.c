#include "creatures_slice.h"
#include <string.h>

int DAT_00435214 = 50;
int DAT_00435234 = 0;
uint DAT_00436e08[32];
int DAT_00436d88[32];
char s_Sounds______wav_0040a4a8[16] = "Sounds\\####.wav";
uint32_t g_hatchery_communicate_value;

ScrollRuntime g_scroll_runtime;

static int Ordinal_3273(int unused_channel) {
    (void)unused_channel;
    return g_scroll_runtime.current_position;
}

static void FUN_00402630(void *this_ptr, int enabled) {
    (void)this_ptr;
    (void)enabled;
    g_scroll_runtime.update_count++;
}

static int FUN_00403200(void *control_ptr, int delta) {
    (void)control_ptr;
    g_scroll_runtime.last_delta = delta;
    return delta;
}

static void Ordinal_5427(int unused_channel, int new_position, int repaint) {
    (void)unused_channel;
    (void)repaint;
    g_scroll_runtime.current_position = new_position;
    g_scroll_runtime.last_set_position = new_position;
}

void creatures_slice_reset_runtime(void) {
    int i;

    DAT_00435214 = 50;
    DAT_00435234 = 0;
    for (i = 0; i < 32; i++) {
        DAT_00436e08[i] = 0;
        DAT_00436d88[i] = 0x10000;
    }

    g_scroll_runtime.current_position = 0;
    g_scroll_runtime.last_delta = 0;
    g_scroll_runtime.last_set_position = 0;
    g_scroll_runtime.update_count = 0;
}

/*
 * Program: Creatures.exe
 * Function: FUN_00402300
 * Entry: 00402300
 * Namespace: Global
 * Prototype: undefined FUN_00402300(void * this, undefined4 param_1, int param_2)
 */
void __thiscall FUN_00402300(void *this_ptr, undefined4 param_1, int param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    ScrollWidget *widget;

    widget = (ScrollWidget *)this_ptr;
    iVar1 = Ordinal_3273(0);
    FUN_00402630(this_ptr, 1);
    iVar2 = iVar1;
    switch (param_1) {
    case 0:
        iVar2 = iVar1 + -0x10;
        break;
    case 1:
        iVar2 = iVar1 + 0x10;
        break;
    case 2:
        iVar2 = iVar1 - DAT_00435214 / 2;
        break;
    case 3:
        iVar2 = iVar1 + DAT_00435214 / 2;
        break;
    case 4:
        iVar2 = param_2;
        break;
    case 5:
        iVar2 = param_2;
        break;
    case 6:
        iVar2 = 0;
        break;
    case 7:
        iVar2 = DAT_00435214 * 2;
        break;
    default:
        break;
    }
    iVar3 = DAT_00435214 * 2;
    if ((iVar2 <= iVar3) && (iVar3 = iVar2, iVar2 < 0)) {
        iVar3 = 0;
    }
    if (iVar3 != iVar1) {
        iVar2 = FUN_00403200(widget->control_at_0x60, iVar3 - iVar1);
        Ordinal_5427(0, iVar2 + iVar1, 1);
    }
}

/*
 * Program: Creatures.exe
 * Function: FUN_0041d030
 * Entry: 0041d030
 * Namespace: Global
 * Prototype: uint FUN_0041d030(byte param_1, byte param_2, byte param_3, byte param_4)
 */
uint __cdecl FUN_0041d030(byte param_1, byte param_2, byte param_3, byte param_4) {
    return ((uint)param_4 << 0x10 | (uint)param_2) << 8 | (uint)param_3 << 0x10 | (uint)param_1;
}

/*
 * Program: Creatures.exe
 * Function: FUN_00428b30
 * Entry: 00428b30
 * Namespace: Global
 * Prototype: byte FUN_00428b30(byte * param_1, byte param_2, uint param_3)
 */
byte __cdecl FUN_00428b30(byte *param_1, byte param_2, uint param_3) {
    if ((DAT_00436e08[(uint)(param_2 >> 3)] & param_3) == DAT_00436e08[(uint)(param_2 >> 3)]) {
        *param_1 =
            (byte)((uint)*param_1 * (uint)DAT_00436d88[(uint)(param_2 >> 3)] >> 0x10);
        return *param_1;
    }
    return *param_1;
}

uint32_t pack_color_le(byte red, byte green, byte blue, byte alpha) {
    return FUN_0041d030(red, green, blue, alpha);
}

byte scale_component_if_mask_matches(byte *component, byte bucket, uint mask_bits) {
    return FUN_00428b30(component, bucket, mask_bits);
}

void update_scroll_target(ScrollWidget *widget, undefined4 mode, int explicit_position) {
    FUN_00402300(widget, mode, explicit_position);
}

/*
 * Program: Hatchery.exe
 * Function: FUN_004042c0
 * Entry: 004042c0
 * Namespace: Global
 * Prototype: bool FUN_004042c0(void * this, int param_1, LPCSTR param_2, LPBYTE param_3, DWORD param_4)
 */
bool __thiscall FUN_004042c0(void *this_ptr, int param_1, LPCSTR param_2, LPBYTE param_3,
    DWORD param_4) {
    HatcheryRegistryHandler *handler;
    uint32_t local_8;
    uint32_t local_4;
    uintptr_t hive_handle;

    handler = (HatcheryRegistryHandler *)this_ptr;
    if (handler->is_open == 0) {
        return false;
    }

    local_8 = param_4;
    if (param_1 == 0) {
        hive_handle = handler->user_hive;
    } else {
        hive_handle = handler->machine_hive;
    }

    if (handler->query_proc == NULL) {
        return false;
    }

    return handler->query_proc(hive_handle, param_2, &local_4, param_3, &local_8) == 0;
}

/*
 * Program: Hatchery.exe
 * Function: FUN_004045a0
 * Entry: 004045a0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004045a0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_004045a0(undefined4 *param_1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return param_1;
}

/*
 * Program: Hatchery.exe
 * Function: FUN_00404860
 * Entry: 00404860
 * Namespace: Global
 * Prototype: undefined * FUN_00404860(void)
 */
char *FUN_00404860(const char *sound_token) {
    memcpy(&s_Sounds______wav_0040a4a8[7], sound_token, 4);
    return s_Sounds______wav_0040a4a8;
}

/*
 * Program: Hatchery.exe
 * Function: FUN_00406920
 * Entry: 00406920
 * Namespace: Global
 * Prototype: undefined FUN_00406920(undefined4 param_1)
 */
void __cdecl FUN_00406920(undefined4 param_1) {
    g_hatchery_communicate_value = param_1;
}

bool hatchery_registry_read(HatcheryRegistryHandler *handler, int use_machine_hive,
    const char *value_name, uint8_t *value_buffer, uint32_t value_size) {
    return FUN_004042c0(handler, use_machine_hive, value_name, value_buffer, value_size);
}

void reset_hatchery_selection_state(HatcherySelectionState *state) {
    FUN_004045a0((undefined4 *)state->fields);
}

const char *build_hatchery_sound_path(const char sound_token[4]) {
    return FUN_00404860(sound_token);
}

void set_hatchery_communicate_value(uint32_t value) {
    FUN_00406920(value);
}
