/*
 * Program: Creatures.exe
 * Function: FUN_00417090
 * Entry: 00417090
 * Namespace: Global
 * Prototype: undefined FUN_00417090(void * this, char * param_1)
 */


void __thiscall FUN_00417090(void *this,char *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (~uVar3 - 1 < 0x18) {
    uVar3 = 0xffffffff;
    pcVar5 = param_1;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)((int)this + 0x55);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    strncpy((char *)((int)this + 0x55),param_1,0x18);
    *(undefined1 *)((int)this + 0x6d) = 0;
  }
  uVar2 = FUN_0040d120(param_1);
  FUN_0040cd20((void *)(*(int *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 4) +
                       (uint)*(byte *)(*(int *)((int)this + 0x48) + 8) * 0x1d),6,3,0x96,0xf,0xf2);
  FUN_0040cda0((void *)(*(int *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 4) +
                       (uint)*(byte *)(*(int *)((int)this + 0x48) + 8) * 0x1d),
               (int)(0x90 - (uint)uVar2) / 2 + 6,3,(char *)((int)this + 0x55),0xf2,0xb,0xc2);
  FUN_0041a4a0(*(void **)((int)this + 0x48),&local_10);
  FUN_00402ab0(*(void **)(DAT_00436eb0 + 0x60),local_10,local_c,local_8,local_4);
  return;
}

