/*
 * Program: Launcher.exe
 * Function: FUN_00402b90
 * Entry: 00402b90
 * Namespace: Global
 * Prototype: undefined FUN_00402b90(int param_1)
 */


void __fastcall FUN_00402b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *_Str;
  char *pcVar3;
  HWND hwnd;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_180 [348];
  undefined1 local_24 [16];
  char *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402cac;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  iVar1 = Ordinal_4619(s_Applets_00405148,0,0);
  if (iVar1 != 0) {
    uVar2 = Ordinal_2891();
    _Str = (char *)Ordinal_729(uVar2);
    if (_Str != (char *)0x0) {
      local_14 = _Str;
      Ordinal_271(local_24,1,0x1000,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      Ordinal_4817(_Str,uVar2);
      pcVar3 = _Str;
      while ((pcVar3 != (char *)0x0 && (pcVar3 = strchr(_Str,0x7c), pcVar3 != (char *)0x0))) {
        *pcVar3 = '\0';
        iVar1 = Ordinal_3307(_Str,local_180);
        if (iVar1 != 0) {
          if (*(int *)(param_1 + 0xc4) == 0) {
            hwnd = (HWND)0x0;
          }
          else {
            hwnd = *(HWND *)(*(int *)(param_1 + 0xc4) + 0x20);
          }
          ShellExecuteA(hwnd,(LPCSTR)0x0,_Str,&DAT_0040511c,&DAT_0040511c,5);
        }
        _Str = pcVar3 + 1;
      }
      Ordinal_731(local_14);
      local_8 = local_8 & 0xffffff00;
      FUN_00402ca4();
    }
  }
  local_8 = 0xffffffff;
  FUN_00402cb6();
  *unaff_FS_OFFSET = local_10;
  return;
}

