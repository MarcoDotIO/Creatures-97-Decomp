/*
 * Program: Science_Kit.exe
 * Function: FUN_004080c0
 * Entry: 004080c0
 * Namespace: Global
 * Prototype: int FUN_004080c0(void * this, undefined2 param_1, int param_2)
 */


int __thiscall FUN_004080c0(void *this,undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 local_20 [4];
  int local_18;
  undefined2 local_10 [4];
  undefined2 local_8;
  
  local_8 = param_1;
  local_20[0] = 3;
  local_10[0] = 2;
  if (param_2 != 0) {
    local_18 = param_2;
    iVar1 = FUN_00402d60((void *)((int)this + 0x8c),local_20,local_20);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00402d30((void *)((int)this + 0x8c),local_10,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  return local_18;
}

