/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405b10
 * Entry: 00405b10
 * Namespace: Global
 * Prototype: undefined4 FUN_00405b10(int param_1)
 */


undefined4 __fastcall FUN_00405b10(int param_1)

{
  void *this;
  
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_00409180(this,0,s_Photo_00412358);
  return 1;
}

