
/* WARNING: Unknown calling convention */

void runtime_pidleput(runtime_p *_p_)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  string s;
  runtime_p *_p__spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
  } while (_p__spill->runqtail != _p__spill->runqtail);
  if ((_p__spill->runqtail != _p__spill->runqhead) || (_p__spill->runnext != 0)) {
    s.len = _p__spill->runnext;
    s.str = &DAT_002a4520;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_updateTimerPMask(_p__spill);
  iVar1 = _p__spill->id;
                    /* Unresolved local var: int32 word@[???]
                       Unresolved local var: uint32 mask@[???] */
  iVar2 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5;
  uVar3 = iVar1 + iVar2 * -0x20;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicshift();
  }
  if ((ulong)runtime_idlepMask.len <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  LOCK();
  runtime_idlepMask.array[iVar2] =
       runtime_idlepMask.array[iVar2] | 1 << ((byte)uVar3 & 0x1f) & -(uint)(uVar3 < 0x20);
  UNLOCK();
  _p__spill->link = runtime_sched.pidle;
  runtime_sched.pidle = (runtime_puintptr)_p__spill;
  LOCK();
  runtime_sched.npidle = runtime_sched.npidle + 1;
  UNLOCK();
  return;
}

