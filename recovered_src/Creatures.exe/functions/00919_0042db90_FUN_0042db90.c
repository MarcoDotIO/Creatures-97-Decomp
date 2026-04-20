/*
 * Program: Creatures.exe
 * Function: FUN_0042db90
 * Entry: 0042db90
 * Namespace: Global
 * Prototype: int FUN_0042db90(void * this, int param_1)
 */


int __thiscall FUN_0042db90(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042db10(param_1);
  return (int)(char)(&DAT_004371c0)[iVar1 + *(int *)((int)this + 0xbf0) * 5];
}

