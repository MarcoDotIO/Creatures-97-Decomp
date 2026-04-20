/*
 * Program: Creatures.exe
 * Function: FUN_0041bba0
 * Entry: 0041bba0
 * Namespace: Global
 * Prototype: undefined FUN_0041bba0(void * this, int param_1)
 */


void __thiscall FUN_0041bba0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  uVar2 = *(byte *)(*(int *)(param_1 + 8) + 9) & 1;
  do {
    **(undefined1 **)((int)this + 8) = **(undefined1 **)(param_1 + 8);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar1 = iVar1 + -1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  } while (iVar1 != 0);
  FUN_0041bc20(this,param_1,uVar2);
  **(undefined1 **)((int)this + 8) = **(undefined1 **)(param_1 + 8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  iVar1 = **(int **)(param_1 + 8);
  while ((iVar1 != 0x656e6567 && (**(int **)(param_1 + 8) != 0x646e6567))) {
    FUN_0041bc20(this,param_1,uVar2);
    iVar1 = **(int **)(param_1 + 8);
  }
  return;
}

