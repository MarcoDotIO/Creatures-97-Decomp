/*
 * Program: Hatchery.exe
 * Function: FUN_00403ce0
 * Entry: 00403ce0
 * Namespace: Global
 * Prototype: undefined FUN_00403ce0(void * this, int param_1, undefined4 param_2, int param_3)
 */


void __thiscall FUN_00403ce0(void *this,int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  if (*(HGDIOBJ *)((int)this + 0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x1c));
  }
  if (*(int *)((int)this + 8) != 0) {
    Ordinal_731(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar3 = 0x100;
  puVar1 = (undefined1 *)(param_3 + 2);
  puVar5 = (undefined1 *)(*(int *)((int)this + 4) + 0x28);
  do {
    iVar3 = iVar3 + -1;
    *puVar5 = *puVar1;
    puVar5[2] = puVar1[-2];
    puVar5[1] = puVar1[-1];
    puVar5[3] = 0;
    puVar1 = puVar1 + 4;
    puVar5 = puVar5 + 4;
  } while (iVar3 != 0);
  uVar4 = 0;
  uVar2 = Ordinal_5127(param_2,0);
  RealizePalette(*(HDC *)(param_1 + 4));
  local_4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  uVar6 = 0;
  uVar4 = (**(code **)((int)this + 0x18))(uVar4,*(undefined4 *)((int)this + 4),0,&local_4,0,0);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  Ordinal_5127(uVar2,0);
  FUN_00406920(uVar6);
  return;
}

