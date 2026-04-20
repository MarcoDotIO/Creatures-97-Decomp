/*
 * Program: Creatures.exe
 * Function: FUN_0042db10
 * Entry: 0042db10
 * Namespace: Global
 * Prototype: int FUN_0042db10(int param_1)
 */


int FUN_0042db10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (param_1 < DAT_00437188) {
    puVar3 = &DAT_00437188;
    do {
      piVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (param_1 < *piVar1);
  }
  return iVar2;
}

