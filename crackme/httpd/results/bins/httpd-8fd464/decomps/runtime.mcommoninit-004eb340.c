
/* WARNING: Unknown calling convention */

void runtime_mcommoninit(runtime_m *mp,int64 id)

{
  runtime_g *prVar1;
  uint32 uVar2;
  runtime_m *extraout_RAX;
  runtime_m *ptr;
  runtime_m *prVar3;
  int in_RDI;
  long in_FS_OFFSET;
  __uintptr pcbuf;
  runtime_m *mp_spill;
  int64 id_spill;
  runtime_m *local_38;
  runtime_m *local_30;
  int64 local_18;
  int64 *local_10;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (**(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30) != *(long *)(in_FS_OFFSET + -8)) {
    local_30 = (runtime_m *)&DAT_00000020;
    pcbuf.len = (int)mp_spill->createstack;
    pcbuf.array = (uintptr *)id;
    pcbuf.cap = in_RDI;
    runtime_callers((int)mp_spill,pcbuf);
  }
  runtime_lock2(&runtime_sched.lock);
  if (id_spill < 0) {
    runtime_mReserveID();
    mp_spill->id = 0x7a13b8;
  }
  else {
    mp_spill->id = id_spill;
  }
  local_18 = mp_spill->id;
  runtime_memhash64();
  uVar2 = (uint32)local_30;
  mp_spill->fastrand[0] = uVar2;
  runtime_cputicks();
  local_38 = (runtime_m *)~runtime_fastrandseed;
  local_10 = &local_18;
  runtime_memhash64();
  mp_spill->fastrand[1] = uVar2;
  if (mp_spill->fastrand[0] == 0 && uVar2 == 0) {
    mp_spill->fastrand[1] = 1;
  }
  runtime_mpreinit(local_30);
  prVar1 = mp_spill->gsignal;
  if (prVar1 != (runtime_g *)0x0) {
    prVar1->stackguard1 = (prVar1->stack).lo + 0x3a0;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    mp_spill->alllink = runtime_allm;
    ptr = mp_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    ptr = extraout_RAX;
  }
  prVar3 = ptr;
  if (runtime_writeBarrier.enabled != false) {
    runtime_atomicwb(&ptr->g0,(void *)id);
    prVar3 = mp_spill;
    local_38 = ptr;
  }
  LOCK();
  UNLOCK();
  runtime_allm = prVar3;
  runtime_unlock2(&runtime_sched.lock);
  if (runtime_iscgo != false) {
    runtime_newobject((runtime__type *)&DAT_00236c80);
    if (runtime_writeBarrier._0_4_ == 0) {
      mp_spill->cgoCallers = (runtime_cgoCallers *)local_38;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}

