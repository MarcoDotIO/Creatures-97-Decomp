/*
 * Program: Score_Kit.exe
 * Function: FUN_00403580
 * Entry: 00403580
 * Namespace: Global
 * Prototype: undefined FUN_00403580(void * this, int param_1)
 */


void __thiscall FUN_00403580(void *this,int param_1)

{
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
    if ((*(int *)((int)this + 0x604) == 0) && (*(int *)((int)this + 0x614) == param_1)) {
      if (*(int *)((int)this + 0x58c) == 0x32) {
        FUN_00403bf0(this);
        SetScrollPos(*(HWND *)((int)this + 0x988),2,0,1);
        *(undefined4 *)((int)this + 0x58c) = 0;
      }
      *(int *)((int)this + 0x58c) = *(int *)((int)this + 0x58c) + 1;
      *(uint *)((int)this + 0x600) = *(uint *)((int)this + 0x600) ^ 1;
      FUN_00403840((int)this);
    }
    Ordinal_2081();
    return;
  }
  FUN_004036d0((int)this);
  return;
}

