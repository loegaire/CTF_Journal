
/* WARNING: Unknown calling convention */

void runtime_freedefer(runtime__defer *d)

{
  long lVar1;
  long extraout_RAX;
  runtime__defer *extraout_RAX_00;
  long extraout_RAX_01;
  runtime__defer *prVar2;
  ulong uVar3;
  long lVar4;
  long extraout_RDX;
  long lVar5;
  int cap;
  long in_RDI;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime__defer *d_spill;
  long local_50;
  long local_48;
  undefined8 local_40;
  
                    /* Unresolved local var: uintptr sc@[???]
                       Unresolved local var: runtime.p * pp@[???] */
  if (d_spill->_panic != (runtime__panic *)0x0) {
    runtime_freedeferpanic();
  }
  if (d_spill->fn != (runtime_funcval *)0x0) {
    runtime_freedeferfn();
  }
  if (d_spill->heap == false) {
    return;
  }
  if ((ulong)(long)d_spill->siz < 9) {
    uVar3 = 0;
  }
  else {
    uVar3 = (long)d_spill->siz + 7U >> 4;
  }
  if (4 < uVar3) {
    return;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (*(long *)(lVar1 + 0x78 + uVar3 * 0x18) == *(long *)(lVar1 + 0x70 + uVar3 * 0x18)) {
    runtime_systemstack();
  }
  d_spill->siz = 0;
  d_spill->started = false;
  d_spill->openDefer = false;
  d_spill->sp = 0;
  d_spill->pc = 0;
  d_spill->framepc = 0;
  d_spill->varp = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    d_spill->fd = (void *)0x0;
    d_spill->link = (runtime__defer *)0x0;
    prVar2 = d_spill;
    lVar5 = lVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
    in_RDI = extraout_RAX + 0x28;
    runtime_gcWriteBarrierCX();
    prVar2 = extraout_RAX_00;
    lVar5 = extraout_RDX;
  }
  lVar4 = *(long *)(lVar5 + 0x70 + uVar3 * 0x18);
  cap = *(int *)(lVar5 + 0x68 + uVar3 * 0x18);
  if (*(ulong *)(lVar5 + 0x78 + uVar3 * 0x18) < lVar4 + 1U) {
    old.len = lVar4;
    old.array = (void *)(uVar3 * 3);
    old.cap = in_RDI;
    runtime_growslice((runtime__type *)&DAT_0021dde0,old,cap);
    *(undefined8 *)(lVar1 + 0x78 + uVar3 * 0x18) = local_40;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(long *)(lVar1 + 0x68 + uVar3 * 0x18) = local_50;
      prVar2 = d_spill;
      lVar4 = local_48;
      lVar5 = lVar1;
      cap = local_50;
    }
    else {
      lVar5 = lVar1;
      runtime_gcWriteBarrier();
      prVar2 = d_spill;
      lVar4 = local_48;
      cap = extraout_RAX_01;
    }
  }
  *(long *)(lVar5 + 0x70 + uVar3 * 0x18) = lVar4 + 1;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__defer **)(cap + lVar4 * 8) = prVar2;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

