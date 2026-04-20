/*
 * Program: Creatures.exe
 * Function: FUN_0041b0c0
 * Entry: 0041b0c0
 * Namespace: Global
 * Prototype: undefined FUN_0041b0c0(undefined4 * param_1)
 */


void __fastcall FUN_0041b0c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041b154;
  *param_1 = &PTR_LAB_00431070;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  puVar3 = (undefined4 *)param_1[9];
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    piVar1 = puVar3 + 2;
    puVar3 = puVar2;
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))(1);
    }
  }
  Ordinal_4953();
  Ordinal_1081();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041b149();
  local_8 = 0xffffffff;
  FUN_0041b15e();
  *unaff_FS_OFFSET = local_10;
  return;
}

