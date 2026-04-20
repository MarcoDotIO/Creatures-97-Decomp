/*
 * Program: Creatures.exe
 * Function: FUN_0042bde0
 * Entry: 0042bde0
 * Namespace: Global
 * Prototype: int FUN_0042bde0(void * this, undefined4 param_1)
 */


int __thiscall FUN_0042bde0(void *this,undefined4 param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 4U) {
    Ordinal_2456();
  }
  **(undefined4 **)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 4;
  return (int)this;
}

