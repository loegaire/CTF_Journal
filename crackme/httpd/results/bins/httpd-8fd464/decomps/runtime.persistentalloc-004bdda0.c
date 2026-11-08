
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.persistentalloc(uintptr size, uintptr align,
   runtime.sysMemStat * sysStat, void * ~r3) */

void * runtime_persistentalloc(uintptr size,uintptr align,runtime_sysMemStat *sysStat)

{
  long in_FS_OFFSET;
  uintptr size_spill;
  uintptr align_spill;
  runtime_sysMemStat *sysStat_spill;
  runtime_notInHeap *p;
  code *local_30;
  runtime_notInHeap **pprStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p = (runtime_notInHeap *)0x0;
  local_30 = runtime_persistentalloc_func1;
  pprStack_10 = &p;
  runtime_systemstack();
  return p;
}

