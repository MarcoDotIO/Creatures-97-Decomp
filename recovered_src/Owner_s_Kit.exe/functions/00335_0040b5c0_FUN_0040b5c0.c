/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_0040b5c0
 * Entry: 0040b5c0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b5c0(void)
 */


undefined4 FUN_0040b5c0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b644;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_340();
  uVar4 = 0;
  uVar3 = 0x30;
  local_8 = 0;
  puVar1 = FUN_0040ab90();
  iVar2 = Ordinal_4619(puVar1,uVar3,uVar4);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_0040b64e();
    uVar3 = 0;
  }
  else {
    uVar3 = Ordinal_2891();
    local_8 = 0xffffffff;
    FUN_0040b64e();
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

