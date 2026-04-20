/*
 * Program: Creatures.exe
 * Function: FUN_00419530
 * Entry: 00419530
 * Namespace: Global
 * Prototype: undefined FUN_00419530(undefined4 * param_1)
 */


void __fastcall FUN_00419530(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004195bd;
  *param_1 = &PTR_LAB_00430df8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  if ((FILE *)param_1[0x1a] != (FILE *)0x0) {
    ftell((FILE *)param_1[0x1a]);
    FUN_004085a0(&DAT_00439e50,0,s_TipFilePos_0043647c);
    fclose((FILE *)param_1[0x1a]);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004195b2();
  local_8 = 0xffffffff;
  FUN_004195c7();
  *unaff_FS_OFFSET = local_10;
  return;
}

