/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ae40
 * Entry: 0040ae40
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ae40(int param_1)
 */


undefined4 __fastcall FUN_0040ae40(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_b0 [96];
  undefined1 local_50 [32];
  undefined4 local_30 [7];
  char *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040af7d;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = FUN_004080c0(*(void **)(param_1 + 0x8c),1,0);
  if (iVar2 != 0) {
    bVar1 = FUN_004081c0(*(void **)(param_1 + 0x8c),iVar2,s_dde__getb_monk_004156f0);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = FUN_00408300(*(void **)(param_1 + 0x8c),iVar2,0);
      if (iVar2 != 0) {
        Ordinal_486();
        local_8 = 0;
        Ordinal_762(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1fc));
        FUN_00407ec0(local_14,local_50);
        Ordinal_762(local_50);
        FUN_00404520(local_30);
        local_8._0_1_ = 1;
        iVar2 = FUN_00404660(local_30,s_Millennium_Interactive_00415184,s_Creatures_004152d8,
                             &DAT_004151b4);
        if (iVar2 == 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0040af75();
          local_8 = 0xffffffff;
          FUN_0040af87();
          uVar3 = 0xffffffff;
        }
        else {
          FUN_00404b10(local_30,1,s_Genetics_Directory_004156dc,local_b0,0x60,(BYTE *)0x0);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0040af75();
          local_8 = 0xffffffff;
          FUN_0040af87();
          uVar3 = 1;
        }
        goto LAB_0040ae79;
      }
    }
  }
  uVar3 = 0;
LAB_0040ae79:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

