
/* WARNING: Unknown calling convention */

void runtime___semaRoot__rotateRight(runtime_semaRoot *root,runtime_sudog *y)

{
  runtime_sudog *prVar1;
  runtime_sudog *extraout_RAX;
  runtime_sudog *extraout_RAX_00;
  runtime_sudog *extraout_RAX_01;
  runtime_sudog *prVar2;
  runtime_sudog *extraout_RDX;
  runtime_sudog *extraout_RDX_00;
  runtime_sudog *extraout_RDX_01;
  runtime_sudog *prVar3;
  long in_FS_OFFSET;
  string s;
  runtime_semaRoot *root_spill;
  runtime_sudog *y_spill;
  
                    /* Unresolved local var: runtime.sudog * p@[???]
                       Unresolved local var: runtime.sudog * x@[???]
                       Unresolved local var: runtime.sudog * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = y_spill->prev;
  prVar3 = y_spill->parent;
  prVar1 = prVar2->next;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar2->next = y_spill;
    y_spill->parent = prVar2;
    y_spill->prev = prVar1;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrierCX();
    runtime_gcWriteBarrierBX();
    y_spill = extraout_RAX;
    prVar3 = extraout_RDX;
  }
  if (prVar1 != (runtime_sudog *)0x0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar1->parent = y_spill;
    }
    else {
      runtime_gcWriteBarrier();
      y_spill = extraout_RAX_00;
      prVar3 = extraout_RDX_00;
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar2->parent = prVar3;
  }
  else {
    runtime_gcWriteBarrierDX();
    y_spill = extraout_RAX_01;
    prVar3 = extraout_RDX_01;
  }
  if (prVar3 == (runtime_sudog *)0x0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      root_spill->treap = prVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
  }
  else if (prVar3->prev == y_spill) {
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar3->prev = prVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
  }
  else {
    if (prVar3->next != y_spill) {
      s.len = (int)prVar1;
      s.str = &DAT_0029c18a;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar3->next = prVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
  }
  return;
}

