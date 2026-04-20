/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040dda0
 * Entry: 0040dda0
 * Namespace: Global
 * Prototype: undefined FUN_0040dda0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 */


void FUN_0040dda0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004102a0;
  puStack_10 = &DAT_0040dfd8;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  local_20 = 0;
  if (0 < param_3) {
    do {
      (*(code *)param_4)();
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_0040de10();
  *unaff_FS_OFFSET = local_14;
  return;
}

