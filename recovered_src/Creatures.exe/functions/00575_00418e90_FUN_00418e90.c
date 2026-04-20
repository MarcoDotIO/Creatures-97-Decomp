/*
 * Program: Creatures.exe
 * Function: FUN_00418e90
 * Entry: 00418e90
 * Namespace: Global
 * Prototype: undefined FUN_00418e90(void * this, int param_1)
 */


void __thiscall FUN_00418e90(void *this,int param_1)

{
  if (*(char *)(*(int *)((int)this + 0x2f) * 0xb + 0x13c + (int)this) != '\0') {
    if (param_1 != 0) {
      FUN_00401870(this,7,0,0,0);
      FUN_00415020(this,(char *)((int)this + *(int *)((int)this + 0x2f) * 0xb + 0x13c),0x14,0);
      return;
    }
    FUN_004018d0(this,7,0,0,0);
  }
  return;
}

