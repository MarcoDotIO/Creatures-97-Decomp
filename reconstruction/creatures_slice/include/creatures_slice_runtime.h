#ifndef CREATURES_SLICE_RUNTIME_H
#define CREATURES_SLICE_RUNTIME_H

#include "creatures_common.h"

typedef struct ScrollWidget {
    uint8_t padding[0x60];
    void *control_at_0x60;
} ScrollWidget;

typedef struct ScrollRuntime {
    int current_position;
    int last_delta;
    int last_set_position;
    int update_count;
} ScrollRuntime;

extern int DAT_00435214;
extern int DAT_00435234;
extern uint DAT_00436e08[32];
extern int DAT_00436d88[32];
extern ScrollRuntime g_scroll_runtime;

void __thiscall FUN_00402300(void *this_ptr, undefined4 mode, int explicit_position);
uint __cdecl FUN_0041d030(byte param_1, byte param_2, byte param_3, byte param_4);
byte __cdecl FUN_00428b30(byte *param_1, byte param_2, uint param_3);

uint32_t pack_color_le(byte red, byte green, byte blue, byte alpha);
byte scale_component_if_mask_matches(byte *component, byte bucket, uint mask_bits);
void update_scroll_target(ScrollWidget *widget, undefined4 mode, int explicit_position);
void creatures_slice_reset_runtime(void);

#endif
