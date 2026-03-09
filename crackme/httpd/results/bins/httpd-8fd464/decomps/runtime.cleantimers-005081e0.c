
/* WARNING: Unknown calling convention */

void runtime_cleantimers(runtime_p *pp)

{
  uint32 uVar1;
  long lVar2;
  runtime_timer *t;
  long in_FS_OFFSET;
  bool bVar3;
  string s;
  runtime_p *pp_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg2(RCX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  while( true ) {
                    /* Unresolved local var: runtime.timer * t@[???] */
    if ((pp_spill->timers).len == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0xb2) != '\0') break;
    t = *(pp_spill->timers).array;
    if (pp_spill != (runtime_p *)t->pp) {
      s.len = (int)t;
      s.str = &DAT_0029aad0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
                    /* Unresolved local var: uint32 s@[???] */
    uVar1 = t->status;
    if (uVar1 == 3) {
      LOCK();
      uVar1 = t->status;
      bVar3 = uVar1 == 3;
      if (bVar3) {
        t->status = 4;
        uVar1 = 3;
      }
      UNLOCK();
      if (bVar3) {
        runtime_dodeltimer0((runtime_p *)(ulong)uVar1);
        LOCK();
        bVar3 = t->status == 4;
        if (bVar3) {
          t->status = 5;
        }
        UNLOCK();
        if (!bVar3) {
          runtime_badTimer();
        }
        LOCK();
        pp_spill->deletedTimers = pp_spill->deletedTimers - 1;
        UNLOCK();
      }
    }
    else {
      if (1 < uVar1 - 7) {
        return;
      }
      LOCK();
      bVar3 = uVar1 == t->status;
      if (bVar3) {
        t->status = 9;
      }
      UNLOCK();
      if (bVar3) {
        t->when = t->nextwhen;
        runtime_dodeltimer0((runtime_p *)t->nextwhen);
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
      }
    }
  }
  return;
}

