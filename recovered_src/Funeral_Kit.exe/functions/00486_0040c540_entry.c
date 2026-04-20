/*
 * Program: Funeral_Kit.exe
 * Function: entry
 * Entry: 0040c540
 * Namespace: Global
 * Prototype: undefined entry(void)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  HMODULE pHVar4;
  int _Code;
  byte *pbVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar7;
  _STARTUPINFOA local_8c;
  int local_40;
  char **local_3c;
  char **local_38 [3];
  _startupinfo local_2c [4];
  undefined1 *local_1c;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  byte *pbVar6;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_0040e1e0;
  puStack_10 = &DAT_0040c6e2;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff68;
  local_8 = 0;
  __set_app_type(2);
  DAT_004107ec = 0xffffffff;
  DAT_004107f0 = 0xffffffff;
  puVar2 = (undefined4 *)__p__fmode();
  *puVar2 = DAT_00410668;
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = DAT_00410664;
  _DAT_004107e8 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_0040c730();
  if (DAT_00410660 == 0) {
    __setusermatherr(&LAB_0040c720);
  }
  __setdefaultprecision();
  initterm(&DAT_00410050,&DAT_00410054);
  local_2c[0].newmode = DAT_0041065c;
  __getmainargs(&local_40,&local_3c,local_38,DAT_00410658,local_2c);
  initterm(&DAT_00410000,&DAT_0041004c);
  puVar2 = (undefined4 *)__p__acmdln();
  pbVar5 = (byte *)*puVar2;
  bVar1 = *pbVar5;
  if (bVar1 == 0x22) {
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar6 + 1;
      if (*pbVar5 == 0) break;
    } while (*pbVar5 != 0x22);
    if (*pbVar5 == 0x22) {
      pbVar5 = pbVar6 + 2;
    }
  }
  else {
    while (0x20 < bVar1) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
  }
  bVar1 = *pbVar5;
  while ((bVar1 != 0 && (*pbVar5 < 0x21))) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  local_8c.dwFlags = 0;
  GetStartupInfoA(&local_8c);
  uVar3 = 10;
  if ((local_8c.dwFlags & 1) != 0) {
    uVar3 = local_8c._48_4_ & 0xffff;
  }
  uVar7 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  _Code = _WinMain_16(pHVar4,uVar7,pbVar5,uVar3);
                    /* WARNING: Subroutine does not return */
  exit(_Code);
}

