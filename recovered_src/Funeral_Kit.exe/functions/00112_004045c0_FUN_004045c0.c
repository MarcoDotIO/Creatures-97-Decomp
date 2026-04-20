/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004045c0
 * Entry: 004045c0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004045c0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004045c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040474c;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_509();
  *param_1 = &PTR_LAB_0040d590;
  param_1[0x10] = &PTR_LAB_0040d018;
  param_1[0x10] = &PTR_LAB_0040d728;
  param_1[0x11] = 0;
  param_1[0x10] = &PTR_LAB_0040d710;
  param_1[0x12] = &PTR_LAB_0040d018;
  param_1[0x12] = &PTR_LAB_0040d728;
  param_1[0x13] = 0;
  param_1[0x12] = &PTR_LAB_0040d710;
  param_1[0x14] = &PTR_LAB_0040d018;
  param_1[0x14] = &PTR_LAB_0040d728;
  param_1[0x15] = 0;
  param_1[0x14] = &PTR_LAB_0040d710;
  param_1[0x16] = &PTR_LAB_0040d018;
  param_1[0x16] = &PTR_LAB_0040d728;
  param_1[0x16] = &PTR_LAB_0040d710;
  param_1[0x17] = 0;
  *param_1 = &PTR_LAB_0040d410;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

