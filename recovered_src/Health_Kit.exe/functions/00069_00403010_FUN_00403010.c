/*
 * Program: Health_Kit.exe
 * Function: FUN_00403010
 * Entry: 00403010
 * Namespace: Global
 * Prototype: undefined4 FUN_00403010(int param_1)
 */


undefined4 FUN_00403010(int param_1)

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
  BYTE *pBVar10;
  char *pcVar11;
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
  puStack_c = &LAB_0040329c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404a90(local_a4);
  local_8 = 0;
  iVar3 = FUN_00404bd0(local_a4,s_Millennium_Interactive_00411238,s_Creatures_00411250,&DAT_0041125c
                      );
  if (iVar3 == 0) {
    local_8 = 0xffffffff;
    FUN_004032a6();
    uVar4 = 0xffffffff;
  }
  else {
    FUN_00404f20(local_a4,1,s_Palette_Directory_00411224,local_104,0x60,(BYTE *)0x0);
    local_88[0] = s_palette_dta_00411218[0];
    local_88[1] = s_palette_dta_00411218[1];
    local_88[2] = s_palette_dta_00411218[2];
    local_88[3] = s_palette_dta_00411218[3];
    local_84[0] = s_palette_dta_00411218[4];
    local_84[1] = s_palette_dta_00411218[5];
    local_84[2] = s_palette_dta_00411218[6];
    local_84[3] = s_palette_dta_00411218[7];
    local_80[0] = s_palette_dta_00411218[8];
    local_80[1] = s_palette_dta_00411218[9];
    local_80[2] = s_palette_dta_00411218[10];
    local_80[3] = s_palette_dta_00411218[0xb];
    uVar6 = 0xffffffff;
    pcVar11 = local_88;
    do {
      pcVar9 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pBVar8 = local_104;
    do {
      pBVar10 = pBVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pBVar10 = pBVar8 + 1;
      BVar2 = *pBVar8;
      pBVar8 = pBVar10;
    } while (BVar2 != '\0');
    pBVar8 = (BYTE *)(pcVar9 + -uVar6);
    pBVar10 = pBVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pBVar10 = *(undefined4 *)pBVar8;
      pBVar8 = pBVar8 + 4;
      pBVar10 = pBVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pBVar10 = *pBVar8;
      pBVar8 = pBVar8 + 1;
      pBVar10 = pBVar10 + 1;
    }
    Ordinal_340();
    local_8._0_1_ = 1;
    Ordinal_336();
    local_8._0_1_ = 2;
    Ordinal_486();
    local_8._0_1_ = 3;
    local_28[0] = &PTR_LAB_0040e268;
    local_20 = 0;
    local_1c = 0xffffffff;
    Ordinal_762(0);
    local_8._0_1_ = 4;
    iVar3 = Ordinal_4619(local_104,0,local_28);
    if (iVar3 == 0) {
      iVar3 = Ordinal_5003(0,0);
      if (iVar3 == 0) {
        Ordinal_1061(s_Can_not_open_data_file__00411200,0,0);
      }
      local_8._0_1_ = 1;
      FUN_0040328c();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00403294();
      local_8 = 0xffffffff;
      FUN_004032a6();
      uVar4 = 0;
    }
    else {
      iVar3 = 0;
      Ordinal_271(local_7c,1,0x1000,0);
      local_8 = CONCAT31(local_8._1_3_,5);
      pcVar11 = (char *)(param_1 + 2);
      do {
        if (local_44 < local_48 + 1) {
          Ordinal_2403(local_48 + (1 - (int)local_44));
        }
        pcVar9 = local_48 + 1;
        *pcVar11 = *local_48 << 2;
        pcVar5 = local_48 + 2;
        local_48 = pcVar9;
        if (local_44 < pcVar5) {
          Ordinal_2403(pcVar9 + (1 - (int)local_44));
        }
        pcVar9 = local_48 + 1;
        pcVar11[-1] = *local_48 << 2;
        pcVar5 = local_48 + 2;
        local_48 = pcVar9;
        if (local_44 < pcVar5) {
          Ordinal_2403(pcVar9 + (1 - (int)local_44));
        }
        iVar3 = iVar3 + 1;
        cVar1 = *local_48;
        local_48 = local_48 + 1;
        pcVar11[-2] = cVar1 << 2;
        pcVar11[1] = '\0';
        pcVar11 = pcVar11 + 4;
      } while (iVar3 < 0x100);
      local_8._0_1_ = 4;
      FUN_00403274();
      local_8._0_1_ = 1;
      FUN_0040328c();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00403294();
      local_8 = 0xffffffff;
      FUN_004032a6();
      uVar4 = 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}

