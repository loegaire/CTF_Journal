
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exitsyscallfast_reacquired_func1(void)

{
  int64 ts;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_traceGoSysBlock(*(runtime_p **)(*(long *)(*(long *)(in_RDX + 8) + 0x30) + 0xd8));
  runtime_traceGoSysExit(ts);
  return;
}

