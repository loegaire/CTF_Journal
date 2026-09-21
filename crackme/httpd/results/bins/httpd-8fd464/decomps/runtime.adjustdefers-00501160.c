
/* WARNING: Unknown calling convention */

void runtime_adjustdefers(runtime_g *gp,runtime_adjustinfo *adjinfo)

{
  runtime_funcval *prVar1;
  ulong uVar2;
  runtime__panic *prVar3;
  runtime__defer *prVar4;
  runtime__defer *prVar5;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  runtime_adjustinfo *adjinfo_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar5 = gp_spill->_defer;
                    /* Unresolved local var: uintptr p@[???] */
  if (((runtime__defer *)(adjinfo_spill->old).lo <= prVar5) &&
     (prVar5 < (runtime__defer *)(adjinfo_spill->old).hi)) {
    adjinfo = (runtime_adjustinfo *)adjinfo_spill->delta;
    gp_spill->_defer =
         (runtime__defer *)((long)&(adjinfo->cache).entries[0][0].targetpc + (long)&prVar5[-1].fd);
  }
                    /* Unresolved local var: runtime._defer * d@[???] */
  for (prVar5 = gp_spill->_defer; prVar5 != (runtime__defer *)0x0; prVar5 = prVar5->link) {
                    /* Unresolved local var: uintptr p@[???] */
    prVar1 = prVar5->fn;
    if (((runtime_funcval *)(adjinfo_spill->old).lo <= prVar1) &&
       (prVar1 < (runtime_funcval *)(adjinfo_spill->old).hi)) {
      prVar5->fn = (runtime_funcval *)((long)&prVar1->fn + adjinfo_spill->delta);
    }
                    /* Unresolved local var: uintptr p@[???] */
    uVar2 = prVar5->sp;
    if (((adjinfo_spill->old).lo <= uVar2) && (uVar2 < (adjinfo_spill->old).hi)) {
      prVar5->sp = uVar2 + adjinfo_spill->delta;
    }
                    /* Unresolved local var: uintptr p@[???] */
    prVar3 = prVar5->_panic;
    if (((runtime__panic *)(adjinfo_spill->old).lo <= prVar3) &&
       (prVar3 < (runtime__panic *)(adjinfo_spill->old).hi)) {
      prVar5->_panic = (runtime__panic *)((long)&prVar3->argp + adjinfo_spill->delta);
    }
                    /* Unresolved local var: uintptr p@[???] */
    prVar4 = prVar5->link;
    if (((runtime__defer *)(adjinfo_spill->old).lo <= prVar4) &&
       (prVar4 < (runtime__defer *)(adjinfo_spill->old).hi)) {
      prVar5->link = (runtime__defer *)((long)&prVar4->siz + adjinfo_spill->delta);
    }
                    /* Unresolved local var: uintptr p@[???] */
    uVar2 = prVar5->varp;
    if (((adjinfo_spill->old).lo <= uVar2) && (uVar2 < (adjinfo_spill->old).hi)) {
      prVar5->varp = uVar2 + adjinfo_spill->delta;
    }
                    /* Unresolved local var: uintptr p@[???] */
    adjinfo = prVar5->fd;
    if (((runtime_adjustinfo *)(adjinfo_spill->old).lo <= adjinfo) &&
       (adjinfo < (runtime_adjustinfo *)(adjinfo_spill->old).hi)) {
      adjinfo = (runtime_adjustinfo *)
                ((long)((adjinfo->cache).entries + -1) + 0x68 + adjinfo_spill->delta);
      prVar5->fd = adjinfo;
    }
  }
  runtime_tracebackdefers
            ((runtime_g *)&PTR_runtime_adjustframe_002b3748,
             (func__runtime_stkframe__unsafe_Pointer__bool **)adjinfo,(void *)0x0);
  return;
}

