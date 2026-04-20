/*
 * Program: Score_Kit.exe
 * Function: FUN_004094f0
 * Entry: 004094f0
 * Namespace: Global
 * Prototype: undefined FUN_004094f0(_onexit_t param_1)
 */


void __cdecl FUN_004094f0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_0040c5a0 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_0040c5a0 = DAT_0040c5a0 + 1;
    }
    else {
      DAT_0040c5a0 = DAT_0040c5a0 + -1;
    }
  }
  if (0 < DAT_0040c5a0) {
    while (0 < DAT_0040c5a4) {
      Sleep(0);
    }
    DAT_0040c5a4 = DAT_0040c5a4 + 1;
  }
  if (DAT_0040c730 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_0040c730,&DAT_0040c72c);
  }
  if (0 < DAT_0040c5a0) {
    DAT_0040c5a4 = DAT_0040c5a4 + -1;
  }
  return;
}

