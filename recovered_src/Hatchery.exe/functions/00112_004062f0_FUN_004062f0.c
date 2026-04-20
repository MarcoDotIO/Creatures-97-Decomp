/*
 * Program: Hatchery.exe
 * Function: FUN_004062f0
 * Entry: 004062f0
 * Namespace: Global
 * Prototype: undefined FUN_004062f0(undefined4 * param_1)
 */


void __fastcall FUN_004062f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406357;
  *param_1 = &PTR_LAB_00408738;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[5] != 0) {
    FUN_00406a90(param_1[1] * param_1[2]);
    param_1[5] = 0;
  }
  local_8 = 0xffffffff;
  FUN_00406361();
  *unaff_FS_OFFSET = local_10;
  return;
}

