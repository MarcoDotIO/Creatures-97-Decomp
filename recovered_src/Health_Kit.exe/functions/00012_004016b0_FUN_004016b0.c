/*
 * Program: Health_Kit.exe
 * Function: FUN_004016b0
 * Entry: 004016b0
 * Namespace: Global
 * Prototype: undefined4 FUN_004016b0(int param_1)
 */


undefined4 __fastcall FUN_004016b0(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int *piVar8;
  
  bVar2 = FUN_00407fc0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),
                       s_dde__lobe_endm_00411094);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  iVar3 = FUN_00408100(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),0);
  if (iVar3 == 0) {
    return 0;
  }
  pbVar7 = *(byte **)(*(int *)(param_1 + 0x8c) + 0x1fc);
  bVar1 = *pbVar7;
  uVar4 = (uint)bVar1;
  if (5 < bVar1) {
    uVar4 = 6;
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    puVar5 = (uint *)(param_1 + 0xcc);
    pbVar7 = pbVar7 + 1;
    piVar8 = (int *)(param_1 + 0x104);
    do {
      iVar3 = iVar3 + 1;
      puVar5[-0xc] = (uint)*pbVar7;
      puVar5[-0xb] = (uint)pbVar7[1];
      *puVar5 = (uint)pbVar7[2];
      puVar5[1] = (uint)pbVar7[3];
      *(byte *)(param_1 + 0xfb + iVar3) = pbVar7[4];
      *piVar8 = puVar5[1] * *puVar5;
      puVar5 = puVar5 + 2;
      pbVar7 = pbVar7 + 5;
      piVar8 = piVar8 + 1;
    } while (iVar3 < (int)uVar4);
  }
  iVar3 = FUN_00407ec0(*(void **)(param_1 + 0x8c),2,*(int *)(param_1 + 0x94));
  *(int *)(param_1 + 0x94) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar6 = FUN_004017b0(param_1);
  return uVar6;
}

