/*
 * Program: Creatures.exe
 * Function: FUN_0041bd10
 * Entry: 0041bd10
 * Namespace: Global
 * Prototype: undefined4 FUN_0041bd10(int param_1)
 */


undefined4 __fastcall FUN_0041bd10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00438868) {
    piVar2 = DAT_00438864;
    do {
      if (*(int *)(*piVar2 + 0x48) == *(int *)(param_1 + 0x10)) {
        return 1;
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00438868);
  }
  iVar1 = 0;
  piVar2 = DAT_00437fd4;
  if (0 < DAT_00437fd8) {
    do {
      if (((*(uint *)(*piVar2 + 4) & 0xff000000) == 0x4000000) &&
         (*(int *)(*piVar2 + 0x48) == *(int *)(param_1 + 0x10))) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < DAT_00437fd8);
  }
  return 0;
}

