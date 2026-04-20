/*
 * Program: Creatures.exe
 * Function: FUN_0040dc10
 * Entry: 0040dc10
 * Namespace: Global
 * Prototype: undefined FUN_0040dc10(void * this, int param_1)
 */


void __thiscall FUN_0040dc10(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((int)this + 4);
  iVar2 = FUN_0040d860(&DAT_00438bc0,param_1);
  (**(code **)(iVar2 + 8))(uVar1);
  return;
}

