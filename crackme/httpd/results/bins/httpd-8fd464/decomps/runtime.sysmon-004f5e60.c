
/* WARNING: Removing unreachable block (ram,0x004f613b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sysmon(void)

{
  uint64 delay;
  uint uVar1;
  int32 v;
  runtime_mutex *l;
  runtime_gList rVar2;
  runtime_note *prVar3;
  long in_FS_OFFSET;
  bool bVar4;
  multireturn_int64_runtime_p___ mVar5;
  ulong local_60;
  runtime_note *local_58;
  char local_50;
  runtime_gList local_30;
  runtime_gList local_28;
  uint64 local_20;
  long local_18;
  uint64 local_10;
  
                    /* Unresolved local var: int64 lasttrace@[???]
                       Unresolved local var: int idle@[???]
                       Unresolved local var: uint32 delay@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  runtime_sched.nmsys = runtime_sched.nmsys + 1;
  runtime_checkdead();
  runtime_unlock2(&runtime_sched.lock);
  LOCK();
  runtime_sched.sysmonStarting = 0;
  UNLOCK();
  local_18 = 0;
  uVar1 = 0;
  local_20 = 0;
  do {
    if (local_18 == 0) {
      uVar1 = 0x14;
    }
    else if (0x32 < local_18) {
      uVar1 = uVar1 << 1;
    }
    if (10000 < uVar1) {
      uVar1 = 10000;
    }
    local_60 = (ulong)uVar1;
    runtime_usleep();
    runtime_mDoFixup();
    runtime_nanotime1();
    if (runtime_debug.schedtrace < 1) {
      if (runtime_sched.gcwaiting == 0) {
        bVar4 = runtime_sched.npidle == runtime_gomaxprocs;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      runtime_lock2(&runtime_sched.lock);
      if (runtime_sched.gcwaiting == 0 && runtime_sched.npidle != runtime_gomaxprocs) {
        l = (runtime_mutex *)(ulong)uVar1;
      }
      else {
                    /* Unresolved local var: bool syscallWake@[???]
                       Unresolved local var: int64 next@[???] */
        mVar5 = runtime_timeSleepUntil();
        if (local_60 < 0x7a13b8) {
                    /* Unresolved local var: int64 sleep@[???] */
          LOCK();
          runtime_sched.sysmonwait = 1;
          UNLOCK();
          runtime_unlock2(&runtime_sched.lock);
          prVar3 = (runtime_note *)((long)&runtime_sched + (0x18 - local_60));
          local_58 = (runtime_note *)(runtime_forcegcperiod / 2);
          if ((long)prVar3 < runtime_forcegcperiod / 2) {
            local_58 = prVar3;
          }
          runtime_notetsleep(local_58,(int64)mVar5.~r1);
          runtime_mDoFixup();
          runtime_lock2(&runtime_sched.lock);
          LOCK();
          runtime_sched.sysmonwait = 0;
          UNLOCK();
          runtime_sched.sysmonnote.key = 0;
          if (local_50 == '\0') {
            l = (runtime_mutex *)(ulong)uVar1;
          }
          else {
            l = (runtime_mutex *)&DAT_00000014;
            local_18 = 0;
          }
        }
        else {
          l = (runtime_mutex *)(ulong)uVar1;
        }
      }
      uVar1 = (uint)l;
      runtime_unlock2(l);
    }
    runtime_lock2((runtime_mutex *)(ulong)uVar1);
    runtime_nanotime1();
    local_10 = 0x7a14f8;
    if (*runtime_cgo_yield != (void *)0x0) {
      local_58 = (runtime_note *)0x0;
      runtime_asmcgocall();
    }
    delay = runtime_sched.lastpoll;
    if (((runtime_netpollInited != 0) && (runtime_sched.lastpoll != 0)) &&
       ((long)(runtime_sched.lastpoll + 10000000) < (long)local_10)) {
                    /* Unresolved local var: runtime.gList list@[???] */
      LOCK();
      runtime_sched.lastpoll = local_10;
      UNLOCK();
      rVar2 = runtime_netpoll(delay);
      local_28.head = (runtime_guintptr)local_58;
      if (local_58 != (runtime_note *)0x0) {
        runtime_incidlelocked((int32)rVar2.head);
        runtime_injectglist(&local_28);
        runtime_incidlelocked(v);
      }
    }
    runtime_mDoFixup();
    if (runtime_scavenge.sysmonWake != 0) {
      runtime_wakeScavenger();
    }
    runtime_retake(local_10);
    local_18 = local_18 + 1;
    if ((int)local_58 != 0) {
      local_18 = 0;
    }
                    /* Unresolved local var: int64 lastgc@[???] */
    if (((runtime_memstats.enablegc == false) || (runtime_panicking != 0)) || (runtime_gcphase != 0)
       ) {
      bVar4 = false;
    }
    else if (runtime_gcController.gcPercent < 0) {
      bVar4 = false;
                    /* Unresolved local var: runtime.gcTrigger t@[???] */
    }
    else if (runtime_memstats.last_gc_nanotime == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = runtime_forcegcperiod < (long)(local_10 - runtime_memstats.last_gc_nanotime);
    }
    if ((bVar4) && (runtime_forcegc.idle != 0)) {
      runtime_lock2(&runtime_forcegc.lock);
      local_30.head = (runtime_guintptr)runtime_forcegc.g;
      runtime_forcegc.idle = 0;
      (runtime_forcegc.g)->schedlink = 0;
      runtime_injectglist(&local_30);
      runtime_unlock2(&runtime_forcegc.lock);
    }
    if ((0 < runtime_debug.schedtrace) &&
       ((long)((long)runtime_debug.schedtrace * 1000000 + local_20) <= (long)local_10)) {
      runtime_schedtrace(SUB81(local_18,0));
      local_20 = local_10;
    }
                    /* Unresolved local var: int64 now@[???]
                       Unresolved local var: int64 lastpoll@[???]
                       Unresolved local var: int64 ~R0@[???] */
    runtime_unlock2(&runtime_sched.sysmonlock);
  } while( true );
}

