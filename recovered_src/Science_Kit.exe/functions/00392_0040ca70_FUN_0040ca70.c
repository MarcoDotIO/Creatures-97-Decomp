/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ca70
 * Entry: 0040ca70
 * Namespace: Global
 * Prototype: bool FUN_0040ca70(int param_1)
 */


bool __fastcall FUN_0040ca70(int param_1)

{
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  LPBYTE pBVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040cb24;
  *unaff_FS_OFFSET = &local_10;
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    Ordinal_486();
    local_8 = 0;
    Ordinal_3656();
    uVar2 = *(undefined4 *)(param_1 + 0x188);
    pBVar1 = (LPBYTE)&local_1c;
    local_18 = &stack0xffffffd0;
    Ordinal_481(local_14);
    local_8 = local_8 & 0xffffff00;
    FUN_00404bc0(this,0,in_stack_ffffffd0,pBVar1,uVar2);
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x188) = local_1c;
    FUN_0040cb2e();
  }
  *unaff_FS_OFFSET = local_10;
  return this != (void *)0x0;
}

