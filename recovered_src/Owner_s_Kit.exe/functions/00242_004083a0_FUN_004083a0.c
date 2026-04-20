/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004083a0
 * Entry: 004083a0
 * Namespace: Global
 * Prototype: undefined FUN_004083a0(int param_1)
 */


void __fastcall FUN_004083a0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00409e50(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xe4),
                       s_dde__putv_gend_004124b0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00409f90(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xe4),0);
    if (iVar2 != 0) {
      if (**(char **)(*(int *)(param_1 + 0x8c) + 0x1fc) == '1') {
        Ordinal_3656(0x6e);
        Ordinal_5610(0);
        return;
      }
      Ordinal_3656(0x6f);
    }
  }
  Ordinal_5610(0);
  return;
}

