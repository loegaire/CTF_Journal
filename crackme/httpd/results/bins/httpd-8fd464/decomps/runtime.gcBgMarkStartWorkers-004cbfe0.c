
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcBgMarkStartWorkers(void)

{
  runtime_funcval *unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (; runtime_gcBgMarkWorkerCount < runtime_gomaxprocs;
      runtime_gcBgMarkWorkerCount = runtime_gcBgMarkWorkerCount + 1) {
    runtime_newproc(0x2b3840,unaff_RBX);
    runtime_notetsleepg(&runtime_work.bgMarkReady,(int64)unaff_RBX);
    runtime_work.bgMarkReady.key = 0;
  }
  return;
}

