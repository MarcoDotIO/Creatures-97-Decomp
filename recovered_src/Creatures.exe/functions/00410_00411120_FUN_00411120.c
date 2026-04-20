/*
 * Program: Creatures.exe
 * Function: FUN_00411120
 * Entry: 00411120
 * Namespace: Global
 * Prototype: undefined4 FUN_00411120(int param_1)
 */


undefined4 __fastcall FUN_00411120(int param_1)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 1;
  Ordinal_4173();
  if (1 < *(int *)(DAT_00436ea4 + 0xe0)) {
    iVar3 = 0xc;
    piVar6 = (int *)(param_1 + 0x60);
    do {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x98),0x180,0,
                           *(LPARAM *)(DAT_00436ea4 + 0x9c + iVar3));
      iVar2 = iVar5 + -1;
      piVar4 = (int *)(param_1 + 0x60);
      if (0 < iVar2) {
        do {
          if (LVar1 <= *piVar4) {
            *piVar4 = *piVar4 + 1;
          }
          iVar2 = iVar2 + -1;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
      }
      *piVar6 = LVar1;
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + 0xc;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    } while (iVar5 < *(int *)(DAT_00436ea4 + 0xe0));
  }
  SendMessageA(*(HWND *)(param_1 + 0x98),0x186,0,0);
  Ordinal_5610(1);
  return 1;
}

