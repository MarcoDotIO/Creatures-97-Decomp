/*
 * Program: Creatures.exe
 * Function: FUN_00404220
 * Entry: 00404220
 * Namespace: Global
 * Prototype: LOGPALETTE * FUN_00404220(LOGPALETTE * param_1)
 */


LOGPALETTE * __fastcall FUN_00404220(LOGPALETTE *param_1)

{
  LOGPALETTE *pLVar1;
  HDC hdc;
  HPALETTE pHVar2;
  BYTE *pBVar3;
  int iVar4;
  
  iVar4 = 0x100;
  param_1->palVersion = 0x300;
  param_1->palNumEntries = 0x100;
  hdc = GetDC((HWND)0x0);
  pLVar1 = param_1;
  do {
    pLVar1->palPalEntry[0].peRed = '\0';
    pLVar1->palPalEntry[0].peGreen = '\0';
    pLVar1->palPalEntry[0].peBlue = '\0';
    pLVar1->palPalEntry[0].peFlags = '\x04';
    iVar4 = iVar4 + -1;
    pLVar1 = (LOGPALETTE *)pLVar1->palPalEntry;
  } while (iVar4 != 0);
  pHVar2 = CreatePalette(param_1);
  if (pHVar2 != (HPALETTE)0x0) {
    pHVar2 = SelectPalette(hdc,pHVar2,0);
    RealizePalette(hdc);
    pHVar2 = SelectPalette(hdc,pHVar2,0);
    DeleteObject(pHVar2);
  }
  GetSystemPaletteEntries(hdc,0,10,param_1->palPalEntry);
  GetSystemPaletteEntries(hdc,0xf6,10,param_1[0x7b].palPalEntry);
  pBVar3 = &param_1->palPalEntry[0].peFlags;
  iVar4 = 10;
  do {
    *pBVar3 = '\0';
    pBVar3 = pBVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pBVar3 = &param_1[5].palPalEntry[0].peFlags;
  iVar4 = 0xec;
  do {
    *pBVar3 = '\x04';
    pBVar3 = pBVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pBVar3 = &param_1[0x7b].palPalEntry[0].peFlags;
  iVar4 = 10;
  do {
    *pBVar3 = '\0';
    pBVar3 = pBVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ReleaseDC((HWND)0x0,hdc);
  return param_1;
}

