/*
 * Program: Creatures.exe
 * Function: FUN_0042db40
 * Entry: 0042db40
 * Namespace: Global
 * Prototype: int FUN_0042db40(void * this, LONG param_1, LONG param_2)
 */


int __thiscall FUN_0042db40(void *this,LONG param_1,LONG param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042daa0(this,param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 1)) {
    return 0;
  }
  iVar1 = FUN_0042db10(param_1);
  return (int)(char)(&DAT_004371a0)[iVar1 + *(int *)((int)this + 0xbf0) * 5];
}

