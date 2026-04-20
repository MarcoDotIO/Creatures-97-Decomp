/*
 * Program: Health_Kit.exe
 * Function: FUN_00407ac0
 * Entry: 00407ac0
 * Namespace: Global
 * Prototype: undefined4 FUN_00407ac0(int param_1)
 */


undefined4 __fastcall FUN_00407ac0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  UINT_PTR UVar3;
  code *pcVar4;
  int iVar5;
  int local_24;
  int local_20;
  undefined4 local_1c;
  BYTE local_18 [8];
  tagRECT local_10;
  
  Ordinal_4178();
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_10);
  iVar1 = GetSystemMetrics(0x10);
  iVar2 = GetSystemMetrics(0x11);
  iVar5 = (iVar1 - local_10.right) + local_10.left;
  iVar1 = (iVar2 - local_10.bottom) + local_10.top;
  this = (void *)(param_1 + 0x94);
  local_18[0] = '\0';
  local_18[1] = '\x01';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = 0x80;
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  FUN_00404fd0(this,0,s_Location_00411438,(LPBYTE)&local_24,local_18);
  FUN_00404f90(this,0,s_On_Top_00411430,(LPBYTE)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x200));
  local_1c = 0;
  FUN_00404f90(this,0,&DAT_00411428,(LPBYTE)&local_1c,0);
  Ordinal_5181(local_1c);
  pcVar4 = Ordinal_5651_exref;
  if (*(int *)(param_1 + 0x200) != 0) {
    pcVar4 = Ordinal_5653_exref;
  }
  if (iVar5 < local_24) {
    local_24 = iVar5;
  }
  if (iVar1 < local_20) {
    local_20 = iVar1;
  }
  Ordinal_5490(pcVar4,local_24,local_20,0,0,0x41);
  UVar3 = *(UINT_PTR *)(param_1 + 0x220);
  *(UINT_PTR *)(param_1 + 0x220) = UVar3 + 1;
  UVar3 = SetTimer(*(HWND *)(param_1 + 0x20),UVar3,0x5a,(TIMERPROC)0x0);
  *(UINT_PTR *)(param_1 + 0x228) = UVar3;
  return 0;
}

