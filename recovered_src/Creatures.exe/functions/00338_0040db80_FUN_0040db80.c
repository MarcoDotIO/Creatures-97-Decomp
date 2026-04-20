/*
 * Program: Creatures.exe
 * Function: FUN_0040db80
 * Entry: 0040db80
 * Namespace: Global
 * Prototype: undefined FUN_0040db80(undefined4 * param_1)
 */


void __fastcall FUN_0040db80(undefined4 *param_1)

{
  DdeDisconnect((HCONV)*param_1);
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_004118a0(DAT_00436ea8,(byte *)(param_1 + 2),0);
  }
  FUN_00424100((int *)param_1[1]);
  return;
}

