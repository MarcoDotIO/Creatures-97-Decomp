/*
 * Program: Science_Kit.exe
 * Function: FUN_00404660
 * Entry: 00404660
 * Namespace: Global
 * Prototype: undefined4 FUN_00404660(void * this, char * param_1, char * param_2, char * param_3)
 */


undefined4 __thiscall FUN_00404660(void *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  LSTATUS LVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  DWORD local_84;
  char local_80 [128];
  
  uVar4 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)Ordinal_729(~uVar4);
  *(char **)((int)this + 8) = pcVar2;
  if (pcVar2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)Ordinal_729(~uVar4);
  *(char **)((int)this + 0xc) = pcVar2;
  if (pcVar2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)Ordinal_729(~uVar4);
  *(char **)((int)this + 0x10) = pcVar2;
  if (pcVar2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  if (((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) &&
     (*(int *)((int)this + 0x10) != 0)) {
    uVar4 = 0xffffffff;
    pcVar2 = s_SOFTWARE__00415328;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = local_80;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = *(char **)((int)this + 8);
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_80;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = (char *)&DAT_00415324;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_80;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = *(char **)((int)this + 0xc);
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_80;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = (char *)&DAT_00415324;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_80;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = *(char **)((int)this + 0x10);
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_80;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    LVar3 = RegCreateKeyExA((HKEY)0x80000001,local_80,0,&DAT_00415320,0,0xf003f,
                            (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)((int)this + 0x18),&local_84);
    if ((LVar3 == 0) &&
       (LVar3 = RegCreateKeyExA((HKEY)0x80000002,local_80,0,&DAT_00415320,0,0xf003f,
                                (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)((int)this + 0x14),&local_84),
       LVar3 == 0)) {
      *(undefined4 *)((int)this + 4) = 1;
      return 1;
    }
  }
  return 0;
}

