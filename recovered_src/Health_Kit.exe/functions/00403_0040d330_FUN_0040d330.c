/*
 * Program: Health_Kit.exe
 * Function: FUN_0040d330
 * Entry: 0040d330
 * Namespace: Global
 * Prototype: int FUN_0040d330(void * this, int param_1, int param_2)
 */


int __thiscall FUN_0040d330(void *this,int param_1,int param_2)

{
  if (param_1 < *(int *)((int)this + 0x14)) {
    if (param_2 < *(int *)((int)this + 0x10)) {
      return param_1 + ((*(int *)((int)this + 0x10) - param_2) + -1) * *(int *)((int)this + 0xc) +
                       *(int *)((int)this + 4);
    }
  }
  return 0;
}

