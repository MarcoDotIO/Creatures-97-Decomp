/*
 * Program: Creatures.exe
 * Function: FUN_004176a0
 * Entry: 004176a0
 * Namespace: Global
 * Prototype: undefined FUN_004176a0(void * this, undefined4 param_1, undefined4 param_2)
 */


void __thiscall FUN_004176a0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  undefined4 local_10 [4];
  
  FUN_0041a4a0(*(void **)((int)this + 0x4c),local_10);
  (**(code **)(*(int *)this + 0x48))(param_1,param_2);
  FUN_0041a4a0(*(void **)((int)this + 0x4c),&iStack_28);
  piVar1 = (int *)FUN_0040b450((int *)&stack0xffffffc8,&iStack_28,aiStack_18);
  iStack_28 = *piVar1;
  iStack_24 = piVar1[1];
  iStack_20 = piVar1[2];
  iStack_1c = piVar1[3];
  FUN_0040b560(&iStack_28);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_28,iStack_24,iStack_20,iStack_1c);
  return;
}

