/*
 * Program: Creatures.exe
 * Function: FUN_0040b250
 * Entry: 0040b250
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b250(int * param_1, int * param_2)
 */


undefined4 __cdecl FUN_0040b250(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1[3] <= param_2[1]) || (param_2[3] <= param_1[1])) {
    return 0;
  }
  iVar1 = param_1[2];
  if (iVar1 < 0x20a0) {
    if (param_2[2] < 0x20a0) {
      if ((*param_1 < param_2[2]) && (*param_2 < iVar1)) {
        return 1;
      }
      return 0;
    }
    if (iVar1 < 0x20a0) goto LAB_0040b2d8;
  }
  if (0x209f < param_2[2]) {
    return 1;
  }
  if (0x209f < iVar1) {
    if (*param_2 < iVar1 + -0x20a0) {
      return 1;
    }
    if (*param_1 < param_2[2]) {
      return 1;
    }
    return 0;
  }
LAB_0040b2d8:
  if ((param_2[2] + -0x20a0 <= *param_1) && (iVar1 <= *param_2)) {
    return 0;
  }
  return 1;
}

