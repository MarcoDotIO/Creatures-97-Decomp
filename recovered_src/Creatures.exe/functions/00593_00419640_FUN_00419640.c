/*
 * Program: Creatures.exe
 * Function: FUN_00419640
 * Entry: 00419640
 * Namespace: Global
 * Prototype: undefined FUN_00419640(int param_1)
 */


void __fastcall FUN_00419640(int param_1)

{
  char cVar1;
  bool bVar2;
  char *_Buf;
  char *pcVar3;
  int iVar4;
  
  bVar2 = false;
  _Buf = (char *)Ordinal_2557(1000);
  do {
    pcVar3 = fgets(_Buf,1000,*(FILE **)(param_1 + 0x68));
    if (pcVar3 == (char *)0x0) {
      iVar4 = fseek(*(FILE **)(param_1 + 0x68),0,0);
      if (iVar4 != 0) {
        Ordinal_1060(0x6f,0,0xffffffff);
      }
    }
    else {
      cVar1 = *_Buf;
      if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) && (cVar1 != ';')) {
        bVar2 = true;
      }
    }
  } while (!bVar2);
  Ordinal_4931(0xffffffff);
  return;
}

