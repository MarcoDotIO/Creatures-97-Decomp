/*
 * Program: Creatures.exe
 * Function: FUN_0041ed80
 * Entry: 0041ed80
 * Namespace: Global
 * Prototype: undefined FUN_0041ed80(void * this, char * param_1)
 */


void __thiscall FUN_0041ed80(void *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041ee7a;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = 0;
  do {
    pcVar1 = strchr(param_1,0x7c);
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
    *pcVar1 = '\0';
    Ordinal_762(param_1);
    param_1 = pcVar1 + 1;
  } while (iVar2 < 10);
  Ordinal_483(*(undefined4 *)((int)this + 0x807));
  local_8 = 0;
  FUN_00412350();
  pcVar1 = (char *)Ordinal_2557(0x19);
  FUN_0041dfd0((void *)((int)this + 0xe16),pcVar1);
  *(undefined4 *)((int)this + 0xe48) = 0xff;
  if (DAT_004382c4 == this) {
    FUN_0041d060(2,7,0,0);
    if (DAT_00436eb4 != 0) {
      FUN_00428e00(DAT_00436eb4);
    }
    FUN_004126c0();
  }
  local_8 = 0xffffffff;
  FUN_0041ee84();
  *unaff_FS_OFFSET = local_10;
  return;
}

