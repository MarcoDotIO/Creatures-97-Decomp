/*
 * Program: Health_Kit.exe
 * Function: FUN_00404000
 * Entry: 00404000
 * Namespace: Global
 * Prototype: undefined4 FUN_00404000(int param_1)
 */


undefined4 __fastcall FUN_00404000(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int local_4;
  
  if (*(int *)(param_1 + 0xdc0) != 0) {
    iVar1 = FUN_00408100(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xdbc),0);
    if (iVar1 != 0) {
      iVar1 = 4;
      pcVar3 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
      piVar4 = (int *)(param_1 + 0x1a8);
      do {
        iVar2 = FUN_0040cba0(pcVar3,&local_4);
        *piVar4 = iVar2;
        pcVar3 = pcVar3 + local_4 + 1;
        iVar1 = iVar1 + -1;
        piVar4 = piVar4 + 1;
      } while (iVar1 != 0);
      *(undefined4 *)(param_1 + 400) =
           *(undefined4 *)(param_1 + 0x5bc + *(int *)(param_1 + 0x1ac) * 4);
      *(undefined4 *)(param_1 + 0x194) =
           *(undefined4 *)(param_1 + 0x1bc + *(int *)(param_1 + 0x1a8) * 4);
      *(int *)(param_1 + 0x198) =
           ((*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x150) >> 1) -
           *(int *)(param_1 + 0x9bc + *(int *)(param_1 + 0x1b0) * 4)) +
           *(int *)(param_1 + 0x9bc + *(int *)(param_1 + 0x1b4) * 4);
      return 1;
    }
  }
  return 0;
}

