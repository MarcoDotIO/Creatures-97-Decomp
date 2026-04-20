/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00407220
 * Entry: 00407220
 * Namespace: Global
 * Prototype: undefined FUN_00407220(undefined4 * param_1)
 */


void __fastcall FUN_00407220(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040729c;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0040ed90;
  iVar1 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  do {
    iVar1 = iVar1 + 1;
    Ordinal_2293();
  } while (iVar1 < 10);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407286();
  local_8 = 0xffffffff;
  FUN_004072a6();
  *unaff_FS_OFFSET = local_10;
  return;
}

