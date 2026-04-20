/*
 * Program: Creatures.exe
 * Function: FUN_004201c0
 * Entry: 004201c0
 * Namespace: Global
 * Prototype: undefined FUN_004201c0(void * this, int * param_1)
 */


void __thiscall FUN_004201c0(void *this,int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(*param_1 + 9) & 8) != 0) {
    if (*(char *)((int)this + 8) == '\x01') {
      FUN_004016c0(DAT_00438d0c,DAT_00438d0c,4,0,0,0);
    }
    *(undefined4 *)((int)this + 0x102) = *(undefined4 *)((int)this + 0xf2);
    *(undefined4 *)((int)this + 0x106) = *(undefined4 *)((int)this + 0xf6);
    *(undefined4 *)((int)this + 0x10a) = *(undefined4 *)((int)this + 0xfa);
    *(undefined4 *)((int)this + 0x10e) = *(undefined4 *)((int)this + 0xfe);
    iVar1 = FUN_00417fc0(*param_1);
    *(int *)(*(int *)((int)this + 0x54) + 10) = iVar1;
    *(undefined1 *)((int)this + 8) = 3;
    *(int *)((int)this + 0x1a) = *param_1;
    FUN_00414f10(this);
    *(undefined4 *)((int)this + 0x76) = *(undefined4 *)((int)this + 0x16);
    if (*(int *)((int)this + 0x72) < *(int *)((int)this + 10)) {
      *(int *)((int)this + 0x72) = *(int *)((int)this + 10);
    }
    if (*(int *)((int)this + 0x12) < *(int *)((int)this + 0x72)) {
      *(int *)((int)this + 0x72) = *(int *)((int)this + 0x12);
    }
    FUN_0040eb10(this);
    FUN_0040eac0((int)this);
    FUN_0040f1d0((int)this);
    *(undefined1 *)((int)this + 0x112) = 0;
  }
  if ((*param_1 == DAT_00438d0c) && (*(int *)(DAT_00436ea0 + 200) != 0)) {
    FUN_004203a0(this);
    FUN_004016c0(this,DAT_00438d0c,5,0,0,0);
    FUN_004150e0(this,4,*param_1,0);
  }
  return;
}

