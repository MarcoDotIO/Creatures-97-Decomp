/*
 * Program: Creatures.exe
 * Function: FUN_00418f00
 * Entry: 00418f00
 * Namespace: Global
 * Prototype: undefined FUN_00418f00(void * this, int param_1)
 */


void __thiscall FUN_00418f00(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_0040bc10(this,10,1);
    *(undefined1 *)((int)this + 0x231) = 1;
    *(undefined1 *)(*(int *)((int)this + 0x2f) * 0xb + 0x13c + (int)this) = 0;
    FUN_00418d40(this,1);
    return;
  }
  FUN_0040bc40();
  *(undefined1 *)((int)this + 0x231) = 0;
  FUN_00418d40(this,1);
  return;
}

