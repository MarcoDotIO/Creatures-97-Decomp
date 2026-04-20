/*
 * Program: Creatures.exe
 * Function: FUN_0040f590
 * Entry: 0040f590
 * Namespace: Global
 * Prototype: uint FUN_0040f590(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 */


uint __cdecl
FUN_0040f590(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = 0;
  do {
    iVar3 = param_3 + -1;
    if (local_14 != 0) {
      iVar3 = 1 - (param_3 + -1);
    }
    local_c = param_2 + iVar3 * 4;
    for (iVar3 = param_5; -1 < iVar3; iVar3 = iVar3 + -1) {
      if (-1 < param_4) {
        iVar4 = param_4;
        do {
          iVar6 = 1;
          uVar5 = (iVar4 + 0x30) * 0x10000 | ((iVar3 + 0x30) * 0x10000 | local_c + 0x30U) << 8 |
                  param_1 + 0x41U;
          pcVar1 = FUN_0040b5c0(uVar5,param_6,param_7);
          puVar2 = FUN_0040b670(pcVar1,iVar6);
          if (puVar2 != (undefined4 *)0x0) {
            return uVar5;
          }
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
    local_14 = local_14 + 1;
  } while (local_14 < 2);
  return 0;
}

