/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040c8e0
 * Entry: 0040c8e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c8e0(int param_1)
 */


undefined4 __fastcall FUN_0040c8e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ordinal_729(0x400);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0040ca00(iVar1);
  if (iVar2 == 0) {
    Ordinal_731(iVar1);
    return 0;
  }
  SetRect((LPRECT)(param_1 + 0x5bc),0,0,*(int *)(**(int **)(param_1 + 0x594) + 0x14),
          *(int *)(**(int **)(param_1 + 0x594) + 0x10));
  iVar2 = (**(code **)(**(int **)(param_1 + 0x57c) + 0xbc))
                    (*(undefined4 *)(param_1 + 0x584),(LPRECT)(param_1 + 0x5bc),0,0x474,2,iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  SetRect((LPRECT)(param_1 + 0x5cc),0,0,0xd4,0x22);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x580) + 0xbc))
                    (*(undefined4 *)(param_1 + 0x588),(LPRECT)(param_1 + 0x5cc),0,0x474,2,iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  Ordinal_731(iVar1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x594) + 8);
  SetRect((LPRECT)(param_1 + 0x5dc),0x1b,0x44,*(int *)(iVar1 + 0x14) + 0x1b,
          *(int *)(iVar1 + 0x10) + 0x44);
  *(undefined4 *)(param_1 + 0x5ec) = 0x1b;
  *(undefined4 *)(param_1 + 0x5f0) = 0x44;
  return 1;
}

