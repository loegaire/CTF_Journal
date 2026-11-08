
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exitsyscallfast_func1(void)

{
  long ts;
  long lVar1;
  char *pcVar2;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  char local_28;
  
                    /* Unresolved local var: bool * &ok@[???]
                       Unresolved local var: runtime.p * oldp@[???]
                       Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  ts = *(long *)(in_RDX + 0x10);
  lVar1 = *(long *)(in_RDX + 0x18);
  pcVar2 = *(char **)(in_RDX + 8);
  runtime_exitsyscallfast_pidle();
  *pcVar2 = local_28;
  if ((local_28 != '\0') && (runtime_trace.enabled != false)) {
    if (ts != 0) {
      while (*(int *)(*(long *)(lVar1 + 0x30) + 0x2ac) == *(int *)(ts + 0x14)) {
        runtime_osyield();
      }
    }
    runtime_traceGoSysExit(ts);
  }
  return;
}

