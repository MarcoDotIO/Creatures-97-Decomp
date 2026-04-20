/*
 * Program: Creatures.exe
 * Function: FUN_004037c0
 * Entry: 004037c0
 * Namespace: Global
 * Prototype: undefined FUN_004037c0(int * param_1)
 */


void __fastcall FUN_004037c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_4;
  
  if (DAT_004382c4 == 0) {
    param_1[0x123] = 0;
    return;
  }
  if (param_1[0x123] != DAT_004382c4) {
    param_1[0x123] = DAT_004382c4;
  }
  if (DAT_004382c4 == DAT_004352c8) {
    return;
  }
  if (*(char *)(DAT_004382c4 + 8) == '\x01') {
    return;
  }
  if ((*param_1 == 0) && (iVar4 = FUN_00403450((int)param_1), iVar4 != 0)) {
    return;
  }
  iVar4 = param_1[1];
  iVar1 = param_1[3];
  iVar2 = param_1[2];
  iVar7 = *(int *)(DAT_004382c4 + 0x72) - (iVar4 + iVar1) / 2;
  iVar3 = param_1[4];
  iVar5 = iVar3 * 5 + iVar2 * 3;
  iVar5 = *(int *)(DAT_004382c4 + 0x76) - ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3);
  if (iVar7 < -0x1050) {
    iVar7 = iVar7 + 0x20a0;
  }
  else if (0x104f < iVar7) {
    iVar7 = iVar7 + -0x20a0;
  }
  if (*param_1 == 0) {
    FUN_004031e0(param_1,iVar7,iVar5);
    return;
  }
  iVar6 = 0;
  iStack_4 = 0;
  if ((iVar7 < (int)((iVar4 - iVar1) + (iVar4 - iVar1 >> 0x1f & 3U)) >> 2) &&
     (-0x19 < param_1[0x121])) {
    iVar6 = -3;
  }
  if (((int)((iVar1 - iVar4) + (iVar1 - iVar4 >> 0x1f & 3U)) >> 2 < iVar7) &&
     (param_1[0x121] < 0x19)) {
    iVar6 = 3;
  }
  if ((iVar5 < (iVar2 - iVar3) / 6) && (-0x19 < param_1[0x122])) {
    iStack_4 = -3;
  }
  if (((iVar3 - iVar2) / 6 < iVar5) && (param_1[0x122] < 0x19)) {
    iStack_4 = 3;
  }
  iVar4 = param_1[0x121];
  iVar1 = param_1[0x122];
  param_1[0x121] = iVar4 + iVar6;
  param_1[0x122] = iStack_4 + iVar1;
  FUN_004031e0(param_1,(iVar4 + iVar6) / 3,(iStack_4 + iVar1) / 3);
  iVar4 = param_1[0x121];
  if (iVar4 < 1) {
    if (-1 < iVar4) goto LAB_00403993;
    iVar4 = iVar4 + 1;
  }
  else {
    iVar4 = iVar4 + -1;
  }
  param_1[0x121] = iVar4;
LAB_00403993:
  iVar4 = param_1[0x122];
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      param_1[0x122] = iVar4 + 1;
    }
    return;
  }
  param_1[0x122] = iVar4 + -1;
  return;
}

