/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405c70
 * Entry: 00405c70
 * Namespace: Global
 * Prototype: undefined4 FUN_00405c70(void * this, int * param_1)
 */


undefined4 __thiscall FUN_00405c70(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00403d90(*(void **)((int)this + 0x8c),*(undefined4 *)((int)this + 0x2160),
                       s_dde__putv_gend_0041243c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  iVar2 = FUN_00403ed0(*(void **)((int)this + 0x8c),*(undefined4 *)((int)this + 0x2160),0);
  if (iVar2 == 0) {
    return 0;
  }
  *param_1 = **(char **)(*(int *)((int)this + 0x8c) + 0x1fc) + -0x30;
  return 1;
}

