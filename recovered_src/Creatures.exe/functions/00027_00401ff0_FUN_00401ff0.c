/*
 * Program: Creatures.exe
 * Function: FUN_00401ff0
 * Entry: 00401ff0
 * Namespace: Global
 * Prototype: undefined FUN_00401ff0(undefined4 * param_1)
 */


void __fastcall FUN_00401ff0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00402087;
  *param_1 = &PTR_LAB_0042f1b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00408620(&DAT_00439e50,1,s_MaxViewSize_00435228);
  FUN_004085a0(&DAT_00439e50,1,s_SmoothScrolling_00435218);
  iVar1 = param_1[0x18];
  if (iVar1 != 0) {
    FUN_00402950(iVar1);
    Ordinal_731(iVar1);
  }
  local_8 = 0xffffffff;
  FUN_00402091();
  *unaff_FS_OFFSET = local_10;
  return;
}

