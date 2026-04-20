/*
 * Program: Creatures.exe
 * Function: FUN_0040cb70
 * Entry: 0040cb70
 * Namespace: Global
 * Prototype: undefined FUN_0040cb70(void * this, int param_1, int param_2, int param_3, int * param_4, int * param_5, int param_6)
 */


void __thiscall
FUN_0040cb70(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  
  iVar10 = *(int *)((int)this + 0xd);
  local_14 = 0;
  iVar4 = iVar10 + -1;
  local_18 = 0;
  iVar6 = *(int *)((int)this + 0x11) + -1;
  iVar8 = param_2 - *param_4;
  iVar9 = param_3 - param_4[1];
  if (iVar8 < 0x1051) {
    if (iVar8 < -0x1050) {
      iVar8 = iVar8 + 0x20a0;
    }
  }
  else {
    iVar8 = iVar8 + -0x20a0;
  }
  iVar3 = iVar4 + iVar8;
  iVar7 = iVar6 + iVar9;
  iVar1 = (param_4[2] - *param_4) + -1;
  iVar2 = (param_4[3] - param_4[1]) + -1;
  if ((((iVar8 <= iVar1) && (iVar9 <= iVar2)) && (-1 < iVar3)) && (-1 < iVar7)) {
    if (iVar8 < 0) {
      local_14 = -iVar8;
      iVar8 = 0;
    }
    if (iVar9 < 0) {
      local_18 = -iVar9;
      iVar9 = 0;
    }
    if (iVar1 < iVar3) {
      iVar4 = (iVar4 - iVar3) + iVar1;
    }
    if (iVar2 < iVar7) {
      iVar6 = (iVar6 - iVar7) + iVar2;
    }
    iVar3 = *param_5;
    iVar8 = (iVar8 - iVar3) + *param_4;
    iVar9 = (iVar9 - param_5[1]) + param_4[1];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0x20a0;
    }
    if (param_6 == 0) {
      iVar7 = (iVar6 - local_18) + 1;
      iVar6 = (iVar4 - local_14) + 1;
      iVar3 = param_5[2] - iVar3;
      iVar4 = FUN_0040cb50((int)this);
      FUN_0040d1b0(iVar4,local_14,local_18,iVar10,param_1,iVar8,iVar9,iVar3,iVar6,iVar7);
      return;
    }
    iVar6 = (iVar6 - local_18) + 1;
    uVar5 = (iVar4 - local_14) + 1;
    iVar3 = param_5[2] - iVar3;
    iVar4 = FUN_0040cb50((int)this);
    FUN_0040d230(iVar4,local_14,local_18,iVar10,param_1,iVar8,iVar9,iVar3,uVar5,iVar6);
  }
  return;
}

