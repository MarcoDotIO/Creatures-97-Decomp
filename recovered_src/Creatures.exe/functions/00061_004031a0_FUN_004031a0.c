/*
 * Program: Creatures.exe
 * Function: FUN_004031a0
 * Entry: 004031a0
 * Namespace: Global
 * Prototype: undefined FUN_004031a0(void * this, int * param_1, int * param_2)
 */


void __thiscall FUN_004031a0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 8);
  iVar3 = *(int *)((int)this + 4) + *param_2;
  iVar2 = param_2[1];
  if (0x209f < iVar3) {
    iVar3 = iVar3 + -0x20a0;
  }
  *param_1 = iVar3;
  param_1[1] = iVar2 + iVar1;
  return;
}

