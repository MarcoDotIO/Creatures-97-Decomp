/*
 * Program: Creatures.exe
 * Function: FUN_0040b450
 * Entry: 0040b450
 * Namespace: Global
 * Prototype: undefined FUN_0040b450(int * param_1, int * param_2, int * param_3)
 */


void __cdecl FUN_0040b450(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = *param_2;
  local_8 = param_2[2];
  local_c = param_2[1];
  if (param_3[1] < param_2[1]) {
    local_c = param_3[1];
  }
  local_4 = param_2[3];
  if (param_2[3] < param_3[3]) {
    local_4 = param_3[3];
  }
  iVar1 = param_2[2];
  iVar3 = iVar4;
  if (iVar1 < 0x20a0) {
    if (param_3[2] < 0x20a0) goto LAB_0040b4c3;
    if (0x209f < iVar1) goto LAB_0040b4b6;
LAB_0040b501:
    iVar3 = *param_3;
    if (iVar3 < iVar1) {
      local_8 = param_3[2];
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      goto LAB_0040b52b;
    }
    iVar2 = param_3[2];
    if (param_3[2] <= iVar1 + 0x20a0) {
      iVar2 = iVar1 + 0x20a0;
    }
  }
  else {
LAB_0040b4b6:
    if (param_3[2] < 0x20a0) {
      if (iVar1 < 0x20a0) goto LAB_0040b501;
      if (*param_2 < param_3[2]) {
        if (*param_3 < iVar4) {
          iVar4 = *param_3;
        }
        goto LAB_0040b52b;
      }
      iVar2 = param_3[2] + 0x20a0;
    }
    else {
LAB_0040b4c3:
      if (*param_3 < iVar4) {
        iVar3 = *param_3;
      }
      iVar2 = param_3[2];
    }
    iVar4 = iVar3;
    if (iVar2 <= local_8) goto LAB_0040b52b;
  }
  iVar4 = iVar3;
  local_8 = iVar2;
LAB_0040b52b:
  *param_1 = iVar4;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}

