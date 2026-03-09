
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sysAlloc(uintptr n, runtime.sysMemStat * sysStat, void *
   ~r2) */

void * runtime_sysAlloc(uintptr n,runtime_sysMemStat *sysStat)

{
  uintptr n_spill;
  runtime_sysMemStat *sysStat_spill;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: void * v@[???] */
  runtime_mmap();
  if (local_18 != 0) {
    return local_20;
  }
  runtime___sysMemStat__add((runtime_sysMemStat *)n_spill,(int64)sysStat);
  return local_20;
}

