/*
 * Program: Creatures.exe
 * Function: FUN_00402220
 * Entry: 00402220
 * Namespace: Global
 * Prototype: undefined FUN_00402220(void * this, uint param_1)
 */


void __thiscall FUN_00402220(void *this,uint param_1)

{
  uint uVar1;
  
  Ordinal_2081();
  uVar1 = *(uint *)((int)this + 100);
  *(uint *)((int)this + 100) = uVar1 | 1;
  if (((param_1 & 4) != 0) && (*(int *)(DAT_00436ea0 + 200) != 0)) {
    *(uint *)((int)this + 100) = uVar1 | 5;
  }
  return;
}

