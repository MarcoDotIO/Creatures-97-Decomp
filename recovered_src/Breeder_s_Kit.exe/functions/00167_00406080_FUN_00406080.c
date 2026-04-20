/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406080
 * Entry: 00406080
 * Namespace: Global
 * Prototype: undefined4 FUN_00406080(int param_1)
 */


undefined4 FUN_00406080(int param_1)

{
  char cVar1;
  BYTE BVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  char *pcVar9;
  char *pcVar10;
  BYTE *pBVar11;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_104 [96];
  undefined4 local_a4 [7];
  char local_88 [4];
  char local_84 [4];
  char local_80 [4];
  undefined1 local_7c [52];
  char *local_48;
  char *local_44;
  undefined **local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040630c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404660(local_a4);
  local_8 = 0;
  iVar3 = FUN_004047a0(local_a4,s_Millennium_Interactive_00412170,s_Creatures_00412254,&DAT_004121a0
                      );
  if (iVar3 == 0) {
    local_8 = 0xffffffff;
    FUN_00406316();
    uVar4 = 0xffffffff;
  }
  else {
    FUN_00404af0(local_a4,1,s_Palette_Directory_00412470,local_104,0x60,(BYTE *)0x0);
    local_88[0] = s_palette_dta_00412464[0];
    local_88[1] = s_palette_dta_00412464[1];
    local_88[2] = s_palette_dta_00412464[2];
    local_88[3] = s_palette_dta_00412464[3];
    local_84[0] = s_palette_dta_00412464[4];
    local_84[1] = s_palette_dta_00412464[5];
    local_84[2] = s_palette_dta_00412464[6];
    local_84[3] = s_palette_dta_00412464[7];
    local_80[0] = s_palette_dta_00412464[8];
    local_80[1] = s_palette_dta_00412464[9];
    local_80[2] = s_palette_dta_00412464[10];
    local_80[3] = s_palette_dta_00412464[0xb];
    uVar6 = 0xffffffff;
    pcVar9 = local_88;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pBVar8 = local_104;
    do {
      pBVar11 = pBVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pBVar11 = pBVar8 + 1;
      BVar2 = *pBVar8;
      pBVar8 = pBVar11;
    } while (BVar2 != '\0');
    pBVar8 = (BYTE *)(pcVar10 + -uVar6);
    pBVar11 = pBVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pBVar11 = *(undefined4 *)pBVar8;
      pBVar8 = pBVar8 + 4;
      pBVar11 = pBVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pBVar11 = *pBVar8;
      pBVar8 = pBVar8 + 1;
      pBVar11 = pBVar11 + 1;
    }
    Ordinal_340();
    local_8._0_1_ = 1;
    Ordinal_336();
    local_8._0_1_ = 2;
    Ordinal_486();
    local_8._0_1_ = 3;
    local_28[0] = &PTR_LAB_0040f030;
    local_20 = 0;
    local_1c = 0xffffffff;
    Ordinal_762(0);
    local_8._0_1_ = 4;
    iVar3 = Ordinal_4619(local_104,0,local_28);
    if (iVar3 == 0) {
      iVar3 = Ordinal_5003(0,0);
      if (iVar3 == 0) {
        Ordinal_1061(s_Can_not_open_data_file__0041244c,0,0);
      }
      local_8._0_1_ = 1;
      FUN_004062fc();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00406304();
      local_8 = 0xffffffff;
      FUN_00406316();
      uVar4 = 0;
    }
    else {
      iVar3 = 0;
      Ordinal_271(local_7c,1,0x1000,0);
      local_8 = CONCAT31(local_8._1_3_,5);
      pcVar9 = (char *)(param_1 + 2);
      do {
        if (local_44 < local_48 + 1) {
          Ordinal_2403(local_48 + (1 - (int)local_44));
        }
        pcVar10 = local_48 + 1;
        *pcVar9 = *local_48 << 2;
        pcVar5 = local_48 + 2;
        local_48 = pcVar10;
        if (local_44 < pcVar5) {
          Ordinal_2403(pcVar10 + (1 - (int)local_44));
        }
        pcVar10 = local_48 + 1;
        pcVar9[-1] = *local_48 << 2;
        pcVar5 = local_48 + 2;
        local_48 = pcVar10;
        if (local_44 < pcVar5) {
          Ordinal_2403(pcVar10 + (1 - (int)local_44));
        }
        iVar3 = iVar3 + 1;
        cVar1 = *local_48;
        local_48 = local_48 + 1;
        pcVar9[-2] = cVar1 << 2;
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 4;
      } while (iVar3 < 0x100);
      local_8._0_1_ = 4;
      FUN_004062e4();
      local_8._0_1_ = 1;
      FUN_004062fc();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00406304();
      local_8 = 0xffffffff;
      FUN_00406316();
      uVar4 = 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}

