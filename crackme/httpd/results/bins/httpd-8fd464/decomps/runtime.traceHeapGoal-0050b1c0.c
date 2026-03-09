
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceHeapGoal(void)

{
  undefined8 in_RCX;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  __uint64 args_00;
  uint64 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uint64 heapGoal@[???] */
  if (runtime_gcController.heapGoal == 0xffffffffffffffff) {
    local_10 = 0;
    args.len = in_RDI;
    args.array = (uint64 *)in_RCX;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)&local_10,unaff_RBX,args);
  }
  else {
    local_10 = runtime_gcController.heapGoal;
    args_00.len = in_RDI;
    args_00.array = (uint64 *)in_RCX;
    args_00.cap = in_RSI;
    runtime_traceEvent((uint8)&local_10,unaff_RBX,args_00);
  }
  return;
}

