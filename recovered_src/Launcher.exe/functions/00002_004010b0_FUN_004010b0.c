/*
 * Program: Launcher.exe
 * Function: FUN_004010b0
 * Entry: 004010b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004010b0(void * this, byte param_1)
 */


undefined4 * __thiscall FUN_004010b0(void *this,byte param_1)

{
  FUN_004010d0(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}

