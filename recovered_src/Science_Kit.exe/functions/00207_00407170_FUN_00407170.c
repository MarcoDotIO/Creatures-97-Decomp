/*
 * Program: Science_Kit.exe
 * Function: FUN_00407170
 * Entry: 00407170
 * Namespace: Global
 * Prototype: undefined4 FUN_00407170(int param_1)
 */


undefined4 __fastcall FUN_00407170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407040(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00408300(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),0);
  return 1;
}

