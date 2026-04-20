/*
 * Program: Creatures.exe
 * Function: FUN_0041a790
 * Entry: 0041a790
 * Namespace: Global
 * Prototype: undefined FUN_0041a790(void * this, char param_1)
 */


void __thiscall FUN_0041a790(void *this,char param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)((int)this + 0x16);
  *(undefined1 **)((int)this + 0x1a) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  *(char *)((int)this + 8) = *(char *)((int)this + 9) + param_1;
  return;
}

