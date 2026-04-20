/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00406120
 * Entry: 00406120
 * Namespace: Global
 * Prototype: undefined FUN_00406120(int param_1)
 */


void __fastcall FUN_00406120(int param_1)

{
  int local_18 [2];
  RECT local_10;
  
  local_18[0] = 0x3e;
  local_10.left = 0x3e;
  local_10.right = 0xb6;
  local_10.bottom = 0xac;
  local_18[1] = 0x20;
  local_10.top = 0x20;
  if (*(void **)(param_1 + 0xa4) != (void *)0x0) {
    FUN_00407940(*(void **)(param_1 + 0xa4),*(void **)(param_1 + 0xf8),local_18,0);
  }
  FUN_00404650((void *)(param_1 + 0xb0),&local_10,0,0);
  return;
}

