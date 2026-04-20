/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040afb0
 * Entry: 0040afb0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040afb0(int param_1)
 */


undefined4 __fastcall FUN_0040afb0(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00401f40(param_1);
  FUN_00401df0(param_1);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  FUN_0040b0d0(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

