
/* WARNING: Unknown calling convention */

void runtime_recv(runtime_hchan *c,runtime_sudog *sg,void *ep,func__ **unlockf,int skip)

{
  runtime_g *prVar1;
  func__ *traceskip;
  runtime_sudog *extraout_RAX;
  runtime_sudog *prVar2;
  void *src;
  uint uVar3;
  long in_FS_OFFSET;
  runtime_hchan *c_spill;
  runtime_sudog *sg_spill;
  void *ep_spill;
  func__ **unlockf_spill;
  int skip_spill;
  runtime__type *local_30;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (c_spill->dataqsiz == 0) {
    if (ep_spill != (void *)0x0) {
      local_30 = c_spill->elemtype;
      runtime_recvDirect((runtime__type *)sg_spill,sg,ep_spill);
    }
  }
  else {
                    /* Unresolved local var: void * qp@[???] */
    src = (void *)(c_spill->recvx * (ulong)c_spill->elemsize + (long)c_spill->buf);
    if (ep_spill != (void *)0x0) {
      runtime_typedmemmove((runtime__type *)c_spill,c_spill->elemtype,src);
    }
    local_30 = c_spill->elemtype;
    runtime_typedmemmove((runtime__type *)c_spill,sg_spill,src);
    uVar3 = c_spill->recvx + 1;
    c_spill->recvx = uVar3;
    if (c_spill->dataqsiz == uVar3) {
      c_spill->recvx = 0;
    }
    c_spill->sendx = c_spill->recvx;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    sg_spill->elem = (void *)0x0;
    prVar2 = sg_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar2 = extraout_RAX;
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
    sg_spill->releasetime = (int64)local_30;
  }
  runtime_goready((runtime_g *)(skip_spill + 1),(int)traceskip);
  return;
}

