
/* WARNING: Unknown calling convention */

void runtime_queuefinalizer
               (void *p,runtime_funcval *fn,uintptr nret,runtime__type *fint,runtime_ptrtype *ot)

{
  runtime_finblock **pprVar1;
  long lVar2;
  long extraout_RAX;
  ulong uVar3;
  runtime_finblock *extraout_RDX;
  runtime_finblock *prVar4;
  long in_FS_OFFSET;
  string s;
  void *p_spill;
  runtime_funcval *fn_spill;
  uintptr nret_spill;
  runtime__type *fint_spill;
  runtime_ptrtype *ot_spill;
  runtime_finblock *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_gcphase == 0) {
    runtime_lock2(&runtime_finlock);
    if ((runtime_finq == (runtime_finblock *)0x0) || (runtime_finq->cnt == 0x65)) {
                    /* Unresolved local var: runtime.finblock * block@[???] */
      if (runtime_finc == (runtime_finblock *)0x0) {
        runtime_persistentalloc(0xd025b8,(uintptr)fn,(runtime_sysMemStat *)nret);
        runtime_finc = local_10;
        local_10->alllink = runtime_allfin;
        runtime_allfin = runtime_finc;
        if (runtime_finptrmask[0] == 0) {
          for (lVar2 = 0; lVar2 < 0x40; lVar2 = lVar2 + 1) {
            uVar3 = lVar2 + (SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar2),8) + lVar2 >> 2) *
                            -5;
            if (4 < uVar3) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
                    /* Unresolved local var: int i@[???] */
            runtime_finptrmask[lVar2] = runtime_finalizer1[uVar3];
          }
        }
      }
      prVar4 = runtime_finc;
      pprVar1 = &runtime_finc->next;
      runtime_finc = runtime_finc->next;
      *pprVar1 = runtime_finq;
      runtime_finq = prVar4;
    }
    prVar4 = runtime_finq;
    uVar3 = (ulong)runtime_finq->cnt;
    if (uVar3 < 0x65) {
      LOCK();
      runtime_finq->cnt = runtime_finq->cnt + 1;
      UNLOCK();
      lVar2 = uVar3 * 5;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->fin[uVar3].fn = fn_spill;
      }
      else {
        runtime_gcWriteBarrierR8();
        lVar2 = extraout_RAX;
        prVar4 = extraout_RDX;
      }
      (&prVar4->fin[0].nret)[lVar2] = nret_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        (&prVar4->fin[0].fint)[lVar2] = fint_spill;
        (&prVar4->fin[0].ot)[lVar2] = ot_spill;
        (&prVar4->fin[0].arg)[lVar2] = p_spill;
      }
      else {
        runtime_gcWriteBarrier();
        runtime_gcWriteBarrier();
        runtime_gcWriteBarrier();
      }
      runtime_fingwake = true;
      runtime_unlock2(&runtime_finlock);
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  s.len = (int)fn;
  s.str = &DAT_0029e727;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

