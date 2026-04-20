/*
 * Program: Creatures.exe
 * Function: FUN_0041b620
 * Entry: 0041b620
 * Namespace: Global
 * Prototype: undefined FUN_0041b620(void * this, int param_1)
 */


void __thiscall FUN_0041b620(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    uVar2 = *(undefined4 *)((int)this + 0xc);
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar2;
    iVar5 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar5 + 4;
    uVar2 = *(undefined4 *)((int)this + 0x10);
    if (*(uint *)(param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar2;
    iVar5 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar5 + 4;
    uVar2 = *(undefined4 *)((int)this + 0x14);
    if (*(uint *)(param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2456();
    }
    **(undefined4 **)(param_1 + 0x24) = uVar2;
    iVar5 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar5 + 4;
    uVar1 = *(undefined1 *)((int)this + 0x18);
    if (*(uint *)(param_1 + 0x28) < iVar5 + 5U) {
      Ordinal_2456();
    }
    iVar5 = 0;
    **(undefined1 **)(param_1 + 0x24) = uVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        uVar1 = *(undefined1 *)(*(int *)((int)this + 4) + iVar5);
        if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 1U) {
          Ordinal_2456();
        }
        iVar5 = iVar5 + 1;
        **(undefined1 **)(param_1 + 0x24) = uVar1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      } while (iVar5 < *(int *)((int)this + 0xc));
      return;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
      Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)this + 0xc) = **(undefined4 **)(param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 0x24);
    iVar3 = iVar5 + 4;
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(uint *)(param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2403((iVar3 - *(uint *)(param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)(param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 0x24);
    iVar3 = iVar5 + 4;
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(uint *)(param_1 + 0x28) < iVar5 + 8U) {
      Ordinal_2403((iVar3 - *(uint *)(param_1 + 0x28)) + 4);
    }
    *(undefined4 *)((int)this + 0x14) = **(undefined4 **)(param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 0x24);
    iVar3 = iVar5 + 4;
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(uint *)(param_1 + 0x28) < iVar5 + 5U) {
      Ordinal_2403((iVar3 - *(uint *)(param_1 + 0x28)) + 1);
    }
    *(undefined1 *)((int)this + 0x18) = **(undefined1 **)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    iVar5 = 0;
    uVar2 = Ordinal_729(*(undefined4 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 4) = uVar2;
    *(undefined4 *)((int)this + 8) = uVar2;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        puVar4 = (undefined1 *)(*(int *)((int)this + 4) + iVar5);
        if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 1U) {
          Ordinal_2403((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 1);
        }
        iVar5 = iVar5 + 1;
        *puVar4 = **(undefined1 **)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      } while (iVar5 < *(int *)((int)this + 0xc));
    }
  }
  return;
}

