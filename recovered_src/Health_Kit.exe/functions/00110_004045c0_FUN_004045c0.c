/*
 * Program: Health_Kit.exe
 * Function: FUN_004045c0
 * Entry: 004045c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004045c0(int param_1)
 */


undefined4 __fastcall FUN_004045c0(int param_1)

{
  UINT_PTR UVar1;
  
  FUN_00407ac0(param_1);
  UVar1 = *(UINT_PTR *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x42d8) = 0;
  *(undefined4 *)(param_1 + 0x42d4) = 0;
  *(UINT_PTR *)(param_1 + 0x21c) = UVar1 + 1;
  UVar1 = SetTimer(*(HWND *)(param_1 + 0x20),UVar1,10,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x224) = UVar1;
  return 0;
}

