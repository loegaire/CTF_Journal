
/* WARNING: Unknown calling convention */

void runtime_traceEvent(uint8 ev,int skip,__uint64 args)

{
  long lVar1;
  runtime_m *bufp;
  int in_R8;
  undefined8 in_R9;
  undefined8 in_R10;
  int in_R11;
  long in_FS_OFFSET;
  __uint64 args_00;
  uint8 ev_spill;
  int skip_spill;
  __uint64 args_spill;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar1 = args.cap;
  bufp = (runtime_m *)args.len;
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: int32 pid@[???]
                       Unresolved local var: runtime.traceBufPtr * bufp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_traceAcquireBuffer();
  if ((runtime_trace.enabled == false) && (*(char *)(local_58 + 0x2a8) == '\0')) {
    runtime_traceReleaseBuffer((int32)local_58);
    return;
  }
  if (0 < skip_spill) {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    bufp = (runtime_m *)(skip_spill + 1);
    if (*(long *)(local_58 + 200) == lVar1) {
      skip_spill = (int)bufp;
    }
  }
  args_00.len = in_R10;
  args_00.array = (uint64 *)in_R9;
  args_00.cap = in_R11;
  runtime_traceEventLocked
            (args_spill.cap,(runtime_m *)skip_spill,local_50,(runtime_traceBufPtr *)bufp,
             (uint8)lVar1,in_R8,args_00);
  runtime_traceReleaseBuffer(local_50);
  return;
}

