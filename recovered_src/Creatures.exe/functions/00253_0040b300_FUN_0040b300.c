/*
 * Program: Creatures.exe
 * Function: FUN_0040b300
 * Entry: 0040b300
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b300(int * param_1, int * param_2)
 */


undefined4 __cdecl FUN_0040b300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1[3] <= param_2[1]) || (param_2[3] <= param_1[1])) {
    return 0;
  }
  iVar2 = param_1[2];
  if (iVar2 < 0x20a0) {
    if (param_2[2] < 0x20a0) {
      if ((param_2[2] <= *param_1) || (iVar1 = *param_2, iVar2 <= iVar1)) {
        return 0;
      }
      if (*param_1 < iVar1) {
        *param_1 = iVar1;
      }
      if (param_2[2] < iVar2) {
        param_1[2] = param_2[2];
      }
      goto LAB_0040b420;
    }
    if (0x209f < iVar2) goto LAB_0040b372;
  }
  else {
LAB_0040b372:
    if (0x209f < param_2[2]) {
      if (*param_1 < *param_2) {
        *param_1 = *param_2;
      }
      if (param_2[2] < iVar2) {
        param_1[2] = param_2[2];
      }
      goto LAB_0040b420;
    }
    if (0x209f < iVar2) {
      iVar2 = iVar2 + -0x20a0;
      if ((iVar2 <= *param_2) && (param_2[2] <= *param_1)) {
        return 0;
      }
      if (*param_1 < param_2[2]) {
        param_1[2] = param_2[2];
        if (*param_1 < *param_2) {
          *param_1 = *param_2;
        }
      }
      else {
        *param_1 = *param_2;
        iVar1 = param_2[2];
        if (iVar2 <= param_2[2]) {
          iVar1 = iVar2;
        }
        param_1[2] = iVar1;
      }
      goto LAB_0040b420;
    }
  }
  iVar1 = param_2[2] + -0x20a0;
  if ((iVar1 <= *param_1) && (iVar2 <= *param_2)) {
    return 0;
  }
  if (*param_2 < iVar2) {
    param_2[2] = iVar2;
    if (*param_2 < *param_1) {
      *param_2 = *param_1;
    }
  }
  else {
    *param_2 = *param_1;
    iVar2 = param_1[2];
    if (iVar1 <= param_1[2]) {
      iVar2 = iVar1;
    }
    param_2[2] = iVar2;
  }
LAB_0040b420:
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[3] < param_1[3]) {
    param_1[3] = param_2[3];
  }
  return 1;
}

