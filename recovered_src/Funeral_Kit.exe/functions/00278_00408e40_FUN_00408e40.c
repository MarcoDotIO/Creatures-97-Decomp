/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00408e40
 * Entry: 00408e40
 * Namespace: Global
 * Prototype: undefined FUN_00408e40(int param_1)
 */


void __fastcall FUN_00408e40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_004096c0(param_1);
  Ordinal_2293();
  Ordinal_2293();
  Ordinal_2293();
  Ordinal_2293();
  (**(code **)(*(int *)(param_1 + 0x13c) + 0x5c))();
  if (*(int **)(param_1 + 0x134) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x134) + 4))(1);
  }
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
  Ordinal_5439(0,0xffffffff);
  Ordinal_2081();
  return;
}

