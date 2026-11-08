
/* WARNING: Unknown calling convention */

void runtime_sysFree(void *v,uintptr n,runtime_sysMemStat *sysStat)

{
  void *v_spill;
  uintptr n_spill;
  runtime_sysMemStat *sysStat_spill;
  
  runtime___sysMemStat__add((runtime_sysMemStat *)-n_spill,n);
  runtime_munmap();
  return;
}

