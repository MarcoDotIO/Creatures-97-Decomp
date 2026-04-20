/*
 * Program: Science_Kit.exe
 * Function: FUN_0040d9e0
 * Entry: 0040d9e0
 * Namespace: Global
 * Prototype: undefined4 FUN_0040d9e0(void * param_1)
 */


undefined4 __fastcall FUN_0040d9e0(void *param_1)

{
  int y;
  int x;
  HDC hdcSrc;
  undefined4 *unaff_FS_OFFSET;
  HDC local_28;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040daa5;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)param_1 + 0x9c8) = *(undefined4 *)((int)param_1 + 0x9b4);
  *(undefined4 *)((int)param_1 + 0x9c4) = *(undefined4 *)((int)param_1 + 0x9b4);
  hdcSrc = (HDC)0x0;
  FUN_0040dac0(param_1,(RECT *)0x0,0);
  Ordinal_285((int)param_1 + 0xb98);
  local_8 = 0;
  y = *(int *)((int)param_1 + 0x104);
  x = *(int *)((int)param_1 + 0x100);
  if (param_1 != (void *)0xffffff1c) {
    hdcSrc = *(HDC *)((int)param_1 + 0xe8);
  }
  BitBlt(local_28,x,y,*(int *)((int)param_1 + 0x108) - x,*(int *)((int)param_1 + 0x10c) - y,hdcSrc,x
         ,y,0xcc0020);
  *(undefined4 *)((int)param_1 + 0x120) = 1;
  local_8 = 0xffffffff;
  FUN_0040daaf();
  *unaff_FS_OFFSET = local_10;
  return 1;
}

