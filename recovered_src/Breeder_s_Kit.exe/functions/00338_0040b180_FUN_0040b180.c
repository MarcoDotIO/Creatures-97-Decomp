/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040b180
 * Entry: 0040b180
 * Namespace: Global
 * Prototype: undefined FUN_0040b180(undefined4 * param_1)
 */


void __fastcall FUN_0040b180(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b1bd;
  *param_1 = &PTR_LAB_0040ff18;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040b1c7();
  *unaff_FS_OFFSET = local_10;
  return;
}

