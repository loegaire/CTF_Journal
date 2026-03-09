
/* WARNING: Unknown calling convention */

void runtime_traceGoUnpark(runtime_g *gp,int skip)

{
  runtime_puintptr rVar1;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  __uint64 args_00;
  runtime_g *gp_spill;
  int skip_spill;
  int64 local_20;
  int64 local_18;
  uint64 uStack_10;
  
                    /* Unresolved local var: runtime.puintptr _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1 = *(runtime_puintptr *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  gp_spill->traceseq = gp_spill->traceseq + 1;
  if (gp_spill->tracelastp == rVar1) {
    local_20 = gp_spill->goid;
    args.len = in_RDI;
    args.array = (uint64 *)gp_spill;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)&local_20,skip,args);
  }
  else {
    gp_spill->tracelastp = rVar1;
    local_18 = gp_spill->goid;
    uStack_10 = gp_spill->traceseq;
    args_00.len = in_RDI;
    args_00.array = (uint64 *)skip_spill;
    args_00.cap = in_RSI;
    runtime_traceEvent((uint8)&local_18,skip,args_00);
  }
  return;
}

