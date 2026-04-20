/*
 * Program: Creatures.exe
 * Function: FUN_00403530
 * Entry: 00403530
 * Namespace: Global
 * Prototype: undefined FUN_00403530(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00403530(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)this == 0) {
    FUN_00403b70(this,param_1,param_2);
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = param_1 - iVar1;
  iVar2 = *(int *)((int)this + 8);
  iVar4 = param_2 - iVar2;
  if (iVar3 < -0x104f) {
    iVar3 = iVar3 + 0x20a0;
  }
  else if (0x1050 < iVar3) {
    iVar3 = iVar3 + -0x20a0;
  }
  if ((((iVar3 <= *(int *)((int)this + 0xc) - iVar1) && (iVar1 - *(int *)((int)this + 0xc) <= iVar3)
       ) && (iVar4 <= *(int *)((int)this + 0x10) - iVar2)) &&
     (iVar2 - *(int *)((int)this + 0x10) <= iVar4)) {
    *(int *)((int)this + 0x474) = iVar3;
    *(undefined4 *)((int)this + 0x47c) = 0;
    *(int *)((int)this + 0x478) = iVar4;
    *(undefined4 *)((int)this + 0x480) = 0;
    *(undefined4 *)((int)this + 0x484) = 0;
    *(undefined4 *)((int)this + 0x488) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  FUN_00403b70(this,param_1,param_2);
  return;
}

