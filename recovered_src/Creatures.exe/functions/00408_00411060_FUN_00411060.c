/*
 * Program: Creatures.exe
 * Function: FUN_00411060
 * Entry: 00411060
 * Namespace: Global
 * Prototype: undefined FUN_00411060(int * param_1)
 */


void __fastcall FUN_00411060(int *param_1)

{
  LRESULT LVar1;
  int *piVar2;
  int iVar3;
  
  Ordinal_5610(0);
  iVar3 = 0;
  LVar1 = SendMessageA((HWND)param_1[0x26],0x188,0,0);
  if (0 < param_1[0x1d]) {
    piVar2 = param_1 + 0x18;
    while (*piVar2 != LVar1) {
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
      if (param_1[0x1d] <= iVar3) {
        return;
      }
    }
    FUN_004073a0(DAT_00436ea4,iVar3 + 1);
    (**(code **)(*param_1 + 200))();
  }
  return;
}

