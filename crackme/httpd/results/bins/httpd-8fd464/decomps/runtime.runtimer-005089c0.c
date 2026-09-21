
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runtimer(runtime.p * pp, int64 now, int64 ~r2) */

int64 runtime_runtimer(runtime_p *pp,int64 now)

{
  uint uVar1;
  uint uVar2;
  long now_00;
  runtime_timer *prVar3;
  ulong uVar4;
  runtime_p *extraout_RAX;
  runtime_p *extraout_RAX_00;
  runtime_p *extraout_RAX_01;
  runtime_p *extraout_RAX_02;
  runtime_p *extraout_RAX_03;
  runtime_p *extraout_RAX_04;
  int64 extraout_RAX_05;
  runtime_p *extraout_RAX_06;
  long in_FS_OFFSET;
  bool bVar5;
  string s;
  runtime_p *pp_spill;
  int64 now_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
    pp = extraout_RAX_06;
  }
LAB_005089eb:
  while( true ) {
                    /* Unresolved local var: runtime.timer * t@[???] */
    now_00 = (pp_spill->timers).len;
    if (now_00 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar3 = *(pp_spill->timers).array;
    if (pp_spill != (runtime_p *)prVar3->pp) {
      s.len = (int)pp_spill;
      s.str = &DAT_00299019;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
                    /* Unresolved local var: uint32 s@[???] */
    uVar2 = prVar3->status;
    if (3 < uVar2) break;
    if (uVar2 < 2) {
      if (uVar2 == 0) {
LAB_00508bb8:
        runtime_badTimer();
        pp = extraout_RAX_04;
      }
      else {
        if (now_spill < prVar3->when) {
          return (int64)pp;
        }
        LOCK();
        uVar1 = prVar3->status;
        bVar5 = uVar2 == uVar1;
        if (bVar5) {
          prVar3->status = 2;
          uVar1 = uVar2;
        }
        pp = (runtime_p *)(ulong)uVar1;
        UNLOCK();
        if (bVar5) {
          runtime_runOneTimer(pp,(runtime_timer *)pp_spill,now_00);
          return extraout_RAX_05;
        }
      }
    }
    else {
      if (uVar2 == 2) goto LAB_00508ba7;
      LOCK();
      uVar1 = prVar3->status;
      bVar5 = uVar2 == uVar1;
      if (bVar5) {
        prVar3->status = 4;
        uVar1 = uVar2;
      }
      pp = (runtime_p *)(ulong)uVar1;
      UNLOCK();
      if (bVar5) {
        runtime_dodeltimer0(pp);
        uVar4 = 0;
        LOCK();
        uVar2 = prVar3->status;
        bVar5 = uVar2 == 4;
        if (bVar5) {
          prVar3->status = 5;
        }
        else {
          uVar4 = (ulong)uVar2;
        }
        UNLOCK();
        pp = (runtime_p *)CONCAT71((int7)(uVar4 >> 8),bVar5);
        if (!bVar5) {
          runtime_badTimer();
          pp = extraout_RAX;
        }
        LOCK();
        pp_spill->deletedTimers = pp_spill->deletedTimers - 1;
        UNLOCK();
        if ((pp_spill->timers).len == 0) {
          return (int64)pp;
        }
      }
    }
  }
  if (uVar2 < 6) {
    if (uVar2 != 4) goto LAB_00508bb8;
  }
  else {
    if (uVar2 == 6) {
      runtime_osyield();
      pp = extraout_RAX_02;
      goto LAB_005089eb;
    }
    if (uVar2 < 9) {
      LOCK();
      uVar1 = prVar3->status;
      bVar5 = uVar2 == uVar1;
      if (bVar5) {
        prVar3->status = 9;
        uVar1 = uVar2;
      }
      pp = (runtime_p *)(ulong)uVar1;
      UNLOCK();
      if (bVar5) {
        prVar3->when = prVar3->nextwhen;
        runtime_dodeltimer0((runtime_p *)prVar3->nextwhen);
        runtime_doaddtimer(pp_spill,(runtime_timer *)pp_spill);
        uVar4 = 0;
        LOCK();
        uVar2 = prVar3->status;
        bVar5 = uVar2 == 9;
        if (bVar5) {
          prVar3->status = 1;
        }
        else {
          uVar4 = (ulong)uVar2;
        }
        UNLOCK();
        pp = (runtime_p *)CONCAT71((int7)(uVar4 >> 8),bVar5);
        if (!bVar5) {
          runtime_badTimer();
          pp = extraout_RAX_00;
        }
      }
      goto LAB_005089eb;
    }
    if (uVar2 != 9) {
      runtime_badTimer();
      pp = extraout_RAX_01;
      goto LAB_005089eb;
    }
  }
LAB_00508ba7:
  runtime_badTimer();
  pp = extraout_RAX_03;
  goto LAB_005089eb;
}

