
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.allocm(runtime.p * _p_, func() * * fn, int64 id, runtime.m
   * ~r3) */

runtime_m * runtime_allocm(runtime_p *_p_,func__ **fn,int64 id)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  runtime_m *prVar4;
  int32 stacksize;
  runtime_m *extraout_RAX;
  runtime_m *prVar5;
  runtime_m *extraout_RDX;
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  func__ **fn_spill;
  int64 id_spill;
  runtime_m *local_40;
  runtime_m *local_28;
  long local_20;
  code *local_18;
  runtime_m **pprStack_10;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.m * mp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_20 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(local_20 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  if (*(long *)(*(long *)(local_20 + 0x30) + 0xd8) == 0) {
    runtime_acquirep(_p__spill);
  }
  if (runtime_sched.freem != (runtime_m *)0x0) {
    runtime_lock2(&runtime_sched.lock);
                    /* Unresolved local var: runtime.m * freem@[???] */
    local_28 = runtime_sched.freem;
    prVar5 = (runtime_m *)0x0;
    while (local_28 != (runtime_m *)0x0) {
      if (local_28->freeWait == 0) {
        local_18 = runtime_allocm_func1;
        pprStack_10 = &local_28;
        runtime_systemstack();
        local_28 = local_28->freelink;
      }
      else {
                    /* Unresolved local var: runtime.m * next@[???] */
        prVar4 = local_28->freelink;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_28->freelink = prVar5;
          prVar5 = local_28;
          local_28 = prVar4;
        }
        else {
          runtime_gcWriteBarrier();
          prVar5 = local_28;
          local_28 = extraout_RDX;
        }
      }
    }
    if (runtime_writeBarrier._0_4_ != 0) {
      runtime_gcWriteBarrier();
      prVar5 = runtime_sched.freem;
    }
    runtime_sched.freem = prVar5;
    runtime_unlock2(&runtime_sched.lock);
  }
  runtime_newobject((runtime__type *)&DAT_002870e0);
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->mstartfn = fn_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_40 = extraout_RAX;
  }
  runtime_mcommoninit(local_40,(int64)fn);
  if (runtime_iscgo == false) {
    runtime_malg(stacksize);
    if (runtime_writeBarrier._0_4_ == 0) {
      local_40->g0 = (runtime_g *)id_spill;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  else {
    runtime_malg(stacksize);
    if (runtime_writeBarrier._0_4_ == 0) {
      local_40->g0 = (runtime_g *)id_spill;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->g0->m = local_40;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  if (_p__spill == *(runtime_p **)(*(long *)(local_20 + 0x30) + 0xd8)) {
    runtime_releasep();
  }
  prVar5 = *(runtime_m **)(local_20 + 0x30);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = prVar5->locks;
  prVar5->locks = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
  }
  return prVar5;
}

