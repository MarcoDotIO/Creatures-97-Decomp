/*
 * Program: Creatures.exe
 * Function: FUN_00405fbc
 * Entry: 00405fbc
 * Namespace: Global
 * Prototype: undefined FUN_00405fbc(void)
 */


void FUN_00405fbc(void)

{
  undefined4 in_EAX;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  
  puVar2 = (undefined4 *)(unaff_EBP + -0x113);
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = in_EAX;
    puVar2 = puVar2 + 1;
  }
  *(short *)puVar2 = (short)in_EAX;
  *(char *)((int)puVar2 + 2) = (char)in_EAX;
  Ordinal_486();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  Ordinal_3656(0xef15);
  Ordinal_486();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  Ordinal_3656(0xef16);
  iVar1 = FUN_0040b950(1,(char *)(unaff_EBP + -0x114),*(undefined4 *)(unaff_EBP + -0x10),
                       &DAT_00435c48);
  if (iVar1 != 0) {
    FUN_00405d40(unaff_EBP + -0x114);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00406059();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0040606b();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

