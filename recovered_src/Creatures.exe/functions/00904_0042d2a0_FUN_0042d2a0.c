/*
 * Program: Creatures.exe
 * Function: FUN_0042d2a0
 * Entry: 0042d2a0
 * Namespace: Global
 * Prototype: uint FUN_0042d2a0(void * this, int param_1)
 */


uint __thiscall FUN_0042d2a0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = 0;
  uVar5 = 1;
  piVar6 = *(int **)((int)this + param_1 * 4 + 4);
  bVar1 = *(byte *)((int)this + param_1 + 0xc);
  if (bVar1 != 0) {
    uVar4 = (uint)bVar1;
    do {
      iVar2 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 10);
      uVar5 = uVar5 * iVar2;
      iVar3 = iVar3 + iVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return iVar3 << 0x10 | uVar5 & 0xffff;
}

