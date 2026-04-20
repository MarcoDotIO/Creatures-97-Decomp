/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004084d0
 * Entry: 004084d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004084d0(int param_1)
 */


undefined4 __fastcall FUN_004084d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  UINT_PTR UVar3;
  
  Ordinal_4173();
  uVar1 = thunk_FUN_00409e20(*(int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  FUN_00408730(param_1);
  FUN_004086c0(param_1);
  FUN_00408800(0);
  iVar2 = FUN_00402f90(*(void **)(param_1 + 0x8c),*(byte **)(param_1 + 0x98),1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  Ordinal_1440(0x41b,param_1);
  FUN_004083a0(param_1);
  FUN_00408420(param_1);
  UVar3 = SetTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xd4),60000,(TIMERPROC)0x0);
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(UINT_PTR *)(param_1 + 0xd8) = UVar3;
  return 1;
}

