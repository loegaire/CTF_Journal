
/* WARNING: Removing unreachable block (ram,0x005130a5) */
/* WARNING: Removing unreachable block (ram,0x005130bc) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkTermination_func2(void)

{
  runtime_gcWork *gcw;
  runtime_gcDrainFlags unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_work.heap2 = runtime_work.bytesMarked;
  if (0 < runtime_debug.gccheckmark) {
                    /* Unresolved local var: runtime.gcWork * gcw@[???] */
    runtime_startCheckmarks();
    runtime_gcResetMarkState();
    gcw = (runtime_gcWork *)
          (*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8) + 0x1698);
    runtime_gcDrain(gcw,unaff_RBX);
    runtime_wbBufFlush1(*(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8));
    runtime___gcWork__dispose(gcw);
    runtime_endCheckmarks();
  }
  LOCK();
  runtime_gcphase = 0;
  UNLOCK();
  runtime_writeBarrier.needed = false;
  runtime_writeBarrier.enabled = runtime_writeBarrier.cgo;
  runtime_gcSweep(runtime_work.mode);
  return;
}

