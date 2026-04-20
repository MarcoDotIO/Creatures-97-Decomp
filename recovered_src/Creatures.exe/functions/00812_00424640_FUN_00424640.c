/*
 * Program: Creatures.exe
 * Function: FUN_00424640
 * Entry: 00424640
 * Namespace: Global
 * Prototype: undefined FUN_00424640(int param_1)
 */


void __cdecl FUN_00424640(int param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  char *local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004246fc;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
  }
  iVar1 = **(int **)(param_1 + 0x24);
  *(int **)(param_1 + 0x24) = *(int **)(param_1 + 0x24) + 1;
  if (0 < iVar1) {
    do {
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
      }
      local_14 = **(int **)(param_1 + 0x24);
      *(int **)(param_1 + 0x24) = *(int **)(param_1 + 0x24) + 1;
      Ordinal_781(param_1,&local_18);
      FUN_00424300(local_14,local_18);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_8 = 0xffffffff;
  FUN_00424706();
  *unaff_FS_OFFSET = local_10;
  return;
}

