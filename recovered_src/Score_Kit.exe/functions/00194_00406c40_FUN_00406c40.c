/*
 * Program: Score_Kit.exe
 * Function: FUN_00406c40
 * Entry: 00406c40
 * Namespace: Global
 * Prototype: undefined FUN_00406c40(void * param_1)
 */


void __fastcall FUN_00406c40(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  Ordinal_2293();
  bVar1 = FUN_00406e60(param_1,*(undefined4 *)((int)param_1 + 0x1f8),s_dde__getb_cnam_0040c468);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00406fa0(param_1,*(undefined4 *)((int)param_1 + 0x1f8),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

