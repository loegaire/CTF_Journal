
/* WARNING: Unknown calling convention */

void runtime_netpolldeadlineimpl(runtime_pollDesc *pd,uintptr seq,bool read,bool write)

{
  runtime_g *gp;
  uintptr uVar1;
  runtime_g *gp_00;
  runtime_pollDesc *prVar2;
  long in_FS_OFFSET;
  bool bVar3;
  string s;
  string s_00;
  runtime_pollDesc *pd_spill;
  uintptr seq_spill;
  bool read_spill;
  bool write_spill;
  
                    /* Unresolved local var: uintptr currentSeq@[???]
                       Unresolved local var: runtime.g * rg@[???]
                       Unresolved local var: runtime.g * wg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2((runtime_mutex *)pd_spill);
  uVar1 = pd_spill->rseq;
  if (!read_spill) {
    uVar1 = pd_spill->wseq;
  }
  if (seq_spill != uVar1) {
    runtime_unlock2(&pd_spill->lock);
    return;
  }
  if (read_spill) {
    if ((pd_spill->rd < 1) || ((pd_spill->rt).f == (func_interface_____uintptr_ **)0x0)) {
      s_00.len = seq_spill;
      s_00.str = &DAT_002a45ac;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    pd_spill->rd = -1;
    LOCK();
    (pd_spill->rt).f = (func_interface_____uintptr_ **)0x0;
    UNLOCK();
    do {
      gp_00 = (runtime_g *)pd_spill->rg;
      if (gp_00 == (runtime_g *)0x1) {
        gp_00 = (runtime_g *)0x0;
        goto LAB_004e1f6f;
      }
      if (gp_00 == (runtime_g *)0x0) {
        gp_00 = (runtime_g *)0x0;
        goto LAB_004e1f6f;
      }
      LOCK();
      bVar3 = gp_00 == (runtime_g *)pd_spill->rg;
      if (bVar3) {
        pd_spill->rg = 0;
      }
      UNLOCK();
    } while (!bVar3);
    if (gp_00 == (runtime_g *)0x2) {
      gp_00 = (runtime_g *)0x0;
    }
  }
  else {
    read_spill = false;
    gp_00 = (runtime_g *)0x0;
  }
LAB_004e1f6f:
  if (write_spill) {
    if ((pd_spill->wd < 1) ||
       (((pd_spill->wt).f == (func_interface_____uintptr_ **)0x0 && (read_spill == false)))) {
      s.len._0_1_ = write_spill;
      s.str = &DAT_002a4d7d;
      s.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    pd_spill->wd = -1;
    LOCK();
    (pd_spill->wt).f = (func_interface_____uintptr_ **)0x0;
    UNLOCK();
    prVar2 = (runtime_pollDesc *)(ulong)write_spill;
    do {
      gp = (runtime_g *)pd_spill->wg;
      if (gp == (runtime_g *)0x1) {
        gp = (runtime_g *)0x0;
        pd_spill = prVar2;
        goto LAB_004e1fb8;
      }
      if (gp == (runtime_g *)0x0) {
        gp = (runtime_g *)0x0;
        pd_spill = prVar2;
        goto LAB_004e1fb8;
      }
      LOCK();
      bVar3 = gp == (runtime_g *)pd_spill->wg;
      if (bVar3) {
        pd_spill->wg = 0;
      }
      UNLOCK();
      prVar2 = pd_spill;
    } while (!bVar3);
    if (gp == (runtime_g *)0x2) {
      gp = (runtime_g *)0x0;
    }
  }
  else {
    gp = (runtime_g *)0x0;
    pd_spill = (runtime_pollDesc *)(ulong)write_spill;
  }
LAB_004e1fb8:
  runtime_unlock2((runtime_mutex *)gp);
  if (gp_00 != (runtime_g *)0x0) {
    LOCK();
    runtime_netpollWaiters = runtime_netpollWaiters - 1;
    UNLOCK();
    runtime_goready(gp_00,(int)pd_spill);
  }
  if (gp != (runtime_g *)0x0) {
    LOCK();
    runtime_netpollWaiters = runtime_netpollWaiters - 1;
    UNLOCK();
    runtime_goready(gp,(int)pd_spill);
  }
  return;
}

