/*
 * Program: Creatures.exe
 * Function: FUN_00420b20
 * Entry: 00420b20
 * Namespace: Global
 * Prototype: undefined FUN_00420b20(void * param_1)
 */


void __fastcall FUN_00420b20(void *param_1)

{
  char *pcVar1;
  void *this;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_DAT_00436a78;
  this = (void *)((int)param_1 + 0xab6);
  do {
    pcVar1 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    FUN_0041dfd0(this,pcVar1);
    *(undefined4 *)((int)this + 0x32) = 0xff;
    this = (void *)((int)this + 0x36);
  } while (ppuVar2 < &DAT_00436ab8);
  FUN_0041dfd0((void *)((int)param_1 + 0xe16),&DAT_00436bd0);
  *(undefined4 *)((int)param_1 + 0xe48) = 0xff;
  FUN_0041dfd0((void *)((int)param_1 + 0x1a52),&DAT_00436bc8);
  *(undefined4 *)((int)param_1 + 0x1a84) = 0xff;
  FUN_0041dfd0((void *)((int)param_1 + 0x1a88),&DAT_00436bc0);
  *(undefined4 *)((int)param_1 + 0x1aba) = 0xff;
  if (*(char *)((int)param_1 + 0x2b6e) == '\0') {
    *(undefined1 *)((int)param_1 + 0x2b6e) = 1;
    FUN_00422db0(param_1);
  }
  *(undefined4 *)((int)param_1 + 0x2b6a) = 8;
  FUN_00421830(param_1,s_WAIT_FOR_40_SECS__00436bac);
  return;
}

