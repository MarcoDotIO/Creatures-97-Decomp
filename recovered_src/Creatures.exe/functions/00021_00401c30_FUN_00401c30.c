/*
 * Program: Creatures.exe
 * Function: FUN_00401c30
 * Entry: 00401c30
 * Namespace: Global
 * Prototype: undefined * FUN_00401c30(void)
 */


undefined * FUN_00401c30(void)

{
  undefined *puVar1;
  
  if (PTR_DAT_004351e8 == PTR_DAT_004351e4) {
    return (undefined *)0x0;
  }
  puVar1 = PTR_DAT_004351e8;
  PTR_DAT_004351e8 = PTR_DAT_004351e8 + 0x14;
  if ((undefined *)0x43753f < PTR_DAT_004351e8) {
    PTR_DAT_004351e8 = (undefined *)&DAT_00437220;
  }
  return puVar1;
}

