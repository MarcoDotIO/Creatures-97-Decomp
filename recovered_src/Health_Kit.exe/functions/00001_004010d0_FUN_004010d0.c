/*
 * Program: Health_Kit.exe
 * Function: FUN_004010d0
 * Entry: 004010d0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004010d0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004010d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004012be;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x86,0);
  local_8 = 0;
  iVar2 = 5;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1 = param_1 + 0x27;
  do {
    FUN_00402000(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  iVar2 = 5;
  puVar1 = param_1 + 0x33;
  do {
    FUN_00401ff0(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  iVar2 = 5;
  _eh_vector_constructor_iterator_(param_1 + 0x44f,0x28,6,FUN_00409640,FUN_004096f0);
  local_8._0_1_ = 2;
  puVar1 = param_1 + 0x48b;
  do {
    FUN_00402000(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  FUN_00408600(param_1 + 0x49d);
  local_8 = CONCAT31(local_8._1_3_,3);
  Ordinal_509();
  param_1[0x4bf] = &PTR_LAB_0040e1a8;
  *param_1 = &PTR_LAB_0040e0b0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 1;
  param_1[0x48b] = 0x12;
  param_1[0x48c] = 6;
  param_1[0x48d] = 0xac;
  param_1[0x48f] = 199;
  param_1[0x490] = 0x74;
  param_1[0x491] = 0x67;
  param_1[0x492] = 0x7c;
  param_1[0x494] = 0x95;
  param_1[0x495] = 9;
  param_1[0x496] = 0x48;
  param_1[0x498] = 0;
  *unaff_FS_OFFSET = local_10;
  param_1[0x48e] = 0x19;
  param_1[0x493] = 0x19;
  return param_1;
}

