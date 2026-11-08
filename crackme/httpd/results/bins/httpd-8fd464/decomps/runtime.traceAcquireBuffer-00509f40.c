
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.traceAcquireBuffer(runtime.m * mp, int32 pid,
   runtime.traceBufPtr * bufp) */

multireturn_runtime_m___int32_runtime_traceBufPtr___ runtime_traceAcquireBuffer(void)

{
  int *piVar1;
  long lVar2;
  runtime_traceBufPtr *prVar3;
  undefined4 unaff_EBX;
  long in_FS_OFFSET;
  multireturn_runtime_m___int32_runtime_traceBufPtr___ mVar4;
  multireturn_runtime_m___int32_runtime_traceBufPtr___ mVar5;
  
                    /* Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar2 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  prVar3 = *(runtime_traceBufPtr **)(lVar2 + 0x30);
                    /* Unresolved local var: runtime.p * p@[???] */
  if (prVar3[0x1b] != 0) {
    mVar4.mp = prVar3[0x1b] + 0x1630;
    mVar4.pid = unaff_EBX;
    mVar4.bufp = prVar3;
    return mVar4;
  }
  runtime_lock2(&runtime_trace.bufLock);
  mVar5.pid = unaff_EBX;
  mVar5.mp = (runtime_m *)0x7cf2b0;
  mVar5.bufp = prVar3;
  return mVar5;
}

