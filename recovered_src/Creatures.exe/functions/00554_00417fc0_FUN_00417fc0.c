/*
 * Program: Creatures.exe
 * Function: FUN_00417fc0
 * Entry: 00417fc0
 * Namespace: Global
 * Prototype: int FUN_00417fc0(int param_1)
 */


int __fastcall FUN_00417fc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 10);
  if (*(int *)(*(int *)(param_1 + 0x58) + 10) <= iVar1) {
    return iVar1 + -5;
  }
  return iVar1 + 5;
}

