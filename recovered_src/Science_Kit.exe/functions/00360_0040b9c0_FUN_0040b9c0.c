/*
 * Program: Science_Kit.exe
 * Function: FUN_0040b9c0
 * Entry: 0040b9c0
 * Namespace: Global
 * Prototype: undefined FUN_0040b9c0(void * this, int param_1, int param_2)
 */


void __thiscall FUN_0040b9c0(void *this,int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *this_00;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040bb1c;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    uVar1 = *(undefined2 *)((int)this + 0xc);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
      Ordinal_2456();
    }
    **(undefined2 **)(param_1 + 0x24) = uVar1;
    iVar3 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3 + 2;
    uVar2 = *(undefined4 *)((int)this + 0x24);
    if (*(uint *)(param_1 + 0x28) < iVar3 + 6U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        iVar5 = iVar3 + 1;
        FUN_00403770(*(void **)(*(int *)((int)this + 8) + iVar3 * 4),param_1,0);
        iVar3 = iVar5;
      } while (iVar5 < *(int *)((int)this + 0xc));
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 2);
    }
    uVar1 = **(undefined2 **)(param_1 + 0x24);
    *(undefined2 **)(param_1 + 0x24) = *(undefined2 **)(param_1 + 0x24) + 1;
    Ordinal_5439(uVar1,0);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    uVar2 = **(undefined4 **)(param_1 + 0x24);
    *(undefined4 **)(param_1 + 0x24) = *(undefined4 **)(param_1 + 0x24) + 1;
    *(undefined4 *)((int)this + 0x24) = uVar2;
    if ((*(int *)((int)this + 0x18) != 0) && (*(int *)((int)this + 0x1c) != 0)) {
      Ordinal_731(*(int *)((int)this + 0x18));
    }
    if (param_2 == 0) {
      iVar3 = Ordinal_729(*(undefined4 *)((int)this + 0x24));
      *(int *)((int)this + 0x18) = iVar3;
      if (iVar3 == 0) goto LAB_0040bb8d;
      *(undefined4 *)((int)this + 0x1c) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(int *)((int)this + 0x18) = param_2;
    }
    local_18 = 0;
    local_20 = *(int *)((int)this + 0x18);
    if (0 < *(int *)((int)this + 0xc)) {
      local_1c = 0;
      do {
        this_00 = (undefined4 *)0x0;
        puVar4 = (undefined4 *)Ordinal_729(0x18);
        local_8 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          this_00 = FUN_00403660(puVar4);
        }
        local_8 = 0xffffffff;
        if (this_00 == (undefined4 *)0x0) break;
        FUN_00403770(this_00,param_1,local_20);
        *(undefined4 **)(*(int *)((int)this + 8) + local_1c) = this_00;
        local_18 = local_18 + 1;
        local_1c = local_1c + 4;
        local_20 = local_20 + this_00[3] * this_00[4];
      } while (local_18 < *(int *)((int)this + 0xc));
    }
  }
LAB_0040bb8d:
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return;
}

