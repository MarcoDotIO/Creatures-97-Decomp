/*
 * Program: Science_Kit.exe
 * Function: FUN_0040e460
 * Entry: 0040e460
 * Namespace: Global
 * Prototype: undefined FUN_0040e460(void * param_1)
 */


void __fastcall FUN_0040e460(void *param_1)

{
  LRESULT LVar1;
  
  if ((*(int *)((int)param_1 + 0x18c) == 0) && (*(int *)((int)param_1 + 0x150) == 0)) {
    **(uint **)((int)param_1 + 0x178) =
         (*(int *)((int)param_1 + 0x160) << 0x10 | *(uint *)((int)param_1 + 0x158)) << 8 |
         *(int *)((int)param_1 + 0x15c) << 0x10 | *(uint *)((int)param_1 + 0x154);
  }
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  LVar1 = SendMessageA(*(HWND *)((int)param_1 + 0xa78),0x147,0,0);
  *(LRESULT *)((int)param_1 + 0x188) = LVar1;
  *(LRESULT *)((int)param_1 + 0x18c) = LVar1;
  FUN_0040dbc0(param_1);
  return;
}

