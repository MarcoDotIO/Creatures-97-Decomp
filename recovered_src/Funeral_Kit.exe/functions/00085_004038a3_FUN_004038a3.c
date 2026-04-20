/*
 * Program: Funeral_Kit.exe
 * Function: FUN_004038a3
 * Entry: 004038a3
 * Namespace: Global
 * Prototype: undefined4 FUN_004038a3(int param_1, undefined4 * param_2)
 */


undefined4 __fastcall FUN_004038a3(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  uVar1 = *(undefined2 *)(in_EAX + 1);
  *param_2 = *in_EAX;
  *(undefined2 *)(param_2 + 1) = uVar1;
  Ordinal_340();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  Ordinal_336();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  Ordinal_486();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_LAB_0040d030;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  Ordinal_762(0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = Ordinal_4619(unaff_EBP + -0x34,0,unaff_EBP + -0x28);
  if (iVar3 == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00403a69();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00403a7b();
    uVar4 = 0;
  }
  else {
    Ordinal_271(unaff_EBP + -0x44,1,0x1000,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(uint *)(unaff_EBP + -0x60) < *(int *)(unaff_EBP + -100) + 4U) {
      Ordinal_2403((*(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x60)) + 4);
    }
    iVar3 = **(int **)(unaff_EBP + -100);
    *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -100) + 4;
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (0 < iVar3) {
      do {
        if (*(uint *)(unaff_EBP + -0x60) < *(int *)(unaff_EBP + -100) + 4U) {
          Ordinal_2403((*(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x60)) + 4);
        }
        uVar4 = **(undefined4 **)(unaff_EBP + -100);
        uVar2 = *(undefined4 *)(param_1 + 0x1d8);
        *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -100) + 4;
        Ordinal_5194(uVar2,uVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    Ordinal_486();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (0 < *(int *)(unaff_EBP + -0x10)) {
      iVar3 = *(int *)(unaff_EBP + -0x10);
      do {
        Ordinal_781(unaff_EBP + -0x88,unaff_EBP + -0x14);
        Ordinal_5193(*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(unaff_EBP + -0x14));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    Ordinal_1725();
    Ordinal_1717();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00403a46();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403a4e();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00403a69();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00403a7b();
    uVar4 = 1;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar4;
}

