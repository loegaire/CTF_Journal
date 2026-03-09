
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uintptr_t _cgo_wait_runtime_init_done(void)

{
  _func_void_context_arg_ptr *p_Var1;
  context_arg arg;
  
                    /* Unresolved local var: _func_void_context_arg_ptr * pfn@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&runtime_init_mu);
  if (runtime_init_done == '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)&runtime_init_cond,(pthread_mutex_t *)&runtime_init_mu);
    } while (runtime_init_done != '\x01');
  }
  p_Var1 = cgo_context_function;
  pthread_mutex_unlock((pthread_mutex_t *)&runtime_init_mu);
  if (p_Var1 == (_func_void_context_arg_ptr *)0x0) {
    arg.Context = 0;
  }
  else {
    arg.Context = 0;
    (*p_Var1)(&arg);
  }
  return arg.Context;
}

