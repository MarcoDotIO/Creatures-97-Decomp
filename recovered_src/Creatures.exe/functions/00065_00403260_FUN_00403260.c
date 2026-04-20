/*
 * Program: Creatures.exe
 * Function: FUN_00403260
 * Entry: 00403260
 * Namespace: Global
 * Prototype: undefined FUN_00403260(void * this, int * param_1, int * param_2)
 */


void __thiscall FUN_00403260(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_30 [20];
  int *local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004033d1;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0;
  local_1c = (int *)((int)this + 4);
  iVar4 = *param_1 + *local_1c;
  iVar2 = *param_2 + *(int *)((int)this + 8);
  if (iVar4 < 0) {
    local_18 = -1;
    iVar4 = iVar4 + 0x20a0;
  }
  else if (0x209f < iVar4) {
    local_18 = 1;
    iVar4 = iVar4 + -0x20a0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 0x10)) + 0x4b0;
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
  }
  *param_1 = iVar4 - *local_1c;
  iVar2 = iVar2 - *(int *)((int)this + 8);
  *param_2 = iVar2;
  if (iVar2 != 0 || *param_1 != 0) {
    *local_1c = *local_1c + *param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + *param_2;
    iVar4 = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + *param_1;
    iVar2 = 0;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *param_2;
    local_14 = this;
    if (0 < DAT_00437fb8) {
      do {
        cVar1 = (char)(*(int **)(DAT_00437fb4 + iVar4))[2];
        if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
          (**(code **)(**(int **)(DAT_00437fb4 + iVar4) + 0x48))(*param_1,*param_2);
        }
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00437fb8);
    }
    Ordinal_285(*(undefined4 *)((int)local_14 + 0x2c));
    local_8 = 0;
    FUN_00402b90(local_14,(int)local_30,*local_1c,local_1c[1],local_1c[2],local_1c[3]);
    local_8 = 0xffffffff;
    FUN_004033db();
  }
  iVar2 = *param_1;
  *unaff_FS_OFFSET = local_10;
  *param_1 = iVar2 + local_18 * 0x20a0;
  return;
}

