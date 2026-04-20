/*
 * Program: Creatures.exe
 * Function: FUN_0041ef60
 * Entry: 0041ef60
 * Namespace: Global
 * Prototype: undefined FUN_0041ef60(int param_1)
 */


void __fastcall FUN_0041ef60(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_114;
  undefined4 local_113;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041f1d4;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)(param_1 + 0x2ac4) = 0;
  *(undefined1 *)(param_1 + 0x834) = 0;
  *(undefined1 *)(param_1 + 0x833) = 0;
  ppuVar5 = &PTR_DAT_004367e0;
  *(undefined1 *)(param_1 + 0x835) = 0xff;
  *(undefined4 *)(param_1 + 0x1b96) = 0xffffffff;
  puVar1 = (undefined4 *)(param_1 + 0x25a0);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
  *(undefined4 *)(param_1 + 4) = 0x4000000;
  do {
    puVar6 = (undefined4 *)*ppuVar5;
    ppuVar5 = ppuVar5 + 1;
    puVar7 = puVar1;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar1 = puVar1 + 5;
  } while (ppuVar5 < &DAT_00436870);
  *(undefined1 *)(param_1 + 0x2ad4) = 0xff;
  *(undefined1 *)(param_1 + 0x2ad8) = 0x80;
  *(undefined1 *)(param_1 + 0x2ad5) = 0;
  *(undefined1 *)(param_1 + 0x2ad6) = 0;
  *(undefined1 *)(param_1 + 0x2ad7) = 0;
  *(undefined1 *)(param_1 + 0x2ad9) = 0;
  *(undefined1 *)(param_1 + 0x2ada) = 0;
  *(undefined1 *)(param_1 + 0x2adc) = 0;
  *(undefined1 *)(param_1 + 0x2add) = 0;
  iVar3 = 8;
  *(undefined1 *)(param_1 + 0x2af5) = 0;
  *(undefined4 *)(param_1 + 0x2ade) = 0;
  *(undefined2 *)(param_1 + 0x2ae2) = 0;
  *(undefined1 *)(param_1 + 0x2ae4) = 0;
  puVar2 = (undefined1 *)(param_1 + 0x2ae5);
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x2afe) = 0;
  *(undefined4 *)(param_1 + 0x2b02) = 0;
  *(undefined4 *)(param_1 + 0x2af6) = 0;
  *(undefined4 *)(param_1 + 0x2afa) = 0;
  *(undefined4 *)(param_1 + 0x2b06) = 0;
  *(undefined4 *)(param_1 + 0x2b0a) = 0;
  *(undefined4 *)(param_1 + 0x2b0e) = 0;
  *(undefined4 *)(param_1 + 0x2b12) = 0;
  *(undefined4 *)(param_1 + 0x2b66) = 0;
  *(undefined4 *)(param_1 + 0x2b6a) = 0;
  *(undefined1 *)(param_1 + 0x2b6e) = 0;
  *(undefined4 *)(param_1 + 0x2b74) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x1ba0);
  *(undefined4 *)(param_1 + 0x2b70) = 0;
  iVar3 = 0x28;
  *(undefined4 *)(param_1 + 0x2ad0) = 0;
  *(undefined1 *)(param_1 + 0x2b78) = 0;
  *(undefined4 *)(param_1 + 0x82b) = 0;
  do {
    puVar6 = puVar1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar1 = puVar1 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_114 = '\0';
  puVar1 = &local_113;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 2) = 0;
  *(int *)(param_1 + 0x7ff) = param_1;
  Ordinal_486();
  local_8 = 0;
  Ordinal_3656(0xef1f);
  Ordinal_762(local_14);
  wsprintfA(&local_114,&DAT_00436b98,*(undefined4 *)(param_1 + 0x48));
  Ordinal_762(&local_114);
  wsprintfA(&local_114,&DAT_00436b98,*(undefined4 *)(param_1 + 0x50));
  Ordinal_762(&local_114);
  wsprintfA(&local_114,&DAT_00436b98,*(undefined4 *)(param_1 + 0x4c));
  Ordinal_762(&local_114);
  wsprintfA(&local_114,s_The_birthplace_00436b88);
  Ordinal_762(&local_114);
  *(undefined4 *)(param_1 + 0x82f) = 0;
  FUN_0041ed20(param_1);
  local_8 = 0xffffffff;
  FUN_0041f1de();
  *unaff_FS_OFFSET = local_10;
  return;
}

