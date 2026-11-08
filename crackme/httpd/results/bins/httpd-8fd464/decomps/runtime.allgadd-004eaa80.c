
/* WARNING: Unknown calling convention */

void runtime_allgadd(runtime_g *gp)

{
  long lVar1;
  runtime_g **extraout_RAX;
  runtime_g **pprVar2;
  int unaff_RBX;
  runtime_g *new;
  int in_RDI;
  long in_FS_OFFSET;
  runtime_slice old;
  string s;
  runtime_g *gp_spill;
  runtime_g **local_28;
  long local_20;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->atomicstatus == 0) {
    s.len = unaff_RBX;
    s.str = &DAT_0029eb7d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_lock2(&runtime_allglock);
  pprVar2 = runtime_allgs.array;
  if ((ulong)runtime_allgs.cap < runtime_allgs.len + 1U) {
    old.len = runtime_allgs.len + 1U;
    old.array = (void *)runtime_allgs.cap;
    old.cap = in_RDI;
    runtime_growslice((runtime__type *)runtime_allgs.len,old,0x21e160);
    runtime_allgs.cap = local_18;
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_allgs.array = local_28;
      runtime_allgs.len = local_20;
      pprVar2 = local_28;
    }
    else {
      lVar1 = local_20;
      runtime_gcWriteBarrier();
      runtime_allgs.len = lVar1;
      pprVar2 = extraout_RAX;
    }
  }
  new = (runtime_g *)(runtime_allgs.len + 1);
  if (runtime_writeBarrier._0_4_ == 0) {
    pprVar2 = pprVar2 + runtime_allgs.len;
    runtime_allgs.len = (int)new;
    *pprVar2 = gp_spill;
    new = gp_spill;
  }
  else {
    runtime_allgs.len = (int)new;
    runtime_gcWriteBarrierDX();
  }
  pprVar2 = runtime_allgs.array;
  if (runtime_allgs.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (runtime_allgptr != runtime_allgs.array) {
    if (runtime_writeBarrier.enabled != false) {
      runtime_atomicwb(&runtime_allgptr,new);
    }
    LOCK();
    runtime_allgptr = pprVar2;
    UNLOCK();
  }
  LOCK();
  runtime_allglen = runtime_allgs.len;
  UNLOCK();
  runtime_unlock2(&runtime_allglock);
  return;
}

