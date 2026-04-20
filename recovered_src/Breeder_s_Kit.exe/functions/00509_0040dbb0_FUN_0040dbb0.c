/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040dbb0
 * Entry: 0040dbb0
 * Namespace: Global
 * Prototype: undefined FUN_0040dbb0(_onexit_t param_1)
 */


void __cdecl FUN_0040dbb0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00412740 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00412740 = DAT_00412740 + 1;
    }
    else {
      DAT_00412740 = DAT_00412740 + -1;
    }
  }
  if (0 < DAT_00412740) {
    while (0 < DAT_00412744) {
      Sleep(0);
    }
    DAT_00412744 = DAT_00412744 + 1;
  }
  if (DAT_004128e0 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_004128e0,&DAT_004128dc);
  }
  if (0 < DAT_00412740) {
    DAT_00412744 = DAT_00412744 + -1;
  }
  return;
}

