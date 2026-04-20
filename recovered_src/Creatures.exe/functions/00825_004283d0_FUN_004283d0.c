/*
 * Program: Creatures.exe
 * Function: FUN_004283d0
 * Entry: 004283d0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004283d0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004283d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00428490;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0042f018;
  iVar3 = 0;
  local_8 = 0;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,1);
  *param_1 = &PTR_LAB_00431318;
  Ordinal_762(&DAT_00435c44);
  param_1[0x94] = 0;
  param_1[0x93] = 1;
  puVar2 = param_1 + 1;
  do {
    puVar4 = puVar2;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x1b;
  } while (iVar3 < 3);
  iVar3 = 0x20;
  puVar2 = param_1 + 0x52;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2[0x20] = 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

