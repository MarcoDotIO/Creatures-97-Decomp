/*
 * Program: Health_Kit.exe
 * Function: FUN_0040c630
 * Entry: 0040c630
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c630(void * this, int param_1)
 */


undefined4 __thiscall FUN_0040c630(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x2c4) < param_1) {
    return 3;
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x2c0) + param_1 * 4);
  *(int *)((int)this + 0x2b4) = *(int *)((int)this + 0x2b4) - piVar1[3];
  FUN_0040c510(this,piVar1);
  Ordinal_4960(param_1,1);
  return 0;
}

