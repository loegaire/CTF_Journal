
/* WARNING: Unknown calling convention */

void runtime_mpreinit(runtime_m *mp)

{
  runtime_m *extraout_RAX;
  runtime_m *extraout_RAX_00;
  long in_FS_OFFSET;
  runtime_m *mp_spill;
  runtime_g *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    mp = extraout_RAX_00;
  }
  runtime_malg((int32)mp);
  if (runtime_writeBarrier._0_4_ == 0) {
    mp_spill->gsignal = local_10;
  }
  else {
    runtime_gcWriteBarrierCX();
    mp_spill = extraout_RAX;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    local_10->m = mp_spill;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

