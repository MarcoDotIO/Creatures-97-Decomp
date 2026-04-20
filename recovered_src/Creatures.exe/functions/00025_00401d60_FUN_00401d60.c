/*
 * Program: Creatures.exe
 * Function: FUN_00401d60
 * Entry: 00401d60
 * Namespace: Global
 * Prototype: undefined FUN_00401d60(int * param_1, int param_2)
 */


void __cdecl FUN_00401d60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0x24) {
    iVar3 = 0;
    iVar4 = 0;
    if (0 < DAT_00438868) {
      do {
        iVar1 = *(int *)(DAT_00438864 + iVar3);
        iVar2 = FUN_004200b0(param_1);
        if (iVar2 != 0) {
          FUN_00401a80((void *)(param_2 * 0x14 + 0x25a0 + iVar1),param_1,iVar1);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_00438868);
    }
  }
  return;
}

