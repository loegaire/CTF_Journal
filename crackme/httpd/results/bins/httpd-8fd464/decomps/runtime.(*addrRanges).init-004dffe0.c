
/* WARNING: Unknown calling convention */

void runtime___addrRanges__init(runtime_addrRanges *a,runtime_sysMemStat *sysStat)

{
  long in_FS_OFFSET;
  runtime_addrRanges *a_spill;
  runtime_sysMemStat *sysStat_spill;
  runtime_addrRange *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (a_spill->ranges).len = 0;
  (a_spill->ranges).cap = 0x10;
  runtime_persistentalloc((uintptr)a_spill,(uintptr)sysStat,sysStat_spill);
  (a_spill->ranges).array = local_10;
  if (runtime_writeBarrier._0_4_ == 0) {
    a_spill->sysStat = sysStat_spill;
  }
  else {
    runtime_gcWriteBarrier();
  }
  a_spill->totalBytes = 0;
  return;
}

