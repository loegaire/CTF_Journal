
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceGoStart(void)

{
  long lVar1;
  long skip;
  undefined8 in_RCX;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  __uint64 args_00;
  __uint64 args_01;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  undefined8 local_18;
  uint64 uStack_10;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.puintptr _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  skip = *(long *)(*(long *)(lVar1 + 0x30) + 0xd8);
  *(long *)(lVar1 + 0xd8) = *(long *)(lVar1 + 0xd8) + 1;
  if (*(long *)(skip + 0x1688) == 0) {
    if (*(long *)(lVar1 + 0xe0) == skip) {
      local_38 = *(undefined8 *)(lVar1 + 0x98);
      args_00.len = in_RDI;
      args_00.array = (uint64 *)in_RCX;
      args_00.cap = skip;
      runtime_traceEvent((uint8)&local_38,skip,args_00);
    }
    else {
      *(long *)(lVar1 + 0xe0) = skip;
      local_30 = *(undefined8 *)(lVar1 + 0x98);
      uStack_28 = *(undefined8 *)(lVar1 + 0xd8);
      args_01.len = in_RDI;
      args_01.array = (uint64 *)uStack_28;
      args_01.cap = skip;
      runtime_traceEvent((uint8)&local_30,skip,args_01);
    }
  }
  else {
    uStack_10 = 0;
    local_20 = *(int *)(lVar1 + 0x98);
    local_18 = *(undefined8 *)(lVar1 + 0xd8);
    if (3 < *(ulong *)(skip + 0x1688)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uStack_10 = runtime_trace.markWorkerLabels[*(ulong *)(skip + 0x1688)];
    args.len = in_RDI;
    args.array = (uint64 *)0x7cf288;
    args.cap = local_20;
    runtime_traceEvent((uint8)&local_20,skip,args);
  }
  return;
}

