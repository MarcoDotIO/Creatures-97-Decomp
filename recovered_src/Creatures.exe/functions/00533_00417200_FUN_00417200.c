/*
 * Program: Creatures.exe
 * Function: FUN_00417200
 * Entry: 00417200
 * Namespace: Global
 * Prototype: undefined FUN_00417200(int * param_1)
 */


void __fastcall FUN_00417200(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00414da0(param_1);
  if (*(char *)((int)param_1 + 0x73) == '\x02') {
    iVar3 = *(int *)(DAT_00436eb0 + 0x60);
    iVar2 = (*(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc)) / 2;
    iVar5 = *param_1;
    iVar3 = (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10)) / 2;
    iVar4 = (**(code **)(iVar5 + 0x70))();
    if ((iVar4 == iVar2) && (iVar4 = (**(code **)(iVar5 + 0x74))(), iVar4 == iVar3))
    goto LAB_004172a3;
  }
  else {
    if (*(char *)((int)param_1 + 0x72) == '\0') {
      iVar2 = (**(code **)(**(int **)((int)param_1 + 0x6e) + 0x70))();
      iVar2 = iVar2 + -0xa0;
    }
    else {
      iVar3 = **(int **)((int)param_1 + 0x6e);
      iVar2 = (**(code **)(iVar3 + 0x78))();
      iVar3 = (**(code **)(iVar3 + 0x70))();
      iVar2 = iVar2 + iVar3;
    }
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x6e) + 0x74))();
    iVar3 = iVar3 + -0x19;
    iVar5 = *param_1;
    iVar4 = (**(code **)(iVar5 + 0x70))();
    if ((iVar4 == iVar2) && (iVar4 = (**(code **)(iVar5 + 0x74))(), iVar4 == iVar3))
    goto LAB_004172a3;
  }
  (**(code **)(iVar5 + 0x54))(iVar2,iVar3);
LAB_004172a3:
  if (((char)param_1[0x15] != '\0') &&
     (cVar1 = (char)param_1[0x15] + -1, *(char *)(param_1 + 0x15) = cVar1, cVar1 == '\0')) {
    FUN_00417010(param_1);
  }
  return;
}

