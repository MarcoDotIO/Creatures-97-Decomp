/*
 * Program: Creatures.exe
 * Function: FUN_00415890
 * Entry: 00415890
 * Namespace: Global
 * Prototype: undefined FUN_00415890(void * this, undefined4 param_1)
 */


void __thiscall FUN_00415890(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_retaddr;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined1 local_10 [16];
  
  iVar2 = *(int *)this;
  pcVar1 = *(code **)(iVar2 + 0x60);
  (*pcVar1)(local_10);
  (**(code **)(iVar2 + 0x4c))(unaff_retaddr,param_1);
  (*pcVar1)(&iStack_2c);
  iVar2 = FUN_0040b250(&iStack_20,&iStack_30);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0040b450((int *)&stack0xffffffc0,&iStack_30,&iStack_20);
    iStack_30 = *piVar3;
    iStack_2c = piVar3[1];
    iStack_28 = piVar3[2];
    iStack_24 = piVar3[3];
    FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_30,iStack_2c,iStack_28,iStack_24);
    return;
  }
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_20,iStack_1c,iStack_18,iStack_14);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),iStack_30,iStack_2c,iStack_28,iStack_24);
  return;
}

