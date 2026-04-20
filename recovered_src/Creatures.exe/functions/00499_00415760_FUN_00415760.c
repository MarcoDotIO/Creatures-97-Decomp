/*
 * Program: Creatures.exe
 * Function: FUN_00415760
 * Entry: 00415760
 * Namespace: Global
 * Prototype: undefined FUN_00415760(undefined4 * param_1)
 */


void __fastcall FUN_00415760(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004157bc;
  *param_1 = &PTR_LAB_00430848;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))(1);
  }
  local_8 = 0xffffffff;
  param_1[0x12] = 0;
  FUN_004157c6();
  *unaff_FS_OFFSET = local_10;
  return;
}

