/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00404d90
 * Entry: 00404d90
 * Namespace: Global
 * Prototype: undefined4 * FUN_00404d90(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00404d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040520a;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x8a,0);
  iVar1 = 2;
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_00401b10(param_1 + 0x25);
  local_8._0_1_ = 2;
  FUN_0040dda0(param_1 + 0x146,100,4,FUN_0040b2a0);
  local_8._0_1_ = 3;
  FUN_0040dda0(param_1 + 0x1aa,100,1,FUN_0040b2a0);
  local_8._0_1_ = 4;
  FUN_0040dda0(param_1 + 0x1cb,0x28,5,FUN_0040bc70);
  local_8._0_1_ = 5;
  FUN_0040dda0(param_1 + 0x1fd,0x28,1,FUN_0040bc70);
  local_8 = CONCAT31(local_8._1_3_,6);
  puVar2 = param_1 + 0x20a;
  do {
    FUN_00407110(puVar2);
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar1);
  iVar1 = 3;
  puVar2 = param_1 + 0x329;
  do {
    FUN_00407110(puVar2);
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar1);
  FUN_00409980(param_1 + 0x349);
  local_8._0_1_ = 7;
  FUN_004010b0(param_1 + 0x85a);
  local_8._0_1_ = 8;
  Ordinal_509();
  param_1[0x869] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 10;
  Ordinal_509();
  param_1[0x879] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0xc;
  Ordinal_509();
  param_1[0x889] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0xe;
  Ordinal_509();
  param_1[0x899] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x10;
  Ordinal_509();
  param_1[0x8a9] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x12;
  Ordinal_509();
  param_1[0x8b9] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x14;
  Ordinal_509();
  param_1[0x8c9] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x16;
  Ordinal_509();
  param_1[0x8d9] = &PTR_LAB_0040f7b0;
  local_8._0_1_ = 0x18;
  Ordinal_509();
  param_1[0x8e9] = &PTR_LAB_0040f7b0;
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  Ordinal_509();
  param_1[0x8f9] = &PTR_LAB_0040f7b0;
  *param_1 = &PTR_LAB_0040f6b8;
  param_1[0x23] = 0;
  param_1[0x858] = 0;
  param_1[0x859] = 0;
  param_1[0x862] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x221] = 0;
  param_1[0x865] = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

