
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*linearAlloc).alloc(runtime.linearAlloc * l, uintptr
   size, uintptr align, runtime.sysMemStat * sysStat, void * ~r3) */

void * runtime___linearAlloc__alloc
                 (runtime_linearAlloc *l,uintptr size,uintptr align,runtime_sysMemStat *sysStat)

{
  runtime_sysMemStat *sysStat_00;
  ulong uVar1;
  long in_FS_OFFSET;
  runtime_linearAlloc *l_spill;
  uintptr size_spill;
  uintptr align_spill;
  runtime_sysMemStat *sysStat_spill;
  
                    /* Unresolved local var: uintptr p@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sysStat_00 = (runtime_sysMemStat *)((align_spill + l_spill->next) - 1 & -align_spill);
  uVar1 = size_spill + (long)sysStat_00;
  if (uVar1 <= l_spill->end) {
    l_spill->next = uVar1;
                    /* Unresolved local var: uintptr pEnd@[???]
                       Unresolved local var: uintptr ~R0@[???] */
    uVar1 = (uVar1 + runtime_physPageSize) - 2 & -runtime_physPageSize;
    if (l_spill->mapped < uVar1) {
      if (l_spill->mapMemory != false) {
        runtime_sysMap(sysStat_spill,-runtime_physPageSize,sysStat_00);
      }
      l_spill->mapped = uVar1;
    }
    return l_spill;
  }
  return l_spill;
}

