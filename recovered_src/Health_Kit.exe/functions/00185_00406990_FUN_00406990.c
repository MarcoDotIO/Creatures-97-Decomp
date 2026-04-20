/*
 * Program: Health_Kit.exe
 * Function: FUN_00406990
 * Entry: 00406990
 * Namespace: Global
 * Prototype: undefined FUN_00406990(int param_1)
 */


void __fastcall FUN_00406990(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LONG LVar4;
  int iVar5;
  int local_50;
  int local_4c;
  tagRECT local_48;
  int local_38 [2];
  tagRECT local_30;
  RECT local_20;
  RECT local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 0xc);
  local_38[0] = 0x68;
  local_38[1] = 0x73;
  SetRect(&local_30,0x68,0x73,0xd4,0xe2);
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar1 = *(int *)(iVar1 + 0x10);
  iVar5 = *(int *)((int)*(void **)(param_1 + 0x1b4) + 4);
  local_48.left = *(int *)(iVar5 + 4);
  iVar5 = *(int *)(iVar5 + 8);
  local_50 = 0;
  local_4c = 0;
  if (iVar2 < local_48.left) {
    local_50 = local_48.left - iVar2 >> 1;
  }
  if (iVar1 < iVar5) {
    local_4c = iVar5 - iVar1 >> 1;
  }
  FUN_00402690(*(void **)(param_1 + 0x1b4),0xf3,(int *)(param_1 + 0x11c));
  local_20.left = *(LONG *)(param_1 + 0x11c);
  local_20.top = *(LONG *)(param_1 + 0x120);
  local_20.right = *(LONG *)(param_1 + 0x124);
  local_20.bottom = *(LONG *)(param_1 + 0x128);
  iVar3 = _mbscmp(*(uchar **)(param_1 + 0xb0),(uchar *)s_Shop_bmp_00411398);
  if (iVar3 == 0) {
    FUN_0040d360((void *)(param_1 + 0x2fc),*(void **)(param_1 + 0x1b4),0,local_38,&local_30.left);
    FUN_00408dc0((void *)(param_1 + 0x16c),(RECT *)0x0,0,0);
  }
  if (*(void **)(param_1 + 0xa4) != (void *)0x0) {
    FUN_0040a1c0(*(void **)(param_1 + 0xa4),*(void **)(param_1 + 0x1b4),&local_50,1);
  }
  if (iVar1 <= iVar5) {
    iVar5 = iVar1;
  }
  LVar4 = local_48.left;
  if (iVar2 <= local_48.left) {
    LVar4 = iVar2;
  }
  SetRect((LPRECT)(param_1 + 0x11c),local_50,local_4c,LVar4 + local_50,iVar5 + local_4c);
  UnionRect(&local_48,&local_20,(RECT *)(param_1 + 0x11c));
  local_10.left = local_48.left;
  local_10.top = local_48.top;
  local_10.right = local_48.right;
  local_10.bottom = local_48.bottom;
  FUN_00408dc0((void *)(param_1 + 0x16c),&local_10,0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x3b4),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x3f4),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x334),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 500),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x2b4),(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(param_1 + 0x254),(RECT *)0x0,0);
  return;
}

