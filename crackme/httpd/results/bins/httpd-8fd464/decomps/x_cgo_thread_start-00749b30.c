
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void x_cgo_thread_start(ThreadStart *arg)

{
  uintptr *puVar1;
  ThreadStart *ts;
  
                    /* Unresolved local var: ThreadStart * ts@[???] */
  ts = malloc(0x18);
  if (ts != (ThreadStart *)0x0) {
    ts->fn = arg->fn;
    puVar1 = arg->tls;
    ts->g = arg->g;
    ts->tls = puVar1;
    _cgo_sys_thread_start(ts);
    return;
  }
  fwrite("runtime/cgo: out of memory in thread_start\n",0x2b,1,___stderrp);
                    /* WARNING: Subroutine does not return */
  abort();
}

