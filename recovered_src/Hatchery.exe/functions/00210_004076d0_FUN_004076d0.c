/*
 * Program: Hatchery.exe
 * Function: FUN_004076d0
 * Entry: 004076d0
 * Namespace: Global
 * Prototype: undefined FUN_004076d0(_onexit_t param_1)
 */


void __cdecl FUN_004076d0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_0040a6a0 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_0040a6a0 = DAT_0040a6a0 + 1;
    }
    else {
      DAT_0040a6a0 = DAT_0040a6a0 + -1;
    }
  }
  if (0 < DAT_0040a6a0) {
    while (0 < DAT_0040a6a4) {
      Sleep(0);
    }
    DAT_0040a6a4 = DAT_0040a6a4 + 1;
  }
  if (DAT_005d93c0 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_005d93c0,&DAT_005d93bc);
  }
  if (0 < DAT_0040a6a0) {
    DAT_0040a6a4 = DAT_0040a6a4 + -1;
  }
  return;
}

