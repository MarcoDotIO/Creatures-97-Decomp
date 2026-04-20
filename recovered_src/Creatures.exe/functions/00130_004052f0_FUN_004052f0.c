/*
 * Program: Creatures.exe
 * Function: FUN_004052f0
 * Entry: 004052f0
 * Namespace: Global
 * Prototype: undefined4 FUN_004052f0(undefined4 param_1)
 */


undefined4 FUN_004052f0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  FUN_0040bb60();
  *(undefined4 *)(*(int *)(DAT_00436eb0 + 0x60) + 0x30) = 0;
  iVar2 = Ordinal_4316(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = FUN_00405380();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  FUN_00407b20();
  FUN_0040d150();
  FUN_0041c2f0(DAT_00436ebc);
  FUN_0041c410();
  FUN_0040bb40();
  *(undefined4 *)(*(int *)(DAT_00436eb0 + 0x60) + 0x30) = 1;
  FUN_004126c0();
  return 1;
}

