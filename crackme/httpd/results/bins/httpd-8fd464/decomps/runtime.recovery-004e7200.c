
/* WARNING: Unknown calling convention */

void runtime_recovery(runtime_g *gp)

{
  ulong v;
  uintptr uVar1;
  ulong v_00;
  uint64 v_01;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr pc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v = gp_spill->sigcode0;
  uVar1 = gp_spill->sigcode1;
  if (v != 0) {
    v_00 = (gp_spill->stack).lo;
    if ((v < v_00) || ((gp_spill->stack).hi < v)) {
      v_01 = (gp_spill->stack).hi;
      runtime_printlock();
      s.len = v_00;
      s.str = &DAT_0028e6c3;
      runtime_printstring(s);
      runtime_printhex(v);
      s_00.len = v_00;
      s_00.str = &DAT_0028d1fc;
      runtime_printstring(s_00);
      runtime_printhex(v_00);
      s_01.len = v_00;
      s_01.str = &DAT_00287787;
      runtime_printstring(s_01);
      runtime_printhex(v_01);
      s_02.len = v_00;
      s_02.str = &DAT_0028783b;
      runtime_printstring(s_02);
      runtime_printunlock();
      s_03.len = v_00;
      s_03.str = &DAT_00292f7a;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_03);
    }
  }
  (gp_spill->sched).sp = v;
  (gp_spill->sched).pc = uVar1;
  (gp_spill->sched).lr = 0;
  (gp_spill->sched).ret = 1;
  runtime_gogo();
  return;
}

