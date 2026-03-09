
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.syncadjustsudogs(runtime.g * gp, uintptr used,
   runtime.adjustinfo * adjinfo, uintptr ~r3) */

uintptr runtime_syncadjustsudogs(runtime_g *gp,uintptr used,runtime_adjustinfo *adjinfo)

{
  void *pvVar1;
  runtime_sudog *prVar2;
  runtime_hchan *prVar3;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  uintptr used_spill;
  runtime_adjustinfo *adjinfo_spill;
  
                    /* Unresolved local var: runtime.hchan * lastc@[???]
                       Unresolved local var: uintptr sgsize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = gp_spill->waiting;
  if (prVar2 == (runtime_sudog *)0x0) {
    return (uintptr)gp_spill;
  }
  prVar3 = (runtime_hchan *)0x0;
                    /* Unresolved local var: runtime.sudog * sg@[???] */
  for (; prVar2 != (runtime_sudog *)0x0; prVar2 = prVar2->waitlink) {
    if (prVar3 != prVar2->c) {
      runtime_lock2(&prVar2->c->lock);
                    /* Unresolved local var: runtime.sudog * s@[???] */
    }
    prVar3 = prVar2->c;
  }
  for (prVar2 = gp_spill->waiting; prVar2 != (runtime_sudog *)0x0; prVar2 = prVar2->waitlink) {
                    /* Unresolved local var: uintptr p@[???] */
    pvVar1 = prVar2->elem;
    if (((void *)(adjinfo_spill->old).lo <= pvVar1) && (pvVar1 < (void *)(adjinfo_spill->old).hi)) {
      prVar2->elem = (void *)((long)pvVar1 + adjinfo_spill->delta);
    }
  }
  if (adjinfo_spill->sghi != 0) {
                    /* Unresolved local var: uintptr oldBot@[???]
                       Unresolved local var: uintptr newBot@[???] */
    runtime_memmove();
                    /* Unresolved local var: runtime.sudog * sg@[???] */
  }
  prVar3 = (runtime_hchan *)0x0;
  for (prVar2 = gp_spill->waiting; prVar2 != (runtime_sudog *)0x0; prVar2 = prVar2->waitlink) {
    if (prVar3 != prVar2->c) {
      runtime_unlock2(&prVar2->c->lock);
    }
    prVar3 = prVar2->c;
  }
  return 0;
}

