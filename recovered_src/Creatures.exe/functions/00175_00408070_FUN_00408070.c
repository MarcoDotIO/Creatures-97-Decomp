/*
 * Program: Creatures.exe
 * Function: FUN_00408070
 * Entry: 00408070
 * Namespace: Global
 * Prototype: undefined FUN_00408070(void * this, undefined4 param_1)
 */


void __thiscall FUN_00408070(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x94) < 0x10) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x94) * 4 + 0x54) = param_1;
    *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 1;
    FUN_004080a0((int)this);
  }
  return;
}

