
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).allocManual(runtime.mheap * h, uintptr npages,
   runtime.spanAllocType typ, runtime.mspan * ~r2) */

runtime_mspan *
runtime___mheap__allocManual(runtime_mheap *h,uintptr npages,runtime_spanAllocType typ)

{
  runtime_spanClass in_DIL;
  long in_FS_OFFSET;
  string s;
  runtime_mheap *h_spill;
  uintptr npages_spill;
  runtime_spanAllocType typ_spill;
  runtime_mspan *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (typ_spill != 0) {
    runtime___mheap__allocSpan
              ((runtime_mheap *)(ulong)typ_spill,npages,(runtime_spanAllocType)npages_spill,in_DIL);
    return local_10;
  }
  s.len = npages;
  s.str = &DAT_002ab1e4;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

