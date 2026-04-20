/*
 * Program: Creatures.exe
 * Function: FUN_0042e770
 * Entry: 0042e770
 * Namespace: Global
 * Prototype: type_info * FUN_0042e770(void * this, byte param_1)
 */


type_info * __thiscall FUN_0042e770(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}

