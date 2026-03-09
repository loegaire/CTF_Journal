
/* WARNING: Unknown calling convention */

void runtime_schedtrace_func1(runtime_g *gp)

{
  uint uVar1;
  int64 v;
  int64 v_00;
  int64 v_01;
  int iVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * lockedm@[???]
                       Unresolved local var: int64 id1@[???]
                       Unresolved local var: int64 id2@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->m == (runtime_m *)0x0) {
    v_00 = -1;
  }
  else {
    v_00 = gp_spill->m->id;
  }
  if (gp_spill->lockedm == 0) {
    v_01 = -1;
  }
  else {
    v_01 = *(int64 *)(gp_spill->lockedm + 0xf0);
  }
  uVar1 = gp_spill->atomicstatus;
  if (gp_spill->waitreason < 0x1b) {
    iVar2 = runtime_waitReasonStrings[gp_spill->waitreason].len;
  }
  else {
    iVar2 = 0x13;
  }
  v = gp_spill->goid;
  runtime_printlock();
  s.len._0_4_ = uVar1;
  s.str = &DAT_0028786d;
  s.len._4_4_ = 0;
  runtime_printstring(s);
  runtime_printint(v);
  s_00.len._0_4_ = uVar1;
  s_00.str = &DAT_0028d31c;
  s_00.len._4_4_ = 0;
  runtime_printstring(s_00);
  runtime_printuint((ulong)uVar1);
  s_01.len._0_4_ = uVar1;
  s_01.str = (uint8 *)0x287741;
  s_01.len._4_4_ = 0;
  runtime_printstring(s_01);
  s_02.len._0_4_ = uVar1;
  s_02.str = (uint8 *)iVar2;
  s_02.len._4_4_ = 0;
  runtime_printstring(s_02);
  s_03.len._0_4_ = uVar1;
  s_03.str = &DAT_00287ddd;
  s_03.len._4_4_ = 0;
  runtime_printstring(s_03);
  runtime_printint(v_00);
  s_04.len._0_4_ = uVar1;
  s_04.str = &DAT_0028d1d8;
  s_04.len._4_4_ = 0;
  runtime_printstring(s_04);
  runtime_printint(v_01);
  runtime_printnl();
  runtime_printunlock();
  return;
}

