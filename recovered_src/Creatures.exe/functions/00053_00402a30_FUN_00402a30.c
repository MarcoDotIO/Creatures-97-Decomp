/*
 * Program: Creatures.exe
 * Function: FUN_00402a30
 * Entry: 00402a30
 * Namespace: Global
 * Prototype: UINT FUN_00402a30(int param_1)
 */


UINT __fastcall FUN_00402a30(int param_1)

{
  HDC hdc;
  HPALETTE hPal;
  UINT UVar1;
  
  UVar1 = 1;
  hdc = GetDC(*(HWND *)(*(int *)(param_1 + 0x2c) + 0x20));
  if ((HPALETTE)**(undefined4 **)(param_1 + 0x470) != (HPALETTE)0x0) {
    hPal = SelectPalette(hdc,(HPALETTE)**(undefined4 **)(param_1 + 0x470),0);
    UVar1 = RealizePalette(hdc);
    SelectPalette(hdc,hPal,1);
    RealizePalette(hdc);
    ReleaseDC(*(HWND *)(*(int *)(param_1 + 0x2c) + 0x20),hdc);
    InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x2c) + 0x20),(RECT *)0x0,1);
  }
  return UVar1;
}

