/*
 * Program: Science_Kit.exe
 * Function: FUN_00410750
 * Entry: 00410750
 * Namespace: Global
 * Prototype: undefined FUN_00410750(_onexit_t param_1)
 */


void __cdecl FUN_00410750(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_004158a0 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_004158a0 = DAT_004158a0 + 1;
    }
    else {
      DAT_004158a0 = DAT_004158a0 + -1;
    }
  }
  if (0 < DAT_004158a0) {
    while (0 < DAT_004158a4) {
      Sleep(0);
    }
    DAT_004158a4 = DAT_004158a4 + 1;
  }
  if (DAT_00415a3c == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00415a3c,&DAT_00415a38);
  }
  if (0 < DAT_004158a0) {
    DAT_004158a4 = DAT_004158a4 + -1;
  }
  return;
}

