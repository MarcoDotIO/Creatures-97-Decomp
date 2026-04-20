/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402cf0
 * Entry: 00402cf0
 * Namespace: Global
 * Prototype: undefined4 FUN_00402cf0(void * this, int param_1)
 */


undefined4 __thiscall FUN_00402cf0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)((int)this + 0x52c);
  iVar1 = FUN_0040bec0(this_00,this,0);
  if (iVar1 == 0) {
    return 0;
  }
  Ordinal_895(this_00);
  *(undefined4 *)((int)this + 0xb4c) = 1;
  *(void **)((int)this + 0x6ac) = this_00;
  if (param_1 != 0) {
    FUN_004033a0(this,(int)this + 0xb04);
  }
  return 1;
}

