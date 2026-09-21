
/* WARNING: Unknown calling convention */

void runtime_traceGoPark(uint8 traceEv,int skip)

{
  undefined8 in_RCX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  __uint64 args_00;
  uint8 traceEv_spill;
  int skip_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((traceEv_spill & 0x80) != 0) {
    args.len = in_RDI;
    args.array = (uint64 *)in_RCX;
    args.cap = in_RSI;
    runtime_traceEvent(traceEv_spill,skip,args);
  }
  args_00.len = in_RDI;
  args_00.array = (uint64 *)in_RCX;
  args_00.cap = in_RSI;
  runtime_traceEvent((uint8)skip_spill,skip,args_00);
  return;
}

