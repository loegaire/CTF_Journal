
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.chanrecv(runtime.hchan * c, void * ep, bool block, bool
   selected, bool received) */

multireturn_bool_bool_ runtime_chanrecv(runtime_hchan *c,void *ep,bool block)

{
  runtime_mutex *l;
  uint32 *puVar1;
  runtime_waitReason reason;
  runtime_g *prVar2;
  undefined1 extraout_AL;
  undefined1 uVar3;
  bool extraout_AL_00;
  bool extraout_AL_01;
  bool extraout_AL_02;
  runtime_hchan *extraout_RAX;
  runtime_hchan *sg;
  runtime_hchan *extraout_RAX_00;
  long extraout_RAX_01;
  runtime_hchan *extraout_RAX_02;
  runtime__type *typ;
  runtime_sudog *extraout_RAX_03;
  runtime_sudog *extraout_RAX_04;
  runtime_sudog *extraout_RAX_05;
  runtime_sudog *extraout_RAX_06;
  runtime_sudog *prVar4;
  runtime_sudog *extraout_RAX_07;
  runtime_sudog *extraout_RAX_08;
  runtime_sudog *prVar5;
  ulong uVar6;
  uint uVar7;
  runtime_g *prVar8;
  runtime_g *extraout_RDX;
  runtime_g *extraout_RDX_00;
  runtime_g *extraout_RDX_01;
  runtime_g *extraout_RDX_02;
  runtime_g *extraout_RDX_03;
  runtime_hchan **lock;
  int in_RSI;
  void **traceskip;
  uint8 traceEv;
  runtime_waitq *in_RDI;
  long in_FS_OFFSET;
  bool bVar9;
  multireturn_bool_bool_ mVar10;
  multireturn_bool_bool_ mVar11;
  multireturn_bool_bool_ mVar12;
  multireturn_bool_bool_ mVar13;
  multireturn_bool_bool_ mVar14;
  multireturn_bool_bool_ mVar15;
  multireturn_bool_bool_ mVar16;
  string s;
  string s_00;
  runtime_hchan *c_spill;
  void *ep_spill;
  bool block_spill;
  long local_88;
  code *local_18;
  
  uVar6 = (ulong)block;
                    /* Unresolved local var: int64 t0@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.sudog * mysg@[???]
                       Unresolved local var: bool success@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (c_spill == (runtime_hchan *)0x0) {
    if (block_spill) {
      runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)0x1,ep,(runtime_waitReason)uVar6,
                     (uint8)in_RDI,in_RSI);
      s.len = (int)ep;
      s.str = &DAT_0029256d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    return (multireturn_bool_bool_)((ushort)(byte)ep << 8);
  }
  if (block_spill) {
    bVar9 = false;
  }
  else if (c_spill->dataqsiz == 0) {
    bVar9 = (c_spill->sendq).first == (runtime_sudog *)0x0;
  }
  else {
    ep = (void *)c_spill->qcount;
    bVar9 = ep == (runtime_sudog *)0x0;
  }
  if (bVar9) {
    if (c_spill->closed == 0) {
      mVar11.selected = SUB81(c_spill,0);
      mVar11.received = SUB81(ep,0);
      return mVar11;
    }
    if (c_spill->dataqsiz == 0) {
      prVar4 = (c_spill->sendq).first;
    }
    else {
      ep = (void *)c_spill->qcount;
      prVar4 = ep;
    }
    if (prVar4 == (runtime_sudog *)0x0) {
      if (ep_spill != (void *)0x0) {
        runtime_typedmemclr(c_spill->elemtype,ep);
        c_spill = extraout_RAX;
      }
      mVar10.selected = SUB81(c_spill,0);
      mVar10.received = SUB81(ep,0);
      return mVar10;
    }
  }
  if (runtime_blockprofilerate == 0) {
    local_88 = 0;
  }
  else {
    runtime_cputicks();
  }
  l = &c_spill->lock;
  runtime_lock2((runtime_mutex *)c_spill);
  sg = c_spill;
  if ((c_spill->closed != 0) && (c_spill->qcount == 0)) {
    runtime_unlock2(l);
    uVar3 = false;
    if (ep_spill != (void *)0x0) {
      runtime_typedmemclr(ep_spill,ep);
      uVar3 = extraout_AL;
    }
    mVar12.received = SUB81(ep,0);
    mVar12.selected = (bool)uVar3;
    return mVar12;
  }
  do {
    prVar4 = (sg->sendq).first;
    if (prVar4 == (runtime_sudog *)0x0) {
      prVar4 = (runtime_sudog *)0x0;
      break;
    }
    in_RDI = &sg->sendq;
    prVar5 = prVar4->next;
    if (prVar5 == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        (sg->sendq).first = (runtime_sudog *)0x0;
        (sg->sendq).last = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrierDX();
        in_RDI = (runtime_waitq *)(extraout_RAX_01 + 0x50);
        runtime_gcWriteBarrierDX();
        sg = extraout_RAX_02;
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      prVar5->prev = (runtime_sudog *)0x0;
      (sg->sendq).first = prVar5;
      prVar4->next = (runtime_sudog *)0x0;
    }
    else {
      runtime_gcWriteBarrierR8();
      runtime_gcWriteBarrierDX();
      in_RDI = (runtime_waitq *)&prVar4->next;
      runtime_gcWriteBarrierR8();
      sg = extraout_RAX_00;
    }
    if (prVar4->isSelect == false) {
      bVar9 = false;
    }
    else {
      puVar1 = &prVar4->g->selectDone;
      LOCK();
      bVar9 = *puVar1 == 0;
      if (bVar9) {
        *puVar1 = 1;
      }
      UNLOCK();
      bVar9 = !bVar9;
    }
    in_RSI = 1;
  } while (bVar9);
                    /* Unresolved local var: runtime.sudog * sg@[???] */
  mVar14.received = SUB81(sg,0);
  if (prVar4 != (runtime_sudog *)0x0) {
    local_18 = runtime_chanrecv_func1;
    runtime_recv((runtime_hchan *)&stack0xffffffffffffffe8,(runtime_sudog *)sg,prVar4,
                 (func__ **)in_RDI,in_RSI);
    mVar16.received = mVar14.received;
    mVar16.selected = extraout_AL_02;
    return mVar16;
  }
  if ((runtime_g *)sg->qcount != (runtime_g *)0x0) {
                    /* Unresolved local var: void * qp@[???] */
    typ = (runtime__type *)((long)&sg->buf->g + sg->recvx * (ulong)sg->elemsize);
    if (ep_spill != (void *)0x0) {
      runtime_typedmemmove(typ,sg,ep_spill);
      sg = c_spill;
    }
    runtime_typedmemclr(typ,sg);
    uVar7 = c_spill->recvx + 1;
    c_spill->recvx = uVar7;
    if (c_spill->dataqsiz == uVar7) {
      c_spill->recvx = 0;
    }
    c_spill->qcount = c_spill->qcount - 1;
    runtime_unlock2(l);
    mVar13.received = SUB81(sg,0);
    mVar13.selected = extraout_AL_00;
    return mVar13;
  }
  if (!block_spill) {
    runtime_unlock2(l);
    mVar14.selected = extraout_AL_01;
    return mVar14;
  }
  prVar2 = *(runtime_g **)(in_FS_OFFSET + -8);
  runtime_acquireSudog();
  c_spill[1].elemtype = (runtime__type *)0x0;
  if (local_88 != 0) {
    c_spill[1].elemtype = (runtime__type *)0xffffffffffffffff;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    c_spill[1].buf = ep_spill;
    c_spill[1].recvq.first = (runtime_sudog *)0x0;
    prVar4 = (runtime_sudog *)l;
  }
  else {
    runtime_gcWriteBarrierDX();
    runtime_gcWriteBarrierDX();
    prVar4 = extraout_RAX_03;
  }
  traceEv = (char)prVar2 + 0x48;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar2->waiting = prVar4;
    prVar4->g = prVar2;
    prVar8 = prVar2;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrierDX();
    prVar4 = extraout_RAX_04;
    prVar8 = extraout_RDX;
  }
  prVar4->isSelect = false;
  lock = &prVar4->c;
  traceskip = &prVar8->param;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar4->c = c_spill;
    prVar8->param = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierR9();
    runtime_gcWriteBarrierBX();
                    /* Unresolved local var: runtime.sudog * x@[???] */
    prVar4 = extraout_RAX_05;
    prVar8 = extraout_RDX_00;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar4->next = (runtime_sudog *)0x0;
  }
  else {
    runtime_gcWriteBarrierBX();
    prVar4 = extraout_RAX_06;
    prVar8 = extraout_RDX_01;
  }
  prVar5 = (c_spill->recvq).last;
  if (prVar5 == (runtime_sudog *)0x0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->prev = (runtime_sudog *)0x0;
      (c_spill->recvq).first = prVar4;
      (c_spill->recvq).last = prVar4;
    }
    else {
      runtime_gcWriteBarrierBX();
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrier();
      prVar8 = extraout_RDX_03;
    }
  }
  else if (runtime_writeBarrier._0_4_ == 0) {
    prVar4->prev = prVar5;
    prVar5->next = prVar4;
    (c_spill->recvq).last = prVar4;
  }
  else {
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
    prVar8 = extraout_RDX_02;
  }
  LOCK();
  reason = prVar8->parkingOnChan;
  prVar8->parkingOnChan = 1;
  UNLOCK();
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)l,lock,reason,traceEv,(int)traceskip);
  if (prVar2->waiting != prVar4) {
    s_00.len = (int)lock;
    s_00.str = &DAT_0029f97b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  prVar8 = prVar2;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar2->waiting = (runtime_sudog *)0x0;
    prVar5 = prVar4;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar5 = extraout_RAX_07;
  }
  prVar8->activeStackChans = false;
  if (0 < prVar5->releasetime) {
    runtime_blockevent(local_88,(int)lock);
    prVar5 = prVar4;
    prVar8 = prVar2;
  }
  bVar9 = prVar5->success;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar8->param = (void *)0x0;
    prVar5->c = (runtime_hchan *)0x0;
  }
  else {
    runtime_gcWriteBarrierCX();
    runtime_gcWriteBarrierCX();
    prVar5 = extraout_RAX_08;
  }
  runtime_releaseSudog(prVar5);
  mVar15.received = SUB81(lock,0);
  mVar15.selected = bVar9;
  return mVar15;
}

