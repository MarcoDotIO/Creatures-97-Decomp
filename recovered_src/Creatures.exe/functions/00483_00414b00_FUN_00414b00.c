/*
 * Program: Creatures.exe
 * Function: FUN_00414b00
 * Entry: 00414b00
 * Namespace: Global
 * Prototype: undefined FUN_00414b00(void * this, int * param_1, int * param_2)
 */


void __thiscall FUN_00414b00(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)this;
  iVar4 = (**(code **)(iVar7 + 0x70))();
  iVar5 = (**(code **)(iVar7 + 0x74))();
  iVar7 = *(int *)(DAT_00436eb0 + 0x60);
  iVar1 = *(int *)(iVar7 + 4);
  iVar2 = *(int *)(iVar7 + 8);
  iVar3 = *(int *)(iVar7 + 0x10);
  iVar7 = *(int *)(iVar7 + 0xc);
  iVar4 = iVar4 - (iVar1 + iVar7) / 2;
  if (iVar4 < 0x1050) {
    if (iVar4 < -0x104f) {
      iVar4 = iVar4 + 0x20a0;
    }
  }
  else {
    iVar4 = iVar4 + -0x20a0;
  }
  iVar5 = iVar5 - (iVar2 + iVar3) / 2;
  iVar8 = iVar7 - iVar1;
  iVar6 = (iVar4 * 5000) / iVar8;
  *param_2 = iVar6;
  if (iVar6 < -10000) {
    *param_2 = -10000;
  }
  else if (10000 < iVar6) {
    *param_2 = 10000;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar4 < iVar8 / 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + (iVar1 - iVar7) / 2;
  }
  if (iVar5 < (iVar3 - iVar2) / 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + (iVar2 - iVar3) / 2;
  }
  iVar7 = (iVar5 * -10000) / (iVar3 - iVar2) - (iVar4 * 10000) / iVar8;
  *param_1 = iVar7;
  if (iVar7 < -10000) {
    *param_1 = -10000;
  }
  return;
}

