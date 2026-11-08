
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runqgrab(runtime.p * _p_, runtime.guintptr[256] * batch,
   uint32 batchHead, bool stealRunNextG, uint32 ~r4) */

uint32 runtime_runqgrab(runtime_p *_p_,runtime_guintptr (*batch) [256],uint32 batchHead,
                       bool stealRunNextG)

{
  uint uVar1;
  uint uVar2;
  runtime_p *prVar3;
  runtime_p *extraout_RAX;
  uint uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  runtime_p *_p__spill;
  runtime_guintptr (*batch_spill) [256];
  uint32 batchHead_spill;
  bool stealRunNextG_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    _p_ = extraout_RAX;
  }
  do {
    while( true ) {
                    /* Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???]
                       Unresolved local var: uint32 n@[???] */
      uVar1 = _p__spill->runqhead;
      uVar4 = _p__spill->runqtail - uVar1;
      uVar4 = uVar4 - (uVar4 >> 1);
      if (uVar4 == 0) break;
      if (uVar4 < 0x81) {
        for (uVar2 = 0; uVar2 < uVar4; uVar2 = uVar2 + 1) {
          (*batch_spill)[uVar2 + batchHead_spill & 0xff] = _p__spill->runq[uVar2 + uVar1 & 0xff];
        }
        LOCK();
        uVar2 = _p__spill->runqhead;
        bVar5 = uVar1 == uVar2;
        if (bVar5) {
          _p__spill->runqhead = uVar4 + uVar1;
          uVar2 = uVar1;
        }
        _p_ = (runtime_p *)(ulong)uVar2;
        UNLOCK();
        if (bVar5) {
          return uVar2;
        }
      }
    }
    prVar3 = _p_;
                    /* Unresolved local var: runtime.guintptr next@[???] */
    if ((!stealRunNextG_spill) ||
       (prVar3 = (runtime_p *)_p__spill->runnext, prVar3 == (runtime_p *)0x0)) {
      return (uint32)prVar3;
    }
    if (_p__spill->status == 1) {
      runtime_usleep();
                    /* Unresolved local var: uint32 i@[???]
                       Unresolved local var: runtime.guintptr g@[???] */
    }
    LOCK();
    _p_ = (runtime_p *)_p__spill->runnext;
    bVar5 = prVar3 == _p_;
    if (bVar5) {
      _p__spill->runnext = 0;
      _p_ = prVar3;
    }
    UNLOCK();
  } while (!bVar5);
  (*batch_spill)[(ulong)batchHead_spill & 0xff] = (runtime_guintptr)prVar3;
  return (uint32)((ulong)batchHead_spill & 0xff);
}

