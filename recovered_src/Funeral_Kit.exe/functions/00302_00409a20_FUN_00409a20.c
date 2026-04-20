/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00409a20
 * Entry: 00409a20
 * Namespace: Global
 * Prototype: undefined FUN_00409a20(int param_1)
 */


void __fastcall FUN_00409a20(int param_1)

{
  int local_18 [2];
  RECT local_10;
  
  local_18[0] = 0x3b;
  local_10.left = 0x3b;
  local_10.right = 0xb3;
  local_10.bottom = 0xa8;
  local_18[1] = 0x1c;
  local_10.top = 0x1c;
  if (*(void **)(param_1 + 0xbc) != (void *)0x0) {
    FUN_0040a140(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0x10c),local_18,0);
  }
  FUN_0040a9f0((void *)(param_1 + 0xc4),&local_10,0,0);
  return;
}

