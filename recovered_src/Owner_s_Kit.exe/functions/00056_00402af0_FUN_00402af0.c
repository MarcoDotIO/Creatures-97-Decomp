/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402af0
 * Entry: 00402af0
 * Namespace: Global
 * Prototype: undefined4 FUN_00402af0(int param_1)
 */


undefined4 __fastcall FUN_00402af0(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00409950(param_1);
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  FUN_00402d50(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

