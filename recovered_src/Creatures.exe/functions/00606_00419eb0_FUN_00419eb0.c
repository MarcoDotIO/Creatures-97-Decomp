/*
 * Program: Creatures.exe
 * Function: FUN_00419eb0
 * Entry: 00419eb0
 * Namespace: Global
 * Prototype: undefined4 * FUN_00419eb0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00419eb0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00419f19;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0042f018;
  local_8 = 0;
  *param_1 = &PTR_LAB_00430f30;
  FUN_0041a440(param_1);
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

