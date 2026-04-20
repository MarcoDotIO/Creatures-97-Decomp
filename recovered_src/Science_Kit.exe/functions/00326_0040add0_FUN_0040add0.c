/*
 * Program: Science_Kit.exe
 * Function: FUN_0040add0
 * Entry: 0040add0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040add0(int param_1)
 */


undefined4 __fastcall FUN_0040add0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  
  bVar1 = FUN_004081c0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x124),
                       s_dde__putv_gend_004156cc);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00408300(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x124),0);
    if (iVar2 != 0) {
      if (**(char **)(*(int *)(param_1 + 0x8c) + 0x1fc) == '1') {
        pcVar3 = &DAT_004156c4;
      }
      else {
        pcVar3 = s_Female_004156bc;
      }
      Ordinal_762(pcVar3);
    }
  }
  Ordinal_5610(0);
  return 1;
}

