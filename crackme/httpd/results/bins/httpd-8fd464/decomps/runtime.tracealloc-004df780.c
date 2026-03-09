
/* WARNING: Unknown calling convention */

void runtime_tracealloc(void *p,uintptr size,runtime__type *typ)

{
  runtime_g *gp;
  runtime_g *prVar1;
  uint in_RSI;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  string sVar2;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  void *p_spill;
  uintptr size_spill;
  runtime__type *typ_spill;
  uint8 *local_58;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_tracelock);
  gp = *(runtime_g **)(in_FS_OFFSET + -8);
  gp->m->traceback = 2;
  if (typ_spill == (runtime__type *)0x0) {
    runtime_printlock();
    s_03.len = size;
    s_03.str = &DAT_0029249c;
    runtime_printstring(s_03);
    runtime_printpointer(p_spill);
    s_04.len = size;
    s_04.str = &DAT_00287787;
    runtime_printstring(s_04);
    runtime_printhex(size_spill);
    s_05.len = size;
    s_05.str = &DAT_00287783;
    runtime_printstring(s_05);
    runtime_printunlock();
    sVar2.len = size;
  }
  else {
    sVar2 = runtime____type__string((runtime__type *)gp);
    runtime_printlock();
    sVar2.str = &DAT_0029249c;
    runtime_printstring(sVar2);
    runtime_printpointer(p_spill);
    s.len = sVar2.len;
    s.str = &DAT_00287787;
    runtime_printstring(s);
    runtime_printhex(size_spill);
    s_00.len = sVar2.len;
    s_00.str = &DAT_00287787;
    runtime_printstring(s_00);
    s_01.len = sVar2.len;
    s_01.str = local_58;
    runtime_printstring(s_01);
    s_02.len = sVar2.len;
    s_02.str = &DAT_00287783;
    runtime_printstring(s_02);
    runtime_printunlock();
  }
  prVar1 = gp->m->curg;
  if ((prVar1 == (runtime_g *)0x0) || (gp == prVar1)) {
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???] */
    runtime_goroutineheader(gp);
    runtime_systemstack();
  }
  else {
    runtime_goroutineheader(gp);
    runtime_traceback1((uintptr)gp,sVar2.len,(uintptr)gp->m->curg,in_RDI,in_RSI);
  }
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  gp->m->traceback = 0;
  runtime_unlock2(&runtime_tracelock);
  return;
}

