/*
 * Program: Creatures.exe
 * Function: FUN_00417f60
 * Entry: 00417f60
 * Namespace: Global
 * Prototype: undefined FUN_00417f60(void * this, int * param_1)
 */


void __thiscall FUN_00417f60(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *(int *)((int)this + 0x14c);
  param_1[1] = *(int *)((int)this + 0x150);
  param_1[2] = *(int *)((int)this + 0x154);
  param_1[3] = *(int *)((int)this + 0x158);
  iVar1 = *(int *)(*(int *)((int)this + 0x4c) + 0xe);
  iVar2 = *(int *)(*(int *)((int)this + 0x4c) + 0x12);
  *param_1 = *param_1 + iVar1;
  param_1[2] = param_1[2] + iVar1;
  param_1[1] = param_1[1] + iVar2;
  param_1[3] = param_1[3] + iVar2;
  return;
}

