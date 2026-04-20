/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406fc0
 * Entry: 00406fc0
 * Namespace: Global
 * Prototype: undefined4 FUN_00406fc0(void * this, char * param_1)
 */


undefined4 __thiscall FUN_00406fc0(void *this,char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x2160) == 0) {
    *(undefined4 *)((int)this + 0x2164) = 0;
    return 0;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x2164) = 0;
    return 0;
  }
  bVar1 = FUN_00403d90(*(void **)((int)this + 0x8c),*(int *)((int)this + 0x2160),param_1);
  *(uint *)((int)this + 0x2164) = CONCAT31(extraout_var,bVar1);
  return CONCAT31(extraout_var,bVar1);
}

