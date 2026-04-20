/*
 * Program: Launcher.exe
 * Function: FUN_00402330
 * Entry: 00402330
 * Namespace: Global
 * Prototype: undefined4 FUN_00402330(int param_1)
 */


undefined4 __fastcall FUN_00402330(int param_1)

{
  int iVar1;
  HDC pHVar2;
  int iVar3;
  
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  pHVar2 = GetDC(*(HWND *)(param_1 + 0x20));
  iVar1 = Ordinal_2510(pHVar2);
  iVar3 = GetDeviceCaps(*(HDC *)(iVar1 + 8),0xc);
  ReleaseDC(*(HWND *)(param_1 + 0x20),*(HDC *)(iVar1 + 4));
  if (iVar3 < 8) {
    Ordinal_1060(0x68,0,0xffffffff);
  }
  return 0;
}

