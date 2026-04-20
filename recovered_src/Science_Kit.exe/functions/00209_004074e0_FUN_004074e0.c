/*
 * Program: Science_Kit.exe
 * Function: FUN_004074e0
 * Entry: 004074e0
 * Namespace: Global
 * Prototype: undefined FUN_004074e0(void * this, undefined4 param_1, undefined4 param_2, int param_3)
 */


void __thiscall FUN_004074e0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  LRESULT LVar1;
  
  if (*(int *)((int)this + 0xa4) == 0) {
    *(undefined4 *)((int)this + 0xac) = 1;
    LVar1 = SendMessageA(*(HWND *)(param_3 + 0x20),0x400,0,0);
    *(int *)((int)this + 0x11c) = 0xff - LVar1;
    FUN_00406dd0(this,*(int *)((int)this + (0xff - LVar1) * 4 + 0x124));
    Ordinal_4593(param_1,param_2,param_3);
  }
  return;
}

