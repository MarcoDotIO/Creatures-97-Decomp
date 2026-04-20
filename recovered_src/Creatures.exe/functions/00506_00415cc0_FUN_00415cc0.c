/*
 * Program: Creatures.exe
 * Function: FUN_00415cc0
 * Entry: 00415cc0
 * Namespace: Global
 * Prototype: undefined FUN_00415cc0(void * this, int * param_1)
 */


void __thiscall FUN_00415cc0(void *this,int *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if ((DAT_00438d0c != iVar3) || ((*(byte *)((int)this + 9) & 2) == 0)) {
    if ((*(uint *)(iVar3 + 4) & 0xff000000) == 0x4000000) {
      if ((*(byte *)((int)this + 9) & 1) != 0) {
        if (*(char *)((int)this + 8) == '\x01') {
          FUN_004016c0(this,DAT_00438d0c,4,0,0,0);
        }
        iVar3 = 0;
        if (0 < DAT_00437fb8) {
          iVar4 = 0;
          do {
            pvVar1 = *(void **)((int)DAT_00437fb4 + iVar4);
            if (((*(char *)((int)pvVar1 + 8) == '\x04') &&
                (*(int *)((int)pvVar1 + 0x1a) == *param_1)) && (pvVar1 != this)) {
              FUN_004016c0(*param_1,pvVar1,5,0,0,0);
            }
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_00437fb8);
        }
        *(undefined1 *)((int)this + 8) = 4;
        *(int *)((int)this + 0x1a) = *param_1;
        FUN_004150e0(this,4,*param_1,0);
        return;
      }
      FUN_00401c60(this,iVar3,0);
    }
    return;
  }
  iVar3 = 0;
  piVar2 = DAT_00437fb4;
  if (0 < DAT_00437fb8) {
    do {
      if ((*(char *)(*piVar2 + 8) == '\x01') && (DAT_00438d0c != *piVar2)) {
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < DAT_00437fb8);
  }
  FUN_00416220(this);
  FUN_004016c0(this,DAT_00438d0c,5,0,0,0);
  FUN_004150e0(this,4,*param_1,0);
  return;
}

