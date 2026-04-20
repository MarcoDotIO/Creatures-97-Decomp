/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00409c30
 * Entry: 00409c30
 * Namespace: Global
 * Prototype: undefined FUN_00409c30(void * param_1)
 */


void __fastcall FUN_00409c30(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  Ordinal_2293();
  bVar1 = FUN_00409e50(param_1,*(undefined4 *)((int)param_1 + 0x1f8),s_dde__getb_cnam_004125d0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00409f90(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

