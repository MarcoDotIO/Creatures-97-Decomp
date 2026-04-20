/*
 * Program: Creatures.exe
 * Function: FUN_0040ab40
 * Entry: 0040ab40
 * Namespace: Global
 * Prototype: undefined FUN_0040ab40(void * this, uint param_1)
 */


void __thiscall FUN_0040ab40(void *this,uint param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte bStack_5;
  byte bStack_4;
  undefined1 uStack_3;
  undefined2 uStack_2;
  
  iVar7 = (int)this + 0x808;
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x128c)) {
    do {
      if ((*(byte *)(iVar7 + 7) & 4) == 0) {
        uVar3 = (uint)**(byte **)(iVar7 + 8);
      }
      else {
        uVar3 = 0xff - **(byte **)(iVar7 + 8);
      }
      if (((uVar3 != 0) && (param_1 % (uint)*(byte *)(iVar7 + 5) == 0)) &&
         (iVar4 = uVar3 - *(byte *)(iVar7 + 4), 0 < iVar4)) {
        if ((*(byte *)(iVar7 + 7) & 2) == 0) {
          uVar3 = (uint)*(byte *)(iVar7 + 3);
          if (uVar3 != 0) {
            uVar5 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) +
                    ((uint)*(byte *)(iVar7 + 6) * iVar4 >> 8 & 0xff);
            goto joined_r0x0040abf2;
          }
        }
        else {
          uVar3 = (uint)*(byte *)(iVar7 + 3);
          if (uVar3 != 0) {
            uVar5 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) + (uint)*(byte *)(iVar7 + 6);
joined_r0x0040abf2:
            uVar2 = (undefined1)uVar5;
            if (0xfe < uVar5) {
              uVar2 = 0xff;
            }
            *(undefined1 *)((int)this + uVar3 * 2 + 8) = uVar2;
          }
        }
        if ((*(byte *)(iVar7 + 7) & 1) != 0) {
          **(undefined1 **)(iVar7 + 8) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < *(int *)((int)this + 0x128c));
  }
  iVar6 = 0;
  iVar7 = (int)this + 0x208;
  if (0 < *(int *)((int)this + 0x1288)) {
    do {
      if (*(byte *)(iVar7 + 3) != 0) {
        iVar4 = (uint)*(byte *)((int)this + (uint)*(byte *)(iVar7 + 3) * 2 + 8) -
                (uint)*(byte *)(iVar7 + 4);
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        uVar3 = 0;
        if (iVar4 != 0) {
          if ((*(byte *)(iVar7 + 7) & 2) == 0) {
            uVar3 = (uint)*(byte *)(iVar7 + 6) * iVar4 >> 8;
          }
          else {
            uVar3 = (uint)*(byte *)(iVar7 + 6);
          }
        }
        if ((*(byte *)(iVar7 + 7) & 1) == 0) {
          uVar3 = (uint)*(byte *)(iVar7 + 5) + (uVar3 & 0xff);
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
        }
        else {
          uVar3 = (uint)*(byte *)(iVar7 + 5) - (uVar3 & 0xff);
          if ((int)uVar3 < 1) {
            uVar3 = 0;
          }
        }
        **(undefined1 **)(iVar7 + 8) = (char)uVar3;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < *(int *)((int)this + 0x1288));
  }
  iVar7 = 0;
  pbVar8 = (byte *)((int)this + 0xe08);
  if (0 < *(int *)((int)this + 0x1290)) {
    do {
      bVar1 = 0xff;
      bStack_5 = 0xff;
      if (pbVar8[1] != 0) {
        bVar1 = *(byte *)((int)this + (uint)pbVar8[1] * 2 + 8) / *pbVar8;
      }
      if (pbVar8[3] != 0) {
        bStack_5 = *(byte *)((int)this + (uint)pbVar8[3] * 2 + 8) / pbVar8[2];
      }
      if (bStack_5 < bVar1) {
        bVar1 = bStack_5;
      }
      if (bVar1 != 0) {
        bStack_5 = bVar1;
        bStack_5 = FUN_00428b30(&bStack_5,pbVar8[4],param_1);
        bStack_4 = bVar1 - bStack_5;
        uStack_3 = 0;
        uStack_2 = 0;
        uVar3 = (uint)pbVar8[1];
        if (uVar3 != 0) {
          iVar6 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) - (uint)(byte)(*pbVar8 * bStack_4);
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          *(char *)((int)this + uVar3 * 2 + 8) = (char)iVar6;
        }
        uVar3 = (uint)pbVar8[3];
        if (uVar3 != 0) {
          iVar6 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) - (uint)(byte)(pbVar8[2] * bStack_4);
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          *(char *)((int)this + uVar3 * 2 + 8) = (char)iVar6;
        }
        uVar3 = (uint)pbVar8[6];
        if (uVar3 != 0) {
          uVar5 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) + (uint)(byte)(pbVar8[5] * bStack_4);
          if (0xfe < uVar5) {
            uVar5 = 0xff;
          }
          *(char *)((int)this + uVar3 * 2 + 8) = (char)uVar5;
        }
        uVar3 = (uint)pbVar8[8];
        if (uVar3 != 0) {
          uVar5 = (uint)*(byte *)((int)this + uVar3 * 2 + 8) + (uint)(byte)(pbVar8[7] * bStack_4);
          if (0xfe < uVar5) {
            uVar5 = 0xff;
          }
          *(char *)((int)this + uVar3 * 2 + 8) = (char)uVar5;
        }
      }
      iVar7 = iVar7 + 1;
      pbVar8 = pbVar8 + 9;
    } while (iVar7 < *(int *)((int)this + 0x1290));
  }
  pbVar8 = (byte *)((int)this + 8);
  iVar7 = 0x100;
  do {
    bStack_4 = pbVar8[1];
    if (*pbVar8 != 0) {
      bVar1 = FUN_00428b30(pbVar8,bStack_4,param_1);
      *pbVar8 = bVar1;
    }
    pbVar8 = pbVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

