
/* WARNING: Unknown calling convention */

void runtime_doSigPreempt(runtime_g *gp,runtime_sigctxt *ctxt)

{
  uint32 *puVar1;
  runtime_puintptr rVar2;
  undefined8 *puVar3;
  uintptr in_RDI;
  long in_FS_OFFSET;
  bool bVar4;
  runtime_g *gp_spill;
  runtime_sigctxt *ctxt_spill;
  char local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->preempt == false) {
    rVar2 = gp_spill->m->p;
    if (rVar2 == 0) {
      bVar4 = false;
      goto LAB_004fd224;
    }
    if (*(char *)(rVar2 + 0x2708) == '\0') {
      bVar4 = false;
      goto LAB_004fd224;
    }
  }
  bVar4 = (gp_spill->atomicstatus & 0xffffefff) == 2;
LAB_004fd224:
                    /* Unresolved local var: uintptr newpc@[???] */
  if ((bVar4) &&
     (runtime_isAsyncSafePoint
                (gp_spill,*(uintptr *)((long)ctxt_spill->ctxt + 0xb0),(uintptr)ctxt_spill,in_RDI),
     local_18 != '\0')) {
                    /* Unresolved local var: uintptr sp@[???] */
    puVar3 = (undefined8 *)(*(long *)((long)ctxt_spill->ctxt + 200) + -8);
    *puVar3 = local_10;
    *(undefined8 **)((long)ctxt_spill->ctxt + 200) = puVar3;
    *(code **)((long)ctxt_spill->ctxt + 0xb0) = runtime_asyncPreempt;
  }
  LOCK();
  puVar1 = &gp_spill->m->preemptGen;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  LOCK();
  gp_spill->m->signalPending = 0;
  UNLOCK();
  return;
}

