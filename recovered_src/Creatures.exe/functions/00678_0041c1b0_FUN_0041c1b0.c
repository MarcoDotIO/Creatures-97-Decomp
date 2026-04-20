/*
 * Program: Creatures.exe
 * Function: FUN_0041c1b0
 * Entry: 0041c1b0
 * Namespace: Global
 * Prototype: undefined FUN_0041c1b0(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0041c1b0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x80)) {
    do {
      if ((((*(int *)((int)this + iVar2 * 4 + 0x84) == param_1) && (iVar3 = iVar2, param_2 != 0)) &&
          ((*(uint *)(param_1 + 4) & 0xff000000) == 0x4000000)) &&
         (*(char *)(param_1 + 0x2b78) != '\0')) {
        FUN_00408070(DAT_00436ea4,*(undefined4 *)(param_1 + 0x48));
        FUN_004080a0((int)DAT_00436ea4);
        FUN_00402630(DAT_00436eb0,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x80));
  }
  if (iVar3 != -1) {
    if (iVar3 < *(int *)((int)this + 0x80) + -1) {
      puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0x84);
      do {
        iVar3 = iVar3 + 1;
        *puVar1 = puVar1[1];
        puVar1 = puVar1 + 1;
      } while (iVar3 < *(int *)((int)this + 0x80) + -1);
    }
    *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + -1;
    FUN_0041c2f0((int)this);
  }
  return;
}

