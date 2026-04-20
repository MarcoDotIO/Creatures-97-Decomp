/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408420
 * Entry: 00408420
 * Namespace: Global
 * Prototype: undefined FUN_00408420(int param_1)
 */


void __fastcall FUN_00408420(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00409e50(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xe4),
                       s_dde__getb_ctim_004124c0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00409f90(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xe4),0);
    if (iVar2 != 0) {
      Ordinal_762(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1fc));
    }
  }
  Ordinal_5610(0);
  return;
}

