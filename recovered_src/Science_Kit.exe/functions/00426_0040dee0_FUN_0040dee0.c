/*
 * Program: Science_Kit.exe
 * Function: FUN_0040dee0
 * Entry: 0040dee0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040dee0(int param_1)
 */


undefined4 __fastcall FUN_0040dee0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int local_4;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_00408300(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),0);
    if (iVar1 != 0) {
      iVar1 = 4;
      pcVar4 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
      puVar3 = (undefined4 *)(param_1 + 0x590);
      do {
        iVar2 = FUN_00402dc0(pcVar4,&local_4);
        *puVar3 = *(undefined4 *)(param_1 + 400 + iVar2 * 4);
        pcVar4 = pcVar4 + local_4 + 1;
        iVar1 = iVar1 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar1 != 0);
      return 1;
    }
  }
  return 0;
}

