/*
 * Program: Creatures.exe
 * Function: FUN_0040c890
 * Entry: 0040c890
 * Namespace: Global
 * Prototype: undefined FUN_0040c890(void * this, int param_1)
 */


void __thiscall FUN_0040c890(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 8)) {
    iVar2 = 0;
    do {
      this_00 = (void *)(*(int *)((int)this + 4) + iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1d;
      FUN_0040ce80(this_00,param_1);
    } while (iVar1 < *(int *)((int)this + 8));
  }
  return;
}

