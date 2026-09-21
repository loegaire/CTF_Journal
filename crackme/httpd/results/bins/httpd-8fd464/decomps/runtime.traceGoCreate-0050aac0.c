
/* WARNING: Unknown calling convention */

void runtime_traceGoCreate(runtime_g *newg,uintptr pc)

{
  int in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  __uintptr pcs;
  __uint64 args;
  runtime_g *newg_spill;
  uintptr pc_spill;
  runtime_traceStackTable *local_38;
  uint local_20;
  int64 local_18;
  ulong uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  newg_spill->traceseq = 0;
  newg_spill->tracelastp =
       *(runtime_puintptr *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  runtime_newobject((runtime__type *)newg_spill);
  (local_38->lock).key = pc_spill + 1;
  pcs.len = 0x7bf250;
  pcs.array = (uintptr *)pc;
  pcs.cap = in_RDI;
  runtime___traceStackTable__put(local_38,pcs);
  uStack_10 = (ulong)local_20;
  local_18 = newg_spill->goid;
  args.len = in_RDI;
  args.array = (uint64 *)&local_18;
  args.cap = in_RSI;
  runtime_traceEvent((uint8)local_20,pc,args);
  return;
}

