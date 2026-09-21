
/* WARNING: Unknown calling convention */

void runtime_args(int32 c,uint8 **v)

{
  int32 extraout_EAX;
  long in_FS_OFFSET;
  int32 c_spill;
  uint8 **v_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_argc = c_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_argv = v_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    c_spill = extraout_EAX;
  }
  runtime_sysargs(c_spill,v);
  return;
}

