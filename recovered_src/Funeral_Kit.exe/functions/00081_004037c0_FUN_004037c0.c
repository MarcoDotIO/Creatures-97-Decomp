/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004037c0
 * Entry: 004037c0
 * Namespace: Global
 * Prototype: bool FUN_004037c0(int param_1)
 */


bool __fastcall FUN_004037c0(int param_1)

{
  void *this;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR pCVar1;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040385d;
  *unaff_FS_OFFSET = &local_10;
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this != (void *)0x0) {
    Ordinal_486();
    local_8 = 0;
    pCVar1 = (LPCSTR)0x403818;
    Ordinal_3656();
    Ordinal_481(local_14);
    local_8 = local_8 & 0xffffff00;
    FUN_00406ea0(this,0,pCVar1);
    local_8 = 0xffffffff;
    FUN_00403867();
  }
  *unaff_FS_OFFSET = local_10;
  return this != (void *)0x0;
}

