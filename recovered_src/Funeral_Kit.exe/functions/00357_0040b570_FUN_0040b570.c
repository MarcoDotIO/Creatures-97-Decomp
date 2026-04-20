/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040b570
 * Entry: 0040b570
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b570(int param_1)
 */


undefined4 __fastcall FUN_0040b570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040b5d0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00403690((void *)(param_1 + 0x238),param_1,0,*(undefined4 *)(param_1 + 0x218));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x764) = 0;
      return 0;
    }
    Ordinal_895((void *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x764) = 1;
  }
  return 1;
}

