/*
 * Program: Creatures.exe
 * Function: FUN_0040aea0
 * Entry: 0040aea0
 * Namespace: Global
 * Prototype: int FUN_0040aea0(void * this, undefined1 * param_1)
 */


int __thiscall FUN_0040aea0(void *this,undefined1 *param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 1U) {
    Ordinal_2403((*(int *)((int)this + 0x24) - *(uint *)((int)this + 0x28)) + 1);
  }
  *param_1 = **(undefined1 **)((int)this + 0x24);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  return (int)this;
}

