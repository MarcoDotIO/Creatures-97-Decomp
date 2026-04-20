/*
 * Program: Health_Kit.exe
 * Function: FUN_00401ab0
 * Entry: 00401ab0
 * Namespace: Global
 * Prototype: undefined FUN_00401ab0(int param_1)
 */


void __fastcall FUN_00401ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_c;
  int local_8;
  void *local_4;
  
  iVar2 = FUN_00401bb0(param_1);
  if (iVar2 != 0) {
    local_4 = (void *)(param_1 + 0x113c);
    piVar5 = (int *)(param_1 + 0x9c);
    local_8 = 0;
    local_c = (int *)(param_1 + 0x104);
    do {
      iVar3 = 0;
      iVar2 = *piVar5;
      if (iVar2 < piVar5[0xc] + iVar2) {
        iVar4 = param_1 + iVar2 * 0x40;
        iVar2 = (piVar5[0xc] + iVar2) - iVar2;
        do {
          for (iVar6 = piVar5[1]; iVar6 < piVar5[0xd] + piVar5[1]; iVar6 = iVar6 + 1) {
            iVar3 = iVar3 + (uint)*(byte *)(iVar6 + 0x13c + iVar4);
          }
          iVar4 = iVar4 + 0x40;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if ((*(byte *)(local_8 + 0xfc + param_1) & 1) == 0) {
        iVar3 = iVar3 / *local_c;
      }
      iVar2 = iVar3 + 1 >> 1;
      piVar1 = piVar5 + 0x464;
      local_c[6] = iVar2;
      piVar5 = piVar5 + 2;
      FUN_004099a0(local_4,*(void **)(param_1 + 0x12bc),1,piVar1,(int *)0x0,iVar2);
      local_4 = (void *)((int)local_4 + 0x28);
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_8 < 6);
    FUN_00401c30(param_1);
  }
  return;
}

