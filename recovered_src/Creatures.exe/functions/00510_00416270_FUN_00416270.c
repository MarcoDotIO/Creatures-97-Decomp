/*
 * Program: Creatures.exe
 * Function: FUN_00416270
 * Entry: 00416270
 * Namespace: Global
 * Prototype: undefined FUN_00416270(void * this, undefined4 param_1)
 */


void __thiscall FUN_00416270(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x48) + 0xe);
  *(undefined4 *)((int)this + 0x1a) = 0;
  if ((*(byte *)((int)this + 9) & 0x20) == 0) {
    piVar3 = FUN_004149a0(this,8,8);
    if (piVar3 == (int *)0x0) {
      *(undefined1 *)((int)this + 8) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x48) + 10) = *(undefined4 *)((int)this + 0x4c);
      FUN_00414f10(this);
      iVar4 = iVar1;
    }
    else {
      *(int **)((int)this + 0x1a) = piVar3;
      *(undefined1 *)((int)this + 8) = 3;
      iVar4 = FUN_00417fc0((int)piVar3);
      *(int *)(*(int *)((int)this + 0x48) + 10) = iVar4;
      FUN_00414f10(this);
      iVar4 = *(int *)((int)this + 10);
      if (iVar4 <= iVar1) {
        iVar2 = *(int *)((uint)*(byte *)(*(int *)((int)this + 0x48) + 8) * 0x1d + 0xd +
                        *(int *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 4));
        iVar4 = iVar1;
        if (*(int *)((int)this + 0x12) < iVar2 + iVar1) {
          iVar4 = *(int *)((int)this + 0x12) - iVar2;
        }
      }
    }
    FUN_004150e0(this,5,param_1,0);
    (**(code **)(*(int *)this + 0x54))
              (iVar4,*(int *)((int)this + 0x16) -
                     *(int *)((uint)*(byte *)(*(int *)((int)this + 0x48) + 8) * 0x1d + 0x11 +
                             *(int *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 4)));
    return;
  }
  *(undefined1 *)((int)this + 8) = 2;
  FUN_00414f10(this);
  *(undefined4 *)(*(int *)((int)this + 0x48) + 10) = *(undefined4 *)((int)this + 0x4c);
  (**(code **)(*(int *)this + 0x50))(0,0);
  return;
}

