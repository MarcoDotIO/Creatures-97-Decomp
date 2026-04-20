/*
 * Program: Creatures.exe
 * Function: FUN_00422ed0
 * Entry: 00422ed0
 * Namespace: Global
 * Prototype: undefined FUN_00422ed0(void * this, uint param_1)
 */


void __thiscall FUN_00422ed0(void *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined1 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00422f9d;
  *unaff_FS_OFFSET = &uStack_10;
  if (*(byte *)((int)this + 0x115) != param_1) {
    *(char *)((int)this + 0x115) = (char)param_1;
    if (param_1 == 0) {
      pvVar2 = *(void **)((int)this + 0x2ac4);
      if (pvVar2 != (void *)0x0) {
        FUN_004150e0(pvVar2,0,pvVar2,0);
        FUN_004190b0(*(int **)((int)this + 0x2ac4));
        *(undefined4 *)((int)this + 0x2ac4) = 0;
      }
    }
    else {
      pvVar2 = (void *)Ordinal_729(0x54);
      this_00 = (int *)0x0;
      uStack_8 = 0;
      if (pvVar2 != (void *)0x0) {
        iVar1 = *(int *)this;
        uVar11 = 0;
        uVar10 = 0xff;
        uVar9 = 0xff;
        iVar3 = *(int *)((int)this + 0x7a) + 10;
        uVar8 = 0xff;
        iVar7 = 0x2030d00;
        uVar6 = 0x10;
        iVar4 = (**(code **)(iVar1 + 0x74))();
        iVar4 = iVar4 + -0x14;
        uVar5 = (**(code **)(iVar1 + 0x70))();
        this_00 = FUN_00415670(pvVar2,0x7a7a7a7a,0,10,0,uVar5,iVar4,iVar3,uVar6,iVar7,uVar8,uVar9,
                               uVar10,uVar11);
      }
      uStack_8 = 0xffffffff;
      *(int **)((int)this + 0x2ac4) = this_00;
      if ((*(uint *)((int)this + 4) & 0xffff0000) == 0x4010000) {
        FUN_004150e0(this_00,1,this_00,0);
      }
      else {
        FUN_004150e0(this_00,2,this_00,0);
      }
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return;
}

