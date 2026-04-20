/*
 * Program: Creatures.exe
 * Function: FUN_0042d380
 * Entry: 0042d380
 * Namespace: Global
 * Prototype: undefined FUN_0042d380(int param_1)
 */


void __fastcall FUN_0042d380(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xc28)) {
    local_c = (int *)(param_1 + 0xa7);
    do {
      iVar3 = 0;
      iVar1 = local_c[-2];
      if (0 < *local_c) {
        do {
          iVar4 = 0;
          do {
            iVar5 = 0;
            iVar2 = *(int *)(iVar1 + 4 + iVar4 * 4);
            if (*(char *)(iVar4 + 0xc + iVar1) != '\0') {
              do {
                if (*(byte *)(iVar2 + 8) < *(byte *)(iVar2 + 7)) {
                  *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 7);
                }
                iVar5 = iVar5 + 1;
                iVar2 = iVar2 + 10;
              } while (iVar5 < (int)(uint)*(byte *)(iVar4 + 0xc + iVar1));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 2);
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x10;
        } while (iVar3 < *local_c);
      }
      local_c = (int *)((int)local_c + 0xc2);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0xc28));
  }
  return;
}

