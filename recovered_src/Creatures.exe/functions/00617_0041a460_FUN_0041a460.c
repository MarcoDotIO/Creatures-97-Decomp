/*
 * Program: Creatures.exe
 * Function: FUN_0041a460
 * Entry: 0041a460
 * Namespace: Global
 * Prototype: undefined FUN_0041a460(int param_1)
 */


void __fastcall FUN_0041a460(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_00437fec;
  if (0 < DAT_00437ff0) {
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (DAT_00437ff0 <= iVar1) {
        return;
      }
    }
    Ordinal_4962(iVar1,1);
  }
  return;
}

