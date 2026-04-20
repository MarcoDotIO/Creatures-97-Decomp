/*
 * Program: Creatures.exe
 * Function: FUN_00407970
 * Entry: 00407970
 * Namespace: Global
 * Prototype: undefined FUN_00407970(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */


void FUN_00407970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  undefined4 *unaff_FS_OFFSET;
  _WIN32_FIND_DATAA local_174;
  HANDLE local_28;
  LPCSTR local_24;
  LPCSTR local_20;
  LPCSTR local_1c;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407b01;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffe80;
  Ordinal_483(param_1);
  local_8 = 0;
  Ordinal_836(param_3);
  local_28 = FindFirstFileA(local_24,&local_174);
  if (local_28 != (HANDLE)0xffffffff) {
    do {
      Ordinal_483(param_1);
      local_8._0_1_ = 1;
      Ordinal_836(local_174.cFileName);
      Ordinal_483(param_2);
      local_8._0_1_ = 2;
      Ordinal_836(local_174.cFileName);
      Ordinal_267();
      local_8 = CONCAT31(local_8._1_3_,4);
      CopyFileA(local_1c,local_20,0);
      local_8 = 2;
      FUN_00407ae9();
      local_8._0_1_ = 1;
      FUN_00407af1();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00407af9();
      BVar1 = FindNextFileA(local_28,&local_174);
    } while (BVar1 != 0);
    FindClose(local_28);
  }
  local_8 = 0xffffffff;
  FUN_00407b0b();
  *unaff_FS_OFFSET = local_10;
  return;
}

