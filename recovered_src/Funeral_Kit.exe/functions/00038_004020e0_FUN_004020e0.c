/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004020e0
 * Entry: 004020e0
 * Namespace: Global
 * Prototype: undefined FUN_004020e0(void * param_1)
 */


void __fastcall FUN_004020e0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  Ordinal_2293();
  bVar1 = FUN_00402300(param_1,*(undefined4 *)((int)param_1 + 0x1f8),s_dde__getb_cnam_00410168);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00402440(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

