/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040bbb0
 * Entry: 0040bbb0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040bbb0(void * this, byte * param_1)
 */


undefined4 __thiscall FUN_0040bbb0(void *this,byte *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040bd13;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)Ordinal_729(0x3a8);
  piVar4 = (int *)0x0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = FUN_00408600(puVar1);
  }
  local_8 = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    iVar3 = FUN_004090b0(this,param_1,*(undefined4 *)((int)this + 0x218));
    if (iVar3 != 0) {
      Ordinal_895(piVar4);
      Ordinal_5191(*(undefined4 *)((int)this + 0x770),piVar4);
      *(undefined4 *)((int)this + 0x7a4) = 1;
      uVar2 = 1;
      goto LAB_0040bc08;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(1);
    }
    this_00 = (int *)0x0;
    puVar1 = (undefined4 *)Ordinal_729(0x13c);
    local_8 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      this_00 = FUN_00405460(puVar1);
    }
    local_8 = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      iVar3 = FUN_004056a0(this_00,this,*(undefined4 *)((int)this + 0x218));
      if (iVar3 == 0) {
        if (this_00 != (int *)0x0) {
          (**(code **)(*this_00 + 4))(1);
        }
      }
      else {
        Ordinal_895(this_00);
        Ordinal_5191(*(undefined4 *)((int)this + 0x784),this_00);
        uVar2 = Ordinal_3024();
        Ordinal_5194(*(undefined4 *)((int)this + 0x7c4),uVar2);
      }
    }
  }
  uVar2 = 0;
LAB_0040bc08:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

