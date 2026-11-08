
/* WARNING: Unknown calling convention */

void runtime_moveTimers(runtime_p *pp,___runtime_timer timers)

{
  uint uVar1;
  runtime_timer *t;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  runtime_p *pp_spill;
  ___runtime_timer timers_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.timer * t@[???] */
  lVar2 = 0;
  do {
    if (timers_spill.len <= lVar2) {
      return;
    }
    t = timers_spill.array[lVar2];
LAB_005084bc:
    do {
      while (uVar1 = t->status, uVar1 < 4) {
        if (uVar1 < 2) {
          if (uVar1 == 0) {
LAB_00508573:
            runtime_badTimer();
          }
          else {
            LOCK();
            bVar3 = uVar1 == t->status;
            if (bVar3) {
              t->status = 9;
            }
            UNLOCK();
            if (bVar3) {
                    /* Unresolved local var: uint32 s@[???] */
              t->pp = 0;
              runtime_doaddtimer(pp_spill,t);
              LOCK();
              bVar3 = t->status == 9;
              if (bVar3) {
                t->status = 1;
              }
              UNLOCK();
              if (!bVar3) {
                runtime_badTimer();
              }
              goto LAB_005083cf;
            }
          }
        }
        else if (uVar1 == 2) {
LAB_0050856c:
          runtime_badTimer();
        }
        else {
          LOCK();
          bVar3 = uVar1 == t->status;
          if (bVar3) {
            t->status = 5;
          }
          UNLOCK();
          if (bVar3) {
            t->pp = 0;
            goto LAB_005083cf;
          }
        }
      }
      if (uVar1 < 6) {
        if (uVar1 == 4) goto LAB_0050856c;
        goto LAB_00508573;
      }
      if (uVar1 == 6) {
        runtime_osyield();
        goto LAB_005084bc;
      }
      if (8 < uVar1) {
        if (uVar1 == 9) goto LAB_0050856c;
        runtime_badTimer();
        goto LAB_005084bc;
      }
      LOCK();
      bVar3 = uVar1 == t->status;
      if (bVar3) {
        t->status = 9;
      }
      UNLOCK();
    } while (!bVar3);
    t->when = t->nextwhen;
    t->pp = 0;
    runtime_doaddtimer(pp_spill,t);
    LOCK();
    bVar3 = t->status == 9;
    if (bVar3) {
      t->status = 1;
    }
    UNLOCK();
    if (!bVar3) {
      runtime_badTimer();
    }
LAB_005083cf:
    lVar2 = lVar2 + 1;
  } while( true );
}

