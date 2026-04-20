/*
 * Program: Science_Kit.exe
 * Function: FUN_00404a30
 * Entry: 00404a30
 * Namespace: Global
 * Prototype: uint FUN_00404a30(void * this, int param_1, undefined4 param_2, LPBYTE param_3)
 */


uint __thiscall FUN_00404a30(void *this,int param_1,undefined4 param_2,LPBYTE param_3)

{
  uint uVar1;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR in_stack_ffffffd8;
  LPBYTE pBVar2;
  DWORD DVar3;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00404ac1;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    local_8 = 0xffffffff;
    FUN_00404acb();
    uVar1 = 0;
  }
  else {
    DVar3 = 4;
    pBVar2 = param_3;
    Ordinal_481(&param_2);
    local_8 = local_8 & 0xffffff00;
    uVar1 = FUN_00404950(this,param_1,in_stack_ffffffd8,pBVar2,DVar3);
    local_8 = 0xffffffff;
    FUN_00404acb();
  }
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

