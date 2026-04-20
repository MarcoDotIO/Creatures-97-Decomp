/*
 * Program: Score_Kit.exe
 * Function: FUN_00404a30
 * Entry: 00404a30
 * Namespace: Global
 * Prototype: undefined FUN_00404a30(void * this, undefined4 param_1, int param_2, int param_3)
 */


void __thiscall FUN_00404a30(void *this,undefined4 param_1,int param_2,int param_3)

{
  int nPos;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)((int)this + 0x908),&local_10);
  nPos = GetScrollPos(*(HWND *)(param_3 + 0x20),2);
  GetScrollRange(*(HWND *)(param_3 + 0x20),2,&local_18,&local_14);
  switch(param_1) {
  case 0:
    nPos = nPos + -10;
    if (nPos <= local_18) {
      nPos = local_18;
    }
    break;
  case 1:
    nPos = nPos + 10;
    if (local_14 <= nPos) {
      nPos = local_14;
    }
    break;
  case 2:
    nPos = nPos + -10;
    if (nPos <= local_18) {
      nPos = local_18;
    }
    break;
  case 3:
    nPos = nPos + 10;
    if (local_14 <= nPos) {
      nPos = local_14;
    }
    break;
  case 4:
    nPos = param_2;
  }
  SetScrollPos(*(HWND *)(param_3 + 0x20),2,nPos,1);
  if (nPos == 700) {
    nPos = (700 - local_10.right) + local_10.left;
  }
  FUN_00405400((void *)((int)this + 0x94),&local_10,nPos,0);
  Ordinal_4161(param_1,param_2,param_3);
  return;
}

