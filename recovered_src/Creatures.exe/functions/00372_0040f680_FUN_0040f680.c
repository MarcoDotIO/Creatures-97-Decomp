/*
 * Program: Creatures.exe
 * Function: FUN_0040f680
 * Entry: 0040f680
 * Namespace: Global
 * Prototype: undefined * FUN_0040f680(int param_1, int param_2, int param_3, int param_4, int param_5)
 */


undefined * __cdecl FUN_0040f680(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  char *pcVar2;
  istream *this;
  undefined *puVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  int iVar5;
  int *piVar6;
  ifstream local_78 [92];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040f755;
  *unaff_FS_OFFSET = &local_10;
  uVar1 = FUN_0040f590(param_1,param_2,param_3,param_4,param_5,0x436184,6);
  iVar4 = *(int *)openprot_exref;
  iVar5 = 1;
  pcVar2 = FUN_0040b5c0(uVar1,0x436184,6);
  ifstream::ifstream(local_78,pcVar2,iVar5,iVar4);
  local_8 = 0;
  local_14 = 0;
  do {
    iVar4 = 6;
    puVar3 = &DAT_00438c70 + local_14;
    do {
      piVar6 = (int *)local_18;
      this = istream::operator>>((istream *)local_78,(int *)local_1c);
      istream::operator>>(this,piVar6);
      iVar4 = iVar4 + -1;
      *puVar3 = local_1c[0];
      puVar3[0x3c] = local_18[0];
      puVar3 = puVar3 + 10;
    } while (iVar4 != 0);
    local_14 = local_14 + 1;
  } while (local_14 < 10);
  local_8 = 0xffffffff;
  FUN_0040f75f();
  *unaff_FS_OFFSET = local_10;
  return &DAT_00438c70;
}

