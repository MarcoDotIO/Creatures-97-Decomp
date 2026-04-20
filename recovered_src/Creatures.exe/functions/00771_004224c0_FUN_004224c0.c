/*
 * Program: Creatures.exe
 * Function: FUN_004224c0
 * Entry: 004224c0
 * Namespace: Global
 * Prototype: undefined FUN_004224c0(int * param_1)
 */


void __fastcall FUN_004224c0(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  LONG LVar4;
  LONG LVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((char)param_1[0xade] != '\0') {
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0x70);
  LVar4 = (**(code **)(*param_1 + 0x74))();
  LVar5 = (*pcVar2)();
  iVar6 = FUN_0042db40(DAT_00438594,LVar5,LVar4);
  *(undefined1 *)((int)param_1 + 0x2ad7) = 0;
  *(undefined1 *)((int)param_1 + 0x2ad6) = 0;
  iVar6 = (iVar6 * 0xff) / 3;
  if (iVar6 < 1) {
    if (iVar6 < 0) {
      *(char *)((int)param_1 + 0x2ad6) = -(char)iVar6;
    }
  }
  else {
    *(char *)((int)param_1 + 0x2ad7) = (char)iVar6;
  }
  *(undefined *)(param_1 + 0xab6) = (&DAT_00436ad8)[*(int *)((int)DAT_00438594 + 0xbf0) * 4];
  uVar7 = FUN_00414ec0((int)param_1);
  piVar3 = *(int **)(uVar7 * 0x10 + 0x836 + (int)param_1);
  if (piVar3 == (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0x2ad9) = 0;
  }
  else {
    iVar6 = (**(code **)(*piVar3 + 0x70))();
    iVar8 = (*pcVar2)();
    uVar7 = iVar6 - iVar8 >> 0x1f;
    iVar6 = (iVar6 - iVar8 ^ uVar7) - uVar7;
    if (iVar6 < 0xc9) {
      *(char *)((int)param_1 + 0x2ad9) = -6 - (char)iVar6;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x2ad9) = 0x32;
    }
  }
  if (param_1[0xadc] != 0) {
    if (*(byte *)(param_1 + 0xab7) < 0x50) {
      param_1[0xadc] = 0;
      goto LAB_004225bd;
    }
    if (param_1[0xadc] != 0) goto LAB_004225bd;
  }
  if (0xa0 < *(byte *)(param_1 + 0xab7)) {
    param_1[0xadc] = param_1[0x12];
  }
LAB_004225bd:
  *(char *)((int)param_1 + 0x2ada) = (param_1[0xadc] == 0) + -1;
  *(char *)((int)param_1 + 0x2adb) = (param_1[0xadd] == 0) + -1;
  bVar1 = *(byte *)((int)param_1 + 0x2b6e);
  if ((bVar1 < 7) && (*(char *)(bVar1 + 0x2ade + (int)param_1) != '\0')) {
    *(byte *)((int)param_1 + 0x2b6e) = bVar1 + 1;
    if ((byte)(bVar1 + 1) < 7) {
      FUN_00422db0(param_1);
    }
    else {
      FUN_00422ff0(param_1);
    }
  }
  if (*(char *)((int)param_1 + 0x2af5) != '\0') {
    FUN_00422ff0(param_1);
  }
  return;
}

