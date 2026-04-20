/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ac40
 * Entry: 0040ac40
 * Namespace: Global
 * Prototype: undefined4 FUN_0040ac40(void * this, char * param_1)
 */


undefined4 __thiscall FUN_0040ac40(void *this,char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x120) == 0) {
    *(undefined4 *)((int)this + 0x1c4) = 0;
    return 0;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x1c4) = 0;
    return 0;
  }
  bVar1 = FUN_004081c0(*(void **)((int)this + 0x8c),*(int *)((int)this + 0x120),param_1);
  *(uint *)((int)this + 0x1c4) = CONCAT31(extraout_var,bVar1);
  return CONCAT31(extraout_var,bVar1);
}

