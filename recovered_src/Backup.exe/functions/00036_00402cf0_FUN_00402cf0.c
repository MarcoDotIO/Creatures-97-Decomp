/*
 * Program: Backup.exe
 * Function: FUN_00402cf0
 * Entry: 00402cf0
 * Namespace: Global
 * Prototype: type_info * FUN_00402cf0(void * this, byte param_1)
 */


type_info * __thiscall FUN_00402cf0(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}

