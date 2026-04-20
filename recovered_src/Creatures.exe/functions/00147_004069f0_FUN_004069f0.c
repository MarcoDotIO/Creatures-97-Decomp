/*
 * Program: Creatures.exe
 * Function: FUN_004069f0
 * Entry: 004069f0
 * Namespace: Global
 * Prototype: undefined FUN_004069f0(int param_1, int param_2)
 */


void FUN_004069f0(int param_1,int param_2)

{
  byte bVar1;
  
  if (DAT_004382c4 != param_1) {
    DAT_004382c4 = param_1;
    if (param_1 == 0) {
      bVar1 = 8;
    }
    else {
      bVar1 = 6;
    }
    FUN_0041d060(2,bVar1,0,0);
    FUN_004126c0();
    if (DAT_00436eb4 != (int *)0x0) {
      if ((DAT_004382c4 == 0) || (*(char *)(DAT_004382c4 + 0x2b78) != '\0')) {
        if (DAT_00436eb4 != (int *)0x0) {
          (**(code **)(*DAT_00436eb4 + 4))(1);
        }
        DAT_00436eb4 = (int *)0x0;
      }
      else {
        FUN_00428e00((int)DAT_00436eb4);
      }
    }
    if ((DAT_004382c4 != 0) && (*(char *)(DAT_004382c4 + 0x2b78) != '\0')) {
      FUN_0041d060(2,8,0,0);
    }
    if (param_2 != 0) {
      FUN_00402700(DAT_00436eb0);
    }
    FUN_0041c2f0(DAT_00436ebc);
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
  }
  return;
}

