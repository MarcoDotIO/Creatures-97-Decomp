/*
 * Program: Score_Kit.exe
 * Function: FUN_004041f0
 * Entry: 004041f0
 * Namespace: Global
 * Prototype: int FUN_004041f0(int param_1)
 */


int __fastcall FUN_004041f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x55c) * 0x100 + *(int *)(param_1 + 0x568);
  if (0x1869e < iVar1) {
    iVar1 = 99999;
  }
  return iVar1;
}

