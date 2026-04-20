/*
 * Program: Creatures.exe
 * Function: FUN_004243a0
 * Entry: 004243a0
 * Namespace: Global
 * Prototype: undefined FUN_004243a0(int param_1)
 */


void __cdecl FUN_004243a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  if (0 < DAT_00436c24) {
    piVar1 = &DAT_0043912c;
    do {
      if (*piVar1 == param_1) break;
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00436c24);
    if (iVar2 < DAT_00436c24) {
      iVar3 = iVar2 + 1;
      Ordinal_731((&DAT_00439128)[iVar2 * 2]);
      if (iVar3 < DAT_00436c24) {
        iVar2 = DAT_00436c24 - iVar3;
        puVar4 = (undefined4 *)(iVar3 * 8 + 0x439124);
        do {
          iVar2 = iVar2 + -1;
          *puVar4 = puVar4[2];
          puVar4[-1] = puVar4[1];
          puVar4 = puVar4 + 2;
        } while (iVar2 != 0);
      }
      DAT_00436c24 = DAT_00436c24 + -1;
    }
  }
  return;
}

