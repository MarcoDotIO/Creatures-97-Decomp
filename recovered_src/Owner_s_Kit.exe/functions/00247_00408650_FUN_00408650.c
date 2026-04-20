/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_00408650
 * Entry: 00408650
 * Namespace: Global
 * Prototype: undefined4 FUN_00408650(int param_1)
 */


undefined4 __fastcall FUN_00408650(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_004083a0(param_1);
    FUN_00408420(param_1);
    FUN_00408800(0);
    iVar1 = FUN_00402f90(*(void **)(param_1 + 0x8c),*(byte **)(param_1 + 0x98),1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      return 1;
    }
    FUN_00402f60(*(int *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x90) = 1;
    return 1;
  }
  return 1;
}

