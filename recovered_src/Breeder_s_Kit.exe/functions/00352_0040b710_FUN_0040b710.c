/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040b710
 * Entry: 0040b710
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b710(int param_1)
 */


undefined4 __fastcall FUN_0040b710(int param_1)

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
  puStack_c = &LAB_0040b807;
  *unaff_FS_OFFSET = &local_10;
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar2 = (undefined4 *)Ordinal_729(0x10);
  local_8 = 0;
  this = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    this = FUN_00409310(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x48) = this;
  if (this != (undefined4 *)0x0) {
    if (*(int *)(*(int *)(param_1 + 0x40) + -8) == 0) {
      bVar1 = FUN_0040b820(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        if (*(int **)(param_1 + 0x48) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else {
LAB_0040b7d8:
        iVar4 = FUN_0040b870(param_1);
        if (iVar4 != 0) {
          uVar3 = 1;
          goto LAB_0040b77a;
        }
        if (*(int **)(param_1 + 0x48) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
    else {
      iVar4 = FUN_00409530(this,*(int *)(param_1 + 0x40));
      if (iVar4 != 0) goto LAB_0040b7d8;
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 4))(1);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  uVar3 = 0;
LAB_0040b77a:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

