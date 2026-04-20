/*
 * Program: Funeral_Kit.exe
 * Function: FUN_0040aef0
 * Entry: 0040aef0
 * Namespace: Global
 * Prototype: undefined FUN_0040aef0(int * param_1)
 */


void __fastcall FUN_0040aef0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_0040b7e0((int)param_1);
  FUN_0040b310((int)param_1);
  for (iVar3 = 0; iVar3 < param_1[0x1e1]; iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(param_1[0x1e0] + iVar2);
    (**(code **)(*piVar1 + 0x5c))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    iVar2 = iVar2 + 4;
  }
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < param_1[0x1dc]; iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(param_1[0x1db] + iVar2);
    (**(code **)(*piVar1 + 0x5c))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    iVar2 = iVar2 + 4;
  }
  if (param_1[0x1dc] != 0) {
    Ordinal_5439(0,0xffffffff);
  }
  if (param_1[0x1e1] != 0) {
    Ordinal_5439(0,0xffffffff);
  }
  Ordinal_5439(0,0xffffffff);
  FUN_00401c70(param_1);
  return;
}

