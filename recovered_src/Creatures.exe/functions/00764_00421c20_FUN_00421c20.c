/*
 * Program: Creatures.exe
 * Function: FUN_00421c20
 * Entry: 00421c20
 * Namespace: Global
 * Prototype: undefined FUN_00421c20(void * param_1)
 */


void __fastcall FUN_00421c20(void *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_4;
  
  if (*(char *)((int)param_1 + 0x2b78) == '\0') {
    if (*(char *)((int)param_1 + 0x1b9f) != '\0') {
      *(char *)((int)param_1 + 0x1b9f) = *(char *)((int)param_1 + 0x1b9f) + -1;
    }
    local_4 = 0;
    iVar8 = *(int *)(*(int *)((int)param_1 + 0x2ac8) + 0x5ed);
    iVar9 = 1;
    piVar4 = (int *)((int)param_1 + 0x846);
    bVar7 = *(byte *)(iVar8 + 2);
    do {
      if ((*piVar4 != 0) && (bVar1 = *(byte *)(iVar9 * 0x10 + 2 + iVar8), bVar7 < bVar1)) {
        local_4 = iVar9;
        bVar7 = bVar1;
      }
      piVar4 = piVar4 + 4;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x28);
    iVar9 = local_4 * 0x10;
    iVar8 = *(int *)(iVar9 + 0x836 + (int)param_1);
    if (*(int *)((int)param_1 + 0x7e6) != iVar8) {
      FUN_0040f500(param_1,iVar8);
      FUN_00421bd0((int)param_1);
      bVar7 = *(byte *)((int)param_1 + iVar9 + 0x83a);
      if (bVar7 < 0x21) {
        FUN_0042be60(*(void **)((int)param_1 + 0x2ac8),5,(uint)bVar7,
                     (int)*(char *)((int)param_1 + iVar9 + 0x83b));
      }
      iVar9 = 0;
      FUN_0042be10(*(void **)((int)param_1 + 0x2ac8),2,local_4,0x1e);
      FUN_004218c0(param_1,0);
      iVar8 = 0;
      do {
        cVar2 = (&DAT_00436870)[iVar9];
        if (cVar2 == '\x01') {
LAB_00421d2e:
          uVar6 = 0;
        }
        else {
          if (*(int *)((int)param_1 + 0x7e6) == 0) {
LAB_00421d22:
            if (cVar2 == '\x02') goto LAB_00421d2e;
          }
          else {
            if (cVar2 == '\x03') goto LAB_00421d2e;
            if (*(int *)((int)param_1 + 0x7e6) == 0) goto LAB_00421d22;
          }
          uVar6 = 1;
        }
        iVar8 = iVar8 + 0x10;
        iVar9 = iVar9 + 1;
        *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x2ac8) + 0x52b) + -2 + iVar8) = uVar6;
      } while (iVar8 < 0x100);
      uVar3 = *(uint *)((int)param_1 + 0x1b96);
      if (((uVar3 != 0xffffffff) && (*(char *)((int)param_1 + 0x1b9f) != '\0')) &&
         (*(int *)((int)param_1 + 0x7e6) != 0)) {
        uVar5 = FUN_00414ec0(*(int *)((int)param_1 + 0x7e6));
        if (uVar5 == uVar3) {
          FUN_0042be10(*(void **)((int)param_1 + 0x2ac8),3,*(int *)((int)param_1 + 0x1b9a),
                       *(byte *)((int)param_1 + 0x1b9e));
          *(undefined4 *)((int)param_1 + 0x1b96) = 0xffffffff;
        }
      }
    }
    puVar10 = (undefined1 *)((int)param_1 + 0x83a);
    iVar8 = 0x28;
    do {
      *puVar10 = 0xff;
      puVar10 = puVar10 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

