/*
 * Program: Science_Kit.exe
 * Function: FUN_00408f70
 * Entry: 00408f70
 * Namespace: Global
 * Prototype: undefined FUN_00408f70(void * param_1)
 */


void __fastcall FUN_00408f70(void *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00408fd0((int)param_1);
  if (iVar2 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar4 = 0;
      do {
        bVar1 = *(byte *)((int)param_1 + iVar2 + iVar4 + 0x60b0);
        if (bVar1 != 0) {
          FUN_00408e50(param_1,iVar3,iVar4,*(undefined1 *)(bVar1 + 0xa0 + (int)param_1));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x30);
      iVar2 = iVar2 + 0x40;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 0x1000);
    FUN_00409050((int)param_1);
  }
  return;
}

