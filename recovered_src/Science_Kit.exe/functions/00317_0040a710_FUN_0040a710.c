/*
 * Program: Science_Kit.exe
 * Function: FUN_0040a710
 * Entry: 0040a710
 * Namespace: Global
 * Prototype: undefined FUN_0040a710(void * this, int param_1)
 */


void __thiscall FUN_0040a710(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_818;
  undefined4 local_817;
  char local_418;
  undefined4 local_417;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a849;
  *unaff_FS_OFFSET = &local_10;
  local_14 = this;
  Ordinal_760(*(int *)((int)this + 0x22c) + param_1 * 4);
  iVar5 = *(int *)((int)local_14 + 0x874);
  local_818 = '\0';
  *(int *)((int)local_14 + 0x858) = iVar5 * 0x6a;
  puVar8 = &local_817;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_418 = '\0';
  puVar8 = &local_417;
  for (iVar3 = 0xff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  wsprintfA(&local_818,s__d____d_004156a4,iVar5 * 0x212,iVar5 * 0x2e6);
  uVar4 = 0xffffffff;
  pcVar7 = &local_818;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar7 = &local_418;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar2 = Ordinal_483(&local_418);
  local_8 = 0;
  Ordinal_760(uVar2);
  local_8 = 0xffffffff;
  FUN_0040a841();
  Ordinal_5610(0);
  *unaff_FS_OFFSET = local_10;
  return;
}

