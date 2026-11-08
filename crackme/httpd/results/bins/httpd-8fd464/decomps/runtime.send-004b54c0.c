
/* WARNING: Unknown calling convention */

void runtime_send(runtime_hchan *c,runtime_sudog *sg,void *ep,func__ **unlockf,int skip)

{
  runtime_g *prVar1;
  func__ *traceskip;
  runtime_sudog *extraout_RAX;
  runtime_sudog *prVar2;
  long in_FS_OFFSET;
  runtime_hchan *c_spill;
  runtime_sudog *sg_spill;
  void *ep_spill;
  func__ **unlockf_spill;
  int skip_spill;
  runtime__type *local_28;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = sg_spill;
  if (sg_spill->elem != (void *)0x0) {
    local_28 = c_spill->elemtype;
    runtime_sendDirect((runtime__type *)sg_spill,sg,ep_spill);
    if (runtime_writeBarrier._0_4_ == 0) {
      sg_spill->elem = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      prVar2 = extraout_RAX;
    }
  }
  prVar1 = prVar2->g;
  traceskip = *unlockf_spill;
  (*traceskip)();
  prVar2 = sg_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar1->param = sg_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  prVar2->success = true;
  if (prVar2->releasetime != 0) {
    runtime_cputicks();
    sg_spill->releasetime = (int64)local_28;
  }
  runtime_goready((runtime_g *)(skip_spill + 1),(int)traceskip);
  return;
}

