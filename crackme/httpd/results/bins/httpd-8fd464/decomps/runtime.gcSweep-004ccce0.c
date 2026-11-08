
/* WARNING: Removing unreachable block (ram,0x004cce5b) */
/* WARNING: Removing unreachable block (ram,0x004cce65) */
/* WARNING: Removing unreachable block (ram,0x004cce75) */
/* WARNING: Unknown calling convention */

void runtime_gcSweep(runtime_gcMode mode)

{
  undefined1 next;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_gcMode mode_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (runtime_gcphase != 0) {
    s.len = unaff_RBX;
    s.str = &DAT_002a6bdd;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_lock2(&runtime_mheap_.lock);
  runtime_mheap_.sweepgen = runtime_mheap_.sweepgen + 2;
  runtime_mheap_.sweepDrained = 0;
  runtime_mheap_.pagesSwept = 0;
  runtime_mheap_.sweepArenas.len = runtime_mheap_.allArenas.len;
  runtime_mheap_.sweepArenas.cap = runtime_mheap_.allArenas.cap;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_mheap_.sweepArenas.array = runtime_mheap_.allArenas.array;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_mheap_.reclaimIndex = 0;
  runtime_mheap_.reclaimCredit = 0;
  runtime_unlock2(&runtime_mheap_.lock);
  next = 0x3c;
  LOCK();
  runtime_sweep.centralIndex = 0;
  UNLOCK();
  if (mode_spill != 2) {
    runtime_lock2(&runtime_sweep.lock);
    if (runtime_sweep.parked != false) {
      runtime_sweep.parked = false;
      runtime_ready(runtime_sweep.g,unaff_RBX,(bool)next);
    }
    runtime_unlock2(&runtime_sweep.lock);
    return;
  }
  runtime_lock2(&runtime_mheap_.lock);
  runtime_mheap_.sweepPagesPerByte = 0.0;
  runtime_unlock2(&runtime_mheap_.lock);
  do {
    runtime_sweepone();
    runtime_sweep.npausesweep = runtime_sweep.npausesweep + 1;
  } while( true );
}

