/*
 * Program: Creatures.exe
 * Function: FUN_00403110
 * Entry: 00403110
 * Namespace: Global
 * Prototype: undefined FUN_00403110(void * this, int * param_1, int * param_2)
 */


void __thiscall FUN_00403110(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *param_2;
  iVar6 = iVar2 - iVar1;
  if ((iVar1 - *(int *)((int)this + 0xc)) + 0x20a0 < iVar6) {
    iVar6 = iVar6 + -0x20a0;
  }
  else if (iVar6 < (*(int *)((int)this + 0xc) - iVar1) + -0x20a0) {
    iVar6 = iVar6 + 0x20a0;
  }
  iVar1 = *(int *)((int)this + 8);
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  *param_1 = iVar6;
  param_1[1] = iVar3 - iVar1;
  param_1[2] = (iVar4 - iVar2) + iVar6;
  param_1[3] = iVar5 - iVar1;
  return;
}

