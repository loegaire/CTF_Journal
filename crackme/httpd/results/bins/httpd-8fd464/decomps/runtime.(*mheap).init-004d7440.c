
/* WARNING: Unknown calling convention */

void runtime___mheap__init(runtime_mheap *h)

{
  runtime_mheap *extraout_RAX;
  runtime_mheap *extraout_RAX_00;
  runtime_mheap *extraout_RAX_01;
  runtime_mheap *extraout_RAX_02;
  runtime_mheap *extraout_RAX_03;
  runtime_mheap *extraout_RAX_04;
  runtime_mheap *extraout_RAX_05;
  runtime_mheap *extraout_RAX_06;
  runtime_mheap *extraout_RAX_07;
  runtime_mheap *extraout_RAX_08;
  runtime_mheap *extraout_RAX_09;
  runtime_mheap *extraout_RAX_10;
  runtime_sysMemStat *prVar1;
  long lVar2;
  runtime_mutex *unaff_RBX;
  long in_FS_OFFSET;
  runtime_mheap *h_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (h_spill->spanalloc).size = 0x88;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->spanalloc).first =
         (func_unsafe_Pointer__unsafe_Pointer_ **)&PTR_runtime_recordspan_002b39c8;
    (h_spill->spanalloc).arg = h_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    runtime_gcWriteBarrier();
    h_spill = extraout_RAX;
  }
  (h_spill->spanalloc).list = (runtime_mlink *)0x0;
  (h_spill->spanalloc).chunk = 0;
  (h_spill->spanalloc).nchunk = 0;
  (h_spill->spanalloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->spanalloc).stat = &runtime_memstats.mspan_sys;
  }
  else {
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_00;
  }
  (h_spill->spanalloc).zero = true;
  (h_spill->cachealloc).size = 0x4b0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->cachealloc).first = (func_unsafe_Pointer__unsafe_Pointer_ **)0x0;
    (h_spill->cachealloc).arg = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierCX();
    runtime_gcWriteBarrierDX();
    h_spill = extraout_RAX_01;
  }
  (h_spill->cachealloc).list = (runtime_mlink *)0x0;
  (h_spill->cachealloc).chunk = 0;
  (h_spill->cachealloc).nchunk = 0;
  (h_spill->cachealloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->cachealloc).stat = &runtime_memstats.mcache_sys;
  }
  else {
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_02;
  }
  (h_spill->cachealloc).zero = true;
  (h_spill->specialfinalizeralloc).size = 0x30;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->specialfinalizeralloc).first = (func_unsafe_Pointer__unsafe_Pointer_ **)0x0;
    (h_spill->specialfinalizeralloc).arg = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierCX();
    runtime_gcWriteBarrierDX();
    h_spill = extraout_RAX_03;
  }
  (h_spill->specialfinalizeralloc).list = (runtime_mlink *)0x0;
  (h_spill->specialfinalizeralloc).chunk = 0;
  (h_spill->specialfinalizeralloc).nchunk = 0;
  (h_spill->specialfinalizeralloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar1 = &runtime_memstats.other_sys;
    (h_spill->specialfinalizeralloc).stat = &runtime_memstats.other_sys;
  }
  else {
    prVar1 = &runtime_memstats.other_sys;
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_04;
  }
  (h_spill->specialfinalizeralloc).zero = true;
  (h_spill->specialprofilealloc).size = 0x18;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->specialprofilealloc).first = (func_unsafe_Pointer__unsafe_Pointer_ **)0x0;
    (h_spill->specialprofilealloc).arg = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierDX();
    unaff_RBX = (runtime_mutex *)0x0;
    runtime_gcWriteBarrierBX();
    h_spill = extraout_RAX_05;
  }
  (h_spill->specialprofilealloc).list = (runtime_mlink *)0x0;
  (h_spill->specialprofilealloc).chunk = 0;
  (h_spill->specialprofilealloc).nchunk = 0;
  (h_spill->specialprofilealloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->specialprofilealloc).stat = prVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_06;
  }
  (h_spill->specialprofilealloc).zero = true;
  (h_spill->specialReachableAlloc).size = 0x18;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->specialReachableAlloc).first = (func_unsafe_Pointer__unsafe_Pointer_ **)0x0;
    (h_spill->specialReachableAlloc).arg = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierDX();
    unaff_RBX = (runtime_mutex *)0x0;
    runtime_gcWriteBarrierBX();
    h_spill = extraout_RAX_07;
  }
  (h_spill->specialReachableAlloc).list = (runtime_mlink *)0x0;
  (h_spill->specialReachableAlloc).chunk = 0;
  (h_spill->specialReachableAlloc).nchunk = 0;
  (h_spill->specialReachableAlloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->specialReachableAlloc).stat = prVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_08;
  }
  (h_spill->specialReachableAlloc).zero = true;
  (h_spill->arenaHintAlloc).size = 0x18;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->arenaHintAlloc).first = (func_unsafe_Pointer__unsafe_Pointer_ **)0x0;
    (h_spill->arenaHintAlloc).arg = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierDX();
    runtime_gcWriteBarrierDX();
    h_spill = extraout_RAX_09;
  }
  (h_spill->arenaHintAlloc).list = (runtime_mlink *)0x0;
  (h_spill->arenaHintAlloc).chunk = 0;
  (h_spill->arenaHintAlloc).nchunk = 0;
  (h_spill->arenaHintAlloc).inuse = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (h_spill->arenaHintAlloc).stat = prVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
    h_spill = extraout_RAX_10;
  }
  (h_spill->arenaHintAlloc).zero = true;
  (h_spill->spanalloc).zero = false;
                    /* Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < 0x88; lVar2 = lVar2 + 1) {
    h_spill->central[lVar2].mcentral.spanclass = (runtime_spanClass)lVar2;
  }
  runtime___pageAlloc__init
            ((runtime_pageAlloc *)&runtime_memstats.gcMiscSys,unaff_RBX,
             (runtime_sysMemStat *)&h_spill->pages);
  return;
}

