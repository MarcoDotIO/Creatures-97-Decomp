/*
 * Program: Creatures.exe
 * Function: FUN_00411790
 * Entry: 00411790
 * Namespace: Global
 * Prototype: undefined FUN_00411790(int param_1)
 */


void FUN_00411790(int param_1)

{
  int iVar1;
  tagRECT local_10;
  
  local_10.right = 0x280;
  local_10.bottom = 0x1e0;
  local_10.left = 0;
  local_10.top = 0;
  FUN_00408460(&DAT_00439e50,0,s_WindowPosn_00436280,(LPBYTE)&local_10,0,0,0x280,0x1e0);
  iVar1 = GetSystemMetrics(0x10);
  if (local_10.left < iVar1) {
    iVar1 = GetSystemMetrics(0x11);
    if (local_10.top < iVar1) goto LAB_0041180e;
  }
  SetRect(&local_10,0,0,0x280,0x1e0);
LAB_0041180e:
  *(LONG *)(param_1 + 0x1c) = local_10.left;
  *(LONG *)(param_1 + 0x18) = local_10.top;
  *(undefined4 *)(param_1 + 0x20) = 0xcf0000;
  *(LONG *)(param_1 + 0x14) = local_10.right - local_10.left;
  *(LONG *)(param_1 + 0x10) = local_10.bottom - local_10.top;
  Ordinal_4668(param_1);
  return;
}

