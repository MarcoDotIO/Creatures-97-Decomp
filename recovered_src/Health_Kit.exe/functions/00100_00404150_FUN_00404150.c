/*
 * Program: Health_Kit.exe
 * Function: FUN_00404150
 * Entry: 00404150
 * Namespace: Global
 * Prototype: undefined FUN_00404150(void * this, int param_1)
 */


void __thiscall FUN_00404150(void *this,int param_1)

{
  int local_30 [2];
  RECT local_28;
  RECT local_18;
  int local_8 [2];
  
  if ((this == (void *)0x0) || (*(int *)((int)this + 0x20) == 0)) {
    FUN_00402e10((int)this);
  }
  else if (*(int *)((int)this + 0xe6c) == param_1) {
    if ((*(int *)((int)this + 0xe78) == 0) && (*(int *)((int)this + 400) != 0)) {
      local_18.left = 199;
      local_18.top = 0x84;
      local_18.bottom = 0x9e;
      local_30[0] = 199;
      local_30[1] = 0x84;
      local_28.left = 199;
      local_28.top = 0x84;
      local_28.bottom = 0x9e;
      local_8[0] = 199;
      local_18.right = 0xe7;
      local_28.right = 0xe6;
      local_8[1] = 0x84;
      if (*(int *)((int)this + 0xe44) == 2) {
        FUN_004099a0((void *)((int)this + 0xdcc),*(void **)((int)this + 0xdc),1,local_30,(int *)0x0,
                     0);
        FUN_00408dc0((void *)((int)this + 0x94),&local_18,0,0);
      }
      if (*(int *)((int)this + 0xe44) == 6) {
        *(undefined4 *)((int)this + 0xdfc) = 1;
        FUN_004099a0((void *)((int)this + 0xdcc),*(void **)((int)this + 0xdc),1,local_8,
                     &local_28.left,1);
        FUN_00408dc0((void *)((int)this + 0x94),&local_28,0,0);
      }
      if (*(int *)((int)this + 0xe44) == 0xb) {
        *(undefined4 *)((int)this + 0xdfc) = 0;
        FUN_004099a0((void *)((int)this + 0xdcc),*(void **)((int)this + 0xdc),1,local_30,(int *)0x0,
                     0);
        FUN_00408dc0((void *)((int)this + 0x94),&local_18,0,0);
      }
      if (*(int *)((int)this + 0xe44) == 0x1d) {
        *(undefined4 *)((int)this + 0xe44) = 0;
      }
      *(int *)((int)this + 0xe44) = *(int *)((int)this + 0xe44) + 1;
      thunk_FUN_00403910(this);
      return;
    }
  }
  else {
    if (*(int *)((int)this + 0xe70) != param_1) {
      Ordinal_2081();
      return;
    }
    if (*(int *)((int)this + 0xe78) == 0) {
      FUN_00404000((int)this);
      FUN_004034b0((int)this);
      return;
    }
  }
  return;
}

