/*
 * Program: Creatures.exe
 * Function: FUN_0040e9e0
 * Entry: 0040e9e0
 * Namespace: Global
 * Prototype: undefined FUN_0040e9e0(void * param_1)
 */


void __fastcall FUN_0040e9e0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x71) == '\0') {
    uVar2 = *(undefined4 *)((int)param_1 + 0xca);
    iVar1 = *(int *)((int)param_1 + 0xe2);
  }
  else {
    uVar2 = *(undefined4 *)((int)param_1 + 0xc6);
    iVar1 = *(int *)((int)param_1 + 0xde);
  }
  if (*(int *)((int)param_1 + 0x16) < iVar1) {
    *(undefined4 *)((int)param_1 + 0x72) = uVar2;
    *(int *)((int)param_1 + 0x76) = *(int *)((int)param_1 + 0x16);
    *(char *)((int)param_1 + 0x71) = '\x01' - *(char *)((int)param_1 + 0x71);
    FUN_0040e700((int)param_1);
    FUN_00419180(param_1,0x70657473,0);
  }
  return;
}

