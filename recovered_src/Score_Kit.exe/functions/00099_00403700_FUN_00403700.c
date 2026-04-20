/*
 * Program: Score_Kit.exe
 * Function: FUN_00403700
 * Entry: 00403700
 * Namespace: Global
 * Prototype: undefined FUN_00403700(int param_1)
 */


void __fastcall FUN_00403700(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x604) == 0);
  *(uint *)(param_1 + 0x604) = uVar1;
  *(uint *)(param_1 + 0x608) = (uint)(uVar1 == 0);
  return;
}

