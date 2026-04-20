/*
 * Program: Creatures.exe
 * Function: FUN_0042e4f0
 * Entry: 0042e4f0
 * Namespace: Global
 * Prototype: undefined FUN_0042e4f0(_onexit_t param_1)
 */


void __cdecl FUN_0042e4f0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_004371e0 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_004371e0 = DAT_004371e0 + 1;
    }
    else {
      DAT_004371e0 = DAT_004371e0 + -1;
    }
  }
  if (0 < DAT_004371e0) {
    while (0 < DAT_004371e4) {
      Sleep(0);
    }
    DAT_004371e4 = DAT_004371e4 + 1;
  }
  if (DAT_0043a394 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_0043a394,&DAT_0043a390);
  }
  if (0 < DAT_004371e0) {
    DAT_004371e4 = DAT_004371e4 + -1;
  }
  return;
}

