/*
 * Program: Creatures.exe
 * Function: FUN_0040b840
 * Entry: 0040b840
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b840(undefined4 param_1, int param_2)
 */


undefined4 __cdecl FUN_0040b840(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040b931;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = 0;
  bVar2 = true;
  local_8 = 1;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_3696();
  Ordinal_2293();
  iVar3 = Ordinal_2426(0x2e);
  iVar3 = iVar3 + 1;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined1 *)(param_2 + iVar4);
      iVar4 = iVar4 + 1;
      Ordinal_835(*puVar1);
    } while (iVar4 < iVar3);
  }
  if (iVar3 < *(int *)(param_2 + -8)) {
    do {
      if ((!bVar2) || (*(char *)(param_2 + iVar3) != ' ')) {
        bVar2 = false;
        Ordinal_835(*(char *)(param_2 + iVar3));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + -8));
  }
  Ordinal_3696();
  Ordinal_481(local_14);
  local_8._0_1_ = 1;
  FUN_0040b929();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040b93b();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

