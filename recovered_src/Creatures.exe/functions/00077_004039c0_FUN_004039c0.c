/*
 * Program: Creatures.exe
 * Function: FUN_004039c0
 * Entry: 004039c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004039c0(int * param_1)
 */


undefined4 __fastcall FUN_004039c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*param_1 != 0) && ((iVar2 = param_1[0x11d], iVar2 != 0 || (param_1[0x11e] != 0)))) {
    if (iVar2 < 0) {
      piVar1 = param_1 + 0x121;
      if (iVar2 < -2) {
        iVar3 = *piVar1;
        if (iVar2 < param_1[0x11f] + iVar3 + -2) {
          *piVar1 = iVar3 + -2;
        }
        else if (iVar3 + 2 < -3) {
          *piVar1 = iVar3 + 2;
        }
        else {
          *piVar1 = -4;
        }
      }
      else {
        *piVar1 = iVar2;
      }
    }
    else if (iVar2 < 1) {
      param_1[0x121] = 0;
    }
    else {
      piVar1 = param_1 + 0x121;
      if (iVar2 < 3) {
        *piVar1 = iVar2;
      }
      else {
        iVar3 = *piVar1;
        if (param_1[0x11f] + iVar3 + 2 < iVar2) {
          *piVar1 = iVar3 + 2;
        }
        else if (iVar3 + -2 < 4) {
          *piVar1 = 4;
        }
        else {
          *piVar1 = iVar3 + -2;
        }
      }
    }
    iVar2 = param_1[0x11e];
    if (iVar2 < 0) {
      piVar1 = param_1 + 0x122;
      if (iVar2 < -2) {
        iVar3 = *piVar1;
        if (iVar2 < param_1[0x120] + iVar3 + -2) {
          *piVar1 = iVar3 + -2;
        }
        else if (iVar3 + 2 < -3) {
          *piVar1 = iVar3 + 2;
        }
        else {
          *piVar1 = -4;
        }
      }
      else {
        *piVar1 = iVar2;
      }
    }
    else if (iVar2 < 1) {
      param_1[0x122] = 0;
    }
    else {
      piVar1 = param_1 + 0x122;
      if (iVar2 < 3) {
        *piVar1 = iVar2;
      }
      else {
        iVar3 = *piVar1;
        if (param_1[0x120] + iVar3 + 2 < iVar2) {
          *piVar1 = iVar3 + 2;
        }
        else if (iVar3 + -2 < 4) {
          *piVar1 = 4;
        }
        else {
          *piVar1 = iVar3 + -2;
        }
      }
    }
    FUN_004031e0(param_1,param_1[0x121],param_1[0x122]);
    iVar2 = param_1[0x121];
    param_1[0x11f] = param_1[0x11f] + iVar2;
    param_1[0x120] = param_1[0x120] + param_1[0x122];
    param_1[0x11d] = param_1[0x11d] - iVar2;
    param_1[0x11e] = param_1[0x11e] - param_1[0x122];
    return 1;
  }
  return 0;
}

