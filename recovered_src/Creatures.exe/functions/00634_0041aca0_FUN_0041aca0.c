/*
 * Program: Creatures.exe
 * Function: FUN_0041aca0
 * Entry: 0041aca0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0041aca0(void * this, undefined4 * param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4)
 */


undefined4 * __thiscall
FUN_0041aca0(void *this,undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4
            )

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041ad10;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041a860(this);
  *(undefined ***)this = &PTR_LAB_00430ee8;
  puVar2 = (undefined4 *)((int)this + 0x26);
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 10) = param_4;
  *unaff_FS_OFFSET = local_10;
  return this;
}

