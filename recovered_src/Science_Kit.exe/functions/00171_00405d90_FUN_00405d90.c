/*
 * Program: Science_Kit.exe
 * Function: FUN_00405d90
 * Entry: 00405d90
 * Namespace: Global
 * Prototype: byte FUN_00405d90(void * this, int param_1)
 */


byte __thiscall FUN_00405d90(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_00405ce0(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

