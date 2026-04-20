/*
 * Program: Creatures.exe
 * Function: FUN_0040eb30
 * Entry: 0040eb30
 * Namespace: Global
 * Prototype: undefined FUN_0040eb30(void * this, char * param_1)
 */


void __thiscall FUN_0040eb30(void *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 'X') {
    *(char *)((int)this + 0x70) = *param_1 + -0x30;
    FUN_0040eac0((int)this);
  }
  if (param_1[2] != 'X') {
    *(int *)(*(int *)((int)this + 0x54) + 0x1e) = param_1[2] + -0x30;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x58);
  do {
    iVar4 = *piVar1;
    iVar3 = 0;
    if (0 < *(int *)((int)&DAT_00436018 + iVar2)) {
      do {
        if (iVar4 == 0) break;
        if (param_1[*(int *)((int)&DAT_00436030 + iVar2) + iVar3] != 0x58) {
          *(int *)(iVar4 + 0x1e) = param_1[*(int *)((int)&DAT_00436030 + iVar2) + iVar3] + -0x30;
        }
        iVar4 = *(int *)(iVar4 + 0x26);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)&DAT_00436018 + iVar2));
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 1;
    if (0x17 < iVar2) {
      FUN_0040eb10(this);
      iVar2 = 0;
      do {
        if (param_1[iVar2] != 'X') {
          *(char *)((int)this + iVar2 + 0x7e) = param_1[iVar2];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xf);
      return;
    }
  } while( true );
}

