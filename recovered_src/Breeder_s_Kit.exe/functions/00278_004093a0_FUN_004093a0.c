/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004093a0
 * Entry: 004093a0
 * Namespace: Global
 * Prototype: undefined FUN_004093a0(undefined4 * param_1)
 */


void __fastcall FUN_004093a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409421;
  *param_1 = &PTR_LAB_0040fe88;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((param_1[3] != 0) && (param_1[2] != 0)) {
    Ordinal_731(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    Ordinal_731(param_1[1]);
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0040942b();
  *unaff_FS_OFFSET = local_10;
  return;
}

