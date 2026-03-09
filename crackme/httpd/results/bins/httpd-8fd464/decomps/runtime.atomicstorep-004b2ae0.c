
/* WARNING: Unknown calling convention */

void runtime_atomicstorep(void *ptr,void *new)

{
  void *ptr_spill;
  void *new_spill;
  
  if (runtime_writeBarrier.enabled) {
    runtime_atomicwb(ptr_spill,new);
  }
  LOCK();
  *(void **)ptr_spill = new_spill;
  UNLOCK();
  return;
}

