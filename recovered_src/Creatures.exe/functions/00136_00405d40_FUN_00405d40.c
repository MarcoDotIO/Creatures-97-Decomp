/*
 * Program: Creatures.exe
 * Function: FUN_00405d40
 * Entry: 00405d40
 * Namespace: Global
 * Prototype: undefined FUN_00405d40(undefined4 param_1)
 */


void FUN_00405d40(undefined4 param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_68 [68];
  undefined1 local_24 [16];
  int *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405e0e;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  local_8 = 0;
  iVar1 = Ordinal_4619(param_1,0,0);
  if (iVar1 != 0) {
    Ordinal_271(local_24,1,0x1000,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00412d40(local_68,&local_14);
    (**(code **)(*local_14 + 0x38))();
    if ((local_14[1] & 0xff000000U) == 0x4000000) {
      FUN_004230c0(local_14,local_68);
    }
    Ordinal_1725();
    Ordinal_4940(param_1);
    local_8 = local_8 & 0xffffff00;
    FUN_00405e06();
  }
  local_8 = 0xffffffff;
  FUN_00405e18();
  *unaff_FS_OFFSET = local_10;
  return;
}

