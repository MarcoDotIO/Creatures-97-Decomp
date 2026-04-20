/*
 * Program: Creatures.exe
 * Function: FUN_004010b0
 * Entry: 004010b0
 * Namespace: Global
 * Prototype: undefined4 * FUN_004010b0(undefined4 * param_1)
 */


undefined4 * __fastcall FUN_004010b0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040113e;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_LAB_0042f018;
  local_8 = 0;
  *param_1 = &PTR_LAB_0042f000;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0xb4;
  *(undefined1 *)((int)param_1 + 7) = 0x50;
  iVar3 = rand();
  bVar1 = (byte)(iVar3 >> 0x1f);
  *(byte *)((int)param_1 + 5) = ((((byte)iVar3 ^ bVar1) - bVar1 & 7 ^ bVar1) - bVar1) + -8;
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    iVar2 = rand();
    bVar1 = (byte)(iVar2 >> 0x1f);
    *(byte *)((int)param_1 + iVar3 + 8) =
         ((((byte)iVar2 ^ bVar1) - bVar1 & 3 ^ bVar1) - bVar1) + -0x18;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

