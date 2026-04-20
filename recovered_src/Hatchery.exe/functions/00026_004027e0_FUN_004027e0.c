/*
 * Program: Hatchery.exe
 * Function: FUN_004027e0
 * Entry: 004027e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004027e0(void)
 */


undefined4 FUN_004027e0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *_Source;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  char local_1b8;
  char local_1b7 [367];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  char *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402ab2;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffe3c;
  iVar2 = FUN_00402710(s_a__header_dat_0040a3c4);
  while (iVar2 == 0) {
    Ordinal_315(0x82,0);
    local_8 = 0;
    iVar2 = Ordinal_2199();
    local_8 = 0xffffffff;
    if (iVar2 == 2) {
      FUN_00402a54();
      uVar5 = 0;
      goto LAB_00402a3a;
    }
    FUN_00402a54();
    iVar2 = FUN_00402710(s_a__header_dat_0040a3c4);
  }
  Ordinal_339(s_a__header_dat_0040a3c4,0);
  local_8 = 1;
  local_18 = Ordinal_2891();
  Ordinal_4819(&local_1b8,local_18);
  if (local_1b8 != '\x01') {
    local_1b8 = '\x01';
    do {
      iVar7 = 0;
      iVar2 = 0;
      do {
        iVar8 = iVar2 + 1;
        uVar3 = rand();
        uVar6 = (int)uVar3 >> 0x1f;
        iVar4 = ((uVar3 ^ uVar6) - uVar6 & 1 ^ uVar6) - uVar6;
        iVar7 = iVar7 + iVar4;
        local_1b7[iVar2] = (char)iVar4;
        iVar2 = iVar8;
      } while (iVar8 < 6);
    } while (iVar7 != 3);
    Ordinal_1725();
    Ordinal_267();
    local_8 = CONCAT31(local_8._1_3_,3);
    Ordinal_4619(s_a__header_dat_0040a3c4,1,0);
    Ordinal_5658(&local_1b8,local_18);
    Ordinal_1725();
    local_8 = 1;
    FUN_00402a9a();
  }
  iVar2 = 0;
  cVar1 = local_1b8;
  while (cVar1 != '\n') {
    if (local_18 <= iVar2) goto LAB_00402aa2;
    cVar1 = local_1b7[iVar2];
    iVar2 = iVar2 + 1;
  }
  if ((iVar2 < local_18) && (iVar2 + 0x42 <= local_18)) {
    local_24 = 0;
    _Source = local_1b7 + iVar2;
    local_1c = (char *)(local_20 + 0x328);
    local_28 = (int *)(local_20 + 0x248);
    do {
      *local_28 = (int)local_1b7[local_24];
      local_48 = DAT_0040a3b8;
      local_44 = DAT_0040a3bc;
      local_40 = DAT_0040a3c0;
      uVar3 = 0xffffffff;
      pcVar9 = (char *)&local_48;
      do {
        pcVar10 = pcVar9;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar9 = pcVar10 + -uVar3;
      pcVar10 = local_1c;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar3 = 0xffffffff;
      local_2c = local_1c + 0x36;
      pcVar9 = (char *)&local_48;
      do {
        pcVar10 = pcVar9;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar9 = pcVar10 + -uVar3;
      pcVar10 = local_1c + 0x36;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      strncpy(local_1c,_Source,4);
      strncpy(local_2c,_Source + 5,4);
      _Source = _Source + 0xb;
      local_1c = local_1c + 9;
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    } while (local_24 < 6);
    local_8 = 0xffffffff;
    FUN_00402abc();
    uVar5 = 1;
  }
  else {
LAB_00402aa2:
    local_8 = 0xffffffff;
    FUN_00402abc();
    uVar5 = 0;
  }
LAB_00402a3a:
  *unaff_FS_OFFSET = local_10;
  return uVar5;
}

