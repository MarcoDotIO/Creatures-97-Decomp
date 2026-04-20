/*
 * Program: Score_Kit.exe
 * Function: FUN_00404110
 * Entry: 00404110
 * Namespace: Global
 * Prototype: undefined FUN_00404110(int param_1)
 */


void __fastcall FUN_00404110(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18 [6];
  
  local_18[3] = 0;
  local_18[5] = 0;
  local_18[1] = 0;
  iVar1 = *(int *)(param_1 + 0x620);
  iVar2 = *(int *)(param_1 + 0x61c);
  this = (void *)(param_1 + 0x590);
  local_18[2] = 0x46;
  local_18[4] = 0x3c;
  local_18[0] = 0x26;
  iVar3 = 5;
  do {
    FUN_00407c80(this,*(void **)(param_1 + 0x208),1,local_18,(int *)0x0,iVar2 % 10);
    iVar2 = iVar2 / 10;
    local_18[0] = local_18[0] + -10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00407c80(this,*(void **)(param_1 + 0x208),1,local_18 + 2,(int *)0x0,iVar1 % 10);
  FUN_00407c80(this,*(void **)(param_1 + 0x208),1,local_18 + 4,(int *)0x0,iVar1 / 10);
  FUN_00405400((void *)(param_1 + 0x1c0),(RECT *)0x0,0,0);
  return;
}

