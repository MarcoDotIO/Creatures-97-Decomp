/*
 * Program: Health_Kit.exe
 * Function: FUN_0040dad0
 * Entry: 0040dad0
 * Namespace: Global
 * Prototype: undefined FUN_0040dad0(_onexit_t param_1)
 */


void __cdecl FUN_0040dad0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00411730 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00411730 = DAT_00411730 + 1;
    }
    else {
      DAT_00411730 = DAT_00411730 + -1;
    }
  }
  if (0 < DAT_00411730) {
    while (0 < DAT_00411734) {
      Sleep(0);
    }
    DAT_00411734 = DAT_00411734 + 1;
  }
  if (DAT_004118d4 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_004118d4,&DAT_004118d0);
  }
  if (0 < DAT_00411730) {
    DAT_00411734 = DAT_00411734 + -1;
  }
  return;
}

