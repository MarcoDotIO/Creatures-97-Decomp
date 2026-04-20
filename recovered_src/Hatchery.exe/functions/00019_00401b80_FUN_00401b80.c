/*
 * Program: Hatchery.exe
 * Function: FUN_00401b80
 * Entry: 00401b80
 * Namespace: Global
 * Prototype: undefined FUN_00401b80(int param_1)
 */


void __fastcall FUN_00401b80(int param_1)

{
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  LONG LVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [4];
  HDC local_48;
  RECT local_38;
  int local_28;
  tagRECT local_24;
  int *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00401f48;
  *unaff_FS_OFFSET = &local_10;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  if (*(int *)(param_1 + 0x30c) == 0) {
    piVar9 = (int *)(param_1 + 0x144);
    piVar10 = (int *)(param_1 + 0x1e8);
    local_28 = 6;
    local_14 = (int *)(param_1 + 0x310);
    do {
      LVar2 = local_24.left;
      LVar3 = local_24.top;
      LVar4 = local_24.right;
      LVar5 = local_24.bottom;
      if (*local_14 != 0) {
        local_38.left = *piVar10 + -4;
        local_38.top = piVar10[1] + -4;
        local_38.right = *piVar9 + *piVar10 + 4;
        local_38.bottom = piVar9[1] + piVar10[1] + 4;
        LVar2 = local_38.left;
        LVar3 = local_38.top;
        LVar4 = local_38.right;
        LVar5 = local_38.bottom;
        if (local_24.right != local_24.left) {
          UnionRect(&local_24,&local_24,&local_38);
          LVar2 = local_24.left;
          LVar3 = local_24.top;
          LVar4 = local_24.right;
          LVar5 = local_24.bottom;
        }
      }
      local_24.bottom = LVar5;
      local_24.right = LVar4;
      local_24.top = LVar3;
      local_24.left = LVar2;
      piVar9 = piVar9 + 6;
      piVar10 = piVar10 + 2;
      local_14 = local_14 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  else {
    SetRect(&local_24,0,0,0x140,0xf0);
  }
  if (local_24.right != local_24.left) {
    FUN_004069a0(local_24.left,local_24.top,local_24.right,local_24.bottom);
    FUN_00406720((void *)(param_1 + 0x80),0,0);
    if (*(int *)(param_1 + 0x3b0) == -1) {
      FUN_004055a0(DAT_0040a58c,0x6e616668,(int *)(param_1 + 0x3b0));
    }
    uVar8 = (int)*(uint *)(param_1 + 0x5c) >> 0x1f;
    FUN_00406720((void *)(param_1 + 0x294 +
                         (((*(uint *)(param_1 + 0x5c) ^ uVar8) - uVar8 & 3 ^ uVar8) - uVar8) * 0x18)
                 ,0xe5,0x36);
    iVar6 = rand();
    if (iVar6 % 10 < 9) {
      FUN_00406720((void *)(param_1 + 0x2f4),0x6d,0);
    }
    else {
      FUN_00405410(DAT_0040a58c,0x74676c68,0,0,0);
    }
    local_14 = (int *)(param_1 + 0x140);
    piVar9 = (int *)(param_1 + 0x1e8);
    puVar11 = (uint *)(param_1 + 0x218);
    local_28 = 6;
    do {
      if (puVar11[-0x12] != 0) {
        if (*puVar11 == 0) {
          FUN_00406750(local_14,piVar9);
        }
        else {
          uVar8 = (int)*puVar11 >> 0x1f;
          FUN_00406720(local_14,*piVar9 + (int)*puVar11 % 3 + -2,
                       (((*puVar11 ^ uVar8) - uVar8 & 1 ^ uVar8) - uVar8) * 2 + piVar9[1]);
        }
      }
      piVar9 = piVar9 + 2;
      puVar11 = puVar11 + 1;
      local_14 = (int *)((int)local_14 + 0x18);
      local_28 = local_28 + -1;
    } while (local_28 != 0);
    FUN_00406720((void *)(param_1 + 0x98),0,0xa9);
    iVar6 = *(int *)(param_1 + 0x260);
    if (iVar6 < 0) {
      if (*(int *)(param_1 + 0x3b8) != -1) {
        FUN_00405620(DAT_0040a58c,*(int *)(param_1 + 0x3b8),1);
        *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
      }
    }
    else {
      iVar1 = param_1 + iVar6 * 8;
      FUN_004065c0((void *)(param_1 + 0x264),
                   (*(int *)(param_1 + 0x144 + iVar6 * 0x18) - 0x1cU >> 1) + *(int *)(iVar1 + 0x1e8)
                   ,*(int *)(iVar1 + 0x1ec) + -0x20,0x1c,0x18,
                   ((*(int *)(param_1 + 0x5c) / 2) % 6) * 0x1d,
                   (1 - *(int *)(param_1 + 0x248 + iVar6 * 4)) * 0x19);
    }
    if (*(int *)(param_1 + 0x54) == 0) {
      if (*(int *)(param_1 + 0x3b4) == -1) {
        FUN_004055a0(DAT_0040a58c,0x6b736468,(int *)(param_1 + 0x3b4));
      }
      FUN_00406720((void *)(param_1 + 0xb0 + (*(int *)(param_1 + 0x5c) % 6) * 0x18),0x78,0x50);
    }
    else if (*(int *)(param_1 + 0x3b4) != -1) {
      FUN_00405620(DAT_0040a58c,*(int *)(param_1 + 0x3b4),1);
      *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
    }
    FUN_00406930(0,0,0x13f,0xef);
    Ordinal_285(param_1);
    local_8 = 0;
    uVar7 = Ordinal_5127(*(undefined4 *)(param_1 + 0x394),0);
    RealizePalette(local_48);
    (**(code **)(*(int *)(param_1 + 0x60) + 0x14))
              (local_4c,*(int *)(param_1 + 0x39c) + local_24.left,
               *(int *)(param_1 + 0x3a0) + local_24.top,local_24.left,local_24.top,
               local_24.right - local_24.left,local_24.bottom - local_24.top);
    Ordinal_5127(uVar7,0);
    *(undefined4 *)(param_1 + 0x30c) = 0;
    puVar12 = (undefined4 *)(param_1 + 0x310);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_8 = 0xffffffff;
    FUN_00401f52();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

