/*
 * Program: Creatures.exe
 * Function: FUN_00420720
 * Entry: 00420720
 * Namespace: Global
 * Prototype: undefined FUN_00420720(void * this, char * param_1, int param_2, int param_3)
 */


void __thiscall FUN_00420720(void *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(char *)((int)this + 0x115) == '\0') {
    iVar2 = _stricmp(param_1,(char *)((int)this + param_2 * 0x36 + 0xab6));
    if (iVar2 == 0) {
      uVar3 = *(byte *)((int)this + param_2 * 0x36 + 0xae8) + 0x3c;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      *(uint *)((int)this + param_2 * 0x36 + 0xae8) = uVar3 & 0xff;
      if (0x4f < (uVar3 & 0xff)) {
        FUN_004209e0(this,param_2);
      }
      if (0x9f < *(int *)((int)this + param_2 * 0x36 + 0xae8)) {
        uVar3 = 0xffffffff;
        pcVar5 = (char *)((int)this + param_2 * 0x36 + 0xab6);
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
        pcVar6 = (char *)((int)this + param_2 * 0x36 + 0xacf);
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
    }
    else {
      uVar3 = *(byte *)((int)this + param_2 * 0x36 + 0xae8) - 0x2d;
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      *(uint *)((int)this + param_2 * 0x36 + 0xae8) = uVar3 & 0xff;
    }
    if (*(int *)((int)this + param_2 * 0x36 + 0xae8) < 1) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = (char *)((int)this + param_2 * 0x36 + 0xab6);
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
      FUN_00420870(this,param_2);
      *(undefined4 *)((int)this + param_2 * 0x36 + 0xae8) = 0x3c;
    }
    if ((*(uint *)(param_3 + 4) & 0xff000000) == 0x4000000) {
      uVar3 = rand();
      uVar4 = (int)uVar3 >> 0x1f;
      if (((uVar3 ^ uVar4) - uVar4 & 3 ^ uVar4) != uVar4) {
        return;
      }
    }
    FUN_00421830(this,(char *)((int)this + param_2 * 0x36 + 0xacf));
  }
  return;
}

