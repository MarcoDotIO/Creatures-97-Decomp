/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00403f90
 * Entry: 00403f90
 * Namespace: Global
 * Prototype: undefined4 FUN_00403f90(void * this, undefined4 param_1, int param_2)
 */


undefined4 __thiscall FUN_00403f90(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  local_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00403fed;
  iVar1 = *(int *)((int)this + 4);
  *unaff_FS_OFFSET = &local_10;
  Ordinal_481(iVar1 + param_2 * 4);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

