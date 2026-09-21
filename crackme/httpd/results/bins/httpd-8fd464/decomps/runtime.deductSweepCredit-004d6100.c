
/* WARNING: Unknown calling convention */

void runtime_deductSweepCredit(uintptr spanBytes,uintptr callerSweepPages)

{
  uint64 uVar1;
  long in_FS_OFFSET;
  double dVar2;
  uintptr spanBytes_spill;
  uintptr callerSweepPages_spill;
  long local_20;
  
                    /* Unresolved local var: uint64 sweptBasis@[???]
                       Unresolved local var: uintptr newHeapLive@[???]
                       Unresolved local var: int64 pagesTarget@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((double)runtime_mheap_.sweepPagesPerByte == 0.0) &&
     (!NAN((double)runtime_mheap_.sweepPagesPerByte))) {
    return;
  }
  if (runtime_trace.enabled != false) {
    runtime_traceGCSweepStart();
  }
  do {
    uVar1 = runtime_mheap_.pagesSweptBasis;
    dVar2 = (double)runtime_mheap_.sweepPagesPerByte *
            (double)((runtime_gcController.heapLive - runtime_mheap_.sweepHeapLiveBasis) +
                    spanBytes_spill);
    do {
      if ((long)((long)dVar2 - callerSweepPages_spill) <= (long)(runtime_mheap_.pagesSwept - uVar1))
      {
LAB_004d6223:
        if (runtime_trace.enabled != false) {
          runtime_traceGCSweepDone();
        }
        return;
      }
      runtime_sweepone();
      if (local_20 == -1) {
        runtime_mheap_.sweepPagesPerByte = 0.0;
        goto LAB_004d6223;
      }
    } while (runtime_mheap_.pagesSweptBasis == uVar1);
  } while( true );
}

