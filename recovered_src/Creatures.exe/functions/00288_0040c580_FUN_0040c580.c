/*
 * Program: Creatures.exe
 * Function: FUN_0040c580
 * Entry: 0040c580
 * Namespace: Global
 * Prototype: undefined4 * FUN_0040c580(int param_1, int param_2, int param_3, int param_4)
 */


undefined4 * __cdecl FUN_0040c580(int param_1,int param_2,int param_3,int param_4)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c62a;
  *unaff_FS_OFFSET = &local_10;
  if ((param_4 == 0) && (iVar2 = 0, piVar3 = DAT_00438a0c, 0 < DAT_00438a10)) {
    do {
      puVar1 = (undefined4 *)*piVar3;
      if ((puVar1[3] == param_1) && (puVar1[4] == param_2)) {
        puVar1[5] = puVar1[5] + 1;
        goto LAB_0040c5de;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < DAT_00438a10);
  }
  this = (void *)Ordinal_729(0x18);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (void *)0x0) {
    puVar1 = FUN_0040c2d0(this,param_1,param_2,param_3,param_4);
  }
LAB_0040c5de:
  *unaff_FS_OFFSET = local_10;
  return puVar1;
}

