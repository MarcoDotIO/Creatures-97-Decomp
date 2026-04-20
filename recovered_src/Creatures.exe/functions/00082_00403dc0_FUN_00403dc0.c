/*
 * Program: Creatures.exe
 * Function: FUN_00403dc0
 * Entry: 00403dc0
 * Namespace: Global
 * Prototype: undefined FUN_00403dc0(int param_1)
 */


void __fastcall FUN_00403dc0(int param_1)

{
  BYTE BVar1;
  BYTE BVar2;
  tagPALETTEENTRY *ptVar3;
  BYTE *pBVar4;
  tagPALETTEENTRY local_400 [256];
  
  GetPaletteEntries((HPALETTE)**(undefined4 **)(param_1 + 0x470),0,0x100,local_400);
  ptVar3 = local_400;
  pBVar4 = (BYTE *)(param_1 + 0x66);
  do {
    BVar1 = ptVar3->peGreen;
    *pBVar4 = ptVar3->peRed;
    BVar2 = ptVar3->peBlue;
    ptVar3 = ptVar3 + 1;
    pBVar4[-1] = BVar1;
    pBVar4[-2] = BVar2;
    pBVar4[1] = '\0';
    pBVar4 = pBVar4 + 4;
  } while (ptVar3 < (tagPALETTEENTRY *)&stack0x00000000);
  WinGSetDIBColorTable(*(undefined4 *)(param_1 + 0x34),0,0x100,param_1 + 100);
  return;
}

