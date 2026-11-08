
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.traceFlush(runtime.traceBufPtr buf, int32 pid,
   runtime.traceBufPtr ~r2) */

runtime_traceBufPtr runtime_traceFlush(runtime_traceBufPtr buf,int32 pid)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 unaff_0000001c;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  string s;
  runtime_traceBufPtr buf_spill;
  int32 pid_spill;
  struct___runtime_lock_runtime_mutex__runtime_lockOwner__runtime_g__runtime_enabled_bool__runtime_shutdown_bool__runtime_headerWritten_bool__runtime_footerWritten_bool__runtime_shutdownSema_uint32__runtime_seqStart_uint64__runtime_ticksStart_int64__runtime_ticksEnd_int64__runtime_timeStart_int64__runtime_timeEnd_int64__runtime_seqGC_uint64__runtime_reading_runtime_traceBufPtr__runtime_empty_runtime_traceBufPtr__runtime_fullHead_runtime_traceBufPtr__runtime_fullTail_runtime_traceBufPtr__runtime_reader_runtime_guintptr__runtime_stackTab_runtime_traceStackTable__runtime_stringsLock_runtime_mutex__runtime_strings_map_string_uint64__runtime_stringSeq_uint64__runtime_markWorkerLabels__4_uint64__runtime_bufLock_runtime_mutex__runtime_buf_runtime_traceBufPtr__
  *local_38;
  undefined8 *local_28;
  
  s.len = (runtime_sysMemStat *)CONCAT44(unaff_0000001c,pid);
                    /* Unresolved local var: runtime.g * owner@[DW_OP_reg0(RAX)]
                       Unresolved local var: bool dolock@[???]
                       Unresolved local var: runtime.traceBuf * bufp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_trace.lockOwner == (runtime_g *)0x0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(runtime_g **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200) !=
            runtime_trace.lockOwner;
  }
  if (bVar4) {
    local_38 = &runtime_trace;
    runtime_lock2(&runtime_trace.lock);
  }
  if (buf_spill != 0) {
    *(undefined8 *)buf_spill = 0;
    if (runtime_trace.fullHead == 0) {
      runtime_trace.fullHead = buf_spill;
    }
    else {
      *(runtime_traceBufPtr *)runtime_trace.fullTail = buf_spill;
    }
    runtime_trace.fullTail = buf_spill;
  }
  if (runtime_trace.empty == 0) {
    local_38 = (struct___runtime_lock_runtime_mutex__runtime_lockOwner__runtime_g__runtime_enabled_bool__runtime_shutdown_bool__runtime_headerWritten_bool__runtime_footerWritten_bool__runtime_shutdownSema_uint32__runtime_seqStart_uint64__runtime_ticksStart_int64__runtime_ticksEnd_int64__runtime_timeStart_int64__runtime_timeEnd_int64__runtime_seqGC_uint64__runtime_reading_runtime_traceBufPtr__runtime_empty_runtime_traceBufPtr__runtime_fullHead_runtime_traceBufPtr__runtime_fullTail_runtime_traceBufPtr__runtime_reader_runtime_guintptr__runtime_stackTab_runtime_traceStackTable__runtime_stringsLock_runtime_mutex__runtime_strings_map_string_uint64__runtime_stringSeq_uint64__runtime_markWorkerLabels__4_uint64__runtime_bufLock_runtime_mutex__runtime_buf_runtime_traceBufPtr__
                *)0x10000;
    runtime_sysAlloc(0xd025c0,s.len);
    if (local_28 == (undefined8 *)0x0) {
      s.str = &DAT_0029c1c6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
  else {
    local_28 = (undefined8 *)runtime_trace.empty;
    runtime_trace.empty = *(runtime_traceBufPtr *)runtime_trace.empty;
  }
  *local_28 = 0;
  local_28[2] = 0;
  runtime_cputicks();
  uVar1 = (ulong)local_38 >> 6;
  local_28[1] = uVar1;
  if (0xfbe7 < (ulong)local_28[2]) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  *(undefined1 *)((long)local_28 + local_28[2] + 0x418) = 0x41;
  uVar2 = local_28[2] + 1;
  local_28[2] = uVar2;
  uVar3 = (ulong)pid_spill;
                    /* Unresolved local var: int pos@[???] */
  while( true ) {
    if (uVar3 < 0x80) {
      if (0xfbe7 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      *(byte *)((long)local_28 + uVar2 + 0x418) = (byte)uVar3;
      uVar2 = uVar2 + 1;
      local_28[2] = uVar2;
                    /* Unresolved local var: int pos@[???] */
      while( true ) {
        if (uVar1 < 0x80) {
          if (0xfbe7 < uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          *(byte *)((long)local_28 + uVar2 + 0x418) = (byte)uVar1;
          local_28[2] = uVar2 + 1;
          if (bVar4) {
            runtime_unlock2(&runtime_trace.lock);
          }
          return (runtime_traceBufPtr)local_28;
        }
        if (0xfbe7 < uVar2) break;
        *(byte *)((long)local_28 + uVar2 + 0x418) = (byte)uVar1 | 0x80;
        uVar1 = uVar1 >> 7;
        uVar2 = uVar2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (0xfbe7 < uVar2) break;
    *(byte *)((long)local_28 + uVar2 + 0x418) = (byte)uVar3 | 0x80;
    uVar3 = uVar3 >> 7;
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

