/*
 * Program: Creatures.exe
 * Function: FUN_00409050
 * Entry: 00409050
 * Namespace: Global
 * Prototype: undefined FUN_00409050(int param_1)
 */


void __fastcall FUN_00409050(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2a0)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x29c) + iVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2a0));
  }
  Ordinal_5439(0,0xffffffff);
  return;
}

