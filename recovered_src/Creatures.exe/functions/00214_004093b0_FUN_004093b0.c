/*
 * Program: Creatures.exe
 * Function: FUN_004093b0
 * Entry: 004093b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004093b0(void * this, int param_1)
 */


undefined4 __thiscall FUN_004093b0(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x2c8) < param_1) {
    return 3;
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x2c4) + param_1 * 4);
  *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) - piVar1[3];
  FUN_00409210(this,piVar1);
  Ordinal_4960(param_1,1);
  return 0;
}

