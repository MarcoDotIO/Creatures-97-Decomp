/*
 * Program: Creatures.exe
 * Function: FUN_004068a5
 * Entry: 004068a5
 * Namespace: Global
 * Prototype: undefined4 FUN_004068a5(undefined4 * param_1)
 */


undefined4 __fastcall FUN_004068a5(undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_00410420(param_1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = *(int **)(unaff_EBP + 0x10);
  if (*(int **)(unaff_EBP + 0x10) == (int *)0x0) {
    piVar4 = DAT_004382c4;
  }
  (**(code **)(*piVar4 + 0x60))(unaff_EBP + -0x1c);
  iVar6 = *(int *)(unaff_EBP + -0x1c) -
          ((int)((*(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x14)) +
                 (uint)*(byte *)(unaff_EBP + 8) + 1) >> 1);
  *(int *)(unaff_EBP + -0x1c) = iVar6;
  *(uint *)(unaff_EBP + -0x14) = (uint)*(byte *)(unaff_EBP + 8) + iVar6;
  iVar5 = *(int *)(unaff_EBP + -0x18) -
          ((int)((*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x10)) +
                 (uint)*(byte *)(unaff_EBP + 0xc) + 1) >> 1);
  *(int *)(unaff_EBP + -0x18) = iVar5;
  iVar6 = DAT_00436eb0;
  *(uint *)(unaff_EBP + -0x10) = (uint)*(byte *)(unaff_EBP + 0xc) + iVar5;
  CopyRect((LPRECT)(unaff_EBP + -0x4c),(RECT *)(*(int *)(iVar6 + 0x60) + 4));
  BVar1 = IntersectRect((LPRECT)(unaff_EBP + -0x3c),(RECT *)(unaff_EBP + -0x1c),
                        (RECT *)(unaff_EBP + -0x4c));
  if (BVar1 != 0) {
    BVar1 = EqualRect((RECT *)(unaff_EBP + -0x3c),(RECT *)(unaff_EBP + -0x1c));
    if (BVar1 != 0) {
      puVar3 = (undefined4 *)
               FUN_00403110(*(void **)(DAT_00436eb0 + 0x60),(int *)(unaff_EBP + -0x2c),
                            (int *)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -0x1c) = *puVar3;
      *(undefined4 *)(unaff_EBP + -0x18) = puVar3[1];
      *(undefined4 *)(unaff_EBP + -0x14) = puVar3[2];
      *(undefined4 *)(unaff_EBP + -0x10) = puVar3[3];
      uVar2 = FUN_00410520(*(int *)(DAT_00436eb0 + 0x60) + 0x3c,
                           *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 0x46c),
                           (int *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0x14));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      FUN_004069e4();
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      goto LAB_00406948;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004069e4();
  uVar2 = 0;
LAB_00406948:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}

