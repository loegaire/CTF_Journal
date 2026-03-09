
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.exitsyscallfast(runtime.p * oldp, bool ~r1) */

bool runtime_exitsyscallfast(runtime_p *oldp)

{
  uint uVar1;
  undefined1 extraout_AL;
  undefined1 uVar2;
  long in_FS_OFFSET;
  runtime_p *oldp_spill;
  char local_29;
  code *local_28;
  char *pcStack_20;
  undefined8 uStack_10;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg2(RCX)] */
  uStack_10 = *(undefined8 *)(in_FS_OFFSET + -8);
  if (runtime_sched.stopwait == 0x7fffffff) {
    return SUB81(oldp,0);
  }
  if ((oldp_spill != (runtime_p *)0x0) && (oldp_spill->status == 2)) {
    oldp = (runtime_p *)0x2;
    LOCK();
    uVar1 = oldp_spill->status;
    if (uVar1 == 2) {
      oldp_spill->status = 0;
    }
    else {
      oldp = (runtime_p *)(ulong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 2) {
      runtime_wirep(oldp);
      runtime_exitsyscallfast_reacquired();
      return (bool)extraout_AL;
    }
  }
  uVar2 = SUB81(oldp,0);
  if (runtime_sched.pidle != 0) {
                    /* Unresolved local var: bool ok@[???] */
    local_29 = '\0';
    local_28 = runtime_exitsyscallfast_func1;
    pcStack_20 = &local_29;
    uVar2 = runtime_systemstack();
    if (local_29 != '\0') {
      return (bool)uVar2;
    }
  }
  return (bool)uVar2;
}

