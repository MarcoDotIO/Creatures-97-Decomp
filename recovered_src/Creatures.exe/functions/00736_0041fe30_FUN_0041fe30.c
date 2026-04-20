/*
 * Program: Creatures.exe
 * Function: FUN_0041fe30
 * Entry: 0041fe30
 * Namespace: Global
 * Prototype: undefined4 FUN_0041fe30(void * this, int * param_1)
 */


undefined4 __thiscall FUN_0041fe30(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  iVar1 = (**(code **)(iVar2 + 0x70))();
  iVar2 = (**(code **)(iVar2 + 0x74))();
  if (this == param_1) {
    return 0;
  }
  uVar4 = iVar1 - *(int *)((int)this + 0x72);
  uVar3 = (int)uVar4 >> 0x1f;
  if ((((int)((uVar4 ^ uVar3) - uVar3) < 500) && (*(int *)((int)this + 0x76) + -200 < iVar2)) &&
     (iVar2 < *(int *)((int)this + 0x76) + 0x20)) {
    return 1;
  }
  return 0;
}

