/*
 * Program: Hatchery.exe
 * Function: FUN_00407950
 * Entry: 00407950
 * Namespace: Global
 * Prototype: type_info * FUN_00407950(void * this, byte param_1)
 */


type_info * __thiscall FUN_00407950(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}

