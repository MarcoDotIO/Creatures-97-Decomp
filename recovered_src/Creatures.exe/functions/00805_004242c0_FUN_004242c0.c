/*
 * Program: Creatures.exe
 * Function: FUN_004242c0
 * Entry: 004242c0
 * Namespace: Global
 * Prototype: undefined4 FUN_004242c0(int param_1)
 */


undefined4 __cdecl FUN_004242c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00436c24) {
    piVar2 = &DAT_0043912c;
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00436c24);
    if (iVar1 < DAT_00436c24) {
      return (&DAT_00439128)[iVar1 * 2];
    }
  }
  return 0;
}

