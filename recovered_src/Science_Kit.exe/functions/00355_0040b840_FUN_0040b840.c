/*
 * Program: Science_Kit.exe
 * Function: FUN_0040b840
 * Entry: 0040b840
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040b840(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040b840(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b8b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_004112c0;
  Ordinal_374();
  *param_1 = &PTR_LAB_004121f8;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[6] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

