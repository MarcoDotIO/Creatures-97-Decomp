/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406190
 * Entry: 00406190
 * Namespace: Global
 * Prototype: undefined4 FUN_00406190(void * this, char * param_1)
 */


undefined4 __thiscall FUN_00406190(void *this,char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x138) == 0) {
    *(undefined4 *)((int)this + 0x13c) = 0;
    return 0;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x13c) = 0;
    return 0;
  }
  bVar1 = FUN_00409e50(*(void **)((int)this + 0x8c),*(int *)((int)this + 0x138),param_1);
  *(uint *)((int)this + 0x13c) = CONCAT31(extraout_var,bVar1);
  return CONCAT31(extraout_var,bVar1);
}

