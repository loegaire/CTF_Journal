
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.selparkcommit(runtime.g * gp, bool ~r2) */

bool runtime_selparkcommit(runtime_g *gp)

{
  undefined1 extraout_AL;
  undefined1 uVar1;
  runtime_sudog *prVar2;
  runtime_hchan *prVar3;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: runtime.hchan * lastc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_spill->activeStackChans = true;
  LOCK();
  gp_spill->parkingOnChan = 0;
  UNLOCK();
  prVar3 = (runtime_hchan *)0x0;
                    /* Unresolved local var: runtime.sudog * sg@[???] */
  for (prVar2 = gp_spill->waiting; prVar2 != (runtime_sudog *)0x0; prVar2 = prVar2->waitlink) {
    if ((prVar2->c != prVar3) && (prVar3 != (runtime_hchan *)0x0)) {
      runtime_unlock2(&prVar3->lock);
    }
    prVar3 = prVar2->c;
  }
  uVar1 = 0;
  if (prVar3 != (runtime_hchan *)0x0) {
    runtime_unlock2(&prVar3->lock);
    uVar1 = extraout_AL;
  }
  return (bool)uVar1;
}

