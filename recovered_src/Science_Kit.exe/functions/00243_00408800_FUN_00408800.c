/*
 * Program: Science_Kit.exe
 * Function: FUN_00408800
 * Entry: 00408800
 * Namespace: Global
 * Prototype: undefined4 * FUN_00408800(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00408800(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00408903;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x86,0);
  local_8 = 0;
  iVar2 = 0xbff;
  Ordinal_486();
  local_8._0_1_ = 1;
  puVar1 = param_1 + 0x2c;
  do {
    FUN_004091e0(puVar1);
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  FUN_0040f890(param_1 + 0x1c34);
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_509();
  param_1[0x1c55] = &PTR_LAB_004111c0;
  *param_1 = &PTR_LAB_00411d90;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1c4e] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

