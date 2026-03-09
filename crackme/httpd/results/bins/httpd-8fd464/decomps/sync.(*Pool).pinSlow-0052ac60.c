
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Pool).pinSlow(sync.Pool * p, sync.poolLocal * ~r0, int ~r1)
    */

multireturn_sync_poolLocal___int_ sync___Pool__pinSlow(sync_Pool *p)

{
  sync_Pool **extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *n;
  sync_poolLocal *extraout_RAX_01;
  sync_poolLocal *extraout_RAX_02;
  void *unaff_RBX;
  sync_Pool **ppsVar1;
  int in_RDI;
  long in_FS_OFFSET;
  bool bVar2;
  multireturn_sync_poolLocal___int_ mVar3;
  multireturn_sync_poolLocal___int_ mVar4;
  runtime_slice old;
  sync_Pool *p_spill;
  void **ppvStack0000000000000010;
  runtime__type *prStack0000000000000018;
  runtime__type *local_78;
  runtime__type *local_70;
  void **local_60;
  sync_Pool **local_50;
  long local_48;
  int local_40;
  
                    /* Unresolved local var: int pid@[???]
                       Unresolved local var: void * l@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: []sync.poolLocal local@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ppvStack0000000000000010 = (void **)0x0;
  prStack0000000000000018 = (runtime__type *)0x0;
  sync_runtime_procUnpin();
  LOCK();
  bVar2 = sync_allPoolsMu.state == 0;
  if (bVar2) {
    sync_allPoolsMu.state = 1;
  }
  UNLOCK();
  if (!bVar2) {
    local_78 = (runtime__type *)&sync_allPoolsMu;
    sync___Mutex__lockSlow(&sync_allPoolsMu);
  }
  sync_runtime_procPin();
  if (local_78 < (runtime__type *)p_spill->localSize) {
                    /* Unresolved local var: void * lp@[???] */
    ppvStack0000000000000010 = (void **)((long)local_78 * 0x80 + (long)p_spill->local);
    prStack0000000000000018 = local_78;
    sync___Mutex__Unlock(&sync_allPoolsMu);
    mVar4.~r1 = (int)unaff_RBX;
    mVar4.~r0 = extraout_RAX_02;
    return mVar4;
  }
  n = local_78;
  if (p_spill->local == (void *)0x0) {
    ppsVar1 = sync_allPools.array;
    if ((ulong)sync_allPools.cap < sync_allPools.len + 1U) {
      local_70 = (runtime__type *)sync_allPools.array;
      local_60 = (void **)sync_allPools.cap;
      old.len = (int)p_spill;
      old.array = (void *)(sync_allPools.len + 1U);
      old.cap = in_RDI;
      runtime_growslice((runtime__type *)&DAT_00250740,old,(int)sync_allPools.array);
      sync_allPools.cap = local_40;
      if (runtime_writeBarrier._0_4_ == 0) {
        sync_allPools.array = local_50;
        sync_allPools.len = local_48;
        ppsVar1 = local_50;
      }
      else {
        runtime_gcWriteBarrier();
        sync_allPools.len = local_48;
        ppsVar1 = extraout_RAX;
      }
    }
    unaff_RBX = (void *)(sync_allPools.len + 1);
    if (runtime_writeBarrier._0_4_ == 0) {
      ppsVar1 = ppsVar1 + sync_allPools.len;
      sync_allPools.len = (int)unaff_RBX;
      *ppsVar1 = p_spill;
    }
    else {
      sync_allPools.len = (int)unaff_RBX;
      runtime_gcWriteBarrierCX();
      n = extraout_RAX_00;
    }
  }
  runtime_GOMAXPROCS((int)n);
  runtime_makeslice(local_70,(int)unaff_RBX,0x24e800);
  if (local_70 == (runtime__type *)0x0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  sync_atomic_StorePointer(local_60,unaff_RBX);
  LOCK();
  p_spill->localSize = (uintptr)local_70;
  UNLOCK();
  if (local_70 <= local_78) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  ppvStack0000000000000010 = local_60 + (long)local_78 * 0x10;
  prStack0000000000000018 = local_78;
  sync___Mutex__Unlock(&sync_allPoolsMu);
  mVar3.~r1 = (int)unaff_RBX;
  mVar3.~r0 = extraout_RAX_01;
  return mVar3;
}

