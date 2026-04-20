/*
 * Program: remove.exe
 * Function: FUN_00401ef0
 * Entry: 00401ef0
 * Namespace: Global
 * Prototype: undefined FUN_00401ef0(_onexit_t param_1)
 */


void __cdecl FUN_00401ef0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00404838 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00404838 = DAT_00404838 + 1;
    }
    else {
      DAT_00404838 = DAT_00404838 + -1;
    }
  }
  if (0 < DAT_00404838) {
    while (0 < DAT_0040483c) {
      Sleep(0);
    }
    DAT_0040483c = DAT_0040483c + 1;
  }
  if (DAT_00404930 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00404930,&DAT_0040492c);
  }
  if (0 < DAT_00404838) {
    DAT_0040483c = DAT_0040483c + -1;
  }
  return;
}

