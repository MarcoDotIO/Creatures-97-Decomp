/*
 * Program: Creatures.exe
 * Function: FUN_0042d2e0
 * Entry: 0042d2e0
 * Namespace: Global
 * Prototype: undefined FUN_0042d2e0(int param_1)
 */


void __fastcall FUN_0042d2e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xc28)) {
    local_8 = (int *)(param_1 + 0xa7);
    do {
      iVar3 = 0;
      iVar4 = local_8[-2];
      if (0 < *local_8) {
        do {
          *(undefined1 *)(iVar4 + 3) = 0;
          *(undefined1 *)(iVar4 + 2) = 0;
          iVar1 = 0;
          do {
            iVar2 = 0;
            iVar5 = *(int *)(iVar4 + 4 + iVar1 * 4);
            if (*(char *)(iVar1 + 0xc + iVar4) != '\0') {
              do {
                *(undefined1 *)(iVar5 + 6) = 0;
                iVar2 = iVar2 + 1;
                *(undefined1 *)(iVar5 + 7) = *(undefined1 *)(iVar5 + 8);
                iVar5 = iVar5 + 10;
              } while (iVar2 < (int)(uint)*(byte *)(iVar1 + 0xc + iVar4));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 2);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar3 < *local_8);
      }
      local_8 = (int *)((int)local_8 + 0xc2);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc28));
  }
  return;
}

