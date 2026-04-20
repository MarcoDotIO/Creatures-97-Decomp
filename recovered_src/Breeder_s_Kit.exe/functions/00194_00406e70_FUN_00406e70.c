/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_00406e70
 * Entry: 00406e70
 * Namespace: Global
 * Prototype: undefined4 FUN_00406e70(int param_1)
 */


undefined4 __fastcall FUN_00406e70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int local_4;
  
  if (*(int *)(param_1 + 0x2164) != 0) {
    iVar2 = FUN_00403ed0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x2160),0);
    if (iVar2 != 0) {
      iVar2 = 5;
      pcVar5 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
      piVar6 = (int *)(param_1 + 0xc88);
      do {
        iVar3 = FUN_00409220(pcVar5,&local_4);
        *piVar6 = iVar3;
        pcVar5 = pcVar5 + local_4 + 1;
        iVar2 = iVar2 + -1;
        piVar6 = piVar6 + 1;
      } while (iVar2 != 0);
      iVar2 = *(int *)(param_1 + 0xd60 + *(int *)(param_1 + 0xc88) * 4);
      *(int *)(param_1 + 0xd4c) = iVar2;
      iVar3 = *(int *)(param_1 + 0x1160 + *(int *)(param_1 + 0xc8c) * 4);
      *(int *)(param_1 + 0xd40) = iVar3;
      iVar1 = *(int *)(param_1 + 0x1d60 + *(int *)(param_1 + 0xc90) * 4);
      *(int *)(param_1 + 0xd5c) = iVar1;
      *(undefined4 *)(param_1 + 0xd50) =
           *(undefined4 *)(param_1 + 0x1d60 + *(int *)(param_1 + 0xc98) * 4);
      iVar2 = ((iVar2 - iVar1) + iVar3 >> 1) * *(int *)(param_1 + 0xc9c);
      iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8;
      *(int *)(param_1 + 0xd54) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0xd54) = 0;
      }
      *(undefined4 *)(param_1 + 0x870) =
           *(undefined4 *)(param_1 + 0x1960 + *(int *)(param_1 + 0xc94) * 4);
      if (*(int *)(param_1 + 0x2194) != 0) {
        if (*(int *)(param_1 + 0x878) < iVar1) {
          *(undefined4 *)(param_1 + 0x884) = 1;
          *(int *)(param_1 + 0x878) = iVar1;
        }
        uVar4 = 0;
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x884) = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x888 + iVar1 * 4);
        }
        *(undefined4 *)(param_1 + 0x87c) = uVar4;
      }
      Ordinal_5610(0);
      return 1;
    }
  }
  return 0;
}

