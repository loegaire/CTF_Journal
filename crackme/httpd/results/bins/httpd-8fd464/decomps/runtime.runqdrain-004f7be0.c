
/* WARNING: Removing unreachable block (ram,0x004f7c3f) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runqdrain(runtime.p * _p_, runtime.gQueue drainQ, uint32
   n) */

multireturn_runtime_gQueue_uint32_ runtime_runqdrain(runtime_p *_p_)

{
  uint32 uVar1;
  runtime_guintptr rVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  multireturn_runtime_gQueue_uint32_ mVar6;
  multireturn_runtime_gQueue_uint32_ mVar7;
  runtime_p *_p__spill;
  runtime_guintptr rStack0000000000000018;
  
                    /* Unresolved local var: runtime.guintptr oldNext@[???]
                       Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???]
                       Unresolved local var: uint32 qn@[???] */
  rStack0000000000000018 = 0;
  rVar2 = _p__spill->runnext;
  if (rVar2 == 0) {
    bVar5 = false;
  }
  else {
    LOCK();
    bVar5 = rVar2 == _p__spill->runnext;
    if (bVar5) {
      _p__spill->runnext = 0;
    }
    UNLOCK();
  }
  if (bVar5) {
    *(undefined8 *)(rVar2 + 0xa0) = 0;
    uVar4 = 1;
    rStack0000000000000018 = rVar2;
  }
  else {
    uVar4 = 0;
  }
  do {
    do {
      uVar1 = _p__spill->runqhead;
      mVar7.drainQ.tail._0_4_ = _p__spill->runqtail - uVar1;
      mVar6.n = (uint32)_p__spill;
      if ((uint)mVar7.drainQ.tail == 0) {
        mVar6.drainQ.tail = 0;
        mVar6.drainQ.head = uVar4;
        return mVar6;
      }
    } while (0x100 < (uint)mVar7.drainQ.tail);
                    /* Unresolved local var: uint32 i@[???]
                       Unresolved local var: runtime.g * gp@[???] */
    LOCK();
    bVar5 = uVar1 == _p__spill->runqhead;
    if (bVar5) {
      _p__spill->runqhead = (uint)mVar7.drainQ.tail + uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  uVar4 = 0;
  while (uVar3 = (uint)uVar4, uVar3 < (uint)mVar7.drainQ.tail) {
    rVar2 = _p__spill->runq[uVar3 + uVar1 & 0xff];
    *(undefined8 *)(rVar2 + 0xa0) = 0;
    if (rStack0000000000000018 != 0) {
      *(runtime_guintptr *)(rStack0000000000000018 + 0xa0) = rVar2;
    }
    rStack0000000000000018 = rVar2;
    uVar4 = (ulong)(uVar3 + 1);
  }
  mVar7.drainQ.head = uVar4;
  mVar7.drainQ.tail._4_4_ = 0;
  mVar7.n = mVar6.n;
  return mVar7;
}

