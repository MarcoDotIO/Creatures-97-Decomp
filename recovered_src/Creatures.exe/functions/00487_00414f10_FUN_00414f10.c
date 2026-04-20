/*
 * Program: Creatures.exe
 * Function: FUN_00414f10
 * Entry: 00414f10
 * Namespace: Global
 * Prototype: undefined FUN_00414f10(int * param_1)
 */


void __fastcall FUN_00414f10(int *param_1)

{
  int iVar1;
  int local_10 [3];
  int local_4;
  
  switch((char)param_1[2]) {
  case '\0':
    if ((*(byte *)((int)param_1 + 9) & 0x40) == 0) {
      *(undefined4 *)((int)param_1 + 0x16) = 0x4b0;
      *(undefined4 *)((int)param_1 + 0x12) = 0x20a0;
      *(undefined4 *)((int)param_1 + 0xe) = 0;
      *(undefined4 *)((int)param_1 + 10) = 0;
    }
    else {
      (**(code **)(*param_1 + 0x60))(local_10);
      FUN_0042da20(DAT_00438594,local_10[0],local_4,(int *)((int)param_1 + 10));
    }
    break;
  case '\x01':
  case '\x02':
    *(undefined4 *)((int)param_1 + 0xe) = 0;
    *(undefined4 *)((int)param_1 + 10) = 0;
    *(undefined4 *)((int)param_1 + 0x12) = 0x7fff;
    *(undefined4 *)((int)param_1 + 0x16) = 0x7fff;
    break;
  case '\x03':
    FUN_00417f60(*(void **)((int)param_1 + 0x1a),(int *)((int)param_1 + 10));
    break;
  case '\x04':
    iVar1 = *(int *)((int)param_1 + 0x1a);
    *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)(iVar1 + 10);
    *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)(iVar1 + 0xe);
    *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)(iVar1 + 0x12);
    *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(iVar1 + 0x16);
  }
  if (DAT_004352c8 == param_1) {
    *(undefined4 *)((int)param_1 + 10) = 0;
    *(undefined4 *)((int)param_1 + 0xe) = 0;
    *(undefined4 *)((int)param_1 + 0x12) = 0x20a0;
    *(undefined4 *)((int)param_1 + 0x16) = 0x4b0;
  }
  return;
}

