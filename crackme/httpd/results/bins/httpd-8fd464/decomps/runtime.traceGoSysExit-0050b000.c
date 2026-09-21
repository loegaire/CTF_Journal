
/* WARNING: Unknown calling convention */

void runtime_traceGoSysExit(int64 ts)

{
  long lVar1;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  int64 ts_spill;
  undefined8 local_20;
  undefined8 local_18;
  ulong uStack_10;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ts_spill != 0) && (ts_spill < runtime_trace.ticksStart)) {
    ts_spill = 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  *(long *)(lVar1 + 0xd8) = *(long *)(lVar1 + 0xd8) + 1;
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xd8);
  local_20 = *(undefined8 *)(lVar1 + 0x98);
  local_18 = *(undefined8 *)(lVar1 + 0xd8);
  uStack_10 = (ulong)ts_spill >> 6;
  args.len = in_RDI;
  args.array = (uint64 *)local_18;
  args.cap = in_RSI;
  runtime_traceEvent((uint8)&local_20,unaff_RBX,args);
  return;
}

