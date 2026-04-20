/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040d590
 * Entry: 0040d590
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d590(int param_1)
 */


undefined4 __fastcall FUN_0040d590(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa38) != 0) {
    iVar1 = FUN_00403ed0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xa34),0);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x628) != 0) {
        if (DAT_004126e8 == 0) {
          if ((*(int *)(param_1 + 0x628) != 0) &&
             (iVar1 = *(int *)(param_1 + 0xa2c) + -1, *(int *)(param_1 + 0xa2c) = iVar1, iVar1 < 1))
          {
            DAT_004126e8 = 1;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0xa2c) + 1;
          *(int *)(param_1 + 0xa2c) = iVar1;
          if (0xfe < iVar1) {
            DAT_004126e8 = 0;
          }
        }
      }
      if (DAT_004126ec == 0) {
        iVar1 = *(int *)(param_1 + 0xa30) + -1;
        *(int *)(param_1 + 0xa30) = iVar1;
        if (iVar1 < 1) {
          DAT_004126ec = 1;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0xa30) + 1;
        *(int *)(param_1 + 0xa30) = iVar1;
        if (0xfe < iVar1) {
          DAT_004126ec = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x620) =
           *(undefined4 *)(param_1 + 0x62c + *(int *)(param_1 + 0xa2c) * 4);
      *(int *)(param_1 + 0xb08) = *(int *)(param_1 + 0xa2c);
      Ordinal_5610(0);
      return 1;
    }
  }
  return 0;
}

