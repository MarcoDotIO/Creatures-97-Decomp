/*
 * Program: Creatures.exe
 * Function: FUN_004219b0
 * Entry: 004219b0
 * Namespace: Global
 * Prototype: undefined FUN_004219b0(void * this, undefined4 param_1, int param_2, uint param_3)
 */


void __thiscall FUN_004219b0(void *this,undefined4 param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_2 * 0x14 + 0x25a0 + (int)this) = param_1;
  puVar1 = (undefined4 *)(param_2 * 0x14 + 0x25a0 + (int)this);
  puVar1[1] = this;
  FUN_004219f0(this,(int *)*puVar1,this,puVar1[2],puVar1[3],puVar1[4],param_3);
  return;
}

