/*
 * Program: Creatures.exe
 * Function: FUN_00428d50
 * Entry: 00428d50
 * Namespace: Global
 * Prototype: undefined FUN_00428d50(void)
 */


void FUN_00428d50(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *unaff_FS_OFFSET;
  char local_114 [256];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00428deb;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(DAT_004382c4 + 0x807);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_114;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  Ordinal_483(s_View___00436e88);
  local_8 = 0;
  Ordinal_836(local_114);
  Ordinal_5492(local_14);
  local_8 = 0xffffffff;
  FUN_00428df5();
  *unaff_FS_OFFSET = local_10;
  return;
}

