/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408800
 * Entry: 00408800
 * Namespace: Global
 * Prototype: undefined4 FUN_00408800(int param_1)
 */


undefined4 FUN_00408800(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_81c [1024];
  char local_41c;
  undefined4 local_41b;
  int local_20;
  uint local_1c;
  void *local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00408a5d;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_1035();
  Ordinal_1449();
  local_8 = 0;
  if (param_1 == 0) {
LAB_0040895e:
    iVar2 = FUN_004087b0(local_18,s_dde__getb_data_004124d0);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_00409f90(*(void **)((int)local_18 + 0x8c),*(undefined4 *)((int)local_18 + 0xe4),
                             0), iVar2 != 0)) {
      local_1c = 0;
      iVar2 = *(int *)((int)local_18 + 0x8c) + 0xb0c;
      pcVar8 = *(char **)(*(int *)((int)local_18 + 0x8c) + 0x1fc);
      local_20 = iVar2;
      do {
        pcVar4 = strchr(pcVar8,0x7c);
        if (pcVar4 == (char *)0x0) break;
        *pcVar4 = '\0';
        Ordinal_762(pcVar8);
        local_20 = local_20 + 4;
        local_1c = local_1c + 1;
        pcVar8 = pcVar4 + 1;
      } while ((int)local_1c < 10);
      iVar6 = 10;
      do {
        Ordinal_760(iVar2);
        iVar6 = iVar6 + -1;
        iVar2 = iVar2 + 4;
      } while (iVar6 != 0);
      FUN_00408720();
      iVar2 = Ordinal_5610(0);
      if (iVar2 != 0) {
        Ordinal_762(*(undefined4 *)((int)local_18 + 0x2d8));
        (**(code **)(**(int **)((int)local_18 + 0x8c) + 0xd0))();
        local_8 = 0xffffffff;
        FUN_00408a67();
        uVar3 = 1;
        goto LAB_0040885e;
      }
    }
  }
  else {
    iVar2 = Ordinal_5610(1);
    if (iVar2 != 0) {
      iVar6 = 0;
      local_41c = '\0';
      puVar7 = &local_41b;
      for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      puVar7 = (undefined4 *)((int)local_18 + 0xac);
      while (iVar6 < 10) {
        local_1c = 0xffffffff;
        pcVar8 = *(char **)*puVar7;
        do {
          pcVar4 = pcVar8;
          if (local_1c == 0) break;
          local_1c = local_1c - 1;
          pcVar4 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar4;
        } while (cVar1 != '\0');
        local_1c = ~local_1c;
        iVar2 = -1;
        pcVar8 = &local_41c;
        do {
          pcVar9 = pcVar8;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar4 + -local_1c;
        pcVar4 = pcVar9 + -1;
        for (uVar5 = local_1c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = local_1c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_1c = 0xffffffff;
        pcVar8 = (char *)&DAT_004124fc;
        do {
          pcVar4 = pcVar8;
          if (local_1c == 0) break;
          local_1c = local_1c - 1;
          pcVar4 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar4;
        } while (cVar1 != '\0');
        local_1c = ~local_1c;
        iVar2 = -1;
        pcVar8 = &local_41c;
        do {
          pcVar9 = pcVar8;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        puVar7 = puVar7 + 1;
        pcVar8 = pcVar4 + -local_1c;
        pcVar4 = pcVar9 + -1;
        for (uVar5 = local_1c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar4 = pcVar4 + 4;
        }
        iVar6 = iVar6 + 1;
        for (uVar5 = local_1c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      wsprintfA(local_81c,s_dde__putb___s__data_endm_004124e0,&local_41c);
      iVar2 = FUN_004087b0(local_18,local_81c);
      if ((iVar2 != 0) &&
         (iVar2 = FUN_00409f90(*(void **)((int)local_18 + 0x8c),
                               *(undefined4 *)((int)local_18 + 0xe4),0), iVar2 != 0))
      goto LAB_0040895e;
    }
  }
  local_8 = 0xffffffff;
  FUN_00408a67();
  uVar3 = 0;
LAB_0040885e:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

