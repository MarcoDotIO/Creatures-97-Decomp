/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00404000
 * Entry: 00404000
 * Namespace: Global
 * Prototype: undefined4 FUN_00404000(void * this, int param_1)
 */


undefined4 __thiscall FUN_00404000(void *this,int param_1)

{
  if (param_1 != 0) {
    Ordinal_5191(*(undefined4 *)((int)this + 0x98),param_1);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0xf8);
    return 1;
  }
  return 0;
}

