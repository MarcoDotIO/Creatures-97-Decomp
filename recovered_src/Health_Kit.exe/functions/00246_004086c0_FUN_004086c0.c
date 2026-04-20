/*
 * Program: Health_Kit.exe
 * Function: FUN_004086c0
 * Entry: 004086c0
 * Namespace: Global
 * Prototype: undefined FUN_004086c0(undefined4 * param_1)
 */


void __fastcall FUN_004086c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408720;
  *param_1 = &PTR_LAB_0040ee18;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  Ordinal_2293(param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_00408715();
  local_8 = 0xffffffff;
  FUN_0040872a();
  *unaff_FS_OFFSET = local_10;
  return;
}

