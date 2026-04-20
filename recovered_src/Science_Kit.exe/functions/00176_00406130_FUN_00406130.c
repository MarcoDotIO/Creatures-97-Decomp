/*
 * Program: Science_Kit.exe
 * Function: FUN_00406130
 * Entry: 00406130
 * Namespace: Global
 * Prototype: undefined4 * FUN_00406130(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_00406130(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040639f;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_439(0x90,0);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  FUN_0040f890(param_1 + 0x2d);
  local_8._0_1_ = 2;
  Ordinal_487();
  local_8._0_1_ = 3;
  FUN_00410940(param_1 + 0x255,0x28,2,FUN_0040b840);
  local_8._0_1_ = 4;
  FUN_00410940(param_1 + 0x269,0x28,2,FUN_0040b840);
  local_8._0_1_ = 5;
  Ordinal_509();
  param_1[0x28e] = &PTR_LAB_00411958;
  local_8._0_1_ = 7;
  Ordinal_509();
  param_1[0x29e] = &PTR_LAB_00411a18;
  local_8._0_1_ = 9;
  Ordinal_509();
  param_1[0x2ae] = &PTR_LAB_004111c0;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  *param_1 = &PTR_LAB_00411860;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0x50;
  param_1[0x280] = 0xbe;
  SetRect((LPRECT)(param_1 + 0x281),0x50,0xbe,0x6d,0xf1);
  param_1[0x285] = 0x23;
  param_1[0x286] = 10;
  SetRect((LPRECT)(param_1 + 0x287),0x23,10,0x69,0xdf);
  SetRect((LPRECT)(param_1 + 0x149),((LPRECT)(param_1 + 0x287))->left,param_1[0x288],param_1[0x289],
          0xdf);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

