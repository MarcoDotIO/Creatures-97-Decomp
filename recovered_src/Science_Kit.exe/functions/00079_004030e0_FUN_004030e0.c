/*
 * Program: Science_Kit.exe
 * Function: FUN_004030e0
 * Entry: 004030e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004030e0(int param_1)
 */


undefined4 __fastcall FUN_004030e0(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00407b90(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0xa088) = 0;
  *(undefined4 *)(param_1 + 0xa084) = 0;
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

