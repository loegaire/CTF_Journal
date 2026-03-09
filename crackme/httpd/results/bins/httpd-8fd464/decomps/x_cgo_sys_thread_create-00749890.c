
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void x_cgo_sys_thread_create(_func_void_ptr_void_ptr *func,void *arg)

{
  FILE *__stream;
  int __errnum;
  char *pcVar1;
  long lVar2;
  timespec ts;
  pthread_t local_38;
  
                    /* Unresolved local var: pthread_t p@[???]
                       Unresolved local var: int err@[???] */
  lVar2 = 1000000;
  do {
                    /* Unresolved local var: int tries@[???]
                       Unresolved local var: int err@[???] */
    __errnum = pthread_create(&local_38,(pthread_attr_t *)0x0,(__start_routine *)func,arg);
    if (__errnum != 0x23) {
      if (__errnum == 0) {
        pthread_detach(local_38);
        return;
      }
      break;
    }
    ts.tv_sec = 0;
    ts.tv_nsec = lVar2;
    nanosleep((timespec *)&ts,(timespec *)0x0);
    lVar2 = lVar2 + 1000000;
  } while (lVar2 != 21000000);
  __stream = ___stderrp;
  pcVar1 = strerror(__errnum);
  fprintf(__stream,"pthread_create failed: %s",pcVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

