/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00405ac0
 * Entry: 00405ac0
 * Namespace: Global
 * Prototype: undefined4 FUN_00405ac0(int param_1)
 */


undefined4 __fastcall FUN_00405ac0(int param_1)

{
  void *this;
  undefined4 local_4;
  
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_004090a0(this,0,s_Photo_00412358,(LPBYTE)&local_4,*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = local_4;
  return 1;
}

