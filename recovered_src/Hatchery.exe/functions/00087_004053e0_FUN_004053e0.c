/*
 * Program: Hatchery.exe
 * Function: FUN_004053e0
 * Entry: 004053e0
 * Namespace: Global
 * Prototype: byte FUN_004053e0(void * this, int param_1)
 */


byte __thiscall FUN_004053e0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_00405330(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

