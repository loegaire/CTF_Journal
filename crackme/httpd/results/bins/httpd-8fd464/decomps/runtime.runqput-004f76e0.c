
/* WARNING: Unknown calling convention */

void runtime_runqput(runtime_p *_p_,runtime_g *gp,bool next)

{
  uint uVar1;
  runtime_p *_p__00;
  uint uVar2;
  uint32 in_EDI;
  long in_FS_OFFSET;
  bool bVar3;
  runtime_p *_p__spill;
  runtime_g *gp_spill;
  bool next_spill;
  char local_20;
  
                    /* Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  _p__00 = (runtime_p *)gp_spill;
  if (next_spill) {
    do {
      _p__00 = (runtime_p *)_p__spill->runnext;
      LOCK();
      bVar3 = _p__00 == (runtime_p *)_p__spill->runnext;
      if (bVar3) {
        _p__spill->runnext = (runtime_guintptr)gp_spill;
      }
      UNLOCK();
    } while (!bVar3);
    if (_p__00 == (runtime_p *)0x0) {
      return;
    }
  }
  do {
    uVar1 = _p__spill->runqtail;
    uVar2 = uVar1 - _p__spill->runqhead;
    if (uVar2 < 0x100) {
      _p__spill->runq[uVar1 & 0xff] = (runtime_guintptr)_p__00;
      LOCK();
      _p__spill->runqtail = uVar1 + 1;
      UNLOCK();
      return;
    }
    runtime_runqputslow(_p__00,(runtime_g *)(ulong)uVar2,(uint32)_p__spill,in_EDI);
  } while (local_20 == '\0');
  return;
}

