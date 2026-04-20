/*
 * Program: Breeder_s_Kit.exe
 * Function: FUN_0040c810
 * Entry: 0040c810
 * Namespace: Global
 * Prototype: undefined4 FUN_0040c810(void * param_1)
 */


undefined4 __fastcall FUN_0040c810(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0xa2c) = 0;
  *(undefined4 *)((int)param_1 + 0xa30) = 0;
  *(undefined4 *)((int)param_1 + 0x618) = 0;
  *(undefined4 *)((int)param_1 + 0x61c) = 0;
  *(undefined4 *)((int)param_1 + 0x620) = 0;
  *(undefined4 *)((int)param_1 + 0x624) = 0;
  FUN_0040d3f0((int)param_1);
  FUN_0040d680(param_1,s_inst_dde__putv_chem_66_dde__putv_004126f0);
  return 1;
}

