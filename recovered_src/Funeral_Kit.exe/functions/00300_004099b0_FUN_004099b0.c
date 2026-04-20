/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004099b0
 * Entry: 004099b0
 * Namespace: Global
 * Prototype: undefined FUN_004099b0(int param_1)
 */


void __fastcall FUN_004099b0(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xc0) <= *(int *)(param_1 + 0x98) + -1) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xc0) * 4),
      *(int *)(param_1 + 0xbc) = iVar1, iVar1 != 0)) && (*(int *)(param_1 + 0xa4) != 0)) {
    FUN_00409a20(param_1);
    return;
  }
  return;
}

