/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004034e0
 * Entry: 004034e0
 * Namespace: Global
 * Prototype: undefined FUN_004034e0(int param_1)
 */


void __fastcall FUN_004034e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x94) + iVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x98));
  }
  FUN_004037c0(param_1);
  Ordinal_2293();
  Ordinal_2293();
  Ordinal_5439(0,0xffffffff);
  Ordinal_5439(0,0xffffffff);
  Ordinal_2081();
  return;
}

