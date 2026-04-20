/*
 * Program: Creatures.exe
 * Function: FUN_00428ce0
 * Entry: 00428ce0
 * Namespace: Global
 * Prototype: undefined FUN_00428ce0(undefined4 * param_1)
 */


void __fastcall FUN_00428ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00428d3d;
  *param_1 = &PTR_LAB_004313b0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    FUN_00402950(iVar1);
    Ordinal_731(iVar1);
  }
  local_8 = 0xffffffff;
  FUN_00428d47();
  *unaff_FS_OFFSET = local_10;
  return;
}

