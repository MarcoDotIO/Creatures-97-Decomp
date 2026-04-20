/*
 * Program: Creatures.exe
 * Function: FUN_00419010
 * Entry: 00419010
 * Namespace: Global
 * Prototype: undefined4 FUN_00419010(int param_1)
 */


undefined4 __fastcall FUN_00419010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < DAT_00437fb8) {
    do {
      iVar1 = (**(code **)(**(int **)(DAT_00437fb4 + iVar3) + 0x44))(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00437fb8);
  }
  iVar2 = 0;
  if (0 < DAT_00436c20) {
    puVar4 = &DAT_00439b28;
    do {
      iVar3 = FUN_004282d0((void *)*puVar4,param_1);
      if (iVar3 != 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00436c20);
  }
  return 1;
}

