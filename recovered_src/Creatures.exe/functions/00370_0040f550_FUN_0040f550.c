/*
 * Program: Creatures.exe
 * Function: FUN_0040f550
 * Entry: 0040f550
 * Namespace: Global
 * Prototype: undefined FUN_0040f550(void * this, undefined4 * param_1, undefined4 * param_2, int * param_3)
 */


void __thiscall FUN_0040f550(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0xd2);
  *param_2 = *(undefined4 *)((int)this + 0xea);
  iVar1 = (**(code **)(*(int *)this + 100))();
  *param_3 = *(int *)(&DAT_004360d0 + (uint)*(byte *)((int)this + 0x70) * 4) + iVar1;
  return;
}

