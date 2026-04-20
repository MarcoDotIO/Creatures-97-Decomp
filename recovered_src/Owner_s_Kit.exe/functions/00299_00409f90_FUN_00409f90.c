/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00409f90
 * Entry: 00409f90
 * Namespace: Global
 * Prototype: undefined4 FUN_00409f90(void * this, undefined4 param_1, int param_2)
 */


undefined4 __thiscall FUN_00409f90(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 local_20 [4];
  int local_18;
  undefined2 local_10 [4];
  undefined4 local_8;
  
  local_10[0] = 3;
  local_20[0] = 8;
  local_8 = param_1;
  if (param_2 == 0) {
    param_2 = *(int *)((int)this + 0x1fc);
  }
  local_18 = param_2;
  iVar1 = FUN_00403cd0((void *)((int)this + 0x8c),local_10,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  Ordinal_6(local_18);
  return 1;
}

