/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409580
 * Entry: 00409580
 * Namespace: Global
 * Prototype: undefined4 FUN_00409580(undefined4 param_1, undefined4 param_2)
 */


undefined4 FUN_00409580(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_28 [7];
  undefined1 *puStack_c;
  int local_8;
  
  local_28[6] = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040968a;
  *unaff_FS_OFFSET = local_28 + 6;
  Ordinal_486();
  local_8 = 0;
  uVar3 = Ordinal_483(param_1);
  local_8._0_1_ = 1;
  Ordinal_760(uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00409682();
  iVar2 = *(int *)(local_28[5] + -8);
  iVar6 = iVar2 + -5;
  while (iVar2 = iVar2 + -1, iVar6 < iVar2) {
    Ordinal_5188(iVar2,0x20);
  }
  Ordinal_5570();
  iVar6 = 0;
  local_28[3] = local_28[5];
  local_28[4] = param_2;
  local_28[0] = local_28[5];
  local_28[1] = param_2;
  do {
    uVar4 = 0xffffffff;
    pcVar7 = *(char **)((int)local_28 + iVar6);
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = iVar6 + 0xc;
    iVar6 = iVar6 + 4;
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = *(char **)((int)local_28 + iVar2);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    if (7 < iVar6) {
      Ordinal_762(local_28[5]);
      Ordinal_836(&DAT_00410580);
      Ordinal_836(param_2);
      local_8 = 0xffffffff;
      FUN_00409694();
      *unaff_FS_OFFSET = local_28[6];
      return 1;
    }
  } while( true );
}

