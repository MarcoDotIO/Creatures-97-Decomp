/*
 * Program: Creatures.exe
 * Function: FUN_0042beb0
 * Entry: 0042beb0
 * Namespace: Global
 * Prototype: undefined FUN_0042beb0(void * this, int param_1, int param_2, undefined1 param_3)
 */


void __thiscall FUN_0042beb0(void *this,int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + param_1 * 0xc2 + 0x9f);
  *(undefined1 *)(*piVar1 + 2 + param_2 * 0x10) = param_3;
  iVar2 = *piVar1 + param_2 * 0x10;
  *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(iVar2 + 2);
  return;
}

