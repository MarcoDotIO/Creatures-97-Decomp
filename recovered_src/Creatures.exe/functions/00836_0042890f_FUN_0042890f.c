/*
 * Program: Creatures.exe
 * Function: FUN_0042890f
 * Entry: 0042890f
 * Namespace: Global
 * Prototype: undefined FUN_0042890f(int param_1)
 */


void __fastcall FUN_0042890f(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  
  iVar3 = 0;
  Ordinal_339(in_EAX,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = param_1 + 0x148;
  do {
    iVar3 = iVar3 + 1;
    Ordinal_4819(iVar2,4);
    Ordinal_4819(iVar2 + 0x80,4);
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x20);
  iVar2 = param_1 + 4;
  iVar3 = 3;
  do {
    iVar1 = 0x1b;
    do {
      Ordinal_4819(iVar2,4);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00428994();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

