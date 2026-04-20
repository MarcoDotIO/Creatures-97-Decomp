/*
 * Program: Creatures.exe
 * Function: FUN_00403e50
 * Entry: 00403e50
 * Namespace: Global
 * Prototype: undefined4 FUN_00403e50(void * this, char * param_1)
 */


undefined4 __thiscall FUN_00403e50(void *this,char *param_1)

{
  char cVar1;
  FILE *_File;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char local_80 [128];
  
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(DAT_00436ea0 + 0x29c);
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = local_80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
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
  iVar6 = -1;
  pcVar9 = local_80;
  do {
    pcVar8 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  _File = fopen(local_80,&DAT_00435238);
  if (_File == (FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0xec;
    fseek(_File,0x1e,0);
    do {
      iVar3 = fgetc(_File);
      *(char *)this = (char)iVar3 << 2;
      iVar3 = fgetc(_File);
      *(char *)((int)this + 1) = (char)iVar3 << 2;
      iVar3 = fgetc(_File);
      iVar6 = iVar6 + -1;
      *(char *)((int)this + 2) = (char)iVar3 << 2;
      this = (char *)((int)this + 3);
    } while (iVar6 != 0);
    fclose(_File);
    uVar2 = 1;
  }
  return uVar2;
}

