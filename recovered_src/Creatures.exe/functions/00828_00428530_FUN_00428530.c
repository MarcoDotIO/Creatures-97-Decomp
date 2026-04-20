/*
 * Program: Creatures.exe
 * Function: FUN_00428530
 * Entry: 00428530
 * Namespace: Global
 * Prototype: int FUN_00428530(void * this, int param_1, int param_2, int param_3)
 */


int __thiscall FUN_00428530(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_80 [32];
  
  uVar3 = *(uint *)((int)this + param_1 * 4 + 4) & *(uint *)((int)this + param_2 * 4 + 0x70) &
          *(uint *)((int)this + param_3 * 4 + 0xdc);
  if (param_2 == 0x1a) {
    uVar3 = uVar3 & 0xf;
  }
  if (param_1 == 0x1a) {
    uVar3 = uVar3 & 0x7f0;
  }
  if (param_3 == 0x1a) {
    uVar3 = uVar3 & 0x3f800;
  }
  if (((param_1 < 0x1a) && (param_2 < 0x1a)) && (param_3 < 0x1a)) {
    uVar3 = uVar3 & 0xfffc0000;
  }
  if (uVar3 == 0) {
    iVar1 = 0x20;
  }
  else {
    iVar4 = 0;
    iVar1 = 0;
    piVar2 = local_80;
    do {
      if ((uVar3 & 1) != 0) {
        *piVar2 = iVar4;
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + 1;
      }
      uVar3 = uVar3 >> 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    iVar1 = local_80[(param_2 + param_3 + param_1) % iVar1];
  }
  return iVar1;
}

