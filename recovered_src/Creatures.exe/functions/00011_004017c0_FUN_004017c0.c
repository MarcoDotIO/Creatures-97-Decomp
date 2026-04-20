/*
 * Program: Creatures.exe
 * Function: FUN_004017c0
 * Entry: 004017c0
 * Namespace: Global
 * Prototype: undefined * FUN_004017c0(void)
 */


undefined * FUN_004017c0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  if (PTR_DAT_004351e0 == PTR_DAT_004351dc) {
    if (DAT_004351d8 == 0) {
      return (undefined *)0x0;
    }
    iVar4 = 0;
    bVar1 = false;
    iVar5 = DAT_004351d8;
    do {
      if (iVar5 < 1) break;
      if (bVar1) goto LAB_0040183b;
      if (((&DAT_00437554)[iVar4 * 6] == 0) ||
         (iVar5 = iVar5 + -1, DAT_00435e98 < (uint)(&DAT_00437554)[iVar4 * 6])) {
        iVar4 = iVar4 + 1;
      }
      else {
        bVar1 = true;
      }
    } while (iVar4 < 0x28);
    if (bVar1) {
LAB_0040183b:
      DAT_004351d8 = DAT_004351d8 + -1;
      (&DAT_00437554)[iVar4 * 6] = 0;
      return &DAT_00437540 + iVar4 * 0x18;
    }
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_DAT_004351e0;
    puVar3 = PTR_DAT_004351e0 + 0x18;
    PTR_DAT_004351e0 = puVar3;
    if ((undefined *)0x437cbf < puVar3) {
      PTR_DAT_004351e0 = (undefined *)&DAT_00437900;
      return puVar2;
    }
  }
  return puVar2;
}

