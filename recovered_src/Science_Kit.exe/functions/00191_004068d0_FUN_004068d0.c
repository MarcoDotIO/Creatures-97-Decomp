/*
 * Program: Science_Kit.exe
 * Function: FUN_004068d0
 * Entry: 004068d0
 * Namespace: Global
 * Prototype: undefined4 FUN_004068d0(int param_1)
 */


undefined4 __fastcall FUN_004068d0(int param_1)

{
  void *this;
  int local_64;
  CHAR local_60 [96];
  
  this = (void *)(*(int *)(param_1 + 0x8c) + 0x94);
  if (this == (void *)0x0) {
    return 0;
  }
  wsprintfA(local_60,s_Chemical_0041541c);
  FUN_00404b80(this,0,local_60,(LPBYTE)&local_64,*(undefined4 *)(param_1 + 0x118));
  if ((local_64 < 0) || (10 < local_64)) {
    local_64 = 0;
  }
  *(int *)(param_1 + 0x118) = local_64;
  return 1;
}

