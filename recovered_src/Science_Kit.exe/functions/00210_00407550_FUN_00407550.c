/*
 * Program: Science_Kit.exe
 * Function: FUN_00407550
 * Entry: 00407550
 * Namespace: Global
 * Prototype: undefined FUN_00407550(int param_1)
 */


void __fastcall FUN_00407550(int param_1)

{
  UINT_PTR UVar1;
  
  if ((((*(int *)(param_1 + 0xa2c) == 0) && (*(int *)(param_1 + 0xa4) == 0)) &&
      (*(int *)(param_1 + 0x120) != 0)) && (-1 < *(int *)(param_1 + 0x118))) {
    UVar1 = *(int *)(param_1 + 0x9c) + 1;
    *(UINT_PTR *)(param_1 + 0x9c) = UVar1;
    UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
    *(UINT_PTR *)(param_1 + 0xa0) = UVar1;
    *(undefined4 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa34) = 1;
    FUN_00407170(param_1);
  }
  return;
}

