
undefined8 FUN_1400016c0(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}

