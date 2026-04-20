/*
 * Program: Creatures.exe
 * Function: FUN_00424210
 * Entry: 00424210
 * Namespace: Global
 * Prototype: undefined FUN_00424210(int param_1)
 */


void __fastcall FUN_00424210(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00436c20) {
    piVar2 = &DAT_00439b28;
    do {
      if (*piVar2 == param_1) {
        return;
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00436c20);
  }
  (&DAT_00439b28)[DAT_00436c20] = param_1;
  DAT_00436c20 = DAT_00436c20 + 1;
  return;
}

