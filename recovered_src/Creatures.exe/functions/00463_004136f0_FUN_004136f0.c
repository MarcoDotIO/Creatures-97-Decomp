/*
 * Program: Creatures.exe
 * Function: FUN_004136f0
 * Entry: 004136f0
 * Namespace: Global
 * Prototype: undefined FUN_004136f0(void * this, void * param_1)
 */


void __thiscall FUN_004136f0(void *this,void *param_1)

{
  FUN_00413410(this,param_1);
  if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
    Ordinal_5671(*(undefined4 *)((int)this + 0x48));
    return;
  }
  FUN_00419b00(param_1,(undefined4 *)((int)this + 0x48));
  return;
}

