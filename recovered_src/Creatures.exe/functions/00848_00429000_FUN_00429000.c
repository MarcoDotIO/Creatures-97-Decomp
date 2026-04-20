/*
 * Program: Creatures.exe
 * Function: FUN_00429000
 * Entry: 00429000
 * Namespace: Global
 * Prototype: undefined FUN_00429000(int * param_1)
 */


void __fastcall FUN_00429000(int *param_1)

{
  tagRECT local_10;
  
  GetWindowRect((HWND)param_1[8],&local_10);
  FUN_00408620(&DAT_00439e50,0,s_EyePosn_00436e90);
  (**(code **)(*param_1 + 0x5c))();
  return;
}

