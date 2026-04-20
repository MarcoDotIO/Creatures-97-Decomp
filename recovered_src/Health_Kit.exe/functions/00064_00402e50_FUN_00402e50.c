/*
 * Program: Health_Kit.exe
 * Function: FUN_00402e50
 * Entry: 00402e50
 * Namespace: Global
 * Prototype: undefined FUN_00402e50(int param_1)
 */


void __fastcall FUN_00402e50(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0xe78) == 0);
  *(uint *)(param_1 + 0xe78) = uVar1;
  *(uint *)(param_1 + 0xe7c) = (uint)(uVar1 == 0);
  return;
}

