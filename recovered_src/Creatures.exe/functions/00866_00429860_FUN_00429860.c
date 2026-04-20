/*
 * Program: Creatures.exe
 * Function: FUN_00429860
 * Entry: 00429860
 * Namespace: Global
 * Prototype: undefined FUN_00429860(void)
 */


void FUN_00429860(void)

{
  char cVar1;
  BYTE BVar2;
  LSTATUS LVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  BYTE *pBVar7;
  char *pcVar8;
  char *pcVar9;
  BYTE *pBVar10;
  HKEY local_104;
  BYTE local_100 [256];
  
  FUN_004083b0(&DAT_00439e50,1,s_Main_Directory_00435c74,local_100,0x100,&DAT_00435c44);
  uVar4 = 0xffffffff;
  pcVar8 = s__Remove_exe_00436f98;
  do {
    pcVar9 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pBVar7 = local_100;
  do {
    pBVar10 = pBVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pBVar10 = pBVar7 + 1;
    BVar2 = *pBVar7;
    pBVar7 = pBVar10;
  } while (BVar2 != '\0');
  pBVar7 = (BYTE *)(pcVar9 + -uVar4);
  pBVar10 = pBVar10 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pBVar10 = *(undefined4 *)pBVar7;
    pBVar7 = pBVar7 + 4;
    pBVar10 = pBVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pBVar10 = *pBVar7;
    pBVar7 = pBVar7 + 1;
    pBVar10 = pBVar10 + 1;
  }
  LVar3 = RegOpenKeyExA((HKEY)&DAT_80000002,s_SOFTWARE_Microsoft_Windows_Curre_00436f50,0,0x20006,
                        &local_104);
  if (LVar3 == 0) {
    uVar4 = 0xffffffff;
    pBVar7 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      BVar2 = *pBVar7;
      pBVar7 = pBVar7 + 1;
    } while (BVar2 != '\0');
    RegSetValueExA(local_104,s_UninstallString_00436f40,0,1,local_100,~uVar4);
    RegCloseKey(local_104);
  }
  return;
}

