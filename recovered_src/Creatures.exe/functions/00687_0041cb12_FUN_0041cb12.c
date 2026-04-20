/*
 * Program: Creatures.exe
 * Function: FUN_0041cb12
 * Entry: 0041cb12
 * Namespace: Global
 * Prototype: undefined FUN_0041cb12(void)
 */


void FUN_0041cb12(void)

{
  undefined1 *puVar1;
  byte bVar2;
  HMENU pHVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined3 extraout_var;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int unaff_EBP;
  UINT uIDItem;
  undefined4 *unaff_FS_OFFSET;
  bool bVar11;
  
  iVar10 = 0;
  Ordinal_392();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = DAT_00436ea8;
  uIDItem = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  pHVar3 = GetMenu(*(HWND *)(iVar4 + 0x20));
  iVar4 = Ordinal_2514(pHVar3);
  iVar5 = GetMenuItemCount(*(HMENU *)(iVar4 + 4));
  if (iVar5 != 0) {
    do {
      GetMenuStringA(*(HMENU *)(iVar4 + 4),uIDItem,(LPSTR)(unaff_EBP + -0x17c),0x3f,0x400);
      pbVar6 = (byte *)(unaff_EBP + -0x17c);
      pbVar8 = &DAT_00436604;
      do {
        bVar2 = *pbVar6;
        bVar11 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_0041cb96:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0041cb9b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar11 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_0041cb96;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_0041cb9b:
      if (iVar5 == 0) {
        pHVar3 = GetSubMenu(*(HMENU *)(iVar4 + 4),uIDItem);
        iVar10 = Ordinal_2514(pHVar3);
        break;
      }
      uIDItem = uIDItem + 1;
      uVar7 = GetMenuItemCount(*(HMENU *)(iVar4 + 4));
    } while (uIDItem < uVar7);
  }
  if (iVar10 != 0) {
    uVar7 = 0;
    iVar4 = 0;
    do {
      wsprintfA((LPSTR)(unaff_EBP + -0x13c),&DAT_004365fc,&DAT_004365e8,iVar4);
      bVar11 = FUN_00408300(&DAT_00439e50,0,(LPCSTR)(unaff_EBP + -0x13c),(LPBYTE)(unaff_EBP + -0xfc)
                            ,0x40);
      if ((CONCAT31(extraout_var,bVar11) != 0) &&
         (iVar5 = FUN_0041cd40((char *)(unaff_EBP + -0xfc),unaff_EBP + -0xbc), iVar5 != 0)) {
        uVar9 = 0;
        iVar5 = DAT_00436ea8 + 0xc4 + uVar7;
        do {
          puVar1 = (undefined1 *)(unaff_EBP + -0xbc + uVar9);
          uVar9 = uVar9 + 1;
          *(undefined1 *)(iVar5 + -1 + uVar9) = *puVar1;
        } while (uVar9 < 0x20);
        uVar9 = 0;
        do {
          puVar1 = (undefined1 *)(unaff_EBP + -0x9c + uVar9);
          uVar9 = uVar9 + 1;
          *(undefined1 *)(iVar5 + 0x1f + uVar9) = *puVar1;
        } while (uVar9 < 0x20);
        uVar9 = 0;
        do {
          puVar1 = (undefined1 *)(unaff_EBP + -0x7c + uVar9);
          uVar9 = uVar9 + 1;
          *(undefined1 *)(iVar5 + 0x3f + uVar9) = *puVar1;
        } while (uVar9 < 100);
        *(undefined1 *)(iVar5 + 0xa4) = *(undefined1 *)(unaff_EBP + -0x18);
        *(undefined1 *)(iVar5 + 0xa5) = *(undefined1 *)(unaff_EBP + -0x17);
        Ordinal_745(unaff_EBP + -0x16);
        Ordinal_5213(iVar4 + 0xf,iVar4 + 0x8086,0,*(char *)(unaff_EBP + -0x18) + -0x30);
        AppendMenuA(*(HMENU *)(iVar10 + 4),0,iVar4 + 0x8086,(LPCSTR)(unaff_EBP + -0x9c));
      }
      uVar7 = uVar7 + 0xae;
      iVar4 = iVar4 + 1;
    } while (uVar7 < 0x6cc);
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041cd27();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

