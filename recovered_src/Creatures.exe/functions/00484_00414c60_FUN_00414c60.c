/*
 * Program: Creatures.exe
 * Function: FUN_00414c60
 * Entry: 00414c60
 * Namespace: Global
 * Prototype: byte FUN_00414c60(int * param_1)
 */


byte __fastcall FUN_00414c60(int *param_1)

{
  int iVar1;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [16];
  
  iVar1 = *(int *)(DAT_00436eb0 + 0x60);
  local_20 = *(undefined4 *)(iVar1 + 4);
  local_1c = *(undefined4 *)(iVar1 + 8);
  local_18 = *(undefined4 *)(iVar1 + 0xc);
  local_14 = *(int *)(iVar1 + 0x10);
  (**(code **)(*param_1 + 0x60))(local_10);
  iVar1 = FUN_0040b250(&local_14,&iStack_24);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0040b250(&local_14,(int *)&stack0xffffffcc);
  return (iVar1 == 0) - 1U & 2;
}

