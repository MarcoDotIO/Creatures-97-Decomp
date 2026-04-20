/*
 * Program: Creatures.exe
 * Function: FUN_004167c0
 * Entry: 004167c0
 * Namespace: Global
 * Prototype: undefined FUN_004167c0(undefined4 * param_1)
 */


void __fastcall FUN_004167c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00416826;
  *param_1 = &PTR_LAB_004308f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))(1);
  }
  local_8 = 0xffffffff;
  param_1[0x12] = 0;
  DAT_00438d0c = 0;
  FUN_00416830();
  *unaff_FS_OFFSET = local_10;
  return;
}

