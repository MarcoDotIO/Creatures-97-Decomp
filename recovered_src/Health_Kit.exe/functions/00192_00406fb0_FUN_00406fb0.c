/*
 * Program: Health_Kit.exe
 * Function: FUN_00406fb0
 * Entry: 00406fb0
 * Namespace: Global
 * Prototype: undefined FUN_00406fb0(undefined4 * param_1)
 */


void __fastcall FUN_00406fb0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406fed;
  *param_1 = &PTR_LAB_0040ea70;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00406ff7();
  *unaff_FS_OFFSET = local_10;
  return;
}

