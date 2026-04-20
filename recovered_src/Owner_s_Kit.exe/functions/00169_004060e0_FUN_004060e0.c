/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004060e0
 * Entry: 004060e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004060e0(void * this, int param_1)
 */


undefined4 __thiscall FUN_004060e0(void *this,int param_1)

{
  if (param_1 != 0) {
    Ordinal_5191(*(undefined4 *)((int)this + 0x98),param_1);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0xf8);
    return 1;
  }
  return 0;
}

