/*
 * Program: Creatures.exe
 * Function: FUN_0041bb60
 * Entry: 0041bb60
 * Namespace: Global
 * Prototype: undefined4 FUN_0041bb60(void * this, uint param_1)
 */


undefined4 __thiscall FUN_0041bb60(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0041bd90((int)this);
  do {
    uVar1 = FUN_0041bb40((int)this);
    if (uVar1 == param_1) {
      return 1;
    }
    iVar2 = FUN_0041bb10((int)this);
  } while (iVar2 != 0);
  return 0;
}

