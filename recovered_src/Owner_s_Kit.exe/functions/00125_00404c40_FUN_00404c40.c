/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00404c40
 * Entry: 00404c40
 * Namespace: Global
 * Prototype: undefined FUN_00404c40(int param_1)
 */


void __fastcall FUN_00404c40(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    FUN_0040b950(DAT_00412268,*(int *)(param_1 + 0xd0),0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

