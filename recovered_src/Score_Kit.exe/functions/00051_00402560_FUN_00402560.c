/*
 * Program: Score_Kit.exe
 * Function: FUN_00402560
 * Entry: 00402560
 * Namespace: Global
 * Prototype: undefined FUN_00402560(int param_1)
 */


void __fastcall FUN_00402560(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    FUN_00409030(DAT_0040c15c,*(int *)(param_1 + 0xd0),0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

