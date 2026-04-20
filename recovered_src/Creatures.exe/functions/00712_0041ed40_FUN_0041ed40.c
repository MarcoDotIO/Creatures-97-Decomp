/*
 * Program: Creatures.exe
 * Function: FUN_0041ed40
 * Entry: 0041ed40
 * Namespace: Global
 * Prototype: undefined FUN_0041ed40(int param_1)
 */


void __fastcall FUN_0041ed40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_00438864;
  if (0 < DAT_00438868) {
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (DAT_00438868 <= iVar1) {
        return;
      }
    }
    Ordinal_4960(iVar1,1);
    FUN_00412350();
  }
  return;
}

