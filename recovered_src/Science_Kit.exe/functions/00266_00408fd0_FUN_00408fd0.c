/*
 * Program: Science_Kit.exe
 * Function: FUN_00408fd0
 * Entry: 00408fd0
 * Namespace: Global
 * Prototype: undefined4 FUN_00408fd0(int param_1)
 */


undefined4 __fastcall FUN_00408fd0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (iVar4 = FUN_00408300(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94),0), iVar4 != 0
     )) {
    FUN_00408ee0(param_1);
    FUN_00408ec0(param_1);
    pcVar5 = *(char **)(*(int *)(param_1 + 0x8c) + 0x1fc);
    cVar3 = *pcVar5;
    while (cVar3 != '\0') {
      cVar3 = *pcVar5;
      pcVar1 = pcVar5 + 1;
      pcVar2 = pcVar5 + 2;
      pcVar5 = pcVar5 + 3;
      *(char *)((uint)(byte)(cVar3 - 0x30) * 0x40 + (uint)(byte)(*pcVar1 - 0x30) + 0x60b0 + param_1)
           = *pcVar2 + -0x30;
      cVar3 = *pcVar5;
    }
    return 1;
  }
  return 0;
}

