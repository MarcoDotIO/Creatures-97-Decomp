/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_004066f0
 * Entry: 004066f0
 * Namespace: Global
 * Prototype: undefined FUN_004066f0(int param_1)
 */


void __fastcall FUN_004066f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  puVar2 = (undefined4 *)(param_1 + 0x560);
  pvVar4 = (void *)(param_1 + 0x72c);
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    FUN_0040c0c0(pvVar4,(void *)*puVar2,0,local_8,(int *)0x0,0);
    FUN_0040ba60(puVar2 + -0x12,(RECT *)0x0,0,0);
    puVar2 = puVar2 + 0x19;
    pvVar4 = (void *)((int)pvVar4 + 0x28);
  }
  piVar5 = (int *)(param_1 + 0x70c);
  iVar3 = 2;
  pvVar4 = (void *)(param_1 + 0x7f4);
  do {
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
    FUN_0040c0c0(pvVar4,*(void **)(iVar1 + 0x48),0,local_8,(int *)0x0,0);
    iVar3 = iVar3 + -1;
    pvVar4 = (void *)((int)pvVar4 + 0x28);
  } while (iVar3 != 0);
  return;
}

