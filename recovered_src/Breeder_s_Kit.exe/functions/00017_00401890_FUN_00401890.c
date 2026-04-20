/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00401890
 * Entry: 00401890
 * Namespace: Global
 * Prototype: undefined FUN_00401890(undefined4 * param_1)
 */


void __fastcall FUN_00401890(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004018cd;
  *param_1 = &PTR_LAB_0040f050;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004018d7();
  *unaff_FS_OFFSET = local_10;
  return;
}

