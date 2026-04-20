/*
 * Program: Health_Kit.exe
 * Function: FUN_0040b1b0
 * Entry: 0040b1b0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b1b0(int param_1)
 */


undefined4 __fastcall FUN_0040b1b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int local_4;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_00408100(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),0);
    if (iVar1 != 0) {
      iVar1 = 0x10;
      pcVar5 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
      piVar4 = (int *)(param_1 + 0xd8);
      do {
        iVar2 = FUN_0040cba0(pcVar5,&local_4);
        *piVar4 = iVar2;
        pcVar5 = pcVar5 + local_4 + 1;
        iVar1 = iVar1 + -1;
        piVar4 = piVar4 + 1;
      } while (iVar1 != 0);
      iVar1 = 5;
      puVar3 = (undefined4 *)(param_1 + 0xc0);
      do {
        iVar1 = iVar1 + -1;
        *puVar3 = *(undefined4 *)(param_1 + 0xd4 + puVar3[0x16] * 4);
        puVar3 = puVar3 + 1;
      } while (iVar1 != 0);
      return 1;
    }
  }
  return 0;
}

