/*
 * Program: Creatures.exe
 * Function: FUN_004264b0
 * Entry: 004264b0
 * Namespace: Global
 * Prototype: undefined FUN_004264b0(void * param_1)
 */


void __fastcall FUN_004264b0(void *param_1)

{
  char cVar1;
  void *this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_64 [100];
  
  this = *(void **)((int)param_1 + 0xa4);
  uVar2 = **(uint **)((int)param_1 + 0x10);
  *(int *)((int)param_1 + 0x10) = (int)*(uint **)((int)param_1 + 0x10) + 5;
  if (uVar2 < 0x74696466) {
    if (uVar2 == 0x74696465) {
      uVar2 = FUN_00424710(param_1);
      FUN_00418f00(this,uVar2);
      return;
    }
    if (uVar2 == 0x64726f77) {
      uVar2 = FUN_00424710(param_1);
      uVar3 = FUN_00424710(param_1);
      FUN_004253e0(param_1,local_64);
      uVar4 = 0xffffffff;
      pcVar6 = local_64;
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = (char *)(uVar2 * 0xb + 0x13c + (int)this);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(uint *)((int)this + uVar2 * 4 + 0x1ec) = uVar3;
      return;
    }
  }
  else {
    if (uVar2 == 0x74696d65) {
      uVar2 = FUN_00424710(param_1);
      FUN_00418e90(this,uVar2);
      return;
    }
    if (uVar2 == 0x776f6873) {
      uVar2 = FUN_00424710(param_1);
      FUN_00418d40(this,uVar2);
      return;
    }
  }
  FUN_004265c0(param_1,s__bbd___command_00436ca8);
  return;
}

