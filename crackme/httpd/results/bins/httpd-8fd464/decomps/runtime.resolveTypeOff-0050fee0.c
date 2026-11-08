
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.resolveTypeOff(void * ptrInModule, runtime.typeOff off,
   runtime._type * ~r2) */

runtime__type * runtime_resolveTypeOff(void *ptrInModule,runtime_typeOff off)

{
  uint64 uVar1;
  runtime__type *prVar2;
  uint64 v;
  runtime_moduledata *prVar3;
  undefined4 unaff_0000001c;
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
  void *ptrInModule_spill;
  runtime_typeOff off_spill;
  long *local_40;
  
  s.len = (runtime_hmap *)CONCAT44(unaff_0000001c,off);
                    /* Unresolved local var: uintptr base@[???]
                       Unresolved local var: runtime.moduledata * md@[???]
                       Unresolved local var: uintptr res@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((off_spill == 0) || (off_spill == -1)) {
    return &((runtime_maptype *)(ulong)(uint)off_spill)->typ;
  }
                    /* Unresolved local var: runtime.moduledata * next@[???] */
  for (prVar3 = &runtime_firstmoduledata; prVar3 != (runtime_moduledata *)0x0; prVar3 = prVar3->next
      ) {
    if (((void *)prVar3->types <= ptrInModule_spill) && (ptrInModule_spill < (void *)prVar3->etypes)
       ) goto LAB_0050ff56;
  }
  prVar3 = (runtime_moduledata *)0x0;
LAB_0050ff56:
  if (prVar3 == (runtime_moduledata *)0x0) {
                    /* Unresolved local var: void * res@[???] */
    runtime_lock2(&runtime_reflectOffs.lock);
    runtime_mapaccess1_fast32((runtime_maptype *)(ulong)(uint)off_spill,s.len,0x235900);
    prVar2 = (runtime__type *)*local_40;
    runtime_unlock2((runtime_mutex *)prVar2);
    if (prVar2 != (runtime__type *)0x0) {
      return prVar2;
    }
    runtime_printlock();
    s.str = &DAT_0029a36c;
    runtime_printstring(s);
    runtime_printhex((long)off_spill);
    s_00.len = (int)s.len;
    s_00.str = &DAT_002893ba;
    runtime_printstring(s_00);
    runtime_printhex((uint64)ptrInModule_spill);
    s_01.len = (int)s.len;
    s_01.str = &DAT_00299255;
    runtime_printstring(s_01);
    runtime_printunlock();
                    /* Unresolved local var: runtime.moduledata * next@[???] */
    for (prVar3 = &runtime_firstmoduledata; prVar3 != (runtime_moduledata *)0x0;
        prVar3 = prVar3->next) {
      uVar1 = prVar3->types;
      v = prVar3->etypes;
      runtime_printlock();
      s_02.len = (int)s.len;
      s_02.str = &DAT_0028a772;
      runtime_printstring(s_02);
      runtime_printhex(uVar1);
      s_03.len = (int)s.len;
      s_03.str = &DAT_0028b85a;
      runtime_printstring(s_03);
      runtime_printhex(v);
      runtime_printnl();
      runtime_printunlock();
    }
    s_04.len = (int)s.len;
    s_04.str = &DAT_002a8686;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
                    /* Unresolved local var: runtime._type * t@[???] */
  runtime_mapaccess1_fast32
            ((runtime_maptype *)(ulong)(uint)off_spill,(runtime_hmap *)&DAT_00235f00,
             (uint32)prVar3->typemap);
  if ((runtime__type *)*local_40 != (runtime__type *)0x0) {
    return (runtime__type *)*local_40;
  }
  uVar1 = prVar3->types;
  s_05.len = (runtime__type *)((long)off_spill + uVar1);
  prVar2 = (runtime__type *)prVar3->etypes;
  if (prVar2 < s_05.len) {
    runtime_printlock();
    s_05.str = &DAT_0029a36c;
    runtime_printstring(s_05);
    runtime_printhex((long)off_spill);
    s_06.len = (int)s_05.len;
    s_06.str = &DAT_002964a9;
    runtime_printstring(s_06);
    runtime_printhex(uVar1);
    s_07.len = (int)s_05.len;
    s_07.str = &DAT_0028787c;
    runtime_printstring(s_07);
    runtime_printhex((uint64)prVar2);
    runtime_printnl();
    runtime_printunlock();
    s_08.len = (int)s_05.len;
    s_08.str = (uint8 *)0x2a33a9;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_08);
  }
  return prVar2;
}

