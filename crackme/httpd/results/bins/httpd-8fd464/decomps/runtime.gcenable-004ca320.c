
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcenable(void)

{
  runtime_funcval *unaff_RBX;
  long in_FS_OFFSET;
  chan_int local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makechan((runtime_chantype *)&DAT_00222be0,(int)unaff_RBX);
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_gcenable_setup = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newproc(0x2b3780,unaff_RBX);
  runtime_newproc(0x2b3778,unaff_RBX);
  runtime_chanrecv1((runtime_hchan *)runtime_gcenable_setup,unaff_RBX);
  runtime_chanrecv1((runtime_hchan *)runtime_gcenable_setup,unaff_RBX);
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_gcenable_setup = (chan_int)0x0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_memstats.enablegc = true;
  return;
}

