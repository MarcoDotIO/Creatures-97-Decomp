/*
 * Program: Health_Kit.exe
 * Function: FUN_00407890
 * Entry: 00407890
 * Namespace: Global
 * Prototype: undefined4 FUN_00407890(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00407890(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409e10((void *)((int)this + 0xb0),this,0,param_1,*(undefined4 *)((int)this + 0x218))
  ;
  if (iVar1 == 0) {
    return 0;
  }
  Ordinal_895((void *)((int)this + 0xb0));
  *(undefined4 *)((int)this + 0x214) = 0;
  uVar2 = Ordinal_1835(0,0x90ca0000,0);
  return uVar2;
}

