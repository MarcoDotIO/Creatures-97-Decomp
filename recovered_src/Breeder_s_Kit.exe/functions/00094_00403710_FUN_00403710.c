/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403710
 * Entry: 00403710
 * Namespace: Global
 * Prototype: undefined FUN_00403710(int * param_1)
 */


void __fastcall FUN_00403710(int *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT tStack_18;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0xdc))();
  Ordinal_4933();
  GetWindowRect((HWND)param_1[8],&tStack_18);
  iVar1 = GetSystemMetrics(0x10);
  iVar2 = GetSystemMetrics(0x11);
  iVar3 = (iVar1 - tStack_18.right) + tStack_18.left;
  iVar1 = (iVar2 - tStack_18.bottom) + tStack_18.top;
  if (tStack_18.left < 0) {
    iStack_8 = 0;
  }
  else {
    iStack_8 = tStack_18.left;
    if (iVar3 < tStack_18.left) {
      iStack_8 = iVar3;
    }
  }
  if (tStack_18.top < 0) {
    iStack_4 = 0;
  }
  else {
    iStack_4 = tStack_18.top;
    if (iVar1 < tStack_18.top) {
      iStack_4 = iVar1;
    }
  }
  this = param_1 + 0x25;
  FUN_00404c80(this,0,s_Location_004122d0,(BYTE *)&iStack_8);
  FUN_00404c40(this,0,s_On_Top_004122c8);
  Ordinal_2530();
  FUN_00404c40(this,0,&DAT_004122c0);
  Ordinal_2293();
  Ordinal_6(param_1[0x7f]);
  if (param_1[0x88] != 0) {
    KillTimer((HWND)param_1[8],param_1[0x88]);
  }
  Ordinal_2081();
  return;
}

