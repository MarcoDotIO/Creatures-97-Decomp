/*
 * Program: Creatures.exe
 * Function: FUN_004219f0
 * Entry: 004219f0
 * Namespace: Global
 * Prototype: undefined FUN_004219f0(void * this, int * param_1, undefined4 param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint param_6)
 */


void __thiscall
FUN_004219f0(void *this,int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  
  uVar5 = param_3;
  if (*(char *)((int)this + 0x2b78) == '\0') {
    uVar3 = param_3._3_1_;
    if ((param_3 & 0x1000000) == 0) {
      if ((param_3 & 0x2000000) != 0) {
        param_3._0_2_ = CONCAT11(param_3._1_1_ + (char)param_6,(byte)param_3);
      }
    }
    else {
      if ((int)param_6 < 0x100) {
        uVar7 = param_6;
        if ((int)param_6 < 0) {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0xff;
      }
      uVar7 = uVar7 & 0xff;
      param_3 = CONCAT31(param_3._1_3_,(char)((param_3 & 0xff) * uVar7 >> 8));
      param_3._0_3_ = CONCAT12((char)((uVar5 >> 0x10 & 0xff) * uVar7 >> 8),(undefined2)param_3);
      param_3 = CONCAT13(uVar3,(uint3)param_3);
      iVar9 = 0;
      do {
        iVar4 = iVar9 + 1;
        *(char *)((int)&param_5 + iVar9) = (char)(*(byte *)((int)&param_5 + iVar9) * uVar7 >> 8);
        iVar9 = iVar4;
      } while (iVar4 < 4);
    }
    if (*(char *)((int)this + 0x115) != '\0') {
      if ((param_3 & 0x4000000) == 0) {
        return;
      }
      bVar8 = (byte)param_3 >> 1;
      param_3._0_3_ = CONCAT12(param_3._2_1_ >> 1,(undefined2)param_3);
      param_3 = CONCAT31((uint3)param_3 >> 8,bVar8);
    }
    uVar5 = FUN_00414ec0((int)param_1);
    piVar2 = (int *)(uVar5 * 0x10 + 0x836 + (int)this);
    if (this == param_1) {
      *piVar2 = 0;
    }
    else {
      *piVar2 = (int)param_1;
    }
    *(undefined1 *)((int)piVar2 + 0xe) = 1;
    iVar9 = *param_1;
    uVar6 = (**(code **)(iVar9 + 0x70))();
    *(undefined4 *)((int)piVar2 + 6) = uVar6;
    uVar6 = (**(code **)(iVar9 + 0x74))();
    *(undefined4 *)((int)piVar2 + 10) = uVar6;
    *(byte *)(piVar2 + 1) = param_3._1_1_;
    *(byte *)((int)piVar2 + 5) = param_3._2_1_;
    FUN_0042be10(*(void **)((int)this + 0x2ac8),2,uVar5,(byte)param_3);
    if ((*(int *)((int)this + 0x7e6) == *piVar2) && (param_3._1_1_ < 0x21)) {
      FUN_0042be10(*(void **)((int)this + 0x2ac8),5,(uint)param_3._1_1_,param_3._2_1_);
    }
    iVar9 = 0;
    do {
      if (*(byte *)((int)&param_4 + iVar9) != 0) {
        pbVar1 = (byte *)(*(int *)((int)this + 0x2acc) + 8 +
                         (uint)*(byte *)((int)&param_4 + iVar9) * 2);
        uVar7 = (uint)*(byte *)((int)&param_5 + iVar9) + (uint)*pbVar1;
        if (0xfe < uVar7) {
          uVar7 = 0xff;
        }
        *pbVar1 = (byte)uVar7;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    if (this != param_1) {
      iVar9 = 0;
      do {
        iVar4 = *(byte *)((int)&param_4 + iVar9) - 0x21;
        if ((-1 < iVar4) && (iVar4 < 0x10)) {
          iVar4 = iVar4 + uVar5 * 0x10;
          *(uint *)((int)this + iVar4 * 4 + 0x1ba0) =
               ((uint)*(byte *)((int)&param_5 + iVar9) +
               *(int *)((int)this + iVar4 * 4 + 0x1ba0) * 4) / 5;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
    }
  }
  return;
}

