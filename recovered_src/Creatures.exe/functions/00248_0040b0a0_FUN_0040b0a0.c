/*
 * Program: Creatures.exe
 * Function: FUN_0040b0a0
 * Entry: 0040b0a0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b0a0(void * this, int param_1)
 */


undefined4 __thiscall FUN_0040b0a0(void *this,int param_1)

{
  if (param_1 != 4) {
    return *(undefined4 *)((int)this + param_1 * 4 + 4);
  }
  return *(undefined4 *)((int)this + 0x14);
}

