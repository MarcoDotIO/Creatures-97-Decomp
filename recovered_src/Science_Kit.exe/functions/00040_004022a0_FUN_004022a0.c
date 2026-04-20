/*
 * Program: Science_Kit.exe
 * Function: FUN_004022a0
 * Entry: 004022a0
 * Namespace: Global
 * Prototype: undefined4 FUN_004022a0(int param_1)
 */


undefined4 __fastcall FUN_004022a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int local_c;
  undefined4 *local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_00408300(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),0);
    if (iVar1 != 0) {
      FUN_00402070();
      pcVar4 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
      iVar1 = FUN_00402dc0(pcVar4,&local_c);
      *(uint *)(param_1 + 0x60c) = (uint)(iVar1 != 0);
      pcVar4 = pcVar4 + local_c + 1;
      iVar1 = FUN_00402dc0(pcVar4,&local_c);
      if (0xfe < iVar1) {
        iVar1 = 0xff;
      }
      *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_1 + 0x204 + iVar1 * 4);
      iVar1 = local_c + 1;
      iVar2 = FUN_00402dc0(pcVar4 + iVar1,&local_c);
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      local_4 = 0xc;
      *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_1 + 0x204 + iVar2 * 4);
      pcVar4 = pcVar4 + iVar1 + local_c + 1;
      local_8 = (undefined4 *)(param_1 + 0xb4);
      do {
        iVar1 = 7;
        puVar3 = local_8;
        do {
          iVar2 = FUN_00402dc0(pcVar4,&local_c);
          if (0xfe < iVar2) {
            iVar2 = 0xff;
          }
          *puVar3 = *(undefined4 *)(param_1 + 0x204 + iVar2 * 4);
          puVar3 = puVar3 + 0xc;
          pcVar4 = pcVar4 + local_c + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        local_8 = local_8 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      return 1;
    }
  }
  return 0;
}

