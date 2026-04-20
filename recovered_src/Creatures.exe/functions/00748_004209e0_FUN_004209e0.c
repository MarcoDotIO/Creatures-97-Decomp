/*
 * Program: Creatures.exe
 * Function: FUN_004209e0
 * Entry: 004209e0
 * Namespace: Global
 * Prototype: undefined FUN_004209e0(void * this, int param_1)
 */


void __thiscall FUN_004209e0(void *this,int param_1)

{
  char *_Str;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined **_SubStr;
  char *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char local_20 [32];
  
  bVar2 = false;
  _Str = (char *)(param_1 * 0x36 + 0xacf + (int)this);
  uVar4 = 0xffffffff;
  pcVar3 = (char *)((int)this + param_1 * 0x36 + 0xab6);
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = _Str;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  _SubStr = (undefined **)&DAT_004369e8;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  do {
    if (bVar2) {
      return;
    }
    pcVar3 = strstr(_Str,(char *)_SubStr);
    if (pcVar3 != (char *)0x0) {
      pcVar8 = local_20;
      for (pcVar6 = _Str; pcVar6 < pcVar3; pcVar6 = pcVar6 + 1) {
        *pcVar8 = *pcVar6;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      *pcVar8 = '\0';
      ppuVar10 = _SubStr + 1;
      do {
        ppuVar9 = ppuVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        ppuVar9 = (undefined **)((int)ppuVar10 + 1);
        cVar1 = *(char *)ppuVar10;
        ppuVar10 = ppuVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar7 = -1;
      pcVar8 = local_20;
      do {
        pcVar6 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar6 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar8 = (char *)((int)ppuVar9 - uVar4);
      pcVar6 = pcVar6 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar6 = pcVar6 + 1;
      }
      uVar4 = 0xffffffff;
      ppuVar10 = _SubStr;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *(char *)ppuVar10;
        ppuVar10 = (undefined **)((int)ppuVar10 + 1);
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar3 = pcVar3 + (~uVar4 - 1);
      do {
        pcVar8 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      pcVar3 = local_20;
      do {
        pcVar6 = pcVar3;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar5;
      pcVar8 = pcVar6 + -1;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar3 = local_20;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = _Str;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      bVar2 = true;
    }
    _SubStr = _SubStr + 2;
    if (&PTR_DAT_00436a78 <= _SubStr) {
      return;
    }
  } while( true );
}

