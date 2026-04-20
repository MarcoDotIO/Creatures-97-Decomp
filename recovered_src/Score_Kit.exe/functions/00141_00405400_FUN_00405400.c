/*
 * Program: Score_Kit.exe
 * Function: FUN_00405400
 * Entry: 00405400
 * Namespace: Global
 * Prototype: undefined FUN_00405400(void * this, RECT * param_1, int param_2, int param_3)
 */


void __thiscall FUN_00405400(void *this,RECT *param_1,int param_2,int param_3)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ h;
  undefined4 *unaff_FS_OFFSET;
  RECT local_68;
  tagRECT local_58;
  HDC local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405548;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)((int)this + 0x48) != 0) {
    Ordinal_285(this);
    local_8 = 0;
    if (param_1 == (RECT *)0x0) {
      GetClientRect(*(HWND *)((int)this + 0x20),&local_58);
    }
    else {
      CopyRect(&local_58,param_1);
    }
    FUN_00406340(*(void **)((int)this + 0x48),&local_68.left);
    IntersectRect(&local_20,&local_58,&local_68);
    local_28 = local_20.right - local_20.left;
    local_2c = local_20.bottom - local_20.top;
    local_30 = param_2 + local_20.left;
    iVar1 = *(int *)((int)this + 0x5c);
    local_34 = param_3 + local_20.top;
    local_24 = *(int *)((int)this + 0x60) + local_20.top;
    local_20.bottom = 0;
    if (*(int *)((int)this + 0x4c) != 0) {
      local_20.bottom = Ordinal_5127(*(int *)((int)this + 0x4c),0);
    }
    hdc = CreateCompatibleDC(local_44);
    h = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x54));
    BitBlt(local_44,iVar1 + local_20.left,local_24,local_28,local_2c,hdc,local_30,local_34,0xcc0020)
    ;
    SelectObject(hdc,h);
    DeleteDC(hdc);
    if (local_20.bottom != 0) {
      Ordinal_5127(local_20.bottom,0);
    }
    local_8 = 0xffffffff;
    FUN_00405552();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

