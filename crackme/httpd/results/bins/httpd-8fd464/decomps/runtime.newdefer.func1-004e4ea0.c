
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_newdefer_func1(void)

{
  runtime_mutex *l;
  long lVar1;
  long lVar2;
  long extraout_RAX;
  long extraout_RAX_00;
  long extraout_RAX_01;
  runtime_mutex *prVar3;
  long lVar4;
  long in_RDX;
  long extraout_RDX;
  long lVar5;
  long extraout_RDX_00;
  long cap;
  runtime__defer **in_RDI;
  runtime__defer *prVar6;
  long lVar7;
  long in_FS_OFFSET;
  runtime_slice old;
  long local_48;
  long local_40;
  undefined8 local_38;
  
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: uintptr sc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX_00;
  }
  l = *(runtime_mutex **)(in_RDX + 0x10);
  lVar1 = *(long *)(in_RDX + 8);
  runtime_lock2(l);
  lVar2 = lVar1;
  prVar3 = l;
  while( true ) {
    if ((runtime_mutex *)&DAT_00000004 < prVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    lVar5 = (long)prVar3 * 3;
    cap = lVar2 + (long)prVar3 * 0x18 + 0x68;
    if (((long)(*(ulong *)(lVar2 + 0x78 + (long)prVar3 * 0x18) >> 1) <=
         *(long *)(lVar2 + 0x70 + (long)prVar3 * 0x18)) ||
       (prVar6 = runtime_sched.deferpool[(long)prVar3], prVar6 == (runtime__defer *)0x0)) break;
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_sched.deferpool[(long)prVar3] = prVar6->link;
      prVar6->link = (runtime__defer *)0x0;
    }
    else {
      runtime_gcWriteBarrierR9();
      in_RDI = &prVar6->link;
      runtime_gcWriteBarrierBX();
      lVar2 = extraout_RAX;
      lVar5 = extraout_RDX;
    }
    lVar4 = *(long *)(lVar2 + 0x70 + lVar5 * 8);
    lVar7 = *(long *)(lVar2 + 0x68 + lVar5 * 8);
    if (*(ulong *)(lVar2 + 0x78 + lVar5 * 8) < lVar4 + 1U) {
      old.len = (int)prVar3;
      old.array = (void *)lVar4;
      old.cap = (int)in_RDI;
      runtime_growslice((runtime__type *)&DAT_0021dde0,old,cap);
      *(undefined8 *)(lVar1 + 0x78 + lVar5 * 8) = local_38;
      lVar4 = local_40;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)(lVar1 + 0x68 + lVar5 * 8) = local_48;
        lVar2 = lVar1;
        prVar3 = l;
        lVar7 = local_48;
      }
      else {
        lVar2 = lVar1;
        runtime_gcWriteBarrier();
        prVar3 = l;
        lVar7 = extraout_RAX_00;
      }
    }
    *(long *)(lVar2 + 0x70 + lVar5 * 8) = lVar4 + 1;
    in_RDI = (runtime__defer **)(lVar7 + lVar4 * 8);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__defer **)(lVar7 + lVar4 * 8) = prVar6;
    }
    else {
      runtime_gcWriteBarrierR8();
      lVar2 = extraout_RAX_01;
    }
  }
  runtime_unlock2(&runtime_sched.deferlock);
  return;
}

