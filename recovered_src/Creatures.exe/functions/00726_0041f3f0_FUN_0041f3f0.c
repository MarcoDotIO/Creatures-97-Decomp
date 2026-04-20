/*
 * Program: Creatures.exe
 * Function: FUN_0041f3f0
 * Entry: 0041f3f0
 * Namespace: Global
 * Prototype: undefined FUN_0041f3f0(undefined4 * param_1)
 */


void __fastcall FUN_0041f3f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041f4e3;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_00431258;
  *(undefined ***)((int)param_1 + 0x7f7) = &PTR_LAB_00431250;
  local_8 = 3;
  if ((int *)param_1[0xab2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xab2] + 4))(1);
  }
  if ((int *)param_1[0xab3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xab3] + 4))(1);
  }
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x2b66)) {
    piVar1 = (int *)((int)param_1 + 0x2b16);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))(1);
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0x2b66));
  }
  FUN_0041ed40((int)param_1);
  local_8._0_1_ = 2;
  FUN_0041f4b9();
  local_8._0_1_ = 1;
  FUN_0041f4c7();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0041f4d5();
  local_8 = 0xffffffff;
  FUN_0041f4ed();
  *unaff_FS_OFFSET = local_10;
  return;
}

