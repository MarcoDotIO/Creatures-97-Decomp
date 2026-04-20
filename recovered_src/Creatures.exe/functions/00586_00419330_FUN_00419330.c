/*
 * Program: Creatures.exe
 * Function: FUN_00419330
 * Entry: 00419330
 * Namespace: Global
 * Prototype: undefined4 * FUN_00419330(undefined4 param_1)
 */


undefined4 * FUN_00419330(undefined4 param_1)

{
  LPBYTE pBVar1;
  FILE *pFVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  BYTE local_144 [256];
  undefined1 local_44 [32];
  undefined8 local_24;
  uchar *local_1c;
  uchar *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004194f9;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_315(0x6a,param_1);
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  pBVar1 = (LPBYTE)(local_14 + 0x18);
  *local_14 = &PTR_LAB_00430df8;
  pBVar1[0] = '\x01';
  pBVar1[1] = '\0';
  pBVar1[2] = '\0';
  pBVar1[3] = '\0';
  FUN_00408420(&DAT_00439e50,0,s_TipStartup_00436488,pBVar1,1);
  FUN_00408420(&DAT_00439e50,0,s_TipFilePos_0043647c,(LPBYTE)((int)&local_24 + 4),0);
  pFVar2 = fopen(s_tips_txt_0043646c,&DAT_00436478);
  local_14[0x1a] = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    Ordinal_3656(0x6e);
  }
  else {
    fstat(pFVar2->_file,local_44);
    pcVar3 = ctime(&local_24);
    Ordinal_483(pcVar3);
    local_8._0_1_ = 2;
    Ordinal_5570();
    Ordinal_486();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004083b0(&DAT_00439e50,0,s_TipTimeStamp_00436454,local_144,0x100,&DAT_00436464);
    Ordinal_762(local_144);
    iVar4 = _mbscmp(local_18,local_1c);
    if (iVar4 != 0) {
      local_24._4_4_ = 0;
      FUN_00408550(&DAT_00439e50,0,s_TipTimeStamp_00436454,local_18);
    }
    iVar4 = fseek((FILE *)local_14[0x1a],local_24._4_4_,0);
    if (iVar4 == 0) {
      FUN_00419640((int)local_14);
    }
    else {
      Ordinal_1060(0x6f,0,0xffffffff);
    }
    local_8._0_1_ = 2;
    FUN_004194de();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004194e6();
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

