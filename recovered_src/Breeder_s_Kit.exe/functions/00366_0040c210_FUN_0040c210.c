/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040c210
 * Entry: 0040c210
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040c210(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_0040c210(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c423;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = 1;
  Ordinal_439(0x8d,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_00401b10(param_1 + 0x25);
  local_8._0_1_ = 2;
  FUN_0040dda0(param_1 + 0x146,100,1,FUN_0040b2a0);
  local_8._0_1_ = 3;
  FUN_0040dda0(param_1 + 0x163,0x28,1,FUN_0040bc70);
  local_8._0_1_ = 4;
  puVar2 = param_1 + 0x16f;
  do {
    FUN_00407110(puVar2);
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar1);
  FUN_00409980(param_1 + 0x17f);
  local_8._0_1_ = 5;
  Ordinal_509();
  param_1[0x292] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 7;
  Ordinal_509();
  param_1[0x2a2] = &PTR_LAB_0040f7b0;
  local_8 = CONCAT31(local_8._1_3_,9);
  Ordinal_509();
  param_1[0x2b2] = &PTR_LAB_0040fc08;
  *param_1 = &PTR_LAB_00410188;
  param_1[0x23] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x16e] = 0;
  param_1[0x18a] = 0;
  param_1[0x2c2] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

