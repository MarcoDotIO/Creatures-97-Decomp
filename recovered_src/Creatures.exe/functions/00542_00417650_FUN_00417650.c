/*
 * Program: Creatures.exe
 * Function: FUN_00417650
 * Entry: 00417650
 * Namespace: Global
 * Prototype: undefined FUN_00417650(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00417650(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    puVar2 = (undefined4 *)((int)this + 0x4c);
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_0041a310((void *)*puVar2,puVar2[1] + param_1,puVar2[2] + param_2);
      }
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x48));
  }
  return;
}

