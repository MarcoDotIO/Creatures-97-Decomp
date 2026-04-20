/*
 * Program: Creatures.exe
 * Function: FUN_00410320
 * Entry: 00410320
 * Namespace: Global
 * Prototype: undefined4 FUN_00410320(void * this, int param_1)
 */


undefined4 __thiscall FUN_00410320(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x7e6) != param_1) {
    iVar1 = FUN_00419090(this,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

