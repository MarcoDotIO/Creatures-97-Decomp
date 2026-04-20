/*
 * Program: Creatures.exe
 * Function: FUN_00411ac0
 * Entry: 00411ac0
 * Namespace: Global
 * Prototype: undefined FUN_00411ac0(int param_1)
 */


void __fastcall FUN_00411ac0(int param_1)

{
  BOOL BVar1;
  tagRECT local_10;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x20));
  if (BVar1 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_10);
    FUN_004085e0(&DAT_00439e50,0,s_WindowPosn_00436280);
  }
  Ordinal_3896();
  return;
}

