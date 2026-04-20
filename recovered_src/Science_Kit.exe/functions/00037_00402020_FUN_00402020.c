/*
 * Program: Science_Kit.exe
 * Function: FUN_00402020
 * Entry: 00402020
 * Namespace: Global
 * Prototype: bool FUN_00402020(int param_1)
 */


bool __fastcall FUN_00402020(int param_1)

{
  HBRUSH pHVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  
  pHVar1 = CreateSolidBrush(*(COLORREF *)(param_1 + 0xb0));
  iVar2 = Ordinal_1426(pHVar1);
  if (iVar2 == 0) {
    return false;
  }
  pvVar3 = GetStockObject(0);
  *(HGDIOBJ *)(param_1 + 0xa4) = pvVar3;
  return (bool)('\x01' - (pvVar3 == (HGDIOBJ)0x0));
}

