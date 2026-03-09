
/* WARNING: Unknown calling convention */

void runtime_printScavTrace(uint32 gen,uintptr released,bool forced)

{
  char cVar1;
  long lVar2;
  uint64 uVar3;
  uint8 *extraout_RAX;
  uint64 v;
  uint64 v_00;
  uint8 *extraout_RAX_00;
  uint64 v_01;
  uint8 *extraout_RAX_01;
  uint64 v_02;
  uint8 *extraout_RAX_02;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  uint32 gen_spill;
  uintptr released_spill;
  bool forced_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  uVar3 = runtime_memstats.heap_released;
  if (runtime_memstats.heap_sys != runtime_memstats.heap_released) {
    runtime_printlock();
    s.len = uVar3;
    s.str = extraout_RAX;
    runtime_printstring(s);
    runtime_printuint(v);
    runtime_printsp();
    runtime_printuint(v_00);
    s_00.len = uVar3;
    s_00.str = extraout_RAX_00;
    runtime_printstring(s_00);
    runtime_printuint(v_01);
    s_01.len = uVar3;
    s_01.str = extraout_RAX_01;
    runtime_printstring(s_01);
    runtime_printuint(v_02);
    s_02.len = uVar3;
    s_02.str = extraout_RAX_02;
    runtime_printstring(s_02);
    runtime_printunlock();
    if (forced_spill) {
      runtime_printlock();
      s_03.len = uVar3;
      s_03.str = &DAT_0028d1a2;
      runtime_printstring(s_03);
      runtime_printunlock();
    }
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
                    /* Unresolved local var: runtime.m * mp@[???] */
    lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    cVar1 = *(char *)(lVar2 + 0x11f);
    *(char *)(lVar2 + 0x11f) = cVar1 + -1;
    if (cVar1 == '\x01') {
      runtime_unlock2(&runtime_debuglock);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicdivide();
}

