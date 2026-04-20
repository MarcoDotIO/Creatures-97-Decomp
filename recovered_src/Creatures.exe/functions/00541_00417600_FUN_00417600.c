/*
 * Program: Creatures.exe
 * Function: FUN_00417600
 * Entry: 00417600
 * Namespace: Global
 * Prototype: undefined FUN_00417600(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00417600(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    puVar2 = (undefined4 *)((int)this + 0x4c);
    do {
      this_00 = (void *)*puVar2;
      if (this_00 != (void *)0x0) {
        FUN_0041a310(this_00,*(int *)((int)this_00 + 0xe) + param_1,
                     *(int *)((int)this_00 + 0x12) + param_2);
      }
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x48));
  }
  return;
}

