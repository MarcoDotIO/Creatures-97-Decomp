/*
 * Program: Creatures.exe
 * Function: FUN_004282d0
 * Entry: 004282d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004282d0(void * this, int param_1)
 */


undefined4 __thiscall FUN_004282d0(void *this,int param_1)

{
  if ((((*(int *)((int)this + 0x94) != param_1) && (*(int *)((int)this + 0x98) != param_1)) &&
      (*(int *)((int)this + 0x9c) != param_1)) &&
     ((*(int *)((int)this + 0xa0) != param_1 && (*(int *)((int)this + 0xa4) != param_1)))) {
    return 0;
  }
  return 1;
}

