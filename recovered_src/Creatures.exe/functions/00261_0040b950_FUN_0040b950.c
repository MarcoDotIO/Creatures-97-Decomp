/*
 * Program: Creatures.exe
 * Function: FUN_0040b950
 * Entry: 0040b950
 * Namespace: Global
 * Prototype: undefined4 FUN_0040b950(undefined4 param_1, char * param_2, undefined4 param_3, undefined4 param_4)
 */


undefined4 __cdecl
FUN_0040b950(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  char **ppcVar7;
  undefined1 local_1c [4];
  undefined1 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040baaf;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_341(param_1,param_4,param_2,0x2000e,param_3);
  local_8 = 0;
  iVar2 = Ordinal_2200();
  while (iVar2 == 1) {
    ppcVar7 = &local_14;
    Ordinal_3046();
    local_8._0_1_ = 1;
    if (*(int *)(local_14 + -8) < 0x100) {
      local_18 = &stack0xfffffddc;
      Ordinal_481(&local_14);
      local_8._0_1_ = 1;
      FUN_0040b840(local_1c,(int)ppcVar7);
      local_8._0_1_ = 3;
      Ordinal_760();
      local_8._0_1_ = 1;
      FUN_0040ba9f();
      uVar4 = 0xffffffff;
      goto code_r0x0040ba5f;
    }
    Ordinal_1060(0xef18,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040baa7();
    iVar2 = Ordinal_2200();
  }
  local_8 = 0xffffffff;
  FUN_0040bab9();
  uVar3 = 0;
  goto LAB_0040ba09;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar6 = local_14 + 1;
    cVar1 = *local_14;
    local_14 = pcVar6;
    if (cVar1 == '\0') break;
code_r0x0040ba5f:
    pcVar6 = local_14;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040baa7();
  local_8 = 0xffffffff;
  FUN_0040bab9();
  uVar3 = 1;
LAB_0040ba09:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}

