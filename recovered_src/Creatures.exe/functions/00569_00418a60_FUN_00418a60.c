/*
 * Program: Creatures.exe
 * Function: FUN_00418a60
 * Entry: 00418a60
 * Namespace: Global
 * Prototype: undefined FUN_00418a60(void * param_1)
 */


void __fastcall FUN_00418a60(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_18;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)((int)param_1 + 0x1a8) = 0xffffffff;
  iVar4 = 999;
  iVar5 = 0;
  do {
    iVar2 = *(int *)((int)param_1 + iVar5 * 4 + 0x188);
    if ((iVar2 != 0) &&
       (uVar1 = (uint)*(byte *)(iVar2 + 0x58) - *(int *)((int)param_1 + 0x184),
       uVar3 = (int)uVar1 >> 0x1f, iVar2 = (uVar1 ^ uVar3) - uVar3, iVar2 < iVar4)) {
      *(int *)((int)param_1 + 0x1a8) = iVar5;
      iVar4 = iVar2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  if (*(int *)((int)param_1 + 0x1a8) != -1) {
    iVar4 = *(int *)((int)param_1 + 0x184);
    uVar1 = (uint)*(byte *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x1a8) * 4 + 0x188) +
                           0x58);
    *(uint *)((int)param_1 + 0x184) = uVar1;
    local_18 = param_1;
    local_14 = param_1;
    if (iVar4 < (int)uVar1) {
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_00418380(param_1,(int *)&local_18);
      return;
    }
    local_10 = 1;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00418400(param_1,(int *)&local_18);
  }
  return;
}

