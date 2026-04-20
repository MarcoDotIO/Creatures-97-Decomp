/*
 * Program: Creatures.exe
 * Function: FUN_004037cb
 * Entry: 004037cb
 * Namespace: Global
 * Prototype: undefined FUN_004037cb(int * param_1)
 */


void __fastcall FUN_004037cb(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool in_ZF;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  
  if (in_ZF) {
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
  if ((*param_1 == 0) && (iVar2 = FUN_00403450((int)param_1), iVar2 != 0)) {
    return;
  }
  iStack00000004 = param_1[1];
  iVar2 = param_1[3];
  iVar1 = param_1[2];
  iVar5 = *(int *)(DAT_004382c4 + 0x72) - (iStack00000004 + iVar2) / 2;
  iStack00000008 = param_1[4];
  iVar3 = iStack00000008 * 5 + iVar1 * 3;
  iVar3 = *(int *)(DAT_004382c4 + 0x76) - ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3);
  if (iVar5 < -0x1050) {
    iVar5 = iVar5 + 0x20a0;
  }
  else if (0x104f < iVar5) {
    iVar5 = iVar5 + -0x20a0;
  }
  if (*param_1 == 0) {
    FUN_004031e0(param_1,iVar5,iVar3);
    return;
  }
  iVar4 = 0;
  iStack0000000c = 0;
  if ((iVar5 < (int)((iStack00000004 - iVar2) + (iStack00000004 - iVar2 >> 0x1f & 3U)) >> 2) &&
     (-0x19 < param_1[0x121])) {
    iVar4 = -3;
  }
  if (((int)((iVar2 - iStack00000004) + (iVar2 - iStack00000004 >> 0x1f & 3U)) >> 2 < iVar5) &&
     (param_1[0x121] < 0x19)) {
    iVar4 = 3;
  }
  if ((iVar3 < (iVar1 - iStack00000008) / 6) && (-0x19 < param_1[0x122])) {
    iStack0000000c = -3;
  }
  if (((iStack00000008 - iVar1) / 6 < iVar3) && (param_1[0x122] < 0x19)) {
    iStack0000000c = 3;
  }
  iVar2 = param_1[0x121];
  iVar1 = param_1[0x122];
  param_1[0x121] = iVar2 + iVar4;
  param_1[0x122] = iStack0000000c + iVar1;
  FUN_004031e0(param_1,(iVar2 + iVar4) / 3,(iStack0000000c + iVar1) / 3);
  iVar2 = param_1[0x121];
  if (iVar2 < 1) {
    if (-1 < iVar2) goto LAB_00403993;
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  param_1[0x121] = iVar2;
LAB_00403993:
  iVar2 = param_1[0x122];
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      param_1[0x122] = iVar2 + 1;
    }
    return;
  }
  param_1[0x122] = iVar2 + -1;
  return;
}

