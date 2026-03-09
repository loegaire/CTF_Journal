
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscallblock_handoff(void)

{
  undefined8 in_RAX;
  runtime_p *_p_;
  undefined8 extraout_RAX;
  undefined8 in_RCX;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  if (runtime_trace.enabled != false) {
    args.len = in_RDI;
    args.array = (uint64 *)in_RCX;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)in_RAX,unaff_RBX,args);
    runtime_traceGoSysBlock(*(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8));
  }
  _p_ = runtime_releasep();
  runtime_handoffp(_p_);
  return;
}

