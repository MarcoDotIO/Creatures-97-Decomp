/*
 * Program: Health_Kit.exe
 * Function: FUN_00406950
 * Entry: 00406950
 * Namespace: Global
 * Prototype: undefined4 FUN_00406950(void * this, int param_1)
 */


undefined4 __thiscall FUN_00406950(void *this,int param_1)

{
  if (param_1 != 0) {
    Ordinal_5191(*(undefined4 *)((int)this + 0x98),param_1);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x1b4);
    return 1;
  }
  return 0;
}

