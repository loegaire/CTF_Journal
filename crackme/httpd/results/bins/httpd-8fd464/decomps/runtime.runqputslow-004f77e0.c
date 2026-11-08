
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runqputslow(runtime.p * _p_, runtime.g * gp, uint32 h,
   uint32 t, bool ~r4) */

bool runtime_runqputslow(runtime_p *_p_,runtime_g *gp,uint32 h,uint32 t)

{
  runtime_g **pprVar1;
  runtime_g *prVar2;
  undefined1 extraout_AL;
  uint32 uVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  string s;
  runtime_p *_p__spill;
  runtime_g *gp_spill;
  uint32 h_spill;
  uint32 t_spill;
  runtime_g *batch [129];
  
                    /* Unresolved local var: uint32 n@[???]
                       Unresolved local var: runtime.gQueue q@[???] */
  while (batch + 0xb <= *(runtime_g ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  batch[0] = (runtime_g *)0x0;
  runtime_duffzero();
  if (t_spill - h_spill >> 1 != 0x80) {
    s.len = (int)gp;
    s.str = (uint8 *)0x2a19c4;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  uVar4 = 0;
  while (prVar2 = batch[0], uVar5 = (uint)uVar4, uVar5 < 0x80) {
                    /* Unresolved local var: uint32 i@[???] */
    batch[uVar4] = (runtime_g *)_p__spill->runq[uVar5 + h_spill & 0xff];
    uVar4 = (ulong)(uVar5 + 1);
  }
  LOCK();
  uVar3 = _p__spill->runqhead;
  bVar6 = h_spill == uVar3;
  if (bVar6) {
    _p__spill->runqhead = h_spill + 0x80;
    uVar3 = h_spill;
  }
  UNLOCK();
  if (!bVar6) {
    return SUB41(uVar3,0);
  }
  uVar4 = 0;
                    /* Unresolved local var: uint32 i@[???] */
  while( true ) {
    if (0x7f < (uint)uVar4) {
      runtime_lock2(&runtime_sched.lock);
      if (gp_spill != (runtime_g *)0x0) {
        gp_spill->schedlink = 0;
        if (runtime_sched.runq.tail == 0) {
          runtime_sched.runq.head = (runtime_guintptr)prVar2;
          runtime_sched.runq.tail = (runtime_guintptr)gp_spill;
        }
        else {
          *(runtime_g **)(runtime_sched.runq.tail + 0xa0) = prVar2;
          runtime_sched.runq.tail = (runtime_guintptr)gp_spill;
        }
      }
      runtime_sched.runqsize = runtime_sched.runqsize + 0x81;
      runtime_unlock2(&runtime_sched.lock);
      return (bool)extraout_AL;
    }
    pprVar1 = batch + uVar4;
    uVar4 = (ulong)((uint)uVar4 + 1);
    if (0x80 < uVar4) break;
    (*pprVar1)->schedlink = (runtime_guintptr)batch[uVar4];
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

