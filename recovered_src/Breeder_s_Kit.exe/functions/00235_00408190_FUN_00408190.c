/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00408190
 * Entry: 00408190
 * Namespace: Global
 * Prototype: undefined FUN_00408190(int param_1)
 */


void __fastcall FUN_00408190(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x2f8) == 0);
  *(uint *)(param_1 + 0x2f8) = uVar1;
  *(uint *)(param_1 + 0x2f4) = (uint)(uVar1 == 0);
  return;
}

