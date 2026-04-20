/*
 * Program: Creatures.exe
 * Function: FUN_00415460
 * Entry: 00415460
 * Namespace: Global
 * Prototype: undefined FUN_00415460(void * this, undefined4 param_1)
 */


void __thiscall FUN_00415460(void *this,undefined4 param_1)

{
  code *pcVar1;
  int unaff_retaddr;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  pcVar1 = *(code **)(*(int *)this + 0x60);
  (*pcVar1)(&local_20);
  FUN_0041a310(*(void **)((int)this + 0x48),unaff_retaddr,param_1);
  (*pcVar1)(&iStack_14);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_28,iStack_24,local_20,iStack_1c);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_18,iStack_14,iStack_10,iStack_c);
  return;
}

