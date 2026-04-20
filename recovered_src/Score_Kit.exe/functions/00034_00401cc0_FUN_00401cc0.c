/*
 * Program: Score_Kit.exe
 * Function: FUN_00401cc0
 * Entry: 00401cc0
 * Namespace: Global
 * Prototype: undefined4 FUN_00401cc0(int param_1)
 */


undefined4 __fastcall FUN_00401cc0(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00406aa0(param_1);
  FUN_00406950(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0xbe0) = 0;
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

