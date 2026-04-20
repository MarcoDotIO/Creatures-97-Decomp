/*
 * Program: Creatures.exe
 * Function: FUN_0040d730
 * Entry: 0040d730
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d730(void * this, int param_1)
 */


undefined4 __thiscall FUN_0040d730(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    puVar2 = (undefined4 *)((int)this + 0x30);
    do {
      if (*(int *)*puVar2 == param_1) {
        return *(undefined4 *)((int)this + iVar1 * 4 + 0x30);
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x58));
  }
  return 0;
}

