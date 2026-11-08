
void x_cgo_notify_runtime_init_done(void *dummy)

{
  pthread_mutex_lock((pthread_mutex_t *)&runtime_init_mu);
  runtime_init_done = 1;
  pthread_cond_broadcast((pthread_cond_t *)&runtime_init_cond);
  pthread_mutex_unlock((pthread_mutex_t *)&runtime_init_mu);
  return;
}

