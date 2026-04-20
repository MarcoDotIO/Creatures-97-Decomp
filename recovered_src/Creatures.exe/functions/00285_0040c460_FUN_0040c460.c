/*
 * Program: Creatures.exe
 * Function: FUN_0040c460
 * Entry: 0040c460
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040c460(void * this, uint param_1)
 */


undefined4 * __thiscall FUN_0040c460(void *this,uint param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x1d,*(int *)((int)this + -4),FUN_0040c940);
    Ordinal_731((int)this + -4);
    return this;
  }
  FUN_0040c940(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}

