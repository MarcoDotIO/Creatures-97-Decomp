/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403010
 * Entry: 00403010
 * Namespace: Global
 * Prototype: undefined FUN_00403010(undefined4 * param_1)
 */


void __fastcall FUN_00403010(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040304d;
  *param_1 = &PTR_LAB_0040f3c8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00403057();
  *unaff_FS_OFFSET = local_10;
  return;
}

