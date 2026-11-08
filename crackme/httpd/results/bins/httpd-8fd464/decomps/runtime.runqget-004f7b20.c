
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runqget(runtime.p * _p_, runtime.g * gp, bool inheritTime)
    */

multireturn_runtime_g___bool_ runtime_runqget(runtime_p *_p_)

{
  uint uVar1;
  uint uVar2;
  runtime_g *prVar3;
  runtime_guintptr rVar4;
  bool bVar5;
  multireturn_runtime_g___bool_ mVar6;
  multireturn_runtime_g___bool_ mVar7;
  multireturn_runtime_g___bool_ mVar8;
  runtime_p *_p__spill;
  
  do {
                    /* Unresolved local var: runtime.guintptr next@[???] */
    prVar3 = (runtime_g *)_p__spill->runnext;
    mVar7.gp = (runtime_g *)0x0;
    if (prVar3 == (runtime_g *)0x0) {
      do {
                    /* Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???]
                       Unresolved local var: runtime.g * gp@[???] */
        uVar2 = _p__spill->runqhead;
        if (uVar2 == _p__spill->runqtail) {
          mVar8.inheritTime = SUB41(_p__spill->runqtail,0);
          mVar8.gp = mVar7.gp;
          return mVar8;
        }
        rVar4 = _p__spill->runq[uVar2 & 0xff];
        LOCK();
        uVar1 = _p__spill->runqhead;
        bVar5 = uVar2 == uVar1;
        if (bVar5) {
          _p__spill->runqhead = uVar2 + 1;
          uVar1 = uVar2;
        }
        mVar7.gp = (runtime_g *)(ulong)uVar1;
        UNLOCK();
      } while (!bVar5);
      mVar7.inheritTime = SUB81(rVar4,0);
      return mVar7;
    }
    LOCK();
    bVar5 = prVar3 == (runtime_g *)_p__spill->runnext;
    if (bVar5) {
      _p__spill->runnext = 0;
    }
    UNLOCK();
  } while (!bVar5);
  mVar6.inheritTime = bVar5;
  mVar6.gp = prVar3;
  return mVar6;
}

