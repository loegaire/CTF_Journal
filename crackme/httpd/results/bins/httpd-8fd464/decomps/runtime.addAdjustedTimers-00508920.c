
/* WARNING: Unknown calling convention */

void runtime_addAdjustedTimers(runtime_p *pp,___runtime_timer moved)

{
  runtime_timer *prVar1;
  runtime_p *pp_00;
  long in_FS_OFFSET;
  bool bVar2;
  runtime_p *pp_spill;
  ___runtime_timer moved_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.timer * t@[???] */
  for (pp_00 = (runtime_p *)0x0; (long)pp_00 < moved_spill.len;
      pp_00 = (runtime_p *)((long)&pp_00->id + 1)) {
    prVar1 = moved_spill.array[(long)pp_00];
    runtime_doaddtimer(pp_00,(runtime_timer *)pp_spill);
    LOCK();
    bVar2 = prVar1->status == 9;
    if (bVar2) {
      prVar1->status = 1;
    }
    UNLOCK();
    if (!bVar2) {
      runtime_badTimer();
    }
  }
  return;
}

