/*
 * Program: Creatures.exe
 * Function: FUN_0041baf0
 * Entry: 0041baf0
 * Namespace: Global
 * Prototype: undefined FUN_0041baf0(int param_1)
 */


void __fastcall FUN_0041baf0(int param_1)

{
  int iVar1;
  
  **(undefined4 **)(param_1 + 8) = 0x646e6567;
  iVar1 = *(int *)(param_1 + 8) + 4;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1 - *(int *)(param_1 + 4);
  return;
}

