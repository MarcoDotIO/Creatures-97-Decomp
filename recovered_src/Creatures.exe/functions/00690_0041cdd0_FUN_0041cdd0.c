/*
 * Program: Creatures.exe
 * Function: FUN_0041cdd0
 * Entry: 0041cdd0
 * Namespace: Global
 * Prototype: undefined4 FUN_0041cdd0(char * param_1, undefined4 param_2, int param_3)
 */


undefined4 __cdecl FUN_0041cdd0(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_254 [280];
  char local_13c [128];
  char local_bc [128];
  undefined2 local_3c [4];
  undefined4 local_34;
  undefined2 local_2c [4];
  uint local_24;
  undefined **local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041cf13;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == (char *)0x0) {
    Ordinal_336();
    local_1c[0] = &PTR_LAB_00431200;
    local_14 = 0;
    local_8 = 1;
    iVar2 = Ordinal_1862(DAT_00436ea8 + param_3 * 0xae + 0xc4,local_1c);
    if (iVar2 == 0) {
      iVar2 = Ordinal_5003(0,0);
      if (iVar2 == 0) {
        Ordinal_1061(s_Can_not_communicate_with_applica_0043660c,0,0);
      }
      local_8 = 0xffffffff;
      FUN_0041cf1d();
      uVar3 = 0;
      goto LAB_0041d016;
    }
    local_24 = FUN_0041d030(1,3,(byte)param_3,0);
    local_34 = 0;
    local_2c[0] = 3;
    local_3c[0] = 3;
    iVar2 = FUN_004192f0((void *)(param_3 * 0xae + 0x16a + DAT_00436ea8),local_2c,local_3c);
    if (iVar2 == 0) {
      local_8 = 0xffffffff;
      FUN_0041cf1d();
      uVar3 = 0;
      goto LAB_0041d016;
    }
    *(int *)(DAT_00436ea8 + 0x790) = *(int *)(DAT_00436ea8 + 0x790) + 1;
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
    local_8 = 0xffffffff;
    FUN_0041cf1d();
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = (char *)(DAT_00436ea0 + 0x49c);
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = local_13c;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = local_13c;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = local_bc;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar8 = local_bc;
    do {
      pcVar7 = pcVar8;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar2 = Ordinal_3307(local_bc,local_254);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_0041d016;
    ShellExecuteA(*(HWND *)(DAT_00436ea8 + 0x20),(LPCSTR)0x0,local_bc,&DAT_00435c44,local_13c,5);
    *(int *)(DAT_00436ea8 + 0x790) = *(int *)(DAT_00436ea8 + 0x790) + 1;
    InvalidateRect(*(HWND *)(DAT_00436eac + 0x20),(RECT *)0x0,0);
  }
  uVar3 = 1;
LAB_0041d016:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

