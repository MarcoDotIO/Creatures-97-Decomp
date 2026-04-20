/*
 * Program: Creatures.exe
 * Function: FUN_00402630
 * Entry: 00402630
 * Namespace: Global
 * Prototype: undefined FUN_00402630(void * this, int param_1)
 */


void __thiscall FUN_00402630(void *this,int param_1)

{
  if (*(int *)((int)this + 0x50) != 0) {
    *(undefined4 *)((int)this + 0x50) = 1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x50) = 0;
    }
    FUN_004033f0(*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x54) = 0;
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
  }
  return;
}

