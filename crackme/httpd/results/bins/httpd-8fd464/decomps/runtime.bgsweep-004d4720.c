
/* WARNING: Removing unreachable block (ram,0x004d47d1) */
/* WARNING: Removing unreachable block (ram,0x004d47ef) */
/* WARNING: Removing unreachable block (ram,0x004d4831) */
/* WARNING: Removing unreachable block (ram,0x004d47f9) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_bgsweep(void)

{
  runtime_g *prVar1;
  uintptr uVar2;
  void *unaff_RBX;
  int in_RSI;
  uint8 traceEv;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  undefined **local_28;
  
  while (traceEv = (uint8)in_RDI,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = *(runtime_g **)(in_FS_OFFSET + -8);
  if (runtime_writeBarrier._0_4_ != 0) {
    traceEv = 0x28;
    runtime_gcWriteBarrier();
    prVar1 = runtime_sweep.g;
  }
  runtime_sweep.g = prVar1;
  runtime_lock2(&runtime_sweep.lock);
  runtime_sweep.parked = true;
  runtime_chansend1((runtime_hchan *)FUN_002b2e00,unaff_RBX);
  local_28 = &PTR_runtime_parkunlock_c_002b39a0;
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                 unaff_RBX,0x20,traceEv,in_RSI);
  while (uVar2 = runtime_sweepone(), local_28 != (undefined **)0xffffffffffffffff) {
    runtime_sweep.nbgsweep = runtime_sweep.nbgsweep + 1;
    local_28 = &PTR_runtime_gosched_m_002b38b0;
    runtime_mcall();
  }
  do {
    runtime_freeSomeWbufs(SUB81(uVar2,0));
    uVar2 = runtime_mcall();
  } while( true );
}

