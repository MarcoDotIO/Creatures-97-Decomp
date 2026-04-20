/*
 * Program: Creatures.exe
 * Function: FUN_004071a0
 * Entry: 004071a0
 * Namespace: Global
 * Prototype: undefined4 FUN_004071a0(void)
 */


undefined4 FUN_004071a0(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HMENU pHVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  UINT uIDItem;
  bool bVar10;
  byte local_40 [64];
  
  iVar3 = Ordinal_1035();
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x20);
  if (iVar3 == 0) {
    return 0;
  }
  pHVar4 = GetMenu(*(HWND *)(iVar3 + 0x20));
  iVar3 = Ordinal_2514(pHVar4);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = false;
  uIDItem = 0;
  iVar5 = GetMenuItemCount(*(HMENU *)(iVar3 + 4));
  if (iVar5 != 0) {
    do {
      GetMenuStringA(*(HMENU *)(iVar3 + 4),uIDItem,(LPSTR)local_40,0x3f,0x400);
      pbVar8 = local_40;
      pcVar9 = s__Camera_00435cc0;
      do {
        bVar1 = *pbVar8;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00407234:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00407239;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00407234;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00407239:
      if (iVar5 == 0) {
        bVar2 = true;
        break;
      }
      uIDItem = uIDItem + 1;
      uVar6 = GetMenuItemCount(*(HMENU *)(iVar3 + 4));
    } while (uIDItem < uVar6);
  }
  if (bVar2) {
    pHVar4 = GetSubMenu(*(HMENU *)(iVar3 + 4),uIDItem);
    uVar7 = Ordinal_2514(pHVar4);
    return uVar7;
  }
  return 0;
}

