
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__scavengeStartGen(runtime_pageAlloc *p)

{
  uint32 *puVar1;
  runtime_addrRanges *unaff_RBX;
  long in_FS_OFFSET;
  runtime_pageAlloc *p_spill;
  
                    /* Unresolved local var: runtime.offAddr startAddr@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (0 < runtime_debug.scavtrace) {
    runtime_printScavTrace((uint32)p_spill,(uintptr)unaff_RBX,SUB41((p_spill->scav).gen,0));
  }
  runtime___addrRanges__cloneInto((runtime_addrRanges *)p_spill,unaff_RBX);
  runtime___addrRanges__removeGreaterEqual
            ((runtime_addrRanges *)p_spill,(p_spill->scav).freeHWM.a + 0x800000000000);
  (p_spill->scav).reservationBytes =
       ((p_spill->inUse).totalBytes + 0x3fffff & 0xffffffffffc00000) >> 6;
  puVar1 = &(p_spill->scav).gen;
  *puVar1 = *puVar1 + 1;
  (p_spill->scav).released = 0;
  (p_spill->scav).freeHWM.a = runtime_minOffAddr.a;
  (p_spill->scav).scavLWM.a = runtime_maxOffAddr.a;
  return;
}

