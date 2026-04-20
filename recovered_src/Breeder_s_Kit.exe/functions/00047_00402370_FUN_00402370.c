/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402370
 * Entry: 00402370
 * Namespace: Global
 * Prototype: undefined4 FUN_00402370(int param_1)
 */


undefined4 __fastcall FUN_00402370(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00403890(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x358c) = 0;
  *(undefined4 *)(param_1 + 0x3588) = 0;
  *(undefined4 *)(param_1 + 0x359c) = 0;
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

