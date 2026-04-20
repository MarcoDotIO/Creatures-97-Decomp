/*
 * Program: Hatchery.exe
 * Function: FUN_00403760
 * Entry: 00403760
 * Namespace: Global
 * Prototype: UINT FUN_00403760(void * this, int param_1)
 */


UINT __thiscall FUN_00403760(void *this,int param_1)

{
  HDC pHVar1;
  int iVar2;
  undefined4 uVar3;
  UINT UVar4;
  
  pHVar1 = GetDC(*(HWND *)((int)this + 0x20));
  iVar2 = Ordinal_2510(pHVar1);
  uVar3 = Ordinal_5127(*(undefined4 *)((int)this + 0x394),param_1);
  UVar4 = RealizePalette(*(HDC *)(iVar2 + 4));
  Ordinal_5127(uVar3,1);
  RealizePalette(*(HDC *)(iVar2 + 4));
  ReleaseDC(*(HWND *)((int)this + 0x20),*(HDC *)(iVar2 + 4));
  if ((UVar4 != 0) || (param_1 != 0)) {
    InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,0);
  }
  *(int *)((int)this + 0x398) = param_1;
  return UVar4;
}

