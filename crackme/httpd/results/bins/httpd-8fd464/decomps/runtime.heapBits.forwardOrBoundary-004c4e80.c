
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.heapBits.forwardOrBoundary(runtime.heapBits h, uintptr n,
   runtime.heapBits ~r1, uintptr ~r2) */

multireturn_runtime_heapBits_uintptr_
runtime_heapBits_forwardOrBoundary(runtime_heapBits h,uintptr n)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  runtime_heapBits rVar2;
  multireturn_runtime_heapBits_uintptr_ mVar3;
  runtime_heapBits h_spill;
  uintptr n_spill;
  undefined4 local_20;
  undefined4 local_18;
  
  puVar1 = h.last;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar2.bitp = (long)(h_spill.last + (1 - (long)h_spill.bitp)) * 4;
  if (rVar2.bitp < n_spill) {
    n_spill = rVar2.bitp;
  }
  rVar2.shift = h_spill.arena;
  rVar2.arena = (undefined4)n_spill;
  rVar2.last = puVar1;
  rVar2 = runtime_heapBits_forward(rVar2,n);
  mVar3.~r1.last = rVar2.last;
  mVar3.~r1.shift = local_18;
  mVar3.~r1.bitp = (uint8 *)n_spill;
  mVar3.~r1.arena = local_20;
  mVar3.~r2 = n;
  return mVar3;
}

