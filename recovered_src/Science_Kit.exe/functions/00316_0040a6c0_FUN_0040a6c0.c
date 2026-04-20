/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a6c0
 * Entry: 0040a6c0
 * Namespace: Global
 * Prototype: undefined FUN_0040a6c0(void * this, int param_1)
 */


void __thiscall FUN_0040a6c0(void *this,int param_1)

{
  int *piVar1;
  
  Ordinal_760(*(int *)((int)this + 0x22c) + param_1 * 4);
  piVar1 = (int *)((int)this + param_1 * 4 + 0x18c);
  *(int *)((int)this + 0x868) = *piVar1;
  *(int *)((int)this + 0x84c) = *piVar1 << 3;
  Ordinal_5610(0);
  return;
}

