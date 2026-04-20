/*
 * Program: Creatures.exe
 * Function: FUN_00416ac0
 * Entry: 00416ac0
 * Namespace: Global
 * Prototype: undefined FUN_00416ac0(void * this, int param_1, int param_2)
 */


void __thiscall FUN_00416ac0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0x32;
  }
  else if (param_2 == 1) {
    iVar2 = 0x33;
  }
  else if (param_2 == 2) {
    iVar2 = 0x34;
  }
  else if (param_2 == 4) {
    iVar2 = 0x36;
  }
  else {
    if (param_2 != 5) {
      return;
    }
    iVar2 = 0x35;
  }
  if ((param_1 != 0) &&
     (iVar1 = FUN_00423d00((int)this,(int)this,*(int *)(param_1 + 4) + iVar2,0), iVar1 != 0)) {
    return;
  }
  FUN_00423d00((int)this,(int)this,*(int *)((int)this + 4) + iVar2,0);
  return;
}

