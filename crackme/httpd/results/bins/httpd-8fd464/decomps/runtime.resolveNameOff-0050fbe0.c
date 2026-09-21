
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.resolveNameOff(void * ptrInModule, runtime.nameOff off,
   runtime.name ~r2) */

runtime_name runtime_resolveNameOff(void *ptrInModule,runtime_nameOff off)

{
  void *v;
  runtime_mutex *l;
  uint64 v_00;
  uint64 v_01;
  runtime_moduledata *prVar1;
  undefined4 unaff_0000001c;
  runtime_hmap *h;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  multireturn_void___bool_ mVar2;
  void *ptrInModule_spill;
  runtime_nameOff off_spill;
  undefined8 *local_48;
  char local_40;
  
  h = (runtime_hmap *)CONCAT44(unaff_0000001c,off);
                    /* Unresolved local var: uintptr base@[???]
                       Unresolved local var: void * res@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (off_spill == 0) {
    return (runtime_name)(uint8 *)(ulong)(uint)off_spill;
  }
  prVar1 = &runtime_firstmoduledata;
                    /* Unresolved local var: runtime.moduledata * md@[???] */
  while( true ) {
    if (prVar1 == (runtime_moduledata *)0x0) {
      runtime_lock2(&runtime_reflectOffs.lock);
      mVar2 = runtime_mapaccess2_fast32((runtime_maptype *)(ulong)(uint)off_spill,h,0x235900);
      s.len = CONCAT71((int7)((ulong)h >> 8),mVar2.~r4);
      l = (runtime_mutex *)*local_48;
      runtime_unlock2(l);
      if (local_40 == '\0') {
        runtime_printlock();
        s.str = &DAT_0029a328;
        runtime_printstring(s);
        runtime_printhex((long)off_spill);
        s_00.len = s.len;
        s_00.str = &DAT_002893ba;
        runtime_printstring(s_00);
        runtime_printhex((uint64)ptrInModule_spill);
        s_01.len = s.len;
        s_01.str = &DAT_00299255;
        runtime_printstring(s_01);
        runtime_printunlock();
                    /* Unresolved local var: runtime.moduledata * next@[???] */
        for (prVar1 = &runtime_firstmoduledata; prVar1 != (runtime_moduledata *)0x0;
            prVar1 = prVar1->next) {
          v_00 = prVar1->types;
          v_01 = prVar1->etypes;
          runtime_printlock();
          s_02.len = s.len;
          s_02.str = &DAT_0028a772;
          runtime_printstring(s_02);
          runtime_printhex(v_00);
          s_03.len = s.len;
          s_03.str = &DAT_0028b85a;
          runtime_printstring(s_03);
          runtime_printhex(v_01);
          runtime_printnl();
          runtime_printunlock();
        }
        s_04.len = s.len;
        s_04.str = &DAT_002a85fc;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_04);
      }
      return (runtime_name)(uint8 *)l;
    }
    h = (runtime_hmap *)prVar1->types;
    if ((h <= ptrInModule_spill) && (v = (void *)prVar1->etypes, ptrInModule_spill < v)) break;
    prVar1 = prVar1->next;
  }
                    /* Unresolved local var: uintptr res@[???] */
  if ((void *)((long)&h->count + (long)off_spill) <= v) {
    return (runtime_name)(uint8 *)(ulong)(uint)off_spill;
  }
  runtime_printlock();
  s_05.len = (int)h;
  s_05.str = &DAT_0029a328;
  runtime_printstring(s_05);
  runtime_printhex((long)off_spill);
  s_06.len = (int)h;
  s_06.str = &DAT_002964a9;
  runtime_printstring(s_06);
  runtime_printhex((uint64)h);
  s_07.len = (int)h;
  s_07.str = &DAT_0028787c;
  runtime_printstring(s_07);
  runtime_printhex((uint64)v);
  runtime_printnl();
  runtime_printunlock();
  s_08.len = (int)h;
  s_08.str = (uint8 *)0x2a3367;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_08);
}

