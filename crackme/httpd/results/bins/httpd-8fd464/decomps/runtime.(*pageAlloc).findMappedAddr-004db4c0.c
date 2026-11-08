
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).findMappedAddr(runtime.pageAlloc * p,
   runtime.offAddr addr, runtime.offAddr ~r1) */

runtime_offAddr runtime___pageAlloc__findMappedAddr(runtime_pageAlloc *p,runtime_offAddr addr)

{
  ulong uVar1;
  long in_FS_OFFSET;
  runtime_pageAlloc *p_spill;
  runtime_offAddr addr_spill;
  uintptr local_18;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((p_spill->test == false) &&
     (addr.a = (uintptr)runtime_mheap_.arenas[0],
     runtime_mheap_.arenas[0] != (runtime_heapArena *(*) [4194304])0x0)) {
    uVar1 = addr_spill.a + 0x800000000000 >> 0x1a;
    if (0x3fffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    if ((*runtime_mheap_.arenas[0])[uVar1] != (runtime_heapArena *)0x0) {
      return (runtime_offAddr)(uintptr)(*runtime_mheap_.arenas[0])[uVar1];
    }
  }
  runtime___addrRanges__findAddrGreaterEqual(&p_spill->inUse,addr.a);
  if (local_10 == '\0') {
    return (runtime_offAddr)runtime_maxOffAddr.a;
  }
  return (runtime_offAddr)local_18;
}

