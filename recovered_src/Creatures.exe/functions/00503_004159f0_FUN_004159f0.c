/*
 * Program: Creatures.exe
 * Function: FUN_004159f0
 * Entry: 004159f0
 * Namespace: Global
 * Prototype: undefined FUN_004159f0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004159f0(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_retaddr;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = *(int *)this;
  pcVar1 = *(code **)(iVar2 + 0x60);
  (*pcVar1)(&local_20);
  (**(code **)(iVar2 + 0x48))(unaff_retaddr,param_1);
  (*pcVar1)(&iStack_1c);
  iVar2 = FUN_0040b250(&iStack_30,&local_20);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0040b450((int *)&stack0xffffffb0,&local_20,&iStack_30);
    FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),*piVar3,piVar3[1],piVar3[2],piVar3[3]);
    return;
  }
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_30,iStack_2c,iStack_28,iStack_24);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_20,iStack_1c,iStack_18,iStack_14);
  return;
}

