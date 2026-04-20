/*
 * Program: Creatures.exe
 * Function: FUN_0040e700
 * Entry: 0040e700
 * Namespace: Global
 * Prototype: undefined FUN_0040e700(int param_1)
 */


void __fastcall FUN_0040e700(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_2c;
  int local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10 [4];
  
  iVar8 = 6;
  FUN_0041a990(*(void **)(param_1 + 0x54),(uint)*(byte *)(param_1 + 0x70));
  puVar4 = (undefined4 *)(param_1 + 0x58);
  puVar5 = puVar4;
  do {
    for (pvVar1 = (void *)*puVar5; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x26)) {
      FUN_0041a990(pvVar1,(uint)*(byte *)(param_1 + 0x70));
    }
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar9 = 0;
  local_10[0] = 2 - (uint)(*(char *)(param_1 + 0x71) == '\0');
  iVar6 = 0;
  for (iVar8 = *(int *)(param_1 + 0x58 + local_10[0] * 4); iVar8 != 0;
      iVar8 = *(int *)(iVar8 + 0x26)) {
    iVar2 = *(int *)(iVar8 + 0x22);
    iVar9 = (iVar9 - (uint)*(byte *)(iVar8 + 0x2a + iVar2)) + (uint)*(byte *)(iVar8 + 0x3e + iVar2);
    iVar6 = (iVar6 - (uint)*(byte *)(iVar8 + 0x34 + iVar2)) + (uint)*(byte *)(iVar8 + 0x48 + iVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x54);
  iVar8 = *(int *)((int)pvVar1 + 0x22) + local_10[0] * 10;
  FUN_0041a310(pvVar1,(*(int *)(param_1 + 0x72) - (uint)*(byte *)((int)pvVar1 + iVar8 + 0x26)) -
                      iVar9,
               (*(int *)(param_1 + 0x76) - (uint)*(byte *)((int)pvVar1 + iVar8 + 0x62)) - iVar6);
  iVar8 = *(int *)(param_1 + 0x54);
  piVar7 = (int *)(param_1 + 0xf2);
  *piVar7 = *(int *)(iVar8 + 0xe);
  *(int *)(param_1 + 0xfa) =
       *(int *)((uint)*(byte *)(iVar8 + 8) * 0x1d + 0xd + *(int *)(*(int *)(iVar8 + 4) + 4)) +
       *(int *)(iVar8 + 0xe);
  *(undefined4 *)(param_1 + 0xf6) = *(undefined4 *)(iVar8 + 0x12);
  local_28 = 0;
  *(int *)(param_1 + 0xfe) =
       *(int *)((uint)*(byte *)(iVar8 + 8) * 0x1d + 0x11 + *(int *)(*(int *)(iVar8 + 4) + 4)) +
       *(int *)(iVar8 + 0x12);
  local_2c = puVar4;
  do {
    iVar8 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(iVar8 + 0x22) + local_28 + iVar8;
    iVar9 = (uint)*(byte *)(iVar6 + 0x26) + *(int *)(iVar8 + 0xe);
    iVar8 = (uint)*(byte *)(iVar6 + 0x62) + *(int *)(iVar8 + 0x12);
    for (pvVar1 = (void *)*local_2c; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x26))
    {
      iVar6 = *(int *)((int)pvVar1 + 0x22);
      FUN_0041a310(pvVar1,iVar9 - (uint)*(byte *)((int)pvVar1 + iVar6 + 0x2a),
                   iVar8 - (uint)*(byte *)((int)pvVar1 + iVar6 + 0x34));
      iVar9 = (iVar9 - (uint)*(byte *)((int)pvVar1 + iVar6 + 0x2a)) +
              (uint)*(byte *)((int)pvVar1 + iVar6 + 0x3e);
      local_20 = *(int *)((int)pvVar1 + 0xe);
      iVar8 = (iVar8 - (uint)*(byte *)((int)pvVar1 + iVar6 + 0x34)) +
              (uint)*(byte *)((int)pvVar1 + iVar6 + 0x48);
      local_18 = *(int *)((uint)*(byte *)((int)pvVar1 + 8) * 0x1d + 0xd +
                         *(int *)(*(int *)((int)pvVar1 + 4) + 4)) + *(int *)((int)pvVar1 + 0xe);
      local_1c = *(undefined4 *)((int)pvVar1 + 0x12);
      local_14 = *(int *)((uint)*(byte *)((int)pvVar1 + 8) * 0x1d + 0x11 +
                         *(int *)(*(int *)((int)pvVar1 + 4) + 4)) + *(int *)((int)pvVar1 + 0x12);
      piVar3 = (int *)FUN_0040b450(local_10,piVar7,&local_20);
      *piVar7 = *piVar3;
      *(int *)(param_1 + 0xf6) = piVar3[1];
      *(int *)(param_1 + 0xfa) = piVar3[2];
      *(int *)(param_1 + 0xfe) = piVar3[3];
    }
    local_28 = local_28 + 10;
    *(int *)((int)local_2c + 0x6a) = iVar9;
    *(int *)((int)local_2c + 0x82) = iVar8;
    local_2c = local_2c + 1;
  } while (local_28 < 0x3c);
  FUN_0041a9f0((void *)*puVar4,(uint)*(byte *)(param_1 + 0x70),(uint)*(byte *)(param_1 + 0x113),
               (uint)*(byte *)(param_1 + 0x114));
  return;
}

