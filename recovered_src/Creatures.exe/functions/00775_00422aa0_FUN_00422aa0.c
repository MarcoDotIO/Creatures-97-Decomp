/*
 * Program: Creatures.exe
 * Function: FUN_00422aa0
 * Entry: 00422aa0
 * Namespace: Global
 * Prototype: int * FUN_00422aa0(void * this, undefined4 param_1, int param_2)
 */


int * __thiscall FUN_00422aa0(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_120;
  undefined4 local_11f;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00422d99;
  *unaff_FS_OFFSET = &local_10;
  local_14 = this;
  FUN_0040de30(this,param_1);
  local_8 = 0;
  *(undefined ***)((int)this + 0x7f7) = &PTR_LAB_0043124c;
  iVar6 = 0x27;
  FUN_00409b10((undefined4 *)((int)this + 0x7fb));
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar2 = (undefined4 *)((int)this + 0x836);
  do {
    FUN_00421990(puVar2);
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar6);
  iVar6 = 0x4f;
  puVar4 = (undefined1 *)((int)this + 0xab6);
  do {
    FUN_0041dfc0(puVar4);
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 0x36;
  } while (-1 < iVar6);
  iVar7 = 0x23;
  iVar6 = (int)this + 0x25a0;
  do {
    FUN_00401a00(iVar6);
    iVar7 = iVar7 + -1;
    iVar6 = iVar6 + 0x14;
  } while (-1 < iVar7);
  FUN_004283d0((undefined4 *)((int)this + 0x2870));
  local_8._0_1_ = 2;
  FUN_004010b0((undefined4 *)((int)this + 0x2b79));
  local_8._0_1_ = 3;
  *(undefined ***)this = &PTR_LAB_00431258;
  *(undefined ***)((int)this + 0x7f7) = &PTR_LAB_00431250;
  if (param_2 == 0) {
    local_1c = 0;
    local_18 = (undefined4 *)0x0;
    piVar5 = DAT_00437f9c;
    iVar6 = DAT_00437fa0;
    if (0 < DAT_00437fa0) {
      do {
        if (*(char *)(*piVar5 + 0x2b78) == '\0') {
          (&local_20)[*(byte *)(*piVar5 + 0x2b6f)] =
               (undefined4 *)((int)(&local_20)[*(byte *)(*piVar5 + 0x2b6f)] + 1);
        }
        iVar6 = iVar6 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)local_18 + local_1c;
    if (iVar6 == 0) {
      uVar1 = rand();
      uVar3 = (int)uVar1 >> 0x1f;
      uVar3 = ((uVar1 ^ uVar3) - uVar3 & 1 ^ uVar3) - uVar3;
    }
    else {
      iVar7 = rand();
      uVar3 = (uint)(iVar7 % iVar6 + 1 <= local_1c);
    }
    param_2 = uVar3 + 1;
  }
  *(char *)((int)this + 0x2b6f) = (char)param_2;
  FUN_0041ef60((int)this);
  local_18 = (undefined4 *)Ordinal_729(0xc2c);
  local_8._0_1_ = 4;
  puVar2 = (undefined4 *)0x0;
  if (local_18 != (undefined4 *)0x0) {
    puVar2 = FUN_0042a6a0(local_18);
  }
  local_8._0_1_ = 3;
  *(undefined4 **)((int)this + 0x2ac8) = puVar2;
  local_20 = (undefined4 *)Ordinal_729(0x1294);
  local_8._0_1_ = 5;
  puVar2 = (undefined4 *)0x0;
  if (local_20 != (undefined4 *)0x0) {
    puVar2 = FUN_00409df0(local_20);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 **)((int)this + 0x2acc) = puVar2;
  puVar2[1] = this;
  FUN_00422db0(this);
  local_120 = '\0';
  puVar2 = &local_11f;
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  wsprintfA(&local_120,&DAT_00436b98,*(undefined4 *)((int)this + 0x48));
  Ordinal_762(&local_120);
  wsprintfA(&local_120,&DAT_00436b98,*(undefined4 *)((int)this + 0x50));
  Ordinal_762(&local_120);
  wsprintfA(&local_120,&DAT_00436b98,*(undefined4 *)((int)this + 0x4c));
  Ordinal_762(&local_120);
  *(undefined1 *)((int)this + 8) = 2;
  FUN_00414f10(this);
  FUN_0040f240(this,1000,2000);
  FUN_0040eb30(this,s_211111111111111_00436bd4);
  FUN_004205e0((int)this);
  FUN_0040ab40(*(void **)((int)this + 0x2acc),*(uint *)((int)this + 0x2ad0));
  FUN_004224c0(this);
  *(undefined4 *)((int)this + 0x2b6a) = 1;
  FUN_00412350();
  *unaff_FS_OFFSET = local_10;
  return this;
}

