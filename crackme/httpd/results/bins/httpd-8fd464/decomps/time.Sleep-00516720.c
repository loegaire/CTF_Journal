
/* WARNING: Unknown calling convention */

void time_Sleep(int64 ns)

{
  long extraout_RAX;
  long lVar1;
  long extraout_RDX;
  long lVar2;
  int in_RSI;
  uint8 traceEv;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  int64 ns_spill;
  undefined *local_38;
  long local_30;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.timer * t@[???] */
  while (traceEv = (uint8)in_RDI,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (ns_spill < 1) {
    return;
  }
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  lVar2 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x170) == 0) {
    local_38 = &DAT_00273660;
    runtime_newobject((runtime__type *)&DAT_00273660);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(long *)(lVar1 + 0x170) = local_30;
      lVar2 = local_30;
    }
    else {
      traceEv = (char)lVar1 + 0x70;
      runtime_gcWriteBarrierCX();
      lVar1 = extraout_RAX;
      lVar2 = local_30;
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined ***)(lVar2 + 0x18) = &PTR_runtime_goroutineReady_002b38a8;
  }
  else {
    traceEv = (char)lVar2 + 0x18;
    runtime_gcWriteBarrierBX();
    lVar2 = extraout_RDX;
  }
  *(undefined **)(lVar2 + 0x20) = &DAT_0021e160;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(long *)(lVar2 + 0x28) = lVar1;
  }
  else {
    traceEv = (runtime_waitReason)lVar2 + 0x28;
    runtime_gcWriteBarrierCX();
  }
  runtime_nanotime1();
  *(undefined **)(lVar2 + 0x38) = local_38 + ns_spill;
  if ((long)(local_38 + ns_spill) < 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0x7fffffffffffffff;
  }
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_resetForSleep_002b39d8,
                 &DAT_0021e160,(runtime_waitReason)lVar2,traceEv,in_RSI);
  return;
}

