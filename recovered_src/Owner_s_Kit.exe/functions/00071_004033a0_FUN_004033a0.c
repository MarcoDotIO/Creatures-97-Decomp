/*
 * Program: Owner_s_Kit.exe
 * Function: FUN_004033a0
 * Entry: 004033a0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004033a0(void * this, int param_1)
 */


undefined4 * __thiscall FUN_004033a0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403428;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)Ordinal_729(0x30);
  puVar2 = (undefined4 *)0x0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00407130(puVar1);
  }
  local_8 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004072f0(param_1);
    Ordinal_5191(*(undefined4 *)((int)this + 0xb3c),puVar2);
  }
  *unaff_FS_OFFSET = local_10;
  return puVar2;
}

