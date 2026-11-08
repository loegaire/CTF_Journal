
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceProcStart(void)

{
  undefined8 in_RCX;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_10 = *(undefined8 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xf0);
  args.len = in_RDI;
  args.array = (uint64 *)in_RCX;
  args.cap = in_RSI;
  runtime_traceEvent((uint8)&local_10,unaff_RBX,args);
  return;
}

