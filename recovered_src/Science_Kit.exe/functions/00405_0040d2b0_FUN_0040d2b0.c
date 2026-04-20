/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d2b0
 * Entry: 0040d2b0
 * Namespace: Global
 * Prototype: bool FUN_0040d2b0(int param_1)
 */


bool __fastcall FUN_0040d2b0(int param_1)

{
  HPEN pHVar1;
  int iVar2;
  int iVar3;
  COLORREF *pCVar4;
  
  pCVar4 = (COLORREF *)(param_1 + 200);
  iVar3 = 0;
  do {
    pHVar1 = CreatePen(0,*(int *)(param_1 + 0xd8),*pCVar4);
    iVar2 = Ordinal_1426(pHVar1);
    if (iVar2 == 0) {
      return false;
    }
    pCVar4 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  pHVar1 = CreatePen(0,0,0);
  iVar3 = Ordinal_1426(pHVar1);
  return (bool)('\x01' - (iVar3 == 0));
}

