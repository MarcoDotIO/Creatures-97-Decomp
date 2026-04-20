/*
 * Program: Creatures.exe
 * Function: FUN_0041bda0
 * Entry: 0041bda0
 * Namespace: Global
 * Prototype: uint FUN_0041bda0(void * this, int param_1, int param_2)
 */


uint __thiscall FUN_0041bda0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)**(byte **)((int)this + 8);
  *(byte **)((int)this + 8) = *(byte **)((int)this + 8) + 1;
  if ((param_1 <= (int)uVar1) && ((int)uVar1 <= param_2)) {
    return uVar1;
  }
  return param_1 + (int)((longlong)(ulonglong)uVar1 % (longlong)((param_2 - param_1) + 1));
}

