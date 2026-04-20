/*
 * Program: Creatures.exe
 * Function: FUN_004205e0
 * Entry: 004205e0
 * Namespace: Global
 * Prototype: undefined FUN_004205e0(int param_1)
 */


void __fastcall FUN_004205e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((*(uint *)(param_1 + 4) & 0xffff0000) != 0x4010000) {
    iVar5 = 4;
  }
  pvVar4 = (void *)(param_1 + 0xab6);
  for (iVar3 = 0; iVar3 < 0x10; iVar3 = iVar3 + 1) {
    uVar1 = rand();
    uVar2 = (int)uVar1 >> 0x1f;
    FUN_0041dfd0(pvVar4,(&PTR_DAT_00436908)
                        [((((uVar1 ^ uVar2) - uVar2 & 3 ^ uVar2) - uVar2) + iVar5) * 5]);
    pvVar4 = (void *)((int)pvVar4 + 0x36);
  }
  pvVar4 = (void *)(param_1 + 0xe16);
  for (iVar3 = 0x10; iVar3 < 0x38; iVar3 = iVar3 + 1) {
    uVar1 = rand();
    uVar2 = (int)uVar1 >> 0x1f;
    FUN_0041dfd0(pvVar4,(&PTR_DAT_0043690c)
                        [((((uVar1 ^ uVar2) - uVar2 & 3 ^ uVar2) - uVar2) + iVar5) * 5]);
    pvVar4 = (void *)((int)pvVar4 + 0x36);
  }
  pvVar4 = (void *)(param_1 + 0x1686);
  for (iVar3 = 0x38; iVar3 < 0x48; iVar3 = iVar3 + 1) {
    uVar1 = rand();
    uVar2 = (int)uVar1 >> 0x1f;
    FUN_0041dfd0(pvVar4,(&PTR_DAT_00436910)
                        [((((uVar1 ^ uVar2) - uVar2 & 3 ^ uVar2) - uVar2) + iVar5) * 5]);
    pvVar4 = (void *)((int)pvVar4 + 0x36);
  }
  iVar3 = 8;
  pvVar4 = (void *)(param_1 + 0x19e6);
  do {
    uVar1 = rand();
    uVar2 = (int)uVar1 >> 0x1f;
    FUN_0041dfd0(pvVar4,(&PTR_DAT_00436914)
                        [((((uVar1 ^ uVar2) - uVar2 & 3 ^ uVar2) - uVar2) + iVar5) * 5]);
    iVar3 = iVar3 + -1;
    pvVar4 = (void *)((int)pvVar4 + 0x36);
  } while (iVar3 != 0);
  uVar1 = rand();
  uVar2 = (int)uVar1 >> 0x1f;
  FUN_0041dfd0((void *)(param_1 + 0xe16),
               (&PTR_DAT_00436918)[((((uVar1 ^ uVar2) - uVar2 & 3 ^ uVar2) - uVar2) + iVar5) * 5]);
  return;
}

