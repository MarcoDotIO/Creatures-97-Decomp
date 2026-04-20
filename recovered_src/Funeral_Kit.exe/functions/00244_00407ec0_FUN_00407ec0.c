/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00407ec0
 * Entry: 00407ec0
 * Namespace: Global
 * Prototype: byte FUN_00407ec0(void * this, int param_1)
 */


byte __thiscall FUN_00407ec0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_00407e10(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

