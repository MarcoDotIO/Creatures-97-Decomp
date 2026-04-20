/*
 * Program: Creatures.exe
 * Function: FUN_00407b20
 * Entry: 00407b20
 * Namespace: Global
 * Prototype: undefined FUN_00407b20(void)
 */


void FUN_00407b20(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407cb0;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8._0_1_ = 2;
  Ordinal_762(DAT_00436ea0 + 0x11c);
  Ordinal_762(DAT_00436ea0 + 0x31c);
  uVar1 = Ordinal_819(&local_18,&local_1c,s_TempBu__00435d1c);
  local_8._0_1_ = 3;
  Ordinal_760(uVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00407c98();
  FUN_00407820(local_14,s_world_sfc_00435d10);
  FUN_00407820(local_14,s___spr_00435d08);
  FUN_00407970(local_1c,local_14,s_world_sfc_00435d10);
  local_18 = 0;
  if (0 < DAT_00438868) {
    local_28 = 0;
    do {
      puVar2 = FUN_0040b5c0(*(undefined4 *)(*(int *)(DAT_00438864 + local_28) + 0x48),0x435d04,-1);
      Ordinal_483(puVar2);
      local_8._0_1_ = 4;
      FUN_00407970(local_24,local_14,local_2c);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00407c90();
      local_28 = local_28 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < DAT_00438868);
  }
  local_8._0_1_ = 1;
  FUN_00407ca0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407ca8();
  local_8 = 0xffffffff;
  FUN_00407cba();
  *unaff_FS_OFFSET = local_10;
  return;
}

