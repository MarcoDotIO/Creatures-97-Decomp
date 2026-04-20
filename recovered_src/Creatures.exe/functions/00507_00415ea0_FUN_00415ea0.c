/*
 * Program: Creatures.exe
 * Function: FUN_00415ea0
 * Entry: 00415ea0
 * Namespace: Global
 * Prototype: undefined FUN_00415ea0(int * param_1)
 */


void __fastcall FUN_00415ea0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int aiStack_14 [5];
  
  if (*(int *)((int)DAT_00436eb0 + 100) != 0) {
    FUN_004160f0(param_1);
  }
  FUN_0041a4a0((void *)param_1[0x12],&local_20);
  FUN_00402130(DAT_00436eb0,&local_34,&local_38);
  FUN_0041a560(param_1[0x12]);
  if (DAT_00438d0c == param_1) {
    (**(code **)(*param_1 + 0x54))();
    return;
  }
  (**(code **)(*DAT_00438d0c + 0x60))();
  piVar3 = (int *)FUN_0040b450((int *)&stack0xffffffb4,&iStack_24,aiStack_14);
  iStack_24 = *piVar3;
  local_20 = piVar3[1];
  iStack_1c = piVar3[2];
  iStack_18 = piVar3[3];
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x4c))();
  (**(code **)(*DAT_00438d0c + 0x4c))(iStack_40,iStack_44 + -0x10);
  (**(code **)(iVar1 + 0x60))(&iStack_44);
  (**(code **)(*DAT_00438d0c + 0x60))(auStack_28);
  piVar3 = (int *)FUN_0040b450((int *)&stack0xffffff9c,(int *)&stack0xffffffb4,&iStack_2c);
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  iStack_44 = piVar3[2];
  iStack_40 = piVar3[3];
  iVar4 = FUN_0040b250(&iStack_3c,(int *)&stack0xffffffb4);
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_0040b450((int *)&stack0xffffff9c,(int *)&stack0xffffffb4,&iStack_3c);
    iStack_44 = piVar3[2];
    iStack_40 = piVar3[3];
    FUN_00402ab0(*(void **)((int)DAT_00436eb0 + 0x60),*piVar3,piVar3[1],iStack_44,iStack_40);
    return;
  }
  FUN_00402ab0(*(void **)((int)DAT_00436eb0 + 0x60),iStack_3c,local_38,local_34,iStack_30);
  FUN_00402ab0(*(void **)((int)DAT_00436eb0 + 0x60),iVar1,iVar2,iStack_44,iStack_40);
  return;
}

