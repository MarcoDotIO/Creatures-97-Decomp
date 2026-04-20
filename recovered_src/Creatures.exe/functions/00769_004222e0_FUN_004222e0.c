/*
 * Program: Creatures.exe
 * Function: FUN_004222e0
 * Entry: 004222e0
 * Namespace: Global
 * Prototype: undefined4 FUN_004222e0(void * this, int param_1)
 */


undefined4 __thiscall FUN_004222e0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00414ec0(param_1);
  if (*(char *)(uVar1 * 0x10 + 0x845 + (int)this) == '\0') {
    *(undefined1 *)(uVar1 * 0x10 + 0x845 + (int)this) = 1;
    return 0xb4;
  }
  return 0x50;
}

