/*
 * Program: Creatures.exe
 * Function: FUN_0040b560
 * Entry: 0040b560
 * Namespace: Global
 * Prototype: undefined FUN_0040b560(int * param_1)
 */


void __cdecl FUN_0040b560(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  iVar5 = iVar2 + -0x20;
  iVar3 = param_1[1];
  iVar4 = param_1[3];
  *param_1 = iVar5;
  param_1[2] = iVar1 + 0x20;
  param_1[1] = iVar3 + -0x20;
  param_1[3] = iVar4 + 0x20;
  if (iVar5 < 0) {
    *param_1 = iVar2 + 0x2080;
    param_1[2] = iVar1 + 0x20c0;
  }
  if (iVar3 + -0x20 < 0) {
    param_1[1] = 0;
  }
  if (0x4b0 < iVar4 + 0x20) {
    param_1[3] = 0x4b0;
  }
  return;
}

