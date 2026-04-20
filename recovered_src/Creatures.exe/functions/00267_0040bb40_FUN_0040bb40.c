/*
 * Program: Creatures.exe
 * Function: FUN_0040bb40
 * Entry: 0040bb40
 * Namespace: Global
 * Prototype: undefined FUN_0040bb40(void)
 */


void FUN_0040bb40(void)

{
  if (DAT_00436ea8 != 0) {
    SetTimer(*(HWND *)(DAT_00436ea8 + 0x20),1,0x5a,(TIMERPROC)0x0);
  }
  return;
}

