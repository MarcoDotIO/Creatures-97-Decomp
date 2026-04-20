/*
 * Program: Funeral_Kit.exe
 * Function: FUN_00403880
 * Entry: 00403880
 * Namespace: Global
 * Prototype: undefined4 FUN_00403880(int param_1)
 */


undefined4 __fastcall FUN_00403880(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 auStack_8c [36];
  int *piStack_68;
  int *piStack_64;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined2 uStack_34;
  undefined **appuStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00403a71;
  *unaff_FS_OFFSET = &uStack_10;
  local_38 = DAT_00410234;
  uStack_34 = DAT_00410238;
  Ordinal_340();
  iStack_8 = 0;
  Ordinal_336();
  iStack_8._0_1_ = 1;
  Ordinal_486();
  iStack_8._0_1_ = 2;
  appuStack_2c[0] = &PTR_LAB_0040d030;
  uStack_20 = 0xffffffff;
  uStack_24 = 0;
  Ordinal_762(0);
  iStack_8._0_1_ = 3;
  iVar2 = Ordinal_4619(&local_38,0,appuStack_2c);
  if (iVar2 == 0) {
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00403a69();
    iStack_8 = 0xffffffff;
    FUN_00403a7b();
    uVar3 = 0;
  }
  else {
    Ordinal_271(auStack_48,1,0x1000,0);
    iStack_8 = CONCAT31(iStack_8._1_3_,4);
    if (piStack_64 < piStack_68 + 1) {
      Ordinal_2403((int)piStack_68 + (4 - (int)piStack_64));
    }
    iVar2 = *piStack_68;
    piStack_68 = piStack_68 + 1;
    iStack_14 = iVar2;
    if (0 < iVar2) {
      do {
        if (piStack_64 < piStack_68 + 1) {
          Ordinal_2403((int)piStack_68 + (4 - (int)piStack_64));
        }
        iVar1 = *piStack_68;
        piStack_68 = piStack_68 + 1;
        Ordinal_5194(*(undefined4 *)(param_1 + 0x1d8),iVar1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    Ordinal_486();
    iStack_8._0_1_ = 5;
    iVar2 = iStack_14;
    if (0 < iStack_14) {
      do {
        Ordinal_781(auStack_8c,&uStack_18);
        Ordinal_5193(*(undefined4 *)(param_1 + 0x1ec),uStack_18);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    Ordinal_1725();
    Ordinal_1717();
    iStack_8._0_1_ = 4;
    FUN_00403a46();
    iStack_8._0_1_ = 3;
    FUN_00403a4e();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FUN_00403a69();
    iStack_8 = 0xffffffff;
    FUN_00403a7b();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = uStack_10;
  return uVar3;
}

