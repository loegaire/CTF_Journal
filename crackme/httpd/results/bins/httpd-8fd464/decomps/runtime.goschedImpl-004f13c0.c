
/* WARNING: Unknown calling convention */

void runtime_goschedImpl(runtime_g *gp)

{
  uint uVar1;
  long lVar2;
  void *p;
  int64 v;
  int64 v_00;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: uint32 status@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((gp_spill->atomicstatus & 0xffffefff) == 2) {
    runtime_casgstatus(gp_spill,unaff_EBX,2);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 200) + 0x30) = 0;
    *(undefined8 *)(*(long *)(lVar2 + 0x30) + 200) = 0;
    runtime_lock2(&runtime_sched.lock);
    gp_spill->schedlink = 0;
    if (runtime_sched.runq.tail == 0) {
      runtime_sched.runq.head = (runtime_guintptr)gp_spill;
    }
    else {
      *(runtime_g **)(runtime_sched.runq.tail + 0xa0) = gp_spill;
    }
    runtime_sched.runq.tail = (runtime_guintptr)gp_spill;
    runtime_sched.runqsize = runtime_sched.runqsize + 1;
    runtime_unlock2(&runtime_sched.lock);
    runtime_schedule();
    return;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  p = *(void **)(in_FS_OFFSET + -8);
  uVar1 = gp_spill->atomicstatus;
  v = gp_spill->goid;
  runtime_printlock();
  s.len = v;
  s.str = &DAT_00299ad5;
  runtime_printstring(s);
  runtime_printpointer(gp_spill);
  s_00.len = v;
  s_00.str = &DAT_0028a40e;
  runtime_printstring(s_00);
  runtime_printint(v);
  s_01.len = v;
  s_01.str = &DAT_0029ae57;
  runtime_printstring(s_01);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  uVar1 = *(uint *)((long)p + 0x90);
  v_00 = *(int64 *)((long)p + 0x98);
  runtime_printlock();
  s_02.len = v;
  s_02.str = &DAT_00299aa5;
  runtime_printstring(s_02);
  runtime_printpointer(p);
  s_03.len = v;
  s_03.str = &DAT_0028a40e;
  runtime_printstring(s_03);
  runtime_printint(v_00);
  s_04.len = v;
  s_04.str = &DAT_0029ae44;
  runtime_printstring(s_04);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  s_05.len = v;
  s_05.str = &DAT_00292f6e;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_05);
}

