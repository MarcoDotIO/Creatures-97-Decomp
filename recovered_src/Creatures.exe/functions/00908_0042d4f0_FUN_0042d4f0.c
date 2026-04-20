/*
 * Program: Creatures.exe
 * Function: FUN_0042d4f0
 * Entry: 0042d4f0
 * Namespace: Global
 * Prototype: undefined4 * FUN_0042d4f0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0042d4f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042d626;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *param_1 = &PTR_LAB_0042f018;
  local_18 = 0x27;
  puVar4 = param_1 + 3;
  do {
    FUN_0042d660(puVar4);
    local_18 = local_18 + -1;
    puVar4 = puVar4 + 5;
  } while (-1 < local_18);
  _eh_vector_constructor_iterator_(param_1 + 0x1d0,0xc,100,FUN_004010b0,FUN_0041f3a0);
  iVar5 = 0;
  puVar4 = param_1 + 0xcb;
  local_8 = CONCAT31(local_8._1_3_,1);
  *param_1 = &PTR_LAB_00431610;
  param_1[0x2fc] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    *puVar4 = 600;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x105);
  puVar4 = &DAT_004370a8;
  puVar7 = param_1 + 3;
  do {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    puVar6 = puVar4 + 5;
    uVar3 = puVar4[3];
    *puVar7 = *puVar4;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar7[4] = puVar4[4];
    puVar4 = puVar6;
    puVar7 = puVar7 + 5;
  } while (puVar6 < &DAT_00437184);
  param_1[2] = 0xb;
  puVar4 = FUN_0040c580(0x6b636142,0,0x1d0,0);
  param_1[0x2fd] = puVar4;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

