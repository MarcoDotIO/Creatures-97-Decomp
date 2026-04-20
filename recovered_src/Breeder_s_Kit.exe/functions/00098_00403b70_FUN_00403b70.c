/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00403b70
 * Entry: 00403b70
 * Namespace: Global
 * Prototype: undefined FUN_00403b70(void * param_1)
 */


void __fastcall FUN_00403b70(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  Ordinal_2293();
  bVar1 = FUN_00403d90(param_1,*(undefined4 *)((int)param_1 + 0x1f8),s_dde__getb_cnam_004121c8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00403ed0(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

