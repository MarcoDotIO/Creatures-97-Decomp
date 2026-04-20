/*
 * Program: Creatures.exe
 * Function: FUN_00410e30
 * Entry: 00410e30
 * Namespace: Global
 * Prototype: undefined FUN_00410e30(undefined4 * param_1)
 */


void __fastcall FUN_00410e30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00410eac;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0042fea0;
  iVar1 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  do {
    iVar1 = iVar1 + 1;
    Ordinal_2293();
  } while (iVar1 < 6);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00410e96();
  local_8 = 0xffffffff;
  FUN_00410eb6();
  *unaff_FS_OFFSET = local_10;
  return;
}

