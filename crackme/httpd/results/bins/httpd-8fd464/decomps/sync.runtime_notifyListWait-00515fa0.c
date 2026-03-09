
/* WARNING: Unknown calling convention */

void sync_runtime_notifyListWait(runtime_notifyList *l,uint32 t)

{
  runtime_mutex *l_00;
  runtime_mutex *extraout_RAX;
  runtime_mutex *extraout_RAX_00;
  runtime_mutex *cycles;
  undefined4 unaff_0000001c;
  runtime_sudog *prVar1;
  int in_RSI;
  runtime_sudog *prVar2;
  runtime_sudog *prVar3;
  long in_FS_OFFSET;
  runtime_notifyList *l_spill;
  uint32 t_spill;
  
                    /* Unresolved local var: runtime.sudog * s@[???]
                       Unresolved local var: int64 t0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  l_00 = &l_spill->lock;
  runtime_lock2((runtime_mutex *)l_spill);
  if (-1 < (int)(t_spill - l_spill->notify)) {
    runtime_acquireSudog();
    prVar2 = (runtime_sudog *)l_00;
    if (runtime_writeBarrier._0_4_ == 0) {
      l_00->key = *(uintptr *)(in_FS_OFFSET + -8);
    }
    else {
      runtime_gcWriteBarrier();
    }
    prVar2->ticket = t_spill;
    prVar2->releasetime = 0;
    if (runtime_blockprofilerate == 0) {
      cycles = (runtime_mutex *)0x0;
    }
    else {
      runtime_cputicks();
      prVar2->releasetime = -1;
      cycles = l_00;
    }
    prVar1 = (runtime_sudog *)CONCAT44(unaff_0000001c,t);
    if (l_spill->tail == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        l_spill->head = prVar2;
      }
      else {
        runtime_gcWriteBarrierBX();
        cycles = extraout_RAX_00;
        prVar1 = prVar2;
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      l_spill->tail->next = prVar2;
    }
    else {
      runtime_gcWriteBarrierBX();
      cycles = extraout_RAX;
      prVar1 = prVar2;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      l_spill->tail = prVar2;
      prVar3 = prVar2;
    }
    else {
      l_spill = (runtime_notifyList *)&l_spill->tail;
      prVar3 = (runtime_sudog *)l_spill;
      runtime_gcWriteBarrierDX();
    }
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)l_00,prVar1,(runtime_waitReason)l_spill
                   ,(uint8)prVar3,in_RSI);
    if (cycles != (runtime_mutex *)0x0) {
      runtime_blockevent((int64)cycles,(int)prVar1);
    }
    runtime_releaseSudog(prVar2);
    return;
  }
  runtime_unlock2(l_00);
  return;
}

