/*
 * Program: Hatchery.exe
 * Function: FUN_00401f60
 * Entry: 00401f60
 * Namespace: Global
 * Prototype: undefined FUN_00401f60(void * this, undefined4 param_1)
 */


void __thiscall FUN_00401f60(void *this,undefined4 param_1)

{
  BYTE BVar1;
  BYTE BVar2;
  int iVar3;
  HDC pHVar4;
  HPALETTE pHVar5;
  int iVar6;
  undefined4 *puVar7;
  PALETTEENTRY *pPVar8;
  undefined4 *unaff_FS_OFFSET;
  LOGPALETTE local_430 [130];
  int local_1c;
  BYTE local_18;
  BYTE local_17;
  BYTE local_16;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040216b;
  *unaff_FS_OFFSET = &local_10;
  if (*(int **)((int)this + 0x394) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x394) + 4))(1);
  }
  Ordinal_340();
  local_8 = 0;
  iVar3 = Ordinal_4619(param_1,0,0);
  if (iVar3 != 0) {
    iVar6 = 0x100;
    Ordinal_5110(0x36,1);
    local_430[0].palNumEntries = 0x100;
    local_430[0].palVersion = 0x300;
    pHVar4 = GetDC(*(HWND *)((int)this + 0x20));
    iVar3 = Ordinal_2510(pHVar4);
    local_1c = GetDeviceCaps(*(HDC *)(iVar3 + 8),0xc);
    ReleaseDC(*(HWND *)((int)this + 0x20),*(HDC *)(iVar3 + 4));
    pHVar4 = GetDC((HWND)0x0);
    local_14 = (undefined4 *)0x0;
    if (local_1c == 8) {
      iVar6 = 0xf6;
      GetSystemPaletteEntries(pHVar4,0,0x100,local_430[0].palPalEntry);
      Ordinal_5110(0x28,1);
      local_14 = (undefined4 *)0xa;
    }
    ReleaseDC((HWND)0x0,pHVar4);
    if ((int)local_14 < iVar6) {
      iVar6 = iVar6 - (int)local_14;
      pPVar8 = local_430[0].palPalEntry + (int)local_14;
      do {
        Ordinal_4819(&local_18,4);
        BVar2 = local_17;
        BVar1 = local_18;
        iVar6 = iVar6 + -1;
        pPVar8->peRed = local_16;
        pPVar8->peGreen = BVar2;
        pPVar8->peBlue = BVar1;
        pPVar8->peFlags = '\x04';
        pPVar8 = pPVar8 + 1;
      } while (iVar6 != 0);
    }
    Ordinal_1725();
    local_14 = (undefined4 *)Ordinal_729(8);
    if (local_14 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *local_14 = &PTR_LAB_004082f0;
      *local_14 = &PTR_LAB_004082d8;
      local_14[1] = 0;
      *local_14 = &PTR_LAB_00408308;
      puVar7 = local_14;
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 **)((int)this + 0x394) = puVar7;
    pHVar5 = CreatePalette(local_430);
    Ordinal_1426(pHVar5);
    pHVar4 = GetDC(*(HWND *)((int)this + 0x20));
    iVar3 = Ordinal_2510(pHVar4);
    FUN_00403ce0((void *)((int)this + 0x60),iVar3,*(undefined4 *)((int)this + 0x394),
                 (int)local_430[0].palPalEntry);
    ReleaseDC(*(HWND *)((int)this + 0x20),*(HDC *)(iVar3 + 4));
  }
  local_8 = 0xffffffff;
  FUN_00402175();
  *unaff_FS_OFFSET = local_10;
  return;
}

