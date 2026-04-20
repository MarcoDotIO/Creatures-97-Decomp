/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040b360
 * Entry: 0040b360
 * Namespace: Global
 * Prototype: undefined FUN_0040b360(undefined4 * param_1)
 */


void __fastcall FUN_0040b360(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b3c0;
  *param_1 = &PTR_LAB_0040ffe0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_0040b3b5();
  local_8 = 0xffffffff;
  FUN_0040b3ca();
  *unaff_FS_OFFSET = local_10;
  return;
}

