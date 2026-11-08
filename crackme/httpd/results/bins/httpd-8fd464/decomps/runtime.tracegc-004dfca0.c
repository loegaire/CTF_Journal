
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_tracegc(void)

{
  runtime_g *me;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_tracelock);
  me = *(runtime_g **)(in_FS_OFFSET + -8);
  me->m->traceback = 2;
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_00290696;
  runtime_printstring(s);
  runtime_printunlock();
  runtime_tracebackothers(me);
  runtime_printlock();
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029345a;
  runtime_printstring(s_00);
  runtime_printunlock();
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  me->m->traceback = 0;
  runtime_unlock2(&runtime_tracelock);
  return;
}

