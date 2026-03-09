
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcPaceScavenger(void)

{
  ulong uVar1;
  double dVar2;
  
                    /* Unresolved local var: float64 goalRatio@[???]
                       Unresolved local var: uint64 retainedGoal@[???]
                       Unresolved local var: uint64 retainedNow@[???] */
  if (runtime_gcController.lastHeapGoal == 0) {
    runtime_mheap_.scavengeGoal = 0xffffffffffffffff;
    return;
  }
  dVar2 = (double)runtime_memstats.last_heap_inuse *
          ((double)runtime_gcController.heapGoal / (double)runtime_gcController.lastHeapGoal);
  if (9.223372036854776e+18 <= dVar2) {
    uVar1 = (long)(dVar2 - 9.223372036854776e+18) | 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)dVar2;
  }
  runtime_mheap_.scavengeGoal =
       -runtime_physPageSize & (uVar1 + uVar1 / 10 + runtime_physPageSize) - 1;
  if ((runtime_mheap_.scavengeGoal < runtime_memstats.heap_sys - runtime_memstats.heap_released) &&
     (runtime_physPageSize <=
      (runtime_memstats.heap_sys - runtime_memstats.heap_released) - runtime_mheap_.scavengeGoal)) {
    return;
  }
  runtime_mheap_.scavengeGoal = 0xffffffffffffffff;
  return;
}

