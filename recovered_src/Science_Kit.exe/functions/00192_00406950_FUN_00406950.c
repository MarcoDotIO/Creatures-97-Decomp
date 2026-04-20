/*
 * Program: Science_Kit.exe
 * Function: FUN_00406950
 * Entry: 00406950
 * Namespace: Global
 * Prototype: undefined4 FUN_00406950(int param_1)
 */


undefined4 __fastcall FUN_00406950(int param_1)

{
  void *this;
  CHAR local_60 [96];
  
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this == (void *)0x0) {
    return 0;
  }
  wsprintfA(local_60,s_Chemical_0041541c);
  FUN_00404d30(this,0,local_60);
  return 1;
}

