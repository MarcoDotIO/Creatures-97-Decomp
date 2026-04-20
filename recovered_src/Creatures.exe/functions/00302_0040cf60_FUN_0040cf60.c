/*
 * Program: Creatures.exe
 * Function: FUN_0040cf60
 * Entry: 0040cf60
 * Namespace: Global
 * Prototype: undefined FUN_0040cf60(void)
 */


void FUN_0040cf60(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_4;
  
  if (DAT_00435f50 != 0) {
    uVar1 = DAT_00435f4c;
    iVar4 = DAT_00438a10;
    piVar5 = DAT_00438a0c;
    if (0 < DAT_00438a10) {
      do {
        iVar2 = *(int *)(*piVar5 + 8);
        if (0 < iVar2) {
          iVar3 = *(int *)(*piVar5 + 4);
          do {
            if ((((*(byte *)(iVar3 + 8) & 1) != 0) && ((*(byte *)(iVar3 + 8) & 4) == 0)) &&
               (*(uint *)(iVar3 + 0x19) < uVar1)) {
              iStack_4 = iVar3;
              uVar1 = *(uint *)(iVar3 + 0x19);
            }
            iVar3 = iVar3 + 0x1d;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar4 = iVar4 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar4 != 0);
    }
    FUN_0040cfd0(iStack_4);
  }
  return;
}

