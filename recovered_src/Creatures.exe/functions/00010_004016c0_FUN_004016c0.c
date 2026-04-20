/*
 * Program: Creatures.exe
 * Function: FUN_004016c0
 * Entry: 004016c0
 * Namespace: Global
 * Prototype: undefined FUN_004016c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 */


void __cdecl
FUN_004016c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_6 == 0) {
    puVar4 = (undefined4 *)(PTR_DAT_004351dc + 0x18);
    if ((undefined4 *)0x437cbf < puVar4) {
      puVar4 = &DAT_00437900;
    }
    if (puVar4 != (undefined4 *)PTR_DAT_004351e0) {
      *(undefined4 *)PTR_DAT_004351dc = param_1;
      *(undefined4 *)(PTR_DAT_004351dc + 4) = param_2;
      *(undefined4 *)(PTR_DAT_004351dc + 8) = param_3;
      *(undefined4 *)(PTR_DAT_004351dc + 0xc) = param_4;
      *(undefined4 *)(PTR_DAT_004351dc + 0x10) = param_5;
      PTR_DAT_004351dc = (undefined *)puVar4;
      return;
    }
  }
  else if (DAT_004351d8 != 0x28) {
    iVar3 = 0;
    piVar2 = &DAT_00437554;
    do {
      if (*piVar2 == 0) break;
      piVar2 = piVar2 + 6;
      iVar3 = iVar3 + 1;
    } while (piVar2 < &DAT_00437914);
    if (iVar3 != 0x28) {
      *(undefined4 *)(&DAT_00437540 + iVar3 * 0x18) = param_1;
      iVar1 = iVar3 * 0x18;
      *(undefined4 *)(iVar1 + 0x437544) = param_2;
      *(undefined4 *)(iVar1 + 0x437548) = param_3;
      *(undefined4 *)(iVar1 + 0x43754c) = param_4;
      *(undefined4 *)(iVar1 + 0x437550) = param_5;
      DAT_004351d8 = DAT_004351d8 + 1;
      (&DAT_00437554)[iVar3 * 6] = DAT_00435e98 + param_6;
    }
  }
  return;
}

