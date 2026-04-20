/*
 * Program: Backup.exe
 * Function: FUN_00402d10
 * Entry: 00402d10
 * Namespace: Global
 * Prototype: undefined FUN_00402d10(_onexit_t param_1)
 */


void __cdecl FUN_00402d10(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_00406158 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_00406158 = DAT_00406158 + 1;
    }
    else {
      DAT_00406158 = DAT_00406158 + -1;
    }
  }
  if (0 < DAT_00406158) {
    while (0 < DAT_0040615c) {
      Sleep(0);
    }
    DAT_0040615c = DAT_0040615c + 1;
  }
  if (DAT_00406250 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_00406250,&DAT_0040624c);
  }
  if (0 < DAT_00406158) {
    DAT_0040615c = DAT_0040615c + -1;
  }
  return;
}

