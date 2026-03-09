
/* WARNING: Unknown calling convention */

void runtime_tracefree(void *p,uintptr size)

{
  runtime_g *gp;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  void *p_spill;
  uintptr size_spill;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_tracelock);
  gp = *(runtime_g **)(in_FS_OFFSET + -8);
  gp->m->traceback = 2;
  runtime_printlock();
  s.len = size;
  s.str = &DAT_0029068c;
  runtime_printstring(s);
  runtime_printpointer(p_spill);
  s_00.len = size;
  s_00.str = &DAT_00287787;
  runtime_printstring(s_00);
  runtime_printhex(size_spill);
  s_01.len = size;
  s_01.str = &DAT_00287783;
  runtime_printstring(s_01);
  runtime_printunlock();
  runtime_goroutineheader(gp);
  runtime_systemstack();
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  gp->m->traceback = 0;
  runtime_unlock2(&runtime_tracelock);
  return;
}

