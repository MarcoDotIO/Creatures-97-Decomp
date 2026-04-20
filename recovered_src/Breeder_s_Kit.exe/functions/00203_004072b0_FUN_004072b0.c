/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004072b0
 * Entry: 004072b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004072b0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004072b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407307;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_286();
  local_8 = 0;
  *param_1 = &PTR_LAB_0040f918;
  Ordinal_2301();
  Ordinal_1067();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

