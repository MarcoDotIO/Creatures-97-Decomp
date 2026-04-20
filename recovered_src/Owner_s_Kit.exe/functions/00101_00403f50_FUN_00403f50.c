/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00403f50
 * Entry: 00403f50
 * Namespace: Global
 * Prototype: undefined FUN_00403f50(undefined4 * param_1)
 */


void __fastcall FUN_00403f50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00403fb0;
  *param_1 = &PTR_LAB_0040e748;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00403fa5();
  local_8 = 0xffffffff;
  FUN_00403fba();
  *unaff_FS_OFFSET = local_10;
  return;
}

