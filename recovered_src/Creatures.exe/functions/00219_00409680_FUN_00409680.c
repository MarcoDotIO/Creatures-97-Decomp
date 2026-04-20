/*
 * Program: Creatures.exe
 * Function: FUN_00409680
 * Entry: 00409680
 * Namespace: Global
 * Prototype: byte FUN_00409680(void * this, int param_1)
 */


byte __thiscall FUN_00409680(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2b0) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_004095c0(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

