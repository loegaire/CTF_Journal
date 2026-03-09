
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*semaRoot).dequeue(runtime.semaRoot * root, uint32 *
   addr, runtime.sudog * found, int64 now) */

multireturn_runtime_sudog___int64_ runtime___semaRoot__dequeue(runtime_semaRoot *root,uint32 *addr)

{
  runtime_sudog *extraout_RAX;
  runtime_sudog *prVar1;
  runtime_sudog *extraout_RAX_00;
  runtime_sudog *extraout_RAX_01;
  runtime_sudog *extraout_RAX_02;
  runtime_sudog *extraout_RAX_03;
  runtime_sudog *extraout_RAX_04;
  runtime_sudog *extraout_RAX_05;
  runtime_sudog *extraout_RAX_06;
  runtime_sudog *extraout_RAX_07;
  runtime_sudog *extraout_RAX_08;
  runtime_sudog **pprVar2;
  runtime_sudog *prVar3;
  int64 extraout_RDX;
  int64 extraout_RDX_00;
  int64 extraout_RDX_01;
  int64 extraout_RDX_02;
  int64 extraout_RDX_03;
  int64 extraout_RDX_04;
  int64 extraout_RDX_05;
  int64 extraout_RDX_06;
  runtime_sudog **y;
  runtime_sudog *prVar4;
  long in_FS_OFFSET;
  multireturn_runtime_sudog___int64_ mVar5;
  multireturn_runtime_sudog___int64_ mVar6;
  runtime_semaRoot *root_spill;
  uint32 *addr_spill;
  int64 local_38;
  
                    /* Unresolved local var: runtime.sudog * * ps@[???]
                       Unresolved local var: runtime.sudog * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = &root_spill->treap;
  prVar3 = root_spill->treap;
  pprVar2 = y;
  while( true ) {
    if (prVar3 == (runtime_sudog *)0x0) {
      mVar5.now = (int64)y;
      mVar5.found = (runtime_sudog *)root_spill;
      return mVar5;
    }
    if (addr_spill == prVar3->elem) break;
    if (addr_spill < prVar3->elem) {
      pprVar2 = &prVar3->prev;
    }
    else {
      pprVar2 = &prVar3->next;
    }
    prVar3 = *pprVar2;
                    /* Unresolved local var: runtime.sudog * t@[???] */
  }
  if (prVar3->acquiretime == 0) {
    local_38 = 0;
  }
  else {
    runtime_cputicks();
  }
  prVar4 = prVar3->waitlink;
  if (prVar4 == (runtime_sudog *)0x0) {
    while( true ) {
      while (prVar3->next != (runtime_sudog *)0x0) {
        if ((prVar3->prev != (runtime_sudog *)0x0) && (prVar3->prev->ticket < prVar3->next->ticket))
        goto LAB_004fc42b;
        runtime___semaRoot__rotateLeft(root_spill,(runtime_sudog *)y);
      }
      if (prVar3->prev == (runtime_sudog *)0x0) break;
LAB_004fc42b:
      runtime___semaRoot__rotateRight(root_spill,(runtime_sudog *)y);
    }
    prVar4 = prVar3->parent;
    if (prVar4 == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        root_spill->treap = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        root_spill = (runtime_semaRoot *)extraout_RAX_08;
      }
    }
    else if (prVar4->prev == prVar3) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->prev = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        root_spill = (runtime_semaRoot *)extraout_RAX_06;
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->next = (runtime_sudog *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
      root_spill = (runtime_semaRoot *)extraout_RAX_07;
    }
  }
  else {
    if (runtime_writeBarrier._0_4_ == 0) {
      *pprVar2 = prVar4;
    }
    else {
      runtime_gcWriteBarrierSI();
      local_38 = extraout_RDX;
    }
    prVar4->ticket = prVar3->ticket;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->parent = prVar3->parent;
    }
    else {
      runtime_gcWriteBarrier();
      local_38 = extraout_RDX_00;
    }
    prVar1 = prVar3->prev;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->prev = prVar1;
    }
    else {
      runtime_gcWriteBarrier();
      prVar1 = extraout_RAX;
      local_38 = extraout_RDX_01;
    }
    if (prVar1 != (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar1->parent = prVar4;
      }
      else {
        runtime_gcWriteBarrierSI();
        local_38 = extraout_RDX_02;
      }
    }
    root_spill = (runtime_semaRoot *)prVar3->next;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->next = (runtime_sudog *)root_spill;
    }
    else {
      runtime_gcWriteBarrier();
      root_spill = (runtime_semaRoot *)extraout_RAX_00;
      local_38 = extraout_RDX_03;
    }
    if ((runtime_sudog *)root_spill != (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_sudog *)root_spill)->parent = prVar4;
      }
      else {
        runtime_gcWriteBarrierSI();
        root_spill = (runtime_semaRoot *)extraout_RAX_01;
        local_38 = extraout_RDX_04;
      }
    }
    if (prVar4->waitlink == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->waittail = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        root_spill = (runtime_semaRoot *)extraout_RAX_03;
        local_38 = extraout_RDX_06;
      }
    }
    else {
      root_spill = (runtime_semaRoot *)prVar3->waittail;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->waittail = (runtime_sudog *)root_spill;
      }
      else {
        runtime_gcWriteBarrier();
        root_spill = (runtime_semaRoot *)extraout_RAX_02;
        local_38 = extraout_RDX_05;
      }
    }
    prVar4->acquiretime = local_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar3->waitlink = (runtime_sudog *)0x0;
      prVar3->waittail = (runtime_sudog *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrier();
      root_spill = (runtime_semaRoot *)extraout_RAX_04;
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar3->parent = (runtime_sudog *)0x0;
    prVar3->elem = (void *)0x0;
    prVar3->next = (runtime_sudog *)0x0;
    prVar3->prev = (runtime_sudog *)0x0;
  }
  else {
    runtime_gcWriteBarrier();
    y = (runtime_sudog **)0x0;
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
    root_spill = (runtime_semaRoot *)extraout_RAX_05;
  }
  prVar3->ticket = 0;
  mVar6.now = (int64)y;
  mVar6.found = (runtime_sudog *)root_spill;
  return mVar6;
}

