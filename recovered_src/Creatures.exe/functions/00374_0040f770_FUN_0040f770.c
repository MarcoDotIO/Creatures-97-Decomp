/*
 * Program: Creatures.exe
 * Function: FUN_0040f770
 * Entry: 0040f770
 * Namespace: Global
 * Prototype: undefined1 * FUN_0040f770(int param_1, int param_2, int param_3, int param_4, int param_5)
 */


undefined1 * __cdecl FUN_0040f770(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  char *pcVar2;
  istream *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ifstream local_7c [92];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040f850;
  *unaff_FS_OFFSET = &local_10;
  uVar1 = FUN_0040f590(param_1,param_2,param_3,param_4,param_5,0x436184,6);
  iVar4 = *(int *)openprot_exref;
  iVar5 = 1;
  pcVar2 = FUN_0040b5c0(uVar1,0x436184,6);
  ifstream::ifstream(local_7c,pcVar2,iVar5,iVar4);
  local_8 = 0;
  iVar4 = 0;
  do {
    piVar8 = (int *)local_14;
    piVar7 = (int *)local_18;
    piVar6 = (int *)local_1c;
    iVar5 = iVar4 + 1;
    piVar3 = istream::operator>>((istream *)local_7c,(int *)local_20);
    piVar3 = istream::operator>>(piVar3,piVar6);
    piVar3 = istream::operator>>(piVar3,piVar7);
    istream::operator>>(piVar3,piVar8);
    (&DAT_00438c48)[iVar4] = local_20[0];
    (&DAT_00438c52)[iVar4] = local_1c[0];
    (&DAT_00438c5c)[iVar4] = local_18[0];
    (&DAT_00438c66)[iVar4] = local_14[0];
    iVar4 = iVar5;
  } while (iVar5 < 10);
  local_8 = 0xffffffff;
  FUN_0040f85a();
  *unaff_FS_OFFSET = local_10;
  return &DAT_00438c48;
}

