/*
 * Program: Creatures.exe
 * Function: FUN_00407cd0
 * Entry: 00407cd0
 * Namespace: Global
 * Prototype: undefined FUN_00407cd0(void)
 */


void FUN_00407cd0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407e0f;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  Ordinal_762(DAT_00436ea0 + 0x11c);
  uVar1 = Ordinal_819(local_24,local_18,s_TempBu__00435d1c);
  local_8._0_1_ = 3;
  Ordinal_760(uVar1);
  local_8._0_1_ = 2;
  FUN_00407df7();
  uVar1 = Ordinal_819(local_24,local_18,s_Backup__00435d24);
  local_8._0_1_ = 4;
  Ordinal_760(uVar1);
  local_8._0_1_ = 2;
  FUN_00407def();
  FUN_00407820(local_14,s_world_sfc_00435d10);
  FUN_00407820(local_14,s___spr_00435d08);
  FUN_00407970(local_1c,local_14,s_world_sfc_00435d10);
  FUN_00407970(local_1c,local_14,s___spr_00435d08);
  local_8._0_1_ = 1;
  FUN_00407dff();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407e07();
  local_8 = 0xffffffff;
  FUN_00407e19();
  *unaff_FS_OFFSET = local_10;
  return;
}

