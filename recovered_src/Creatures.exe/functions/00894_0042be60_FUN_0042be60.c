/*
 * Program: Creatures.exe
 * Function: FUN_0042be60
 * Entry: 0042be60
 * Namespace: Global
 * Prototype: undefined FUN_0042be60(void * this, int param_1, int param_2, int param_3)
 */


void __thiscall FUN_0042be60(void *this,int param_1,int param_2,int param_3)

{
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  *(char *)(*(int *)((int)this + param_1 * 0xc2 + 0x9f) + 3 + param_2 * 0x10) = (char)param_3;
  return;
}

