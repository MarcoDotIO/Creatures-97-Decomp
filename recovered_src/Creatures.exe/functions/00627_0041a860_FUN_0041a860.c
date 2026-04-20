/*
 * Program: Creatures.exe
 * Function: FUN_0041a860
 * Entry: 0041a860
 * Namespace: Global
 * Prototype: undefined4 * FUN_0041a860(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0041a860(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041a8b2;
  *unaff_FS_OFFSET = &local_10;
  FUN_00419eb0(param_1);
  *param_1 = &PTR_LAB_00430f00;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

