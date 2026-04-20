/*
 * Program: Health_Kit.exe
 * Function: FUN_00408a70
 * Entry: 00408a70
 * Namespace: Global
 * Prototype: undefined4 FUN_00408a70(int param_1)
 */


undefined4 __fastcall FUN_00408a70(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *this;
  undefined4 uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00408b67;
  *unaff_FS_OFFSET = &local_10;
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar2 = (undefined4 *)Ordinal_729(0x10);
  local_8 = 0;
  this = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    this = FUN_00402110(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x48) = this;
  if (this != (undefined4 *)0x0) {
    if (*(int *)(*(int *)(param_1 + 0x40) + -8) == 0) {
      bVar1 = FUN_00408b80(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        if (*(int **)(param_1 + 0x48) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else {
LAB_00408b38:
        iVar4 = FUN_00408bd0(param_1);
        if (iVar4 != 0) {
          uVar3 = 1;
          goto LAB_00408ada;
        }
        if (*(int **)(param_1 + 0x48) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
    else {
      iVar4 = FUN_00402330(this,*(int *)(param_1 + 0x40));
      if (iVar4 != 0) goto LAB_00408b38;
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  uVar3 = 0;
LAB_00408ada:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

