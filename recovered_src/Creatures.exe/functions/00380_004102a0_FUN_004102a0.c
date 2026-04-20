/*
 * Program: Creatures.exe
 * Function: FUN_004102a0
 * Entry: 004102a0
 * Namespace: Global
 * Prototype: undefined FUN_004102a0(int param_1)
 */


void __fastcall FUN_004102a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 0x58);
  for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
    piVar1 = (int *)*puVar5;
    while (piVar1 != (int *)0x0) {
      iVar2 = *(int *)((int)piVar1 + 0x26);
      piVar3 = (int *)0x0;
      while (iVar2 != 0) {
        iVar2 = *(int *)((int)*(int **)((int)piVar1 + 0x26) + 0x26);
        piVar3 = piVar1;
        piVar1 = *(int **)((int)piVar1 + 0x26);
      }
      if (piVar3 == (int *)0x0) {
        *puVar5 = 0;
      }
      else {
        *(undefined4 *)((int)piVar3 + 0x26) = 0;
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      piVar1 = (int *)*puVar5;
    }
    puVar5 = puVar5 + 1;
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 4))(1);
  }
  if (*(int **)(param_1 + 0x3b) != (int *)0x0) {
    FUN_0040c640(*(int **)(param_1 + 0x3b));
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  return;
}

