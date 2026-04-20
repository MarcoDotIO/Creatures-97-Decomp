/*
 * Program: Creatures.exe
 * Function: FUN_00412350
 * Entry: 00412350
 * Namespace: Global
 * Prototype: undefined4 FUN_00412350(void)
 */


undefined4 FUN_00412350(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  HMENU pHVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  BOOL BVar8;
  undefined4 uVar9;
  byte *pbVar10;
  UINT uIDItem;
  undefined4 *unaff_FS_OFFSET;
  bool bVar11;
  byte local_64 [64];
  int local_24;
  undefined1 local_20 [4];
  LPCSTR local_1c;
  int local_18;
  LPCSTR local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00412698;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = Ordinal_1035();
  local_24 = *(int *)(*(int *)(iVar3 + 4) + 0x20);
  if (local_24 != 0) {
    pHVar4 = GetMenu(*(HWND *)(local_24 + 0x20));
    iVar3 = Ordinal_2514(pHVar4);
    if (iVar3 != 0) {
      uIDItem = 0;
      local_14 = (LPCSTR)0x0;
      iVar5 = GetMenuItemCount(*(HMENU *)(iVar3 + 4));
      if (iVar5 != 0) {
        do {
          GetMenuStringA(*(HMENU *)(iVar3 + 4),uIDItem,(LPSTR)local_64,0x3f,0x400);
          pbVar6 = local_64;
          pbVar10 = &DAT_00436298;
          do {
            bVar1 = *pbVar6;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_004123f4:
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_004123f9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_004123f4;
            pbVar6 = pbVar6 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_004123f9:
          if (iVar5 == 0) {
            local_14 = (LPCSTR)0x1;
            break;
          }
          uIDItem = uIDItem + 1;
          uVar7 = GetMenuItemCount(*(HMENU *)(iVar3 + 4));
        } while (uIDItem < uVar7);
      }
      if (local_14 != (LPCSTR)0x0) {
        pHVar4 = GetSubMenu(*(HMENU *)(iVar3 + 4),uIDItem);
        local_18 = Ordinal_2514(pHVar4);
        if (local_18 != 0) {
LAB_00412436:
          uVar7 = GetMenuItemCount(*(HMENU *)(local_18 + 4));
          if (1 < uVar7) goto code_r0x00412444;
          iVar3 = 0;
          Ordinal_5439(0,0xffffffff);
          if (0 < DAT_00438868) {
            iVar5 = 0;
            do {
              iVar2 = *(int *)(DAT_00438864 + iVar5);
              if (((*(uint *)(iVar2 + 4) & 0xffff0000) == 0x4010000) &&
                 (*(char *)(iVar2 + 0x47) != '\0')) {
                Ordinal_5191(DAT_00437fa0,iVar2);
              }
              iVar5 = iVar5 + 4;
              iVar3 = iVar3 + 1;
            } while (iVar3 < DAT_00438868);
          }
          InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
          if (DAT_00437fa0 == 0) {
            Ordinal_486();
            local_8 = 0;
            Ordinal_3656(0x8024);
            BVar8 = ModifyMenuA(*(HMENU *)(local_18 + 4),0,0x400,0x8023,local_14);
            local_8 = 0xffffffff;
            if (BVar8 == 0) {
              FUN_00412549();
              goto LAB_00412458;
            }
            FUN_00412549();
LAB_00412532:
            DrawMenuBar(*(HWND *)(local_24 + 0x20));
            uVar9 = 1;
            goto LAB_0041245a;
          }
          local_14 = (LPCSTR)0x0;
          if (DAT_00437fa0 < 1) goto LAB_00412532;
          while( true ) {
            iVar3 = *(int *)(DAT_00437f9c + (int)local_14 * 4);
            *(LPCSTR *)(iVar3 + 0x82f) = local_14 + 0x8014;
            if (local_14 + 0x8014 < (LPCSTR)0x8021) break;
LAB_0041265c:
            local_14 = local_14 + 1;
            if (DAT_00437fa0 <= (int)local_14) goto LAB_00412532;
          }
          Ordinal_483(*(undefined4 *)(iVar3 + 0x807));
          local_8 = 1;
          Ordinal_486();
          local_8._0_1_ = 2;
          if (*(char *)(iVar3 + 0x2b78) == '\0') {
            if (*(char *)(iVar3 + 0x2b6f) == '\x01') {
              uVar9 = 0x8091;
            }
            else {
              uVar9 = 0x8090;
            }
          }
          else {
            uVar9 = 0x8092;
          }
          Ordinal_3656(uVar9);
          Ordinal_836(&DAT_00436294);
          Ordinal_834(local_20);
          if (local_14 == (LPCSTR)0x0) {
            BVar8 = ModifyMenuA(*(HMENU *)(local_18 + 4),0,0x400,*(UINT_PTR *)(iVar3 + 0x82f),
                                local_1c);
            if (BVar8 != 0) goto LAB_00412647;
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_00412690();
            local_8 = 0xffffffff;
            FUN_004126a2();
          }
          else {
            BVar8 = AppendMenuA(*(HMENU *)(local_18 + 4),0,*(UINT_PTR *)(iVar3 + 0x82f),local_1c);
            if (BVar8 != 0) {
LAB_00412647:
              local_8 = CONCAT31(local_8._1_3_,1);
              FUN_00412690();
              local_8 = 0xffffffff;
              FUN_004126a2();
              goto LAB_0041265c;
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_00412690();
            local_8 = 0xffffffff;
            FUN_004126a2();
          }
        }
      }
    }
  }
LAB_00412458:
  uVar9 = 0;
LAB_0041245a:
  *unaff_FS_OFFSET = local_10;
  return uVar9;
code_r0x00412444:
  BVar8 = DeleteMenu(*(HMENU *)(local_18 + 4),1,0x400);
  if (BVar8 == 0) goto LAB_00412458;
  goto LAB_00412436;
}

