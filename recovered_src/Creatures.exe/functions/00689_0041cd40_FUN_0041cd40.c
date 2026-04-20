/*
 * Program: Creatures.exe
 * Function: FUN_0041cd40
 * Entry: 0041cd40
 * Namespace: Global
 * Prototype: undefined4 FUN_0041cd40(char * param_1, int param_2)
 */


undefined4 __cdecl FUN_0041cd40(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int local_10 [3];
  char *local_4;
  
  local_10[1] = param_2 + 0x20;
  local_10[2] = param_2 + 0x40;
  local_10[0] = param_2;
  pcVar5 = (char *)(param_2 + 0xa4);
  if (param_1 != (char *)0x0) {
    piVar6 = local_10;
    local_4 = pcVar5;
    do {
      pcVar2 = strchr(param_1,0x7c);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      uVar3 = 0xffffffff;
      do {
        pcVar7 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar8 = (char *)*piVar6;
      piVar6 = piVar6 + 1;
      pcVar7 = pcVar7 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1 = pcVar2 + 1;
    } while (pcVar2 != (char *)0x0);
  }
  *pcVar5 = *pcVar5 + '\x06';
  return 1;
}

