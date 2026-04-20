/*
 * Program: Creatures.exe
 * Function: FUN_0040ce80
 * Entry: 0040ce80
 * Namespace: Global
 * Prototype: undefined FUN_0040ce80(void * this, int param_1)
 */


void __thiscall FUN_0040ce80(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_0040cb50((int)this);
  iVar2 = *(int *)((int)this + 0xd) * *(int *)((int)this + 0x11);
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      *pbVar1 = *(byte *)((uint)*pbVar1 + param_1);
      pbVar1 = pbVar1 + 1;
    } while (iVar2 != 0);
  }
  return;
}

