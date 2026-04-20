/*
 * Program: remove.exe
 * Function: FUN_00401890
 * Entry: 00401890
 * Namespace: Global
 * Prototype: undefined FUN_00401890(undefined4 param_1, undefined4 param_2)
 */


void FUN_00401890(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 *unaff_FS_OFFSET;
  _WIN32_FIND_DATAA local_16c;
  HANDLE local_20;
  LPCSTR local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040199b;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffe88;
  Ordinal_483(param_1);
  local_8 = 0;
  Ordinal_836(param_2);
  local_20 = FindFirstFileA(local_1c,&local_16c);
  if (local_20 != (HANDLE)0xffffffff) {
    do {
      Ordinal_483(param_1);
      local_8._0_1_ = 1;
      Ordinal_836(&DAT_00404818);
      Ordinal_836(local_16c.cFileName);
      Ordinal_267();
      local_8 = CONCAT31(local_8._1_3_,3);
      Ordinal_4940(local_18);
      local_8 = 1;
      FUN_0040198b();
      local_8 = local_8 & 0xffffff00;
      FUN_00401993();
      BVar1 = FindNextFileA(local_20,&local_16c);
    } while (BVar1 != 0);
    FindClose(local_20);
  }
  local_8 = 0xffffffff;
  FUN_004019a5();
  *unaff_FS_OFFSET = local_10;
  return;
}

