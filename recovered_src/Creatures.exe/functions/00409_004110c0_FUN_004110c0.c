/*
 * Program: Creatures.exe
 * Function: FUN_004110c0
 * Entry: 004110c0
 * Namespace: Global
 * Prototype: undefined FUN_004110c0(int * param_1)
 */


void __fastcall FUN_004110c0(int *param_1)

{
  LRESULT LVar1;
  int iVar2;
  int *piVar3;
  
  Ordinal_5610(0);
  LVar1 = SendMessageA((HWND)param_1[0x26],0x188,0,0);
  iVar2 = 0;
  if (0 < param_1[0x1d]) {
    piVar3 = param_1 + 0x18;
    while (*piVar3 != LVar1) {
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
      if (param_1[0x1d] <= iVar2) {
        return;
      }
    }
    FUN_004073a0(DAT_00436ea4,iVar2 + 1);
    (**(code **)(*param_1 + 200))();
  }
  return;
}

