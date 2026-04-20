/*
 * Program: Science_Kit.exe
 * Function: FUN_00407f00
 * Entry: 00407f00
 * Namespace: Global
 * Prototype: uint FUN_00407f00(byte * param_1)
 */


uint FUN_00407f00(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *unaff_FS_OFFSET;
  bool bVar4;
  byte local_90 [96];
  undefined4 local_30 [7];
  uint local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407fd4;
  *unaff_FS_OFFSET = &local_10;
  FUN_00404520(local_30);
  local_8 = 0;
  iVar2 = FUN_00404660(local_30,s_Millennium_Interactive_00415184,s_Creatures_004152d8,&DAT_004151b4
                      );
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_00407fde();
    local_14 = 0;
  }
  else {
    FUN_00404b10(local_30,0,s_Privileges_00415554,local_90,0x60,&DAT_00415560);
    pbVar3 = local_90;
    do {
      bVar1 = *param_1;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00407fac:
        iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_00407fb1;
      }
      if (bVar1 == 0) break;
      bVar1 = param_1[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00407fac;
      param_1 = param_1 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00407fb1:
    local_14 = (uint)(iVar2 == 0);
    local_8 = 0xffffffff;
    FUN_00407fde();
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}

