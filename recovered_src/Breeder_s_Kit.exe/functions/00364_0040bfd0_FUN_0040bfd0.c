/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040bfd0
 * Entry: 0040bfd0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040bfd0(void * this, undefined4 param_1, int param_2)
 */


undefined4 __thiscall FUN_0040bfd0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_94 [128];
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c0a3;
  *unaff_FS_OFFSET = &local_10;
  iVar3 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  Ordinal_5439(param_2,0);
  if (0 < param_2) {
    do {
      this_00 = (undefined4 *)0x0;
      wsprintfA(local_94,s__s__d_bmp_004126b0,param_1,iVar3);
      local_14 = (undefined4 *)Ordinal_729(0x18);
      local_8 = 0;
      if (local_14 != (undefined4 *)0x0) {
        this_00 = FUN_004010b0(local_14);
      }
      local_8 = 0xffffffff;
      if (this_00 == (undefined4 *)0x0) {
        uVar2 = 0;
        goto LAB_0040c088;
      }
      iVar1 = FUN_004012c0(this_00,local_94);
      if (iVar1 == 0) {
        uVar2 = 0;
        goto LAB_0040c088;
      }
      iVar3 = iVar3 + 1;
      *(undefined4 **)(*(int *)((int)this + 8) + -4 + iVar3 * 4) = this_00;
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + this_00[3] * this_00[4];
    } while (iVar3 < param_2);
  }
  uVar2 = 1;
LAB_0040c088:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}

