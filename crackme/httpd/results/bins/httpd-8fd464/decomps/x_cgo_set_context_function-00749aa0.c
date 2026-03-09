
void x_cgo_set_context_function(_func_void_context_arg_ptr *context)

{
  pthread_mutex_lock((pthread_mutex_t *)&runtime_init_mu);
  cgo_context_function = context;
  pthread_mutex_unlock((pthread_mutex_t *)&runtime_init_mu);
  return;
}

