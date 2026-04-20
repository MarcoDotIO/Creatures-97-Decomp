/*
 * Program: Creatures.exe
 * Function: FUN_004149a0
 * Entry: 004149a0
 * Namespace: Global
 * Prototype: int * FUN_004149a0(void * this, byte param_1, byte param_2)
 */


int * __thiscall FUN_004149a0(void *this,byte param_1,byte param_2)

{
  int *this_00;
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int *local_34;
  int aiStack_20 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_38 = -1;
  local_34 = (int *)0x0;
  if (this == DAT_00438d0c) {
    local_10 = *(int *)((int)DAT_00438d0c + 0x54) +
               *(int *)(*(int *)((int)DAT_00438d0c + 0x48) + 0xe);
    local_c = *(int *)((int)DAT_00438d0c + 0x58) +
              *(int *)(*(int *)((int)DAT_00438d0c + 0x48) + 0x12);
    local_8 = local_10 + 1;
    local_4 = local_c + 1;
  }
  else {
    (**(code **)(*(int *)this + 0x60))(&local_10);
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < DAT_00437fb8) {
    do {
      this_00 = *(int **)(DAT_00437fb4 + iVar3);
      if ((this != this_00) && ((*(byte *)((int)this_00 + 9) & param_1) == param_2)) {
        pcVar1 = *(code **)(*this_00 + 100);
        iVar2 = (*pcVar1)();
        if (local_38 < iVar2) {
          if (((param_2 & 8) == 0) ||
             (((this_00[1] & 0xffff0000U) != 0x3010000 && ((this_00[1] & 0xffff0000U) != 0x3020000))
             )) {
            (**(code **)(*this_00 + 0x60))(aiStack_20);
          }
          else {
            FUN_00417f60(this_00,aiStack_20);
          }
          iVar2 = FUN_0040b250(&local_10,aiStack_20);
          if (iVar2 != 0) {
            local_38 = (*pcVar1)();
            local_34 = this_00;
          }
        }
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00437fb8);
  }
  return local_34;
}

