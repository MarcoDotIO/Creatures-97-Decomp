/*
 * Program: Launcher.exe
 * Function: FUN_00403c60
 * Entry: 00403c60
 * Namespace: Global
 * Prototype: undefined FUN_00403c60(_onexit_t param_1)
 */


void __cdecl FUN_00403c60(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00405200 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00405200 = DAT_00405200 + 1;
    }
    else {
      DAT_00405200 = DAT_00405200 + -1;
    }
  }
  if (0 < DAT_00405200) {
    while (0 < DAT_00405204) {
      Sleep(0);
    }
    DAT_00405204 = DAT_00405204 + 1;
  }
  if (DAT_00405310 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00405310,&DAT_0040530c);
  }
  if (0 < DAT_00405200) {
    DAT_00405204 = DAT_00405204 + -1;
  }
  return;
}

