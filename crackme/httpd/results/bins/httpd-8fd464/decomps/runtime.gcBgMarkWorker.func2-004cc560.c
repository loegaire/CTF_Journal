
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcBgMarkWorker_func2(void)

{
  runtime_p *_p_;
  long lVar1;
  uint32 newval;
  long lVar2;
  runtime_gcWork *prVar3;
  long in_RDX;
  long extraout_RDX;
  runtime_guintptr unaff_RBX;
  long in_FS_OFFSET;
  string s;
  multireturn_runtime_gQueue_uint32_ mVar4;
  runtime_guintptr local_48;
  int local_40;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.p * pp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  _p_ = *(runtime_p **)(in_RDX + 0x10);
  lVar1 = *(long *)(in_RDX + 8);
  runtime_casgstatus((runtime_g *)_p_,(uint32)unaff_RBX,(uint32)lVar1);
  lVar2 = _p_->gcMarkWorkerMode;
  if (lVar2 == 1) {
    prVar3 = &_p_->gcw;
    runtime_gcDrain((runtime_gcWork *)_p_,unaff_RBX);
    newval = (uint32)prVar3;
    if (*(char *)(lVar1 + 0xb1) != '\0') {
                    /* Unresolved local var: uint32 n@[???]
                       Unresolved local var: runtime.gQueue drainQ@[???] */
      mVar4 = runtime_runqdrain(_p_);
      unaff_RBX = mVar4.drainQ.tail;
      newval = 3;
      if (local_40 != 0) {
        runtime_lock2(&runtime_sched.lock);
        newval = 3;
        if (local_48 != 0) {
          *(undefined8 *)(local_48 + 0xa0) = 0;
          if (runtime_sched.runq.tail == 0) {
            runtime_sched.runq.head = 3;
          }
          else {
            *(undefined8 *)(runtime_sched.runq.tail + 0xa0) = 3;
          }
          runtime_sched.runq.tail = local_48;
        }
        runtime_sched.runqsize = runtime_sched.runqsize + local_40;
        runtime_unlock2(&runtime_sched.lock);
      }
    }
    runtime_gcDrain(&_p_->gcw,unaff_RBX);
  }
  else if (lVar2 == 2) {
    runtime_gcDrain(&_p_->gcw,unaff_RBX);
    newval = (uint32)lVar2;
  }
  else {
    if (lVar2 != 3) {
      s.len = unaff_RBX;
      s.str = &DAT_002a7650;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    runtime_gcDrain(&_p_->gcw,unaff_RBX);
    newval = (uint32)lVar2;
  }
  runtime_casgstatus((runtime_g *)0x200000004,(uint32)unaff_RBX,newval);
  return;
}

