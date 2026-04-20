/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00402580
 * Entry: 00402580
 * Namespace: Global
 * Prototype: undefined FUN_00402580(void * param_1)
 */


void __fastcall FUN_00402580(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_00403c90(param_1,1,*(int *)((int)param_1 + 0x359c));
  *(int *)((int)param_1 + 0x359c) = iVar2;
  bVar1 = FUN_00403d90(param_1,iVar2,s_dde__getb_monk_004121b8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00403ed0(param_1,*(undefined4 *)((int)param_1 + 0x359c),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)((int)param_1 + 0x1fc));
    }
  }
  return;
}

