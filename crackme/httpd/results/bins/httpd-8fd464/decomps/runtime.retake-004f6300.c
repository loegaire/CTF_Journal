
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.retake(int64 now, uint32 ~r1) */

uint32 runtime_retake(int64 now)

{
  uint32 uVar1;
  runtime_p *pp;
  int32 v;
  uint v_00;
  runtime_p *pp_00;
  runtime_p *extraout_RAX;
  long lVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int64 now_spill;
  
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_allpLock);
  uVar3 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < runtime_allp.len; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: uint32 s@[???]
                       Unresolved local var: bool sysretake@[???] */
    pp = runtime_allp.array[lVar2];
    if (pp != (runtime_p *)0x0) {
      uVar1 = pp->status;
      if ((uVar1 == 1) || (uVar1 == 2)) {
        if ((pp->sysmontick).schedtick == pp->schedtick) {
          lVar4 = (pp->sysmontick).schedwhen + 10000000;
          if (lVar4 <= now_spill) {
            runtime_preemptone((runtime_p *)now_spill);
          }
          bVar5 = lVar4 <= now_spill;
        }
        else {
          (pp->sysmontick).schedtick = pp->schedtick;
          (pp->sysmontick).schedwhen = now_spill;
          bVar5 = false;
        }
      }
      else {
        bVar5 = false;
      }
      if (uVar1 == 2) {
        if ((bVar5) || ((pp->sysmontick).syscalltick == pp->syscalltick)) {
          do {
          } while (pp->runqtail != pp->runqtail);
          if (pp->runqtail == pp->runqhead) {
            if (pp->runnext == 0) {
              bVar5 = runtime_sched.nmspinning + runtime_sched.npidle != 0;
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = false;
          }
          if ((!bVar5) || ((pp->sysmontick).syscallwhen + 10000000 <= now_spill)) {
            runtime_unlock2(&runtime_allpLock);
            runtime_incidlelocked(v);
            LOCK();
            uVar1 = pp->status;
            bVar5 = uVar1 == 2;
            if (bVar5) {
              pp->status = 0;
              uVar1 = 0;
            }
            UNLOCK();
            v_00 = CONCAT31((int3)(uVar1 >> 8),bVar5);
            pp_00 = (runtime_p *)(ulong)v_00;
            if (bVar5) {
              if (runtime_trace.enabled != false) {
                runtime_traceGoSysBlock(pp_00);
                runtime_traceProcStop(pp);
                pp_00 = extraout_RAX;
              }
              pp->syscalltick = pp->syscalltick + 1;
              runtime_handoffp(pp_00);
              v_00 = uVar3;
              uVar3 = uVar3 + 1;
            }
            runtime_incidlelocked(v_00);
            runtime_lock2(&runtime_allpLock);
          }
        }
        else {
          (pp->sysmontick).syscalltick = pp->syscalltick;
          (pp->sysmontick).syscallwhen = now_spill;
        }
      }
    }
  }
  runtime_unlock2(&runtime_allpLock);
  return uVar3;
}

