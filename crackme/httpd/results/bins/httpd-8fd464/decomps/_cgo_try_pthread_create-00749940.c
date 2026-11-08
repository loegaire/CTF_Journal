
int _cgo_try_pthread_create
              (pthread_t *thread,pthread_attr_t *attr,_func_void_ptr_void_ptr *pfn,void *arg)

{
  int iVar1;
  long lVar2;
  timespec ts;
  
                    /* Unresolved local var: int tries@[???]
                       Unresolved local var: int err@[???] */
  lVar2 = 1000000;
  do {
    iVar1 = pthread_create((pthread_t *)thread,(pthread_attr_t *)attr,(__start_routine *)pfn,arg);
    if (iVar1 != 0x23) {
      if (iVar1 != 0) {
        return iVar1;
      }
      pthread_detach((pthread_t)*thread);
      return 0;
    }
    ts.tv_sec = 0;
    ts.tv_nsec = lVar2;
    nanosleep((timespec *)&ts,(timespec *)0x0);
    lVar2 = lVar2 + 1000000;
  } while (lVar2 != 21000000);
  return 0x23;
}

