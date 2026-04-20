/*
 * Program: Creatures.exe
 * Function: FUN_0041bf20
 * Entry: 0041bf20
 * Namespace: Global
 * Prototype: bool FUN_0041bf20(void * this, char param_1, int param_2)
 */


bool __thiscall FUN_0041bf20(void *this,char param_1,int param_2)

{
  if (param_2 == 0) {
    return *(char *)((int)this + 0x18) == param_1;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return true;
    }
    return param_1 == '\0';
  }
  return true;
}

