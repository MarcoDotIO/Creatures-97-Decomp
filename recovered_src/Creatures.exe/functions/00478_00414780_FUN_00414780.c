/*
 * Program: Creatures.exe
 * Function: FUN_00414780
 * Entry: 00414780
 * Namespace: Global
 * Prototype: undefined FUN_00414780(int param_1)
 */


void __fastcall FUN_00414780(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_00437fb4;
  if (0 < DAT_00437fb8) {
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (DAT_00437fb8 <= iVar1) {
        return;
      }
    }
    Ordinal_4960(iVar1,1);
  }
  return;
}

