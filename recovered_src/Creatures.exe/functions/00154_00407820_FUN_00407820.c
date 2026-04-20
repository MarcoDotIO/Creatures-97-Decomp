/*
 * Program: Creatures.exe
 * Function: FUN_00407820
 * Entry: 00407820
 * Namespace: Global
 * Prototype: undefined FUN_00407820(undefined4 param_1, undefined4 param_2)
 */


void FUN_00407820(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 *unaff_FS_OFFSET;
  _WIN32_FIND_DATAA local_170;
  HANDLE local_24;
  LPCSTR local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407959;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffe84;
  Ordinal_483(param_1);
  local_8 = 0;
  Ordinal_836(param_2);
  local_24 = FindFirstFileA(local_1c,&local_170);
  if (local_24 != (HANDLE)0xffffffff) {
    do {
      Ordinal_483(param_1);
      local_8._0_1_ = 1;
      Ordinal_836(local_170.cFileName);
      Ordinal_267();
      local_8 = CONCAT31(local_8._1_3_,3);
      Ordinal_4940(local_18);
      local_8 = 1;
      FUN_00407949();
      local_8 = local_8 & 0xffffff00;
      FUN_00407951();
      BVar1 = FindNextFileA(local_24,&local_170);
    } while (BVar1 != 0);
    FindClose(local_24);
  }
  local_8 = 0xffffffff;
  FUN_00407963();
  *unaff_FS_OFFSET = local_10;
  return;
}

