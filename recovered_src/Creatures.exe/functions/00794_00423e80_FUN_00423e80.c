/*
 * Program: Creatures.exe
 * Function: FUN_00423e80
 * Entry: 00423e80
 * Namespace: Global
 * Prototype: int FUN_00423e80(void * this, int param_1)
 */


int __thiscall FUN_00423e80(void *this,int param_1)

{
  FUN_00424080((int)this);
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 0xb8) = param_1;
  FUN_00426670(this);
  if (*(int *)((int)this + 0xbc) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0xbc) + -1 + param_1) = 0;
  }
  return *(int *)((int)this + 0xbc);
}

