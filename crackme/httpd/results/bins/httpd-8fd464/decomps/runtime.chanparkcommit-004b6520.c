
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.chanparkcommit(runtime.g * gp, void * chanLock, bool ~r2)
    */

bool runtime_chanparkcommit(runtime_g *gp,void *chanLock)

{
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  void *chanLock_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_spill->activeStackChans = true;
  LOCK();
  gp_spill->parkingOnChan = 0;
  UNLOCK();
  runtime_unlock2(chanLock_spill);
  return (bool)extraout_AL;
}

