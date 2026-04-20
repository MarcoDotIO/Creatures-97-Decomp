/*
 * Program: Creatures.exe
 * Function: FUN_0040ae40
 * Entry: 0040ae40
 * Namespace: Global
 * Prototype: int FUN_0040ae40(void * this, undefined1 param_1)
 */


int __thiscall FUN_0040ae40(void *this,undefined1 param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 1U) {
    Ordinal_2456();
  }
  **(undefined1 **)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  return (int)this;
}

