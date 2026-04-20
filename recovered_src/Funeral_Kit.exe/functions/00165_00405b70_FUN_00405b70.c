/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00405b70
 * Entry: 00405b70
 * Namespace: Global
 * Prototype: undefined FUN_00405b70(int param_1)
 */


void __fastcall FUN_00405b70(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    FUN_00408100(DAT_0041032c,*(int *)(param_1 + 0xd0),0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

