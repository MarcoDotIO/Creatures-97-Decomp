/*
 * Program: Creatures.exe
 * Function: FUN_0040f240
 * Entry: 0040f240
 * Namespace: Global
 * Prototype: undefined FUN_0040f240(void * this, undefined4 param_1, undefined4 param_2)
 */


void __thiscall FUN_0040f240(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x72) = param_1;
  *(undefined4 *)((int)this + 0x76) = param_2;
  FUN_0040e700((int)this);
  FUN_00414f10(this);
  FUN_0040eb10(this);
  return;
}

