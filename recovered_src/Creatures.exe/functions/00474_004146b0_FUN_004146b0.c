/*
 * Program: Creatures.exe
 * Function: FUN_004146b0
 * Entry: 004146b0
 * Namespace: Global
 * Prototype: undefined FUN_004146b0(undefined4 * param_1)
 */


void __fastcall FUN_004146b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00414718;
  *param_1 = &PTR_LAB_004306f8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (-1 < *(int *)((int)param_1 + 0x23)) {
    FUN_00419280(param_1,*(int *)((int)param_1 + 0x23));
  }
  if (*(int **)((int)param_1 + 0x3b) != (int *)0x0) {
    FUN_0040c640(*(int **)((int)param_1 + 0x3b));
  }
  FUN_00414780((int)param_1);
  local_8 = 0xffffffff;
  FUN_00414722();
  *unaff_FS_OFFSET = local_10;
  return;
}

