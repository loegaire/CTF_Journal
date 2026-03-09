
void _cgo_sys_thread_start(ThreadStart *ts)

{
  int __errnum;
  char *pcVar1;
  sigset_t oset;
  pthread_t local_40;
  sigset_t ign;
  size_t local_28;
  
                    /* Unresolved local var: pthread_attr_t attr@[???]
                       Unresolved local var: size_t size@[???]
                       Unresolved local var: pthread_t p@[???]
                       Unresolved local var: int err@[???] */
                    /* Unresolved local var: int __i@[???] */
  ign.__bits[0] = 0xffffffff;
  ign.__bits[1] = 0xffffffff;
  ign.__bits[2] = 0xffffffff;
  ign.__bits[3] = 0xffffffff;
  pthread_sigmask(3,(__sigset_t *)&ign,(__sigset_t *)&oset);
  pthread_attr_init((pthread_attr_t *)&stack0xffffffffffffffb8);
  pthread_attr_getstacksize((pthread_attr_t *)&stack0xffffffffffffffb8,&local_28);
  ts->g->stackhi = local_28;
  __errnum = _cgo_try_pthread_create
                       (&local_40,
                        (pthread_attr_t *)&((pthread_attr_t *)&stack0xffffffffffffffb8)->__align,
                        threadentry,ts);
  pthread_sigmask(3,(__sigset_t *)&oset,(__sigset_t *)0x0);
  if (__errnum != 0) {
    pcVar1 = strerror(__errnum);
    fatalf("pthread_create failed: %s",pcVar1);
  }
  return;
}

