/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00402b50
 * Entry: 00402b50
 * Namespace: Global
 * Prototype: undefined4 FUN_00402b50(void * param_1)
 */


undefined4 __fastcall FUN_00402b50(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_00409d50(param_1,1,*(int *)((int)param_1 + 0xb58));
  *(int *)((int)param_1 + 0xb58) = iVar2;
  bVar1 = FUN_00409e50(param_1,iVar2,s_dde__getb_monk_004121e0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00409f90(param_1,*(undefined4 *)((int)param_1 + 0xb58),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return *(undefined4 *)((int)param_1 + 0xb50);
}

