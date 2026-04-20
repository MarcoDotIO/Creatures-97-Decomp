/*
 * Program: Score_Kit.exe
 * Function: FUN_00404210
 * Entry: 00404210
 * Namespace: Global
 * Prototype: undefined FUN_00404210(int param_1)
 */


void __fastcall FUN_00404210(int param_1)

{
  int iVar1;
  tagRECT local_10;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  GetClientRect(*(HWND *)(param_1 + 0x908),&local_10);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4);
  *(int *)(param_1 + 0x618) = iVar1;
  SetScrollRange(*(HWND *)(param_1 + 0x988),2,0,iVar1,1);
  SetScrollPos(*(HWND *)(param_1 + 0x988),2,0,1);
  return;
}

