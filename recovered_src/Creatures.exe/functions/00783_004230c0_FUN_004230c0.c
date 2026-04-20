/*
 * Program: Creatures.exe
 * Function: FUN_004230c0
 * Entry: 004230c0
 * Namespace: Global
 * Prototype: undefined FUN_004230c0(void * this, undefined4 param_1)
 */


void __thiscall FUN_004230c0(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  iVar3 = 0;
  iVar1 = DAT_00438868;
  piVar2 = DAT_00438864;
  if (0 < DAT_00438868) {
    do {
      if ((this != (void *)*piVar2) && (*(int *)((int)this + 0x48) == *(int *)(*piVar2 + 0x48))) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0);
  }
  iVar1 = DAT_00437fd8;
  piVar2 = DAT_00437fd4;
  if (0 < DAT_00437fd8) {
    do {
      if (((*(uint *)(*piVar2 + 4) & 0xff000000) == 0x4000000) &&
         (*(int *)((int)this + 0x48) == *(int *)(*piVar2 + 0x48))) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0);
  }
  FUN_0041b3e0(param_1,&local_4);
  if (iVar3 != 0) {
    FUN_0041bca0((int)local_4);
    *(int *)((int)this + 0x48) = local_4[4];
  }
  FUN_0041b920((int)local_4);
  FUN_0040f900((int)local_4,(uint)*(byte *)((int)this + 0x2b6e));
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 4))(1);
  }
  *(undefined1 *)((int)this + 8) = 2;
  FUN_00414f10(this);
  (**(code **)(*(int *)this + 0x54))(0xa1f,0x39f);
  *(undefined1 *)((int)this + 8) = 0;
  FUN_00414f10(this);
  FUN_004069f0((int)this,1);
  FUN_00412350();
  FUN_0040b070(DAT_00436ec0,3,1);
  FUN_0040b0c0();
  return;
}

