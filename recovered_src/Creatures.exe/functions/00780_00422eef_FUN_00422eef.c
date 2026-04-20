/*
 * Program: Creatures.exe
 * Function: FUN_00422eef
 * Entry: 00422eef
 * Namespace: Global
 * Prototype: undefined FUN_00422eef(int * param_1)
 */


void __fastcall FUN_00422eef(int *param_1)

{
  int iVar1;
  uint in_EAX;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined1 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  
  if (*(byte *)((int)param_1 + 0x115) != in_EAX) {
    *(char *)((int)param_1 + 0x115) = (char)in_EAX;
    if (in_EAX == 0) {
      pvVar2 = (void *)param_1[0xab1];
      if (pvVar2 != (void *)0x0) {
        FUN_004150e0(pvVar2,0,pvVar2,0);
        FUN_004190b0((int *)param_1[0xab1]);
        param_1[0xab1] = 0;
      }
    }
    else {
      pvVar2 = (void *)Ordinal_729(0x54);
      *(void **)(unaff_EBP + -0x10) = pvVar2;
      this = (int *)0x0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pvVar2 != (void *)0x0) {
        iVar1 = *param_1;
        uVar11 = 0;
        uVar10 = 0xff;
        uVar9 = 0xff;
        iVar3 = *(int *)((int)param_1 + 0x7a) + 10;
        uVar8 = 0xff;
        iVar7 = 0x2030d00;
        uVar6 = 0x10;
        iVar4 = (**(code **)(iVar1 + 0x74))();
        iVar4 = iVar4 + -0x14;
        uVar5 = (**(code **)(iVar1 + 0x70))();
        this = FUN_00415670(pvVar2,0x7a7a7a7a,0,10,0,uVar5,iVar4,iVar3,uVar6,iVar7,uVar8,uVar9,
                            uVar10,uVar11);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      param_1[0xab1] = (int)this;
      if ((param_1[1] & 0xffff0000U) == 0x4010000) {
        FUN_004150e0(this,1,this,0);
      }
      else {
        FUN_004150e0(this,2,this,0);
      }
    }
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

