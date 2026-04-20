/*
 * Program: Creatures.exe
 * Function: FUN_00406080
 * Entry: 00406080
 * Namespace: Global
 * Prototype: int FUN_00406080(void * this, undefined4 * param_1)
 */


int __thiscall FUN_00406080(void *this,undefined4 *param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 4U) {
    Ordinal_2403((*(int *)((int)this + 0x24) - *(uint *)((int)this + 0x28)) + 4);
  }
  *param_1 = **(undefined4 **)((int)this + 0x24);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 4;
  return (int)this;
}

