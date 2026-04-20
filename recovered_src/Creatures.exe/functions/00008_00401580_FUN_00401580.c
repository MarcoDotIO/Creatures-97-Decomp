/*
 * Program: Creatures.exe
 * Function: FUN_00401580
 * Entry: 00401580
 * Namespace: Global
 * Prototype: uint FUN_00401580(void * this, int * param_1)
 */


uint __thiscall FUN_00401580(void *this,int *param_1)

{
  int *piVar1;
  undefined4 in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 4));
  iVar4 = 0;
  if (*(char *)((int)this + 4) != '\0') {
    iVar5 = 0;
    if (0 < DAT_00438868) {
      do {
        piVar1 = *(int **)(DAT_00438864 + iVar4);
        if ((piVar1 != param_1) && (iVar2 = FUN_0041fea0(param_1,piVar1), iVar2 != 0)) {
          iVar4 = rand();
          if (iVar4 % 5 != 0) {
            return iVar4 / 5;
          }
          uVar3 = FUN_00401390(this,(int)piVar1);
          return uVar3;
        }
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00438868);
    }
    iVar4 = rand();
    uVar3 = iVar4 / 0xb;
    if (iVar4 % 0xb == 0) {
      iVar4 = 0;
      do {
        iVar5 = DAT_00438594 + iVar4;
        iVar4 = iVar4 + 0xc;
        FUN_004011c0((void *)(iVar5 + 0x740),iVar5 + 0x74c);
      } while (iVar4 < 0x4a4);
      uVar3 = FUN_004013b0(this,(void *)(DAT_00438594 + 0xbe4));
    }
  }
  return uVar3;
}

