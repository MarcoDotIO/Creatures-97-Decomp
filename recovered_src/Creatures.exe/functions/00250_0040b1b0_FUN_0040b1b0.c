/*
 * Program: Creatures.exe
 * Function: FUN_0040b1b0
 * Entry: 0040b1b0
 * Namespace: Global
 * Prototype: undefined FUN_0040b1b0(int * param_1)
 */


void __cdecl FUN_0040b1b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0x209f < iVar1) {
    *param_1 = iVar1 + -0x20a0;
    return;
  }
  if (iVar1 < 0) {
    *param_1 = iVar1 + 0x20a0;
  }
  return;
}

