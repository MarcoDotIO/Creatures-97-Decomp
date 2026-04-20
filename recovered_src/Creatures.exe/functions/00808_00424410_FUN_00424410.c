/*
 * Program: Creatures.exe
 * Function: FUN_00424410
 * Entry: 00424410
 * Namespace: Global
 * Prototype: undefined FUN_00424410(int param_1, uint param_2)
 */


void __cdecl FUN_00424410(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  uint *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042452b;
  *unaff_FS_OFFSET = &local_10;
  iVar5 = 0;
  if (0 < DAT_00436c24) {
    puVar4 = &DAT_0043912c;
    iVar2 = DAT_00436c24;
    do {
      if (((*puVar4 ^ param_2) & 0xffffff00) == 0) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    Ordinal_2456();
  }
  local_18 = 0;
  **(int **)(param_1 + 0x24) = iVar5;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  if (0 < DAT_00436c24) {
    local_14 = &DAT_0043912c;
    do {
      uVar1 = *local_14;
      if (((uVar1 ^ param_2) & 0xffffff00) == 0) {
        if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
          Ordinal_2456();
        }
        **(uint **)(param_1 + 0x24) = uVar1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
        uVar3 = Ordinal_483(local_14[-1]);
        local_8 = 0;
        Ordinal_784(param_1,uVar3);
        local_8 = 0xffffffff;
        FUN_00424523();
      }
      local_14 = local_14 + 2;
      local_18 = local_18 + 1;
    } while (local_18 < DAT_00436c24);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

