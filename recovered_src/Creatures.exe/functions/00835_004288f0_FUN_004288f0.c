/*
 * Program: Creatures.exe
 * Function: FUN_004288f0
 * Entry: 004288f0
 * Namespace: Global
 * Prototype: undefined FUN_004288f0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004288f0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042898a;
  *unaff_FS_OFFSET = &uStack_10;
  iVar3 = 0;
  Ordinal_339(param_1,0);
  uStack_8 = 0;
  iVar2 = (int)this + 0x148;
  do {
    iVar3 = iVar3 + 1;
    Ordinal_4819(iVar2,4);
    Ordinal_4819(iVar2 + 0x80,4);
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x20);
  iVar2 = (int)this + 4;
  iVar3 = 3;
  do {
    iVar1 = 0x1b;
    do {
      Ordinal_4819(iVar2,4);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uStack_8 = 0xffffffff;
  FUN_00428994();
  *unaff_FS_OFFSET = uStack_10;
  return;
}

