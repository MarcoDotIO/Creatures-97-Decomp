/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00408360
 * Entry: 00408360
 * Namespace: Global
 * Prototype: undefined4 FUN_00408360(void * this, int param_1)
 */


undefined4 __thiscall FUN_00408360(void *this,int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  HPALETTE pHVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  iVar6 = *(int *)(param_1 + 4);
  puVar3 = (undefined2 *)Ordinal_729(0x408);
  *(undefined2 **)((int)this + 8) = puVar3;
  if (puVar3 == (undefined2 *)0x0) {
    return 0;
  }
  *puVar3 = 0x300;
  puVar7 = (undefined1 *)(iVar6 + 0x52);
  iVar6 = 0x28;
  *(undefined2 *)(*(int *)((int)this + 8) + 2) = 0x100;
  do {
    *(undefined1 *)(*(int *)((int)this + 8) + 4 + iVar6) = *puVar7;
    *(undefined1 *)(*(int *)((int)this + 8) + 5 + iVar6) = puVar7[-1];
    puVar1 = puVar7 + -2;
    puVar7 = puVar7 + 4;
    *(undefined1 *)(*(int *)((int)this + 8) + 6 + iVar6) = *puVar1;
    *(undefined1 *)(*(int *)((int)this + 8) + 7 + iVar6) = 4;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x3d8);
  cVar2 = '\0';
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 4;
    *(char *)(*(int *)((int)this + 8) + iVar6) = cVar2;
    cVar2 = cVar2 + '\x01';
    *(undefined1 *)(*(int *)((int)this + 8) + 1 + iVar6) = 0;
    *(undefined1 *)(*(int *)((int)this + 8) + 2 + iVar6) = 0;
    *(undefined1 *)(*(int *)((int)this + 8) + 3 + iVar6) = 2;
  } while (iVar6 < 0x28);
  cVar2 = -10;
  iVar6 = 0x3d8;
  do {
    iVar6 = iVar6 + 4;
    *(char *)(*(int *)((int)this + 8) + iVar6) = cVar2;
    cVar2 = cVar2 + '\x01';
    *(undefined1 *)(*(int *)((int)this + 8) + 1 + iVar6) = 0;
    *(undefined1 *)(*(int *)((int)this + 8) + 2 + iVar6) = 0;
    *(undefined1 *)(*(int *)((int)this + 8) + 3 + iVar6) = 2;
  } while (iVar6 < 0x400);
  pHVar4 = CreatePalette(*(LOGPALETTE **)((int)this + 8));
  uVar5 = Ordinal_1426(pHVar4);
  Ordinal_731(*(undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  return uVar5;
}

