/*
 * Program: Creatures.exe
 * Function: FUN_004120c0
 * Entry: 004120c0
 * Namespace: Global
 * Prototype: undefined FUN_004120c0(void * this, LPARAM * param_1)
 */


void __thiscall FUN_004120c0(void *this,LPARAM *param_1)

{
  WPARAM wParam;
  LRESULT LVar1;
  
  Ordinal_3383(param_1);
  wParam = SendMessageA(*(HWND *)((int)this + 0xc0),0x158,0,*param_1);
  if (wParam != 0xffffffff) {
    SendMessageA(*(HWND *)((int)this + 0xc0),0x144,wParam,0);
  }
  SendMessageA(*(HWND *)((int)this + 0xc0),0x14a,0,*param_1);
  SendMessageA(*(HWND *)((int)this + 0xc0),0x14e,0,0);
  LVar1 = SendMessageA(*(HWND *)((int)this + 0xc0),0x146,0,0);
  if (10 < LVar1) {
    LVar1 = SendMessageA(*(HWND *)((int)this + 0xc0),0x146,0,0);
    SendMessageA(*(HWND *)((int)this + 0xc0),0x144,LVar1 - 1,0);
  }
  return;
}

