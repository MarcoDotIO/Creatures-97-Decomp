/*
 * Program: Creatures.exe
 * Function: FUN_0042a170
 * Entry: 0042a170
 * Namespace: Global
 * Prototype: undefined FUN_0042a170(int * param_1, int * param_2, int param_3)
 */


void __cdecl FUN_0042a170(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = *param_2 * *param_1; iVar1 < param_3; iVar1 = *param_2 * (iVar1 + 1)) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
  }
  if (0x400 < *param_2 * *param_1) {
    *param_2 = 0x20;
    *param_1 = 0x20;
  }
  return;
}

