/*
 * Program: Health_Kit.exe
 * Function: FUN_004040e0
 * Entry: 004040e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004040e0(void * this, char * param_1)
 */


undefined4 __thiscall FUN_004040e0(void *this,char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0xdbc) == 0) {
    *(undefined4 *)((int)this + 0xdc0) = 0;
    return 0;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0xdc0) = 0;
    return 0;
  }
  bVar1 = FUN_00407fc0(*(void **)((int)this + 0x8c),*(int *)((int)this + 0xdbc),param_1);
  *(uint *)((int)this + 0xdc0) = CONCAT31(extraout_var,bVar1);
  return CONCAT31(extraout_var,bVar1);
}

