/*
 * Program: Science_Kit.exe
 * Function: FUN_00401ea0
 * Entry: 00401ea0
 * Namespace: Global
 * Prototype: undefined4 FUN_00401ea0(int param_1)
 */


undefined4 __fastcall FUN_00401ea0(int param_1)

{
  int iVar1;
  UINT_PTR UVar2;
  
  Ordinal_4173();
  iVar1 = thunk_FUN_00408190(*(int *)(param_1 + 0x8c));
  *(int *)(param_1 + 0x6a0) = iVar1;
  *(uint *)(param_1 + 0x6a4) = (uint)(iVar1 == 0);
  FUN_004023d0(param_1);
  FUN_00402060();
  FUN_00402510(param_1);
  FUN_00401fe0(param_1);
  UVar2 = *(int *)(param_1 + 0x620) + 1;
  *(UINT_PTR *)(param_1 + 0x620) = UVar2;
  UVar2 = SetTimer(*(HWND *)(param_1 + 0x20),UVar2,*(UINT *)(param_1 + 0x628),(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x624) = UVar2;
  *(undefined4 *)(param_1 + 0x6a8) = 1;
  FUN_004025c0(param_1);
  *(undefined4 *)(param_1 + 0x694) = 1;
  return 1;
}

