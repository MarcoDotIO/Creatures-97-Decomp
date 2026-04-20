/*
 * Program: Creatures.exe
 * Function: FUN_00429920
 * Entry: 00429920
 * Namespace: Global
 * Prototype: undefined FUN_00429920(void * this, int param_1)
 */


void __thiscall FUN_00429920(void *this,int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  BYTE BVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  BYTE *pBVar9;
  BYTE *pBVar10;
  BYTE **ppBVar11;
  undefined4 *puVar12;
  char *pcVar13;
  BYTE *pBVar14;
  BYTE *local_c0 [8];
  BYTE *local_a0 [8];
  BYTE local_80;
  undefined4 local_7f;
  
  local_c0[0] = (BYTE *)s_Main_Directory_00435c74;
  local_c0[1] = (BYTE *)s_Sound_Directory_00437040;
  local_c0[2] = (BYTE *)s_Macro_Directory_00437030;
  local_c0[3] = (BYTE *)s_Palette_Directory_0043701c;
  local_c0[4] = (BYTE *)s_Image_Directory_0043700c;
  local_c0[5] = (BYTE *)s_Genetics_Directory_00436ff8;
  pBVar9 = (BYTE *)((int)this + 0x11c);
  iVar8 = 8;
  local_c0[6] = (BYTE *)s_Body_Data_00436fec;
  local_c0[7] = (BYTE *)s_Programs_00436fe0;
  pBVar10 = pBVar9;
  do {
    pBVar14 = pBVar10;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      pBVar14[0] = '\0';
      pBVar14[1] = '\0';
      pBVar14[2] = '\0';
      pBVar14[3] = '\0';
      pBVar14 = pBVar14 + 4;
    }
    iVar8 = iVar8 + -1;
    pBVar10 = pBVar10 + 0x80;
  } while (iVar8 != 0);
  if (param_1 != 0) {
    local_80 = '\0';
    puVar12 = &local_7f;
    for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = 0;
    *(undefined1 *)((int)puVar12 + 2) = 0;
    uVar6 = 0xffffffff;
    pcVar4 = *(char **)((int)this + 0x88);
    do {
      pcVar13 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pBVar10 = (BYTE *)(pcVar13 + -uVar6);
    pBVar14 = &local_80;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pBVar14 = *(undefined4 *)pBVar10;
      pBVar10 = pBVar10 + 4;
      pBVar14 = pBVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pBVar14 = *pBVar10;
      pBVar10 = pBVar10 + 1;
      pBVar14 = pBVar14 + 1;
    }
    pcVar4 = strchr((char *)&local_80,0x2e);
    if (pcVar4 != (char *)0x0) {
      cVar2 = *pcVar4;
      while (cVar2 != '\\') {
        *pcVar4 = '\0';
        pcVar13 = pcVar4 + -1;
        pcVar4 = pcVar4 + -1;
        cVar2 = *pcVar13;
      }
    }
    local_a0[1] = (BYTE *)s_Sounds__00436fd8;
    local_a0[2] = (BYTE *)s_Macros__00436fd0;
    local_a0[3] = (BYTE *)s_Palettes__00436fc4;
    local_a0[4] = (BYTE *)s_Images__00436fbc;
    iVar8 = 0;
    local_a0[5] = (BYTE *)s_Genetics__00436fb0;
    local_a0[6] = (BYTE *)s_Body_data__00436fa4;
    local_a0[7] = &DAT_00435c44;
    local_a0[0] = &local_80;
    do {
      puVar12 = (undefined4 *)((int)local_a0 + iVar8);
      puVar1 = (undefined4 *)((int)local_c0 + iVar8);
      iVar8 = iVar8 + 4;
      FUN_00408550(&DAT_00439e50,1,(LPCSTR)*puVar1,(BYTE *)*puVar12);
    } while (iVar8 < 0x20);
  }
  ppBVar11 = local_c0;
  do {
    FUN_004083b0(&DAT_00439e50,1,(LPCSTR)*ppBVar11,&local_80,0x80,&DAT_00435c44);
    uVar6 = 0xffffffff;
    pBVar10 = &local_80;
    do {
      pBVar14 = pBVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pBVar14 = pBVar10 + 1;
      BVar3 = *pBVar10;
      pBVar10 = pBVar14;
    } while (BVar3 != '\0');
    uVar6 = ~uVar6;
    ppBVar11 = ppBVar11 + 1;
    pBVar10 = pBVar14 + -uVar6;
    pBVar14 = pBVar9;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pBVar14 = *(undefined4 *)pBVar10;
      pBVar10 = pBVar10 + 4;
      pBVar14 = pBVar14 + 4;
    }
    pBVar9 = pBVar9 + 0x80;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pBVar14 = *pBVar10;
      pBVar10 = pBVar10 + 1;
      pBVar14 = pBVar14 + 1;
    }
    if (local_a0 <= ppBVar11) {
      return;
    }
  } while( true );
}

