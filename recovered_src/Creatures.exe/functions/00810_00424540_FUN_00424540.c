/*
 * Program: Creatures.exe
 * Function: FUN_00424540
 * Entry: 00424540
 * Namespace: Global
 * Prototype: undefined FUN_00424540(int param_1)
 */


void __cdecl FUN_00424540(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00424628;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = DAT_00436c24;
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  local_18 = 0;
  **(int **)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  if (0 < DAT_00436c24) {
    local_14 = &DAT_0043912c;
    do {
      uVar2 = *local_14;
      if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
        Ordinal_2456();
      }
      **(undefined4 **)(param_1 + 0x24) = uVar2;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
      uVar2 = Ordinal_483(local_14[-1]);
      local_8 = 0;
      Ordinal_784(param_1,uVar2);
      local_8 = 0xffffffff;
      FUN_00424620();
      local_14 = local_14 + 2;
      local_18 = local_18 + 1;
    } while (local_18 < DAT_00436c24);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

