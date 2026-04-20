/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040cc50
 * Entry: 0040cc50
 * Namespace: Global
 * Prototype: undefined FUN_0040cc50(_onexit_t param_1)
 */


void __cdecl FUN_0040cc50(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_004127a0 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_004127a0 = DAT_004127a0 + 1;
    }
    else {
      DAT_004127a0 = DAT_004127a0 + -1;
    }
  }
  if (0 < DAT_004127a0) {
    while (0 < DAT_004127a4) {
      Sleep(0);
    }
    DAT_004127a4 = DAT_004127a4 + 1;
  }
  if (DAT_00412940 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00412940,&DAT_0041293c);
  }
  if (0 < DAT_004127a0) {
    DAT_004127a4 = DAT_004127a4 + -1;
  }
  return;
}

