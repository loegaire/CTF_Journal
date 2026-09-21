
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

_func_void_context_arg_ptr * _cgo_get_context_function(void)

{
  _func_void_context_arg_ptr *p_Var1;
  
                    /* Unresolved local var: _func_void_context_arg_ptr * ret@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&runtime_init_mu);
  p_Var1 = cgo_context_function;
  pthread_mutex_unlock((pthread_mutex_t *)&runtime_init_mu);
  return p_Var1;
}

