/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040ab60
 * Entry: 0040ab60
 * Namespace: Global
 * Prototype: byte FUN_0040ab60(void * this, int param_1)
 */


byte __thiscall FUN_0040ab60(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x2ac) == 0) && (*(int *)((int)this + 0x294) != 0)) {
    puVar1 = FUN_0040aab0(this,param_1);
    return -(puVar1 == (undefined4 *)0x0) & 3;
  }
  return 6;
}

