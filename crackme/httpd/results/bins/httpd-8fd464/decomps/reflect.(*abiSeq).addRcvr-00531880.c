
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*abiSeq).addRcvr(reflect.abiSeq * a, reflect.rtype *
   rcvr, reflect.abiStep * ~r1, bool ~r2) */

multireturn_reflect_abiStep___bool_ reflect___abiSeq__addRcvr(reflect_abiSeq *a,reflect_rtype *rcvr)

{
  int n;
  uintptr uVar1;
  ulong uVar2;
  int *extraout_RAX;
  reflect_abiStep *extraout_RAX_00;
  long lVar3;
  undefined8 uVar4;
  reflect_abiSeq *prVar5;
  int *cap;
  reflect_abiStep *cap_00;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  multireturn_reflect_abiStep___bool_ mVar6;
  multireturn_reflect_abiStep___bool_ mVar7;
  reflect_abiSeq *a_spill;
  reflect_rtype *rcvr_spill;
  byte local_60;
  uint7 uStack_5f;
  long local_58;
  int local_50;
  
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: bool ptr@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar3 = (a_spill->valueStart).len;
  prVar5 = (reflect_abiSeq *)(lVar3 + 1);
  cap = (a_spill->valueStart).array;
  n = (a_spill->steps).len;
  if ((reflect_abiSeq *)(a_spill->valueStart).cap < prVar5) {
    old.len = lVar3;
    old.array = prVar5;
    old.cap = n;
    runtime_growslice((runtime__type *)&DAT_00224ca0,old,(int)cap);
    cap = (int *)CONCAT71(uStack_5f,local_60);
    (a_spill->valueStart).cap = local_50;
    lVar3 = local_58;
    prVar5 = a_spill;
    if (runtime_writeBarrier._0_4_ == 0) {
      (a_spill->valueStart).array = cap;
    }
    else {
      runtime_gcWriteBarrier();
      cap = extraout_RAX;
    }
  }
  (a_spill->valueStart).len = lVar3 + 1;
  cap[lVar3] = n;
  if (((rcvr_spill->kind & 0x20) == 0) || (rcvr_spill->ptrdata != 0)) {
    reflect___abiSeq__assignIntN(a_spill,(uintptr)prVar5,(uintptr)rcvr_spill,n,(uint8)cap);
    uVar4 = 1;
  }
  else {
    reflect___abiSeq__assignIntN(a_spill,(uintptr)prVar5,(uintptr)rcvr_spill,n,(uint8)cap);
    uVar4 = 0;
  }
  mVar7.~r1 = (reflect_abiStep *)(ulong)local_60;
  if (local_60 == 0) {
    a_spill->stackBytes = a_spill->stackBytes + 7 & 0xfffffffffffffff8;
    uVar1 = a_spill->stackBytes;
    lVar3 = (a_spill->steps).len;
    cap_00 = (a_spill->steps).array;
    uVar2 = (a_spill->steps).cap;
    if (uVar2 < lVar3 + 1U) {
      old_00.len = uVar4;
      old_00.array = (void *)lVar3;
      old_00.cap = uVar2;
      runtime_growslice((runtime__type *)&DAT_0026e2a0,old_00,(int)cap_00);
      cap_00 = (reflect_abiStep *)((ulong)uStack_5f << 8);
      (a_spill->steps).cap = local_50;
      if (runtime_writeBarrier._0_4_ == 0) {
        (a_spill->steps).array = cap_00;
        lVar3 = local_58;
      }
      else {
        runtime_gcWriteBarrier();
        lVar3 = local_58;
        cap_00 = extraout_RAX_00;
      }
    }
    (a_spill->steps).len = lVar3 + 1;
    cap_00[lVar3].kind = 1;
    cap_00[lVar3].offset = 0;
    cap_00[lVar3].size = 8;
    cap_00[lVar3].stkOff = uVar1;
    cap_00[lVar3].ireg = 0;
    cap_00[lVar3].freg = 0;
    a_spill->stackBytes = a_spill->stackBytes + 8;
    uVar2 = (a_spill->steps).len;
    if (uVar2 <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    mVar6.~r2 = SUB81(uVar2,0);
    mVar6.~r1 = (a_spill->steps).array + (uVar2 - 1);
    return mVar6;
  }
  mVar7.~r2 = SUB81(prVar5,0);
  return mVar7;
}

