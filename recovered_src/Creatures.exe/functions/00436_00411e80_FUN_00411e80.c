/*
 * Program: Creatures.exe
 * Function: FUN_00411e80
 * Entry: 00411e80
 * Namespace: Global
 * Prototype: undefined4 FUN_00411e80(void * this, undefined4 param_1)
 */


undefined4 __thiscall FUN_00411e80(void *this,undefined4 param_1)

{
  int iVar1;
  HFONT pHVar2;
  WPARAM WVar3;
  HGDIOBJ pvVar4;
  LOGFONTA *pLVar5;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  LOGFONTA LStack_44;
  
  iVar1 = Ordinal_1846(param_1,0x50002830,0xe800);
  if (iVar1 != 0) {
    iVar1 = Ordinal_3643(0x80);
    if (iVar1 != 0) {
      iVar1 = Ordinal_5214(0,0x19);
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          Ordinal_5213(iVar1,0,1,10);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x19);
        Ordinal_5213(0,0xe803,1,0x96);
        Ordinal_5213(2,0xe802,0,0);
        Ordinal_5213(4,0xe145,0,1);
        Ordinal_5213(6,0x8040,0,0x13);
        Ordinal_5213(8,0x8045,0,0x14);
        Ordinal_5213(9,0x8046,0,0x15);
        Ordinal_5213(0xb,0x800f,0,3);
        Ordinal_5213(0xc,0x71,0,5);
        Ordinal_5213(0xd,0x8003,2,4);
        FUN_0041caf0();
        (**(code **)(*(int *)this + 0xe4))(0,auStack_4c);
        uStack_48 = 0x67;
        iVar1 = Ordinal_1808(0x10200002,&stack0xffffffac,this,0xe803);
        if (iVar1 == 0) {
          return 0;
        }
        pLVar5 = &LStack_44;
        for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
          pLVar5->lfHeight = 0;
          pLVar5 = (LOGFONTA *)&pLVar5->lfWidth;
        }
        iVar1 = GetSystemMetrics(0x2a);
        if (iVar1 == 0) {
          LStack_44.lfHeight = -0xc;
          LStack_44.lfWeight = 700;
          LStack_44.lfPitchAndFamily = '\"';
          lstrcpyA(LStack_44.lfFaceName,s_Arial_0043628c);
          pHVar2 = CreateFontIndirectA(&LStack_44);
          iVar1 = Ordinal_1426(pHVar2);
          if (iVar1 != 0) {
            WVar3 = 0;
            if (this != (void *)0xffffff20) {
              WVar3 = *(WPARAM *)((int)this + 0xe4);
            }
            SendMessageA(*(HWND *)((int)this + 0xc0),0x30,WVar3,1);
            return 1;
          }
        }
        else {
          pvVar4 = GetStockObject(0xd);
          Ordinal_1426(pvVar4);
          WVar3 = 0;
          if (this != (void *)0xffffff20) {
            WVar3 = *(WPARAM *)((int)this + 0xe4);
          }
          SendMessageA(*(HWND *)((int)this + 0xc0),0x30,WVar3,1);
        }
        return 1;
      }
    }
  }
  return 0;
}

