/*
 * Program: Science_Kit.exe
 * Function: FUN_00407e70
 * Entry: 00407e70
 * Namespace: Global
 * Prototype: undefined FUN_00407e70(void * param_1)
 */


void __fastcall FUN_00407e70(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  Ordinal_2293();
  bVar1 = FUN_004081c0(param_1,*(undefined4 *)((int)param_1 + 0x1f8),s_dde__getb_cnam_00415540);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00408300(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

