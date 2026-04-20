/*
 * Program: Creatures.exe
 * Function: FUN_00417760
 * Entry: 00417760
 * Namespace: Global
 * Prototype: undefined FUN_00417760(void * this, undefined4 param_1, undefined4 param_2)
 */


void __thiscall FUN_00417760(void *this,undefined4 param_1,undefined4 param_2)

{
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  FUN_0041a4a0(*(void **)((int)this + 0x4c),&local_20);
  (**(code **)(*(int *)this + 0x4c))(param_1,param_2);
  FUN_0041a4a0(*(void **)((int)this + 0x4c),&iStack_18);
  FUN_0040b560(&iStack_28);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_28,iStack_24,local_20,iStack_1c);
  FUN_0040b560(&iStack_18);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_18,iStack_14,iStack_10,iStack_c);
  return;
}

