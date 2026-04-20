/*
 * Program: Creatures.exe
 * Function: FUN_0041caf0
 * Entry: 0041caf0
 * Namespace: Global
 * Prototype: undefined FUN_0041caf0(void)
 */


void FUN_0041caf0(void)

{
  undefined1 *puVar1;
  CHAR *pCVar2;
  byte bVar3;
  HMENU pHVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined3 extraout_var;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  UINT uIDItem;
  undefined4 *unaff_FS_OFFSET;
  bool bVar12;
  byte abStack_180 [64];
  CHAR aCStack_140 [64];
  BYTE aBStack_100 [64];
  undefined1 auStack_c0 [32];
  CHAR aCStack_a0 [32];
  undefined1 auStack_80 [100];
  char cStack_1c;
  undefined1 uStack_1b;
  undefined1 local_1a [10];
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041cd1d;
  *unaff_FS_OFFSET = &uStack_10;
  iVar11 = 0;
  Ordinal_392();
  uIDItem = 0;
  uStack_8 = 2;
  pHVar4 = GetMenu(*(HWND *)(DAT_00436ea8 + 0x20));
  iVar5 = Ordinal_2514(pHVar4);
  iVar6 = GetMenuItemCount(*(HMENU *)(iVar5 + 4));
  if (iVar6 != 0) {
    do {
      GetMenuStringA(*(HMENU *)(iVar5 + 4),uIDItem,(LPSTR)abStack_180,0x3f,0x400);
      pbVar7 = abStack_180;
      pbVar9 = &DAT_00436604;
      do {
        bVar3 = *pbVar7;
        bVar12 = bVar3 < *pbVar9;
        if (bVar3 != *pbVar9) {
LAB_0041cb96:
          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_0041cb9b;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar7[1];
        bVar12 = bVar3 < pbVar9[1];
        if (bVar3 != pbVar9[1]) goto LAB_0041cb96;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar3 != 0);
      iVar6 = 0;
LAB_0041cb9b:
      if (iVar6 == 0) {
        pHVar4 = GetSubMenu(*(HMENU *)(iVar5 + 4),uIDItem);
        iVar11 = Ordinal_2514(pHVar4);
        break;
      }
      uIDItem = uIDItem + 1;
      uVar8 = GetMenuItemCount(*(HMENU *)(iVar5 + 4));
    } while (uIDItem < uVar8);
  }
  if (iVar11 != 0) {
    uVar8 = 0;
    iVar5 = 0;
    do {
      wsprintfA(aCStack_140,&DAT_004365fc,&DAT_004365e8,iVar5);
      bVar12 = FUN_00408300(&DAT_00439e50,0,aCStack_140,aBStack_100,0x40);
      if ((CONCAT31(extraout_var,bVar12) != 0) &&
         (iVar6 = FUN_0041cd40((char *)aBStack_100,(int)auStack_c0), iVar6 != 0)) {
        uVar10 = 0;
        iVar6 = DAT_00436ea8 + 0xc4 + uVar8;
        do {
          puVar1 = auStack_c0 + uVar10;
          uVar10 = uVar10 + 1;
          *(undefined1 *)(iVar6 + -1 + uVar10) = *puVar1;
        } while (uVar10 < 0x20);
        uVar10 = 0;
        do {
          pCVar2 = aCStack_a0 + uVar10;
          uVar10 = uVar10 + 1;
          *(CHAR *)(iVar6 + 0x1f + uVar10) = *pCVar2;
        } while (uVar10 < 0x20);
        uVar10 = 0;
        do {
          puVar1 = auStack_80 + uVar10;
          uVar10 = uVar10 + 1;
          *(undefined1 *)(iVar6 + 0x3f + uVar10) = *puVar1;
        } while (uVar10 < 100);
        *(char *)(iVar6 + 0xa4) = cStack_1c;
        *(undefined1 *)(iVar6 + 0xa5) = uStack_1b;
        Ordinal_745(local_1a);
        Ordinal_5213(iVar5 + 0xf,iVar5 + 0x8086,0,cStack_1c + -0x30);
        AppendMenuA(*(HMENU *)(iVar11 + 4),0,iVar5 + 0x8086,aCStack_a0);
      }
      uVar8 = uVar8 + 0xae;
      iVar5 = iVar5 + 1;
    } while (uVar8 < 0x6cc);
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,1);
  }
  uStack_8 = 0xffffffff;
  FUN_0041cd27();
  *unaff_FS_OFFSET = uStack_10;
  return;
}

