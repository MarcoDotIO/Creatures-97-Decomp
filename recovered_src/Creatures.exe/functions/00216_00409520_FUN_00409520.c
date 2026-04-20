/*
 * Program: Creatures.exe
 * Function: FUN_00409520
 * Entry: 00409520
 * Namespace: Global
 * Prototype: undefined4 FUN_00409520(undefined4 param_1)
 */


undefined4 FUN_00409520(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004095a8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  uVar4 = 0;
  local_8 = 0;
  uVar3 = 0x30;
  puVar1 = FUN_0040b5c0(param_1,0x435de0,1);
  iVar2 = Ordinal_4619(puVar1,uVar3,uVar4);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_004095b2();
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_2891();
    local_8 = 0xffffffff;
    FUN_004095b2();
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

