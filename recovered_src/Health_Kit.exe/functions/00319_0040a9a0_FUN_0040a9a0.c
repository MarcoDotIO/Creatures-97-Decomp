/*
 * Program: Health_Kit.exe
 * Function: FUN_0040a9a0
 * Entry: 0040a9a0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040a9a0(int param_1)
 */


undefined4 __fastcall FUN_0040a9a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  UINT_PTR UVar3;
  
  Ordinal_4173();
  *(undefined4 *)(param_1 + 0xb8) = 1;
  uVar1 = thunk_FUN_00407f90(*(int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x17f4) = uVar1;
  FUN_0040b250(param_1);
  iVar2 = FUN_0040ab90(param_1);
  if (iVar2 == 0) {
    return 1;
  }
  FUN_0040afb0(param_1);
  FUN_0040ab50(param_1);
  UVar3 = *(UINT_PTR *)(param_1 + 300);
  *(UINT_PTR *)(param_1 + 300) = UVar3 + 1;
  UVar3 = SetTimer(*(HWND *)(param_1 + 0x20),UVar3,1000,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x130) = UVar3;
  FUN_0040af50(param_1);
  *(undefined4 *)(param_1 + 0x17fc) = 1;
  return 1;
}

