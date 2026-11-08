
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*abiSeq).addArg(reflect.abiSeq * a, reflect.rtype * t,
   reflect.abiStep * ~r1) */

reflect_abiStep * reflect___abiSeq__addArg(reflect_abiSeq *a,reflect_rtype *t)

{
  ulong uVar1;
  reflect_rtype *t_00;
  int iVar2;
  ulong uVar3;
  uintptr cap;
  uintptr uVar4;
  bool bVar5;
  reflect_abiStep *extraout_RAX;
  undefined7 extraout_var;
  reflect_abiStep *extraout_RAX_00;
  long lVar6;
  reflect_rtype *src;
  reflect_abiStep *prVar7;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  reflect_abiSeq *a_spill;
  reflect_rtype *t_spill;
  ulong local_b8;
  reflect_abiStep *local_a8;
  long local_a0;
  int local_98;
  reflect_rtype local_50;
  uintptr uStack_20;
  int local_18;
  int iStack_10;
  
                    /* Unresolved local var: reflect.abiSeq aOld@[???] */
  while (&local_50 <= *(reflect_rtype **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar2 = (a_spill->steps).len;
  lVar6 = (a_spill->valueStart).len;
  uVar1 = lVar6 + 1;
  prVar7 = (reflect_abiStep *)(a_spill->valueStart).array;
  uVar3 = (a_spill->valueStart).cap;
  if (uVar3 < uVar1) {
    old.len = iVar2;
    old.array = (void *)uVar1;
    old.cap = uVar3;
    runtime_growslice((runtime__type *)&DAT_00224ca0,old,(int)prVar7);
    (a_spill->valueStart).cap = local_98;
    lVar6 = local_a0;
    local_b8 = uVar3;
    if (runtime_writeBarrier._0_4_ == 0) {
      (a_spill->valueStart).array = &local_a8->kind;
      prVar7 = local_a8;
    }
    else {
      runtime_gcWriteBarrier();
      prVar7 = extraout_RAX;
    }
  }
  t_00 = (reflect_rtype *)(lVar6 + 1);
  (a_spill->valueStart).len = (int)t_00;
  (&prVar7->kind)[lVar6] = iVar2;
  if (t_spill->size == 0) {
    a_spill->stackBytes = -(ulong)t_spill->align & ((ulong)t_spill->align + a_spill->stackBytes) - 1
    ;
    return (reflect_abiStep *)a_spill;
  }
  local_50.size = (uintptr)(a_spill->steps).array;
  local_50.ptrdata = (a_spill->steps).len;
  local_50._16_8_ = (a_spill->steps).cap;
  local_50.equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)(a_spill->valueStart).array;
  local_50.gcdata = (uint8 *)(a_spill->valueStart).len;
  local_50._40_8_ = (a_spill->valueStart).cap;
  uStack_20 = a_spill->stackBytes;
  local_18 = a_spill->iregs;
  iStack_10 = a_spill->fregs;
  src = t_spill;
  bVar5 = reflect___abiSeq__regAssign(a_spill,t_00,(uintptr)t_spill);
  if ((char)local_b8 != '\0') {
    return (reflect_abiStep *)CONCAT71(extraout_var,bVar5);
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    (a_spill->steps).array = (reflect_abiStep *)local_50.size;
    (a_spill->steps).len = local_50.ptrdata;
    (a_spill->steps).cap = local_50._16_8_;
    (a_spill->valueStart).array = (int *)local_50.equal;
    (a_spill->valueStart).len = (int)local_50.gcdata;
    (a_spill->valueStart).cap = local_50._40_8_;
    a_spill->stackBytes = uStack_20;
    a_spill->iregs = local_18;
    a_spill->fregs = iStack_10;
  }
  else {
    src = &local_50;
    runtime_typedmemmove((runtime__type *)a_spill,t_00,src);
  }
  cap = t_spill->size;
  a_spill->stackBytes = -(ulong)t_spill->align & ((ulong)t_spill->align + a_spill->stackBytes) - 1;
  uVar4 = a_spill->stackBytes;
  lVar6 = (a_spill->steps).len;
  uVar1 = lVar6 + 1;
  prVar7 = (a_spill->steps).array;
  if ((ulong)(a_spill->steps).cap < uVar1) {
    old_00.len = (int)src;
    old_00.array = a_spill;
    old_00.cap = uVar1;
    runtime_growslice((runtime__type *)&DAT_0026e2a0,old_00,cap);
    (a_spill->steps).cap = local_98;
    if (runtime_writeBarrier._0_4_ == 0) {
      (a_spill->steps).array = local_a8;
      lVar6 = local_a0;
      prVar7 = local_a8;
    }
    else {
      runtime_gcWriteBarrier();
      lVar6 = local_a0;
      prVar7 = extraout_RAX_00;
    }
  }
  (a_spill->steps).len = lVar6 + 1;
  prVar7[lVar6].kind = 1;
  prVar7[lVar6].offset = 0;
  prVar7[lVar6].size = cap;
  prVar7[lVar6].stkOff = uVar4;
  prVar7[lVar6].ireg = 0;
  prVar7[lVar6].freg = 0;
  a_spill->stackBytes = a_spill->stackBytes + cap;
  uVar1 = (a_spill->steps).len;
  if (uVar1 <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  return (a_spill->steps).array + (uVar1 - 1);
}

