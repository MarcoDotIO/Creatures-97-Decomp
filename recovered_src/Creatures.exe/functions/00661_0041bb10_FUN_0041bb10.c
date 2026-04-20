/*
 * Program: Creatures.exe
 * Function: FUN_0041bb10
 * Entry: 0041bb10
 * Namespace: Global
 * Prototype: undefined4 FUN_0041bb10(int param_1)
 */


undefined4 __fastcall FUN_0041bb10(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  do {
    iVar1 = **(int **)(param_1 + 8);
    *(int *)(param_1 + 8) = (int)*(int **)(param_1 + 8) + 1;
    if (iVar1 == 0x646e6567) {
      return 0;
    }
  } while (iVar1 != 0x656e6567);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return 1;
}

