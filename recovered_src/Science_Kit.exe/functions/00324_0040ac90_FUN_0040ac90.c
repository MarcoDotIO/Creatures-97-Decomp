/*
 * Program: Science_Kit.exe
 * Function: FUN_0040ac90
 * Entry: 0040ac90
 * Namespace: Global
 * Prototype: undefined FUN_0040ac90(void * param_1)
 */


void __fastcall FUN_0040ac90(void *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int local_4;
  
  iVar1 = FUN_0040ac40(param_1,s_dde__gene_endm_004156ac);
  if (iVar1 != 0) {
    iVar1 = FUN_00408300(*(void **)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x120),0);
    if (iVar1 != 0) {
      iVar1 = 0xe;
      pcVar3 = *(char **)(*(int *)((int)param_1 + 0x8c) + 0x1fc);
      piVar4 = (int *)((int)param_1 + 0x18c);
      do {
        iVar2 = FUN_00402dc0(pcVar3,&local_4);
        *piVar4 = iVar2;
        pcVar3 = pcVar3 + local_4 + 1;
        iVar1 = iVar1 + -1;
        piVar4 = piVar4 + 1;
      } while (iVar1 != 0);
    }
  }
  return;
}

