/*
 * Program: Creatures.exe
 * Function: FUN_00419090
 * Entry: 00419090
 * Namespace: Global
 * Prototype: undefined4 FUN_00419090(void * this, int param_1)
 */


undefined4 __thiscall FUN_00419090(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x1a) != param_1) && (*(int *)((int)this + 0x1e) != param_1)) {
    return 0;
  }
  return 1;
}

