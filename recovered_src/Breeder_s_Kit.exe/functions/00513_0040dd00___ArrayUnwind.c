/*
 * Program: Breeder_s_Kit.exe
 * Function: __ArrayUnwind
 * Entry: 0040dd00
 * Namespace: Global
 * Prototype: void __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)
 */


/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_00410290;
  puStack_10 = &DAT_0040dfd8;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_EDI);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}

