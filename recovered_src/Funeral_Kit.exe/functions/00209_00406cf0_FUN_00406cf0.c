/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00406cf0
 * Entry: 00406cf0
 * Namespace: Global
 * Prototype: undefined FUN_00406cf0(void * this, int param_1, undefined4 param_2, LPBYTE param_3, undefined4 param_4)
 */


void __thiscall
FUN_00406cf0(void *this,int param_1,undefined4 param_2,LPBYTE param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR in_stack_ffffffd8;
  LPBYTE pBVar3;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406da5;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) != 0) {
    pBVar3 = param_3;
    Ordinal_481(&param_2);
    local_8 = local_8 & 0xffffff00;
    uVar2 = FUN_00406bd0(this,param_1,in_stack_ffffffd8,pBVar3);
    uVar1 = param_4;
    if (uVar2 == 0) {
      Ordinal_481(&param_2);
      local_8 = local_8 & 0xffffff00;
      FUN_00406ea0(this,param_1,in_stack_ffffffd8);
      *(undefined4 *)param_3 = uVar1;
    }
  }
  local_8 = 0xffffffff;
  FUN_00406daf();
  *unaff_FS_OFFSET = local_10;
  return;
}

