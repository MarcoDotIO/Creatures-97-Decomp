/*
 * Program: Science_Kit.exe
 * Function: FUN_00408140
 * Entry: 00408140
 * Namespace: Global
 * Prototype: undefined4 FUN_00408140(void * this, int param_1)
 */


undefined4 __thiscall FUN_00408140(void *this,int param_1)

{
  int iVar1;
  undefined2 local_10 [4];
  int local_8;
  
  local_10[0] = 3;
  if (param_1 != 0) {
    local_8 = param_1;
    iVar1 = FUN_00402d60((void *)((int)this + 0x8c),local_10,local_10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

