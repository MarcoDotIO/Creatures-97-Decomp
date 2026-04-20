/*
 * Program: Creatures.exe
 * Function: FUN_00418b30
 * Entry: 00418b30
 * Namespace: Global
 * Prototype: undefined4 FUN_00418b30(void * this, int param_1)
 */


undefined4 __thiscall FUN_00418b30(void *this,int param_1)

{
  if (((*(char *)((int)this + 0x22) != '\x01') && (*(char *)((int)this + 0x22) != '\x02')) &&
     (*(int *)((int)this + 0x184) == param_1)) {
    return 1;
  }
  return 0;
}

