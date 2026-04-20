/*
 * Program: Score_Kit.exe
 * Function: FUN_00408df0
 * Entry: 00408df0
 * Namespace: Global
 * Prototype: byte FUN_00408df0(void * this, int param_1)
 */


byte __thiscall FUN_00408df0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_00408d40(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

