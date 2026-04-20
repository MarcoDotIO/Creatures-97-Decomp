/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00405de0
 * Entry: 00405de0
 * Namespace: Global
 * Prototype: undefined4 FUN_00405de0(int param_1)
 */


undefined4 __fastcall FUN_00405de0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_14;
  tagRECT local_10;
  
  iVar1 = Ordinal_729(0x400);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00406080(iVar1);
  if (iVar2 == 0) {
    Ordinal_731(iVar1);
    return 0;
  }
  puVar5 = (undefined4 *)(param_1 + 0x718);
  piVar3 = (int *)(param_1 + 0x518);
  local_14 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x734);
  do {
    SetRect(&local_10,0,0,*(int *)(*(int *)*puVar4 + 0x14),*(int *)(*(int *)*puVar4 + 0x10));
    iVar2 = (**(code **)(*piVar3 + 0xbc))(*puVar5,&local_10,0,0x474,2,iVar1);
    if (iVar2 == 0) {
      return 0;
    }
    puVar5 = puVar5 + 1;
    piVar3 = piVar3 + 0x19;
    puVar4 = puVar4 + 10;
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  SetRect((LPRECT)(param_1 + 0x828),0,0,*(int *)(**(int **)(param_1 + 0x7fc) + 0x14),
          *(int *)(**(int **)(param_1 + 0x7fc) + 0x10));
  uVar6 = 2;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x70c) + 0xbc))
                    (*(undefined4 *)(param_1 + 0x728),(LPRECT)(param_1 + 0x828),0,0x474,2,iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  Ordinal_731(uVar6);
  iVar1 = *(int *)(*(int *)(param_1 + 0x75c) + 8);
  SetRect((LPRECT)(param_1 + 0xcf4),0,0,*(int *)(iVar1 + 0x14),*(int *)(iVar1 + 0x10));
  SetRect((LPRECT)(param_1 + 0xcb4),0x1d,0,
          (*(int *)(param_1 + 0xcfc) - ((LPRECT)(param_1 + 0xcf4))->left) + 0x1d,
          (*(int *)(*(int *)(*(int *)(param_1 + 0x5c4) + 4) + 8) - *(int *)(param_1 + 0xd00)) +
          *(int *)(param_1 + 0xcf8));
  iVar1 = *(int *)(*(int *)(param_1 + 0x784) + 8);
  SetRect((LPRECT)(param_1 + 0xce4),0,0,*(int *)(iVar1 + 0x14),*(int *)(iVar1 + 0x10));
  SetRect((LPRECT)(param_1 + 0xcc4),0x1d,0,
          (*(int *)(param_1 + 0xcec) - ((LPRECT)(param_1 + 0xce4))->left) + 0x1d,
          (*(int *)(*(int *)(*(int *)(param_1 + 0x628) + 4) + 8) - *(int *)(param_1 + 0xcf0)) +
          *(int *)(param_1 + 0xce8));
  iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  SetRect((LPRECT)(param_1 + 0xd04),0,0,*(int *)(iVar1 + 0x14),*(int *)(iVar1 + 0x10));
  SetRect((LPRECT)(param_1 + 0xcd4),0x1d,0,
          (*(int *)(param_1 + 0xd0c) - ((LPRECT)(param_1 + 0xd04))->left) + 0x1d,
          (*(int *)(*(int *)(*(int *)(param_1 + 0x68c) + 4) + 8) - *(int *)(param_1 + 0xd10)) +
          *(int *)(param_1 + 0xd08));
  SetRect((LPRECT)(param_1 + 0xca4),0,0,*(int *)(**(int **)(param_1 + 0x734) + 0x14),
          *(int *)(**(int **)(param_1 + 0x734) + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 0x7fc) + 8);
  SetRect((LPRECT)(param_1 + 0x858),0x1b,0x44,*(int *)(iVar1 + 0x14) + 0x1b,
          *(int *)(iVar1 + 0x10) + 0x44);
  *(undefined4 *)(param_1 + 0x868) = 0x1b;
  *(undefined4 *)(param_1 + 0x86c) = 0x44;
  return 1;
}

