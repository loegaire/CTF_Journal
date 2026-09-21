
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newAllocBits(uintptr nelems, runtime.gcBits * ~r1) */

runtime_gcBits * runtime_newAllocBits(uintptr nelems)

{
  long in_FS_OFFSET;
  uintptr nelems_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newMarkBits(nelems_spill);
  return local_10;
}

