
/* WARNING: Unknown calling convention */

void runtime_sigaction(uint32 sig,runtime_sigactiont *new,runtime_sigactiont *old)

{
  ulong *puVar1;
  runtime_sigactiont *prVar2;
  long in_FS_OFFSET;
  uint32 sig_spill;
  runtime_sigactiont *new_spill;
  runtime_sigactiont *old_spill;
  int local_40;
  int local_34;
  code *local_30;
  uint32 *local_28;
  int *piStack_10;
  
  if ((_cgo_sigaction == (void *)0x0) || (runtime_inForkedChild)) {
    runtime_sysSigaction((uint32)old_spill,new,old);
  }
  else {
                    /* Unresolved local var: runtime.g * g@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: int32 ret@[???] */
    local_34 = 0;
    if (runtime_mainStarted) {
      puVar1 = *(ulong **)(in_FS_OFFSET + -8);
    }
    else {
      puVar1 = (ulong *)0x0;
    }
    prVar2 = old_spill;
    if (puVar1 == (ulong *)0x0) {
      runtime_callCgoSigaction();
      local_34 = local_40;
    }
    else if ((&sig_spill < (uint32 *)*puVar1) || ((uint32 *)puVar1[1] <= &sig_spill)) {
      runtime_callCgoSigaction();
      local_34 = local_40;
    }
    else {
      local_30 = runtime_sigaction_func1;
      local_28 = &sig_spill;
      piStack_10 = &local_34;
      runtime_systemstack();
    }
    if (local_34 == 0x16) {
      runtime_sysSigaction((uint32)old_spill,new,prVar2);
    }
  }
  return;
}

