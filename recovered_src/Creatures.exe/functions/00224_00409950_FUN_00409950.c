/*
 * Program: Creatures.exe
 * Function: FUN_00409950
 * Entry: 00409950
 * Namespace: Global
 * Prototype: undefined4 FUN_00409950(void * this, int param_1)
 */


/* WARNING: Removing unreachable block (ram,0x0040999d) */

undefined4 __thiscall FUN_00409950(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x2b0) != 0) {
    return 1;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if (*(int *)((int)this + param_1 * 0x14 + 0x14) != 0) {
      piVar1 = *(int **)((int)this + param_1 * 0x14 + 0x10);
      (**(code **)(*piVar1 + 0x24))(piVar1);
    }
    return 1;
  }
  return 1;
}

