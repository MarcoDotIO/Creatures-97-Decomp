/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a550
 * Entry: 0040a550
 * Namespace: Global
 * Prototype: undefined FUN_0040a550(int param_1)
 */


void __fastcall FUN_0040a550(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_818;
  undefined4 local_817;
  char local_418;
  undefined4 local_417;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a6a8;
  *unaff_FS_OFFSET = &local_10;
  iVar7 = *(int *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x874) = iVar7;
  iVar3 = 3;
  piVar5 = (int *)(param_1 + 400);
  do {
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x870) + iVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar5 = (int *)(param_1 + 0x1ac);
  iVar3 = 5;
  do {
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x870) + iVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_818 = '\0';
  *(int *)(param_1 + 0x878) = iVar7 * 0x6a;
  puVar10 = &local_817;
  local_14 = param_1;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  local_418 = '\0';
  puVar10 = &local_417;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  wsprintfA(&local_818,s__d____d_004156a4,iVar7 * 0x212,iVar7 * 0x2e6);
  uVar6 = 0xffffffff;
  pcVar9 = &local_818;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar9 = &local_418;
  do {
    pcVar11 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar4 = Ordinal_483(&local_418);
  local_8 = 0;
  Ordinal_760(uVar4);
  local_8 = 0xffffffff;
  FUN_0040a6a0();
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)(local_14 + 0x850) = *(undefined4 *)(local_14 + 0x1c0);
  return;
}

