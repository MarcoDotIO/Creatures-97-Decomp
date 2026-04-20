/*
 * Program: Creatures.exe
 * Function: FUN_00406880
 * Entry: 00406880
 * Namespace: Global
 * Prototype: undefined4 FUN_00406880(byte param_1, byte param_2, int * param_3, undefined4 param_4)
 */


undefined4 FUN_00406880(byte param_1,byte param_2,int *param_3,undefined4 param_4)

{
  BOOL BVar1;
  LONG *pLVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_a4 [21];
  tagRECT tStack_50;
  tagRECT tStack_40;
  int aiStack_30 [3];
  undefined4 uStack_24;
  RECT RStack_20;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004069da;
  *unaff_FS_OFFSET = &uStack_10;
  FUN_00410420(local_a4);
  uStack_8 = 0;
  if (param_3 == (int *)0x0) {
    param_3 = DAT_004382c4;
  }
  (**(code **)(*param_3 + 0x60))(&RStack_20);
  RStack_20.left =
       RStack_20.left - ((int)((RStack_20.left - RStack_20.right) + (uint)param_1 + 1) >> 1);
  RStack_20.right = (uint)param_1 + RStack_20.left;
  RStack_20.top =
       RStack_20.top - ((int)((RStack_20.top - RStack_20.bottom) + (uint)param_2 + 1) >> 1);
  RStack_20.bottom = (uint)param_2 + RStack_20.top;
  CopyRect(&tStack_50,(RECT *)(*(int *)(DAT_00436eb0 + 0x60) + 4));
  BVar1 = IntersectRect(&tStack_40,&RStack_20,&tStack_50);
  if (BVar1 != 0) {
    BVar1 = EqualRect(&tStack_40,&RStack_20);
    if (BVar1 != 0) {
      pLVar2 = (LONG *)FUN_00403110(*(void **)(DAT_00436eb0 + 0x60),aiStack_30,&RStack_20.left);
      RStack_20.left = *pLVar2;
      RStack_20.top = pLVar2[1];
      RStack_20.right = pLVar2[2];
      RStack_20.bottom = pLVar2[3];
      uStack_24 = FUN_00410520(*(int *)(DAT_00436eb0 + 0x60) + 0x3c,
                               *(int *)(*(int *)(DAT_00436eb0 + 0x60) + 0x46c),&RStack_20.left,
                               param_4);
      uStack_8 = 0xffffffff;
      FUN_004069e4();
      goto LAB_00406948;
    }
  }
  uStack_8 = 0xffffffff;
  FUN_004069e4();
  uStack_24 = 0;
LAB_00406948:
  *unaff_FS_OFFSET = uStack_10;
  return uStack_24;
}

