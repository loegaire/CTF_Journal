
/* WARNING: Unknown calling convention */

void runtime_casgstatus(runtime_g *gp,uint32 oldval,uint32 newval)

{
  uint64 *puVar1;
  code **ppcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  string s;
  runtime_g *gp_spill;
  uint32 oldval_spill;
  uint32 newval_spill;
  code **local_40;
  code *local_18 [2];
  
                    /* Unresolved local var: int64 nextYield@[???] */
  if ((((oldval_spill >> 0xc & 1) != 0) || ((newval_spill >> 0xc & 1) != 0)) ||
     (newval_spill == oldval_spill)) {
    local_18[0] = runtime_casgstatus_func1;
    local_40 = local_18;
    runtime_systemstack();
                    /* Unresolved local var: int i@[???] */
  }
  lVar5 = 0;
  ppcVar2 = (code **)0x0;
  while( true ) {
    LOCK();
    bVar6 = oldval_spill == gp_spill->atomicstatus;
    if (bVar6) {
      gp_spill->atomicstatus = newval_spill;
    }
    UNLOCK();
    if (bVar6) break;
    if ((oldval_spill == 4) && (gp_spill->atomicstatus == 1)) {
      s.len = lVar5;
      s.str = &DAT_002a90ad;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (lVar5 == 0) {
      runtime_nanotime1();
      ppcVar2 = local_40 + 0x271;
    }
    runtime_nanotime1();
    if ((long)local_40 < (long)ppcVar2) {
      lVar3 = 0;
      while ((lVar3 < 10 && (gp_spill->atomicstatus != oldval_spill))) {
                    /* Unresolved local var: int x@[???] */
        local_40 = (code **)CONCAT44(local_40._4_4_,1);
        runtime_procyield();
        lVar3 = lVar3 + 1;
      }
    }
    else {
      runtime_osyield();
      runtime_nanotime1();
      ppcVar2 = (code **)((long)local_40 + 0x9c4);
    }
    lVar5 = lVar5 + 1;
  }
  if (oldval_spill == 2) {
    if ((gp_spill->trackingSeq & 7) == 0) {
      gp_spill->tracking = true;
    }
    gp_spill->trackingSeq = gp_spill->trackingSeq + 1;
  }
  if (gp_spill->tracking != false) {
    runtime_nanotime1();
    if (oldval_spill == 1) {
      gp_spill->runnableTime = (long)local_40 + (gp_spill->runnableTime - gp_spill->runnableStamp);
      gp_spill->runnableStamp = 0;
    }
    if (newval_spill == 1) {
      gp_spill->runnableStamp = (int64)local_40;
    }
    else if (newval_spill == 2) {
      gp_spill->tracking = false;
      uVar4 = gp_spill->runnableTime;
                    /* Unresolved local var: uint superBucket@[???]
                       Unresolved local var: uint subBucket@[???] */
      if ((long)uVar4 < 0) {
        LOCK();
        runtime_sched.timeToRun.underflow = runtime_sched.timeToRun.underflow + 1;
        UNLOCK();
      }
      else {
        if ((long)uVar4 < 0x10) {
          lVar5 = 0;
        }
        else {
          lVar3 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          if (uVar4 == 0) {
            lVar3 = -1;
          }
          lVar5 = lVar3 + -3;
          if ((ulong)(lVar5 * 0x10) < 0x2d0) {
            lVar3 = (long)uVar4 >> (((byte)(lVar3 - 4U) | ~-(lVar3 - 4U < 0x40)) & 0x3f);
            uVar4 = lVar3 + ((long)(((ulong)(lVar3 >> 0x3f) >> 0x3c) + lVar3) >> 4) * -0x10;
          }
          else {
            lVar5 = 0x2c;
            uVar4 = 0xf;
          }
        }
        uVar4 = lVar5 * 0x10 + uVar4;
        if (0x2cf < uVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        puVar1 = runtime_sched.timeToRun.counts + uVar4;
        LOCK();
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      }
      gp_spill->runnableTime = 0;
    }
  }
  return;
}

