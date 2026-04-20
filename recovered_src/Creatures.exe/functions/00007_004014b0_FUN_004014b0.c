/*
 * Program: Creatures.exe
 * Function: FUN_004014b0
 * Entry: 004014b0
 * Namespace: Global
 * Prototype: undefined FUN_004014b0(void * this, int param_1)
 */


void __thiscall FUN_004014b0(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)((int)this + 4) != '\0') {
    uVar2 = (uint)*(byte *)((int)this + 5);
    bVar1 = *(byte *)(param_1 + -8 + uVar2 * 2);
    if ((*(char *)((int)this + 4) == '\x01') && (bVar1 < *(byte *)((int)this + 7))) {
      *(undefined1 *)((int)this + 4) = 2;
    }
    if (*(byte *)((int)this + 6) < bVar1) {
      *(undefined1 *)((int)this + 4) = 0;
      return;
    }
    if (uVar2 != 0) {
      uVar3 = *(byte *)(param_1 + 8 + uVar2 * 2) + 0x50;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      *(char *)(param_1 + 8 + uVar2 * 2) = (char)uVar3;
    }
    iVar4 = 0;
    do {
      uVar2 = (uint)*(byte *)((int)this + iVar4 + 8);
      if (uVar2 != 0) {
        uVar3 = *(byte *)(param_1 + 8 + uVar2 * 2) + 0x1e;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        *(char *)(param_1 + 8 + uVar2 * 2) = (char)uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  return;
}

