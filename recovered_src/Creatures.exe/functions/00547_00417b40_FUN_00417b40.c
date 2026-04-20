/*
 * Program: Creatures.exe
 * Function: FUN_00417b40
 * Entry: 00417b40
 * Namespace: Global
 * Prototype: int FUN_00417b40(void * this, int param_1, int param_2)
 */


int __thiscall FUN_00417b40(void *this,int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  POINT local_8;
  
  param_1 = param_1 - *(int *)(*(int *)((int)this + 0x4c) + 0xe);
  iVar3 = 3;
  FUN_0040b1b0(&param_1);
  piVar4 = (int *)((int)this + 0x130);
  iVar2 = param_2 - *(int *)(*(int *)((int)this + 0x4c) + 0x12);
  do {
    if (*piVar4 != -1) {
      local_8.x = param_1;
      local_8.y = iVar2;
      BVar1 = FUN_0040b1e0((RECT *)((int)this + *piVar4 * 0x10 + 0xc4),&local_8);
      if (BVar1 != 0) {
        return iVar3 + -3;
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return -1;
}

