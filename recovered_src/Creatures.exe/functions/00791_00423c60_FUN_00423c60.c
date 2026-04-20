/*
 * Program: Creatures.exe
 * Function: FUN_00423c60
 * Entry: 00423c60
 * Namespace: Global
 * Prototype: undefined FUN_00423c60(void)
 */


void FUN_00423c60(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (DAT_00436c20 != 0) {
    FUN_00424100(DAT_00439b28);
  }
  iVar3 = 0;
  DAT_00436c20 = 0;
  if (0 < DAT_00436c24) {
    puVar2 = &DAT_00439128;
    do {
      iVar3 = iVar3 + 1;
      Ordinal_731(*puVar2);
      iVar1 = DAT_00436c24;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    } while (iVar3 < iVar1);
  }
  DAT_00436c24 = 0;
  return;
}

