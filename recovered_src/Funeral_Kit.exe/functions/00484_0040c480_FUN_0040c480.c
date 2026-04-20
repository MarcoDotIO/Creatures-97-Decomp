/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040c480
 * Entry: 0040c480
 * Namespace: Global
 * Prototype: undefined FUN_0040c480(_onexit_t param_1)
 */


void __cdecl FUN_0040c480(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00410650 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00410650 = DAT_00410650 + 1;
    }
    else {
      DAT_00410650 = DAT_00410650 + -1;
    }
  }
  if (0 < DAT_00410650) {
    while (0 < DAT_00410654) {
      Sleep(0);
    }
    DAT_00410654 = DAT_00410654 + 1;
  }
  if (DAT_004107f0 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_004107f0,&DAT_004107ec);
  }
  if (0 < DAT_00410650) {
    DAT_00410654 = DAT_00410654 + -1;
  }
  return;
}

