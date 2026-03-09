
/* WARNING: Unknown calling convention */

void runtime_traceReleaseBuffer(int32 pid)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int32 pid_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (pid_spill == -1) {
    runtime_unlock2(&runtime_trace.bufLock);
  }
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  iVar1 = *(int *)(*(long *)(lVar2 + 0x30) + 0x110);
  *(int *)(*(long *)(lVar2 + 0x30) + 0x110) = iVar1 + -1;
  if ((iVar1 == 1) && (*(char *)(lVar2 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

