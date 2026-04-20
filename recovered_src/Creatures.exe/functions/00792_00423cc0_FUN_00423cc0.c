/*
 * Program: Creatures.exe
 * Function: FUN_00423cc0
 * Entry: 00423cc0
 * Namespace: Global
 * Prototype: undefined FUN_00423cc0(int param_1)
 */


void __cdecl FUN_00423cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00436c20) {
    do {
      piVar1 = (int *)(&DAT_00439b28)[iVar2];
      if ((piVar1[0x25] == param_1) && (piVar1[1] != 0)) {
        iVar2 = iVar2 + -1;
        FUN_00424100(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00436c20);
  }
  return;
}

